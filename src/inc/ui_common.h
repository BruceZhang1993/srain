#ifndef __UI_COMMON_H
#define __UI_COMMON_H

#include <gtk/gtk.h>

void get_cur_time(char *timestr);
GtkListBoxRow* gtk_list_box_get_row_by_name(GtkListBox *listbox, const char* name);
GtkListBoxRow* gtk_list_box_add_unfocusable_row(GtkListBox *listbox, GtkWidget *widget);
GtkPopover* create_popover(GtkWidget *parent, GtkWidget *child, GtkPositionType pos);
char* show_open_filechosser(GtkWindow *parent);
void show_msg_dialog(const char *title, const char *msg);

#endif /** __UI_COMMON_H **/
