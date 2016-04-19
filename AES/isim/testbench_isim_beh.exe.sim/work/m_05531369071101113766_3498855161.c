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
static const char *ng0 = "/home/A01519795/Documents/Graduate/Spring2016/ECE6470/Project/verilog/AES/gfmult.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {128U, 0U};
static unsigned int ng4[] = {283U, 0U};



static void Always_34_0(char *t0)
{
    char t4[8];
    char t32[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(42, ng0);

LAB6:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB10:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB2;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB14;

LAB15:
LAB16:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t4) = t10;
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t21 = (t4 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 | t12);
    *((unsigned int *)t21) = t13;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB24;

LAB25:
LAB26:    t29 = (t4 + 4);
    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t4);
    t48 = (t45 & t44);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(53, ng0);

LAB34:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 8, t5, 8, t6, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 8);

LAB29:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t5, 8, t6, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 8);
    goto LAB6;

LAB14:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t30 + 4);
    t47 = (t31 + 4);
    t48 = *((unsigned int *)t30);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t31);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB16;

LAB17:    xsi_set_current_line(45, ng0);

LAB20:    xsi_set_current_line(46, ng0);
    t70 = (t0 + 2088);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t0 + 1768);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t75);
    t79 = (t77 ^ t78);
    *((unsigned int *)t76) = t79;
    t80 = (t72 + 4);
    t81 = (t75 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB21;

LAB22:
LAB23:    t90 = (t0 + 2088);
    xsi_vlogvar_assign_value(t90, t76, 0, 0, 8);
    goto LAB19;

LAB21:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    goto LAB23;

LAB24:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t4) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t6 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t28);
    t33 = (~(t27));
    t56 = (t20 & t24);
    t57 = (t26 & t33);
    t34 = (~(t56));
    t35 = (~(t57));
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & t34);
    t40 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t40 & t35);
    t41 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t41 & t34);
    t42 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t42 & t35);
    goto LAB26;

LAB27:    xsi_set_current_line(49, ng0);

LAB30:    xsi_set_current_line(50, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_lshift(t32, 12, t36, 8, t37, 32);
    t38 = ((char*)((ng4)));
    t50 = *((unsigned int *)t32);
    t51 = *((unsigned int *)t38);
    t52 = (t50 ^ t51);
    *((unsigned int *)t76) = t52;
    t46 = (t32 + 4);
    t47 = (t38 + 4);
    t64 = (t76 + 4);
    t53 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t47);
    t55 = (t53 | t54);
    *((unsigned int *)t64) = t55;
    t58 = *((unsigned int *)t64);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB31;

LAB32:
LAB33:    t70 = (t0 + 1768);
    xsi_vlogvar_assign_value(t70, t76, 0, 0, 8);
    goto LAB29;

LAB31:    t60 = *((unsigned int *)t76);
    t61 = *((unsigned int *)t64);
    *((unsigned int *)t76) = (t60 | t61);
    goto LAB33;

}


extern void work_m_05531369071101113766_3498855161_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_05531369071101113766_3498855161", "isim/testbench_isim_beh.exe.sim/work/m_05531369071101113766_3498855161.didat");
	xsi_register_executes(pe);
}
