--- src/iup_strmessage.c.orig	2017-12-11 16:52:44 UTC
+++ src/iup_strmessage.c
@@ -111,44 +111,44 @@ typedef struct _IstdMessage
 static IstdMessage iStdMessages[] =
 {
   {"IUP_ERROR", {"Error!", "Erro!", NULL, "Error!", NULL, NULL}},
-  {"IUP_ATTENTION", {"Attention!", "Aten��o!", "Atenção!", "�Advertencia!", "¡Advertencia!", NULL}},
+  {"IUP_ATTENTION", {"Attention!", "Aten\xe7""\xe3""o!", "Aten\xc3""\xa7""\xc3""\xa3""o!", "\xa1""Advertencia!", "\xc2""\xa1""Advertencia!", NULL}},
   {"IUP_YES", {"Yes", "Sim", NULL, "Si", NULL, NULL}},
-  {"IUP_NO", {"No", "N�o", "Não", "No", NULL, NULL}},
-  {"IUP_INVALIDDIR", {"Invalid directory.", "Diret�rio inv�lido.", "Diretório inválido.", "Directorio inv�lido.", "Directorio inválido.", NULL}},
-  {"IUP_FILEISDIR", {"The selected name is a directory.", "O nome selecionado � um diret�rio.", "O nome selecionado é um diretório.", "El nombre seleccionado es un directorio.", NULL, NULL}},
+  {"IUP_NO", {"No", "N\xe3""o", "N\xc3""\xa3""o", "No", NULL, NULL}},
+  {"IUP_INVALIDDIR", {"Invalid directory.", "Diret\xf3""rio inv\xe1""lido.", "Diret\xc3""\xb3""rio inv\xc3""\xa1""lido.", "Directorio inv\xe1""lido.", "Directorio inv\xc3""\xa1""lido.", NULL}},
+  {"IUP_FILEISDIR", {"The selected name is a directory.", "O nome selecionado \xe9"" um diret\xf3""rio.", "O nome selecionado \xc3""\xa9"" um diret\xc3""\xb3""rio.", "El nombre seleccionado es un directorio.", NULL, NULL}},
   {"IUP_FILENOTEXIST", {"File does not exist.", "Arquivo inexistente.", NULL, "Archivo inexistente.", NULL, NULL}},
-  {"IUP_FILEOVERWRITE", {"Overwrite existing file?", "Sobrescrever arquivo?", NULL, "�Sobrescribir archivo?", "¿Sobrescribir archivo?", NULL}},
-  {"IUP_CREATEFOLDER", {"Create Folder", "Criar Diret�rio", "Criar Diretório", "Crear Directorio", NULL, NULL}},
-  {"IUP_NAMENEWFOLDER", {"Name of the new folder:", "Nome do novo diret�rio:", "Nome do novo diretório:", "Nombre del nuevo directorio:", NULL, NULL}},
+  {"IUP_FILEOVERWRITE", {"Overwrite existing file?", "Sobrescrever arquivo?", NULL, "\xbf""Sobrescribir archivo?", "\xc2""\xbf""Sobrescribir archivo?", NULL}},
+  {"IUP_CREATEFOLDER", {"Create Folder", "Criar Diret\xf3""rio", "Criar Diret\xc3""\xb3""rio", "Crear Directorio", NULL, NULL}},
+  {"IUP_NAMENEWFOLDER", {"Name of the new folder:", "Nome do novo diret\xf3""rio:", "Nome do novo diret\xc3""\xb3""rio:", "Nombre del nuevo directorio:", NULL, NULL}},
   {"IUP_SAVEAS", {"Save As", "Salvar Como", NULL, "Guardar Como", NULL, NULL}},
   {"IUP_OPEN", {"Open", "Abrir", NULL, "Abrir", NULL, NULL}},
-  {"IUP_SELECTDIR", {"Select Directory", "Selecionar Diret�rio", "Selecionar Diretório", "Seleccionar Directorio", NULL, NULL}},
+  {"IUP_SELECTDIR", {"Select Directory", "Selecionar Diret\xf3""rio", "Selecionar Diret\xc3""\xb3""rio", "Seleccionar Directorio", NULL, NULL}},
   {"IUP_OK", {"OK", "OK", NULL, "Aceptar", NULL, NULL}},
   {"IUP_CANCEL", {"Cancel", "Cancelar", NULL, "Cancelar", NULL, NULL}},
   {"IUP_RETRY", {"Retry", "Tentar Novamente", NULL, "Reintentar", NULL, NULL}},
   {"IUP_APPLY", {"Apply", "Aplicar", NULL, "Aplicar", NULL, NULL}},
   {"IUP_RESET", {"Reset", "Reinicializar", NULL, "Reiniciar", NULL, NULL}},
-  {"IUP_GETCOLOR", {"Color Selection", "Sele��o de Cor", "Seleção de Cor", "Selecci�n de Color", "Selección de Color", NULL}},
+  {"IUP_GETCOLOR", {"Color Selection", "Sele\xe7""\xe3""o de Cor", "Sele\xc3""\xa7""\xc3""\xa3""o de Cor", "Selecci\xf3""n de Color", "Selecci\xc3""\xb3""n de Color", NULL}},
   {"IUP_HELP", {"Help", "Ajuda", NULL, "Ayuda", NULL, NULL}},
   {"IUP_RED", {"&Red:", "&Vermelho:", NULL, "&Rojo:", NULL, NULL}},
   {"IUP_GREEN", {"&Green:", "V&erde:", NULL, "&Verde:", NULL, NULL}},
   {"IUP_BLUE", {"&Blue:", "&Azul:", NULL, "&Azul:", NULL, NULL}},
   {"IUP_HUE", {"&Hue:", "&Matiz:", NULL, "&Matiz:", NULL, NULL}},
-  {"IUP_SATURATION", {"&Saturation:", "&Satura��o:", "&Saturação:", "&Saturaci�n:", "&Saturación:", NULL}},
+  {"IUP_SATURATION", {"&Saturation:", "&Satura\xe7""\xe3""o:", "&Satura\xc3""\xa7""\xc3""\xa3""o:", "&Saturaci\xf3""n:", "&Saturaci\xc3""\xb3""n:", NULL}},
   {"IUP_INTENSITY", {"&Intensity:", NULL, "&Intensidade:", "&Intensidad:", NULL, NULL}},
   {"IUP_OPACITY", {"&Opacity:", "&Opacidade:", NULL, "&Opacidad:", NULL, NULL}},
   {"IUP_PALETTE", {"&Palette:", "&Paleta:", NULL, "&Paleta:", NULL, NULL}},
   {"IUP_TRUE", {"True", "Verdadeiro", NULL, "Verdadero", NULL, NULL}},
   {"IUP_FALSE", {"False", "Falso", NULL, "Falso", NULL, NULL}},
-  {"IUP_FAMILY", {"Family:", "Fam�lia:", "Família:", "Familia:", NULL, NULL}},
+  {"IUP_FAMILY", {"Family:", "Fam\xed""lia:", "Fam\xc3""\xad""lia:", "Familia:", NULL, NULL}},
   {"IUP_STYLE", {"Style:", "Estilo:", NULL, "Estilo:", NULL, NULL}},
-  {"IUP_SIZE", {"Size:", "Tamanho:", NULL, "Tama�o:", "Tamaño:", NULL}},
+  {"IUP_SIZE", {"Size:", "Tamanho:", NULL, "Tama\xf1""o:", "Tama\xc3""\xb1""o:", NULL}},
   {"IUP_SAMPLE", {"Sample:", "Exemplo:", NULL, "Ejemplo:", NULL, NULL}},
   {"IUP_ERRORFILEOPEN", { "Failed to open file.", "Falha ao abrir o arquivo.", NULL, "Error al abrir el archivo.", NULL, NULL } },
   {"IUP_ERRORFILESAVE", { "Failed to save file.", "Falha ao salvar o arquivo.", NULL, "Error al guardar el archivo.", NULL, NULL } },
   { "IUP_LUAERROR", { "Lua Error", "Erro de Lua", NULL, "Error de Lua", NULL, NULL } },
-  { "IUP_CONTINUE", { "Continue", "Continuar", NULL, "Contin�e", "Continúe", NULL } },
-  { "IUP_COPYTOCLIPBOARD", { "Copy text to clipboard.", "Copiar texto para a �rea de transfer�ncia.", "Copiar texto para a área de transferência.", "Copiar texto para un �rea de transferencia.", "Copiar texto para un área de transferencia.", NULL } },
+  { "IUP_CONTINUE", { "Continue", "Continuar", NULL, "Contin\xfa""e", "Contin\xc3""\xba""e", NULL } },
+  { "IUP_COPYTOCLIPBOARD", { "Copy text to clipboard.", "Copiar texto para a \xe1""rea de transfer\xea""ncia.", "Copiar texto para a \xc3""\xa1""rea de transfer\xc3""\xaa""ncia.", "Copiar texto para un \xe1""rea de transferencia.", "Copiar texto para un \xc3""\xa1""rea de transferencia.", NULL } },
   { "IUP_COPY", { "Copy", "Copiar", NULL, "Copiar", NULL, NULL } },
   { "IUP_EXIT", { "Exit", "Sair", NULL, "Salir", NULL, NULL } },
   { NULL, { NULL, NULL, NULL, NULL, NULL, NULL } }
@@ -191,3 +191,4 @@ void iupStrMessageUpdateLanguage(const char* language)
   iStrMessageRegisterInternal(lng, utf8mode);
   iupRegisterUpdateClasses();
 }
+
