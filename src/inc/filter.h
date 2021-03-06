#ifndef __FILTER_H
#define __FILTER_H

int filter_ignore_list_add(const char *nick);
int filter_ignore_list_rm(const char *nick);
int filter_relaybot_list_add(const char *nick, const char *ldelim, const char *rdelim);
int filter_relaybot_list_rm(const char *nick);
int filter_is_ignore(const char *nick);
void filter_relaybot_trans(const char *orgin_nick, char *nick, char *msg);

#endif /* __FILTER_H */
