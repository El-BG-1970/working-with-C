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
     /*   approximation of pi                              :+:    :+:  :+:+: :+:+:  :+:        :+:    :+:    */
     /*                                                   +:+    +:+ +:+ +:+:+ +:+ +:+        +:+    +:+     */
     /*   By: ElBG1970 <elouan.gros@outlook.com>         +#++:++#++ +#+  +:+  +#+ +#+        +#++:++#:       */
     /*                                                 +#+    +#+ +#+       +#+ +#+        +#+    +#+       */
     /*   Created: 2018/18/08 04:54:SS by ElBG1970     #+#    #+# #+#       #+# #+#        #+#    #+#        */
     /*   Updated: 2018/18/08 HH:MM:SS by ElBG1970    ###    ### ###       ### ########## ###    ###         */
     /*                                                                                                      */
     /* **************************************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <D:\coding\cprog\exos_piscine_42\ft_putstr-putnbr.c>
#include <math.h>
#include <quadmath.h>

int out(void)
{
  long double m1, m2, gon;
  int iterations, i;
  
  m1 = sqrt(3)/3;
  iterations = 0;
  i = 1;
  gon = 6;

  while (iterations < 20)
    {
      m2 = (sqrt(m1*m1 + 1) - 1) / m1;

      printf("%Lf, ", 2*gon*m2*pow(10,i));
      /*putchar(',');
      putchar(' ');*/

      m1 = m2;
      gon = 2*gon;
      iterations++;
      i++;
    }
  return(0);
}

int in(void)
{
  double m1, m2, gon;
  int iterations;
  
  m1 = 0.5;
  iterations = 0;
  gon = 6;

  while (iterations < 20)
    {
      m2 = (sqrt(pow(m1/2, 2) + pow(1 - sqrt(1 - pow(m1/2, 2)), 2)));

      printf("%Lf, ", 2*gon*m2);
      /*putchar(',');
      putchar(' ');*/

      m1 = m2;
      gon = 2*gon;
      iterations++;
    }
  return(0);
}

int main(void)
{
  /*if (in() == 0)
    ft_putstr(" ya, in bin good    ");
  else
    ft_putstr("ya erreur dans in...");*/

  if (out() == 0)
    ft_putstr(" ya, out bin good    ");
  else
    ft_putstr("ya erreur dans out...");

}
