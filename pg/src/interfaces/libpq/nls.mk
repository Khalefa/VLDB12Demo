# $PostgreSQL: pgsql/src/interfaces/libpq/nls.mk,v 1.23 2009/06/26 19:33:51 petere Exp $
CATALOG_NAME	:= libpq
AVAIL_LANGUAGES	:= cs de es fr ja ko pt_BR ru sv ta tr
GETTEXT_FILES	:= fe-auth.c fe-connect.c fe-exec.c fe-lobj.c fe-misc.c fe-protocol2.c fe-protocol3.c fe-secure.c
GETTEXT_TRIGGERS:= libpq_gettext pqInternalNotice:2
