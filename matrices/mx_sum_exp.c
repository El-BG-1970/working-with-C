/*----------------------------------------------------------------------------------------------------------------*/
/*________  __               ________  ___                 ________        __________            _______          */
/*_____  / / /_________  __  _____   |/  /_____ _______    _____  /____    _____  __ \_____ _________  /______ _  */
/*____  /_/ /_  _ \_  / / /  ____  /|_/ /_  __ `/_  __ \   ____  /_  _ \   ____  /_/ /  __ `/_  ___/  __/  __ `/  */
/*___  __  / /  __/  /_/ /   ___  /  / / / /_/ /_  / / /   ___  / /  __/   ___  _, _// /_/ /_(__  )/ /_ / /_/ /   */
/*  /_/ /_/  \___/_\__, /      /_/  /_/  \__,_/ /_/ /_/      /_/  \___/      /_/ |_| \__,_/ /____/ \__/ \__,_/    */
/*                /____/                                                                                          */
/*                                                                                                                */
/*----------------------------------------------------------------------------------------------------------------*/

     /* **************************************************************************************************** */
     /*                                                                                                      */
     /*                                                     :::    :::   :::   :::   :::        :::::::::    */
     /*   SOMME DE MATRICE EN C; EXPERIMENTAL              :+:    :+:  :+:+: :+:+:  :+:        :+:    :+:    */
     /*                                                   +:+    +:+ +:+ +:+:+ +:+ +:+        +:+    +:+     */
     /*   By: ElBG1970 <                       >         +#++:++#++ +#+  +:+  +#+ +#+        +#++:++#:       */
     /*                                                 +#+    +#+ +#+       +#+ +#+        +#+    +#+       */
     /*   Created: 2018/08/07 HH:MM:SS by ElBG1970     #+#    #+# #+#       #+# #+#        #+#    #+#        */
     /*   Updated: YYYY/MM/DD HH:MM:SS by ElBG1970    ###    ### ###       ### ########## ###    ###         */
     /*                                                                                                      */
     /* **************************************************************************************************** */

/*#define len(arr) ((int) (sizeof (arr) / sizeof (arr[0]))*/
#include <./libs/ft_putstr-putnbr.c>
#include <./libs/str_len.c>
#include <stdio.h>
#include <stdlib.h>

int mx_size_test(int *matrix_a[2], int *matrix_b[2])
{
  if (sizeof(matrix_a) == sizeof(matrix_b))
  {
    /*if (sizeof(matrix_a[0]) == sizeof(matrix_b[0]))
      {*/
      return(0);
      /*}
	else{return(-1);}*/
  }
  else{return(-1);}
}

void mx_sum()
{
  
}

int main(void)
{
  int a[2][2] = {{0,1}, {4,2}};
  int b[2][2] = {{0,1}, {4,2}};
  /*a[2][2] = {{0,1}, {4,2}};*/
  /*b[2][2] = {{0,4}, {3,1}};*/

  if (mx_size_test(a, b) == 0)
    {
      ft_putstr("addable");
      return(0);
    }
  else
    {
      ft_putstr("error, lengths don't match");
      return(-1);
    }
}
