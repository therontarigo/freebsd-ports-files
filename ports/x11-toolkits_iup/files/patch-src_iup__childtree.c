--- src/iup_childtree.c.orig	2017-12-11 16:52:44 UTC
+++ src/iup_childtree.c
@@ -25,7 +25,7 @@ Ihandle* IupGetDialog(Ihandle* ih)
   if (!iupObjectCheck(ih))
     return NULL;
 
-  for (ih = ih; ih->parent; ih = ih->parent)
+  for (; ih->parent; ih = ih->parent)
     ; /* empty*/
 
   if (ih->iclass->nativetype == IUP_TYPEDIALOG)
