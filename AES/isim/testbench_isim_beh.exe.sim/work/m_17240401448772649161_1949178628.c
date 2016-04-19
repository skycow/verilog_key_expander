/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/A01519795/Documents/Graduate/Spring2016/ECE6470/Project/verilog/AES/testbench.v";
static unsigned int ng1[] = {2944362392U, 0U, 213364182U, 0U, 1205463129U, 0U, 253063625U, 0U};
static unsigned int ng2[] = {286331153U, 0U, 286331153U, 0U, 286331153U, 0U, 286331153U, 0U};
static int ng3[] = {1, 0, 0, 0, 0, 0, 0, 0};



static void Initial_85_0(char *t0)
{
    char t6[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t7 = 0;

LAB9:    t8 = (t7 < 1);
    if (t8 == 1)
        goto LAB10;

LAB11:    t7 = 1;

LAB12:    t49 = (t7 < 4);
    if (t49 == 1)
        goto LAB13;

LAB18:    t68 = (t0 + 4488);
    xsi_vlogvar_assign_value(t68, t6, 0, 0, 128);
    goto LAB1;

LAB6:    t28 = (t7 * 8);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t12) = (t29 | t30);
    t31 = (t4 + t28);
    t32 = (t28 + 4);
    t33 = (t4 + t32);
    t34 = (t5 + t28);
    t35 = (t28 + 4);
    t36 = (t5 + t35);
    t37 = *((unsigned int *)t33);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t41 = *((unsigned int *)t36);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (~(t40));
    t46 = (~(t44));
    t47 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t47 & t45);
    t48 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t48 & t46);

LAB8:    t7 = (t7 + 1);
    goto LAB9;

LAB7:    goto LAB8;

LAB10:    t9 = (t7 * 8);
    t10 = (t4 + t9);
    t11 = (t5 + t9);
    t12 = (t6 + t9);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = (t7 * 8);
    t17 = (t16 + 4);
    t18 = (t4 + t17);
    t19 = (t16 + 4);
    t20 = (t5 + t19);
    t21 = (t16 + 4);
    t22 = (t6 + t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t20);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB6;
    else
        goto LAB7;

LAB13:    t50 = (t7 * 8);
    t51 = (t6 + t50);
    *((unsigned int *)t51) = 0;
    t52 = (t50 + 4);
    t53 = (t6 + t52);
    *((unsigned int *)t53) = 0;
    t54 = (t7 < 4);
    if (t54 == 1)
        goto LAB14;

LAB16:    t61 = (t7 < 1);
    if (t61 == 1)
        goto LAB15;

LAB17:    t7 = (t7 + 1);
    goto LAB12;

LAB14:    t55 = (t4 + t50);
    t56 = (t50 + 4);
    t57 = (t4 + t56);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t57);
    t60 = (t58 | t59);
    *((unsigned int *)t51) = t60;
    *((unsigned int *)t53) = *((unsigned int *)t57);
    goto LAB17;

LAB15:    t62 = (t5 + t50);
    t63 = (t50 + 4);
    t64 = (t5 + t63);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t64);
    t67 = (t65 | t66);
    *((unsigned int *)t51) = t67;
    *((unsigned int *)t53) = *((unsigned int *)t64);
    goto LAB17;

}


extern void work_m_17240401448772649161_1949178628_init()
{
	static char *pe[] = {(void *)Initial_85_0};
	xsi_register_didat("work_m_17240401448772649161_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_17240401448772649161_1949178628.didat");
	xsi_register_executes(pe);
}
