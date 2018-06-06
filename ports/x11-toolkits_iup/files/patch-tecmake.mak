--- tecmake.mak.orig	2018-05-11 21:22:23 UTC
+++ tecmake.mak
@@ -256,7 +256,7 @@ endif
 STDFLAGS := -Wall
 STDDEFS  := -DTEC_UNAME=$(TEC_UNAME) -DTEC_SYSNAME=$(TEC_SYSNAME) -D$(TEC_SYSNAME)=$(TEC_SYSRELEASE) -D$(TEC_BYTEORDER) -D$(TEC_WORDSIZE) -DFUNCPROTO=15
 STDINCS  :=
-OPTFLAGS := -O2
+OPTFLAGS :=
 STDLFLAGS  := r
 DEBUGFLAGS := -g
 STDLDFLAGS := -shared
@@ -318,13 +318,13 @@ endif
 #---------------------------------#
 # Tools
 
-CC       := $(TEC_TOOLCHAIN)gcc
-CPPC     := $(TEC_TOOLCHAIN)g++
-FF       := $(TEC_TOOLCHAIN)g77
-RANLIB   := $(TEC_TOOLCHAIN)ranlib
-AR       := $(TEC_TOOLCHAIN)ar
-DEBUGGER := $(TEC_TOOLCHAIN)gdb
-RCC      := $(TEC_TOOLCHAIN)windres
+CC       := $(CC)
+CPPC     := $(CXX)
+FF       := $(FC)
+RANLIB   := $(RANLIB)
+AR       := $(AR)
+DEBUGGER := false
+RCC      := false
 
 # Remote build script
 REMOTE  = $(TECMAKE_HOME)/remote
@@ -779,11 +779,7 @@ endif
 
 ifneq ($(findstring FreeBSD, $(TEC_UNAME)), )
   BSD = Yes
-  X11_LIB := /usr/X11R6/lib
-  X11_INC := /usr/X11R6/include
-  ifeq ($(TEC_SYSARCH), x64)
-    STDFLAGS += -fPIC
-  endif
+  STDFLAGS += -fPIC
 endif
 
 #---------------------------------#
@@ -1374,9 +1370,11 @@ ifdef USE_GTK
     STDINCS += $(GTK)/include/cairo $(GTK)/include/pango-1.0 $(GTK)/include/glib-2.0
 
     ifeq ($(TEC_SYSARCH), x64)
-      STDINCS += $(GTK)/lib64/glib-2.0/include 
-      ifndef USE_GTK3
-        STDINCS += $(GTK)/lib64/gtk-2.0/include
+      ifeq ($(TEC_SYSNAME), Linux)
+        STDINCS += $(GTK)/lib64/glib-2.0/include 
+        ifndef USE_GTK3
+          STDINCS += $(GTK)/lib64/gtk-2.0/include
+        endif
       endif
       
       # Add also these to avoid errors in systems that lib64 does not exists
@@ -1385,11 +1383,13 @@ ifdef USE_GTK
         STDINCS += $(GTK)/lib/gtk-2.0/include
       endif
       
-      # Add also support for newer instalations
-      STDINCS += $(GTK)/lib/x86_64-linux-gnu/glib-2.0/include
-      STDINCS += $(GTK)/lib/arm-linux-gnueabihf/glib-2.0/include
-      ifndef USE_GTK3
-        STDINCS += $(GTK)/lib/x86_64-linux-gnu/gtk-2.0/include
+      ifeq ($(TEC_SYSNAME), Linux)
+        # Add also support for newer instalations
+        STDINCS += $(GTK)/lib/x86_64-linux-gnu/glib-2.0/include
+        STDINCS += $(GTK)/lib/arm-linux-gnueabihf/glib-2.0/include
+        ifndef USE_GTK3
+          STDINCS += $(GTK)/lib/x86_64-linux-gnu/gtk-2.0/include
+        endif
       endif
     else 
       ifeq ($(TEC_SYSARCH), ia64)
@@ -1414,7 +1414,6 @@ ifdef USE_GTK
     endif
     
     ifneq ($(findstring FreeBSD, $(TEC_UNAME)), )
-      STDINCS += /lib/X11R6/include/gtk-2.0
     endif
   endif
 endif
@@ -1767,9 +1766,8 @@ $(DEPEND): $(MAKENAME)
 	  fi
   endif
 
-ifdef USE_NODEPEND
+# Depend mechanism is broken without GCC
   NO_DEPEND:=Yes
-endif
 
 ###################
 ifndef NO_DEPEND
