#include <stdio.h>
#include <string.h>

int main(void)

{
  int iVar1;
  char local_28 [32];
  
  puts("What's the password?");
  scanf("%s", local_28);
  iVar1 = strcmp(local_28,"sala-hakkeri-321");
  if (iVar1 == 0) {
    puts("Sorry, no bonus.");
  }
  else {
    puts("Yes! That's the password. FLAG{Tero-d75ee66af0a68663f15539ec0f46e3b1}");
  }
  return 0;
}

