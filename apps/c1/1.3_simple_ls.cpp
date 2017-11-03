#include "apue.h"
#include <dirent.h>


int main(int argc, char *argv[])
{
  DIR *dp;
  struct dirent *dirp;

  if (argc != 2)
    err_quit("usage: ls direcoty_name");
  if ((dp = opendir(argv[1])) == nullptr)
    err_sys("cna't open %s", argv[1]);
  while ((dirp = readdir(dp)) != nullptr)
    printf("%s\n", dirp->d_name);

  closedir(dp);
  return 0;
}