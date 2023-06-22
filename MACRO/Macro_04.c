
 content of stdio.h

 content of string.h 

int main(int argc, char** argv) {
char copy_cmd[256] = ""; strcpy(copy_cmd, "copy");
char paste_cmd[256] = ""; strcpy(paste_cmd, "paste");
char cut_cmd[256] = ""; strcpy(cut_cmd, "cut");
char cmd[256];
scanf("%s", cmd);
if (strcmp(cmd, copy_cmd) == 0) {
}
if (strcmp(cmd, paste_cmd) == 0) {
}
if (strcmp(cmd, cut_cmd) == 0) {
}

return 0;
}
