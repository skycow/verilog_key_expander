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
static const char *ng0 = "/home/A01519795/Documents/Graduate/Spring2016/ECE6470/Project/verilog/AES/rcon.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {16777216U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {33554432U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {67108864U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {134217728U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {268435456U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {536870912U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {1073741824U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {2147483648U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {452984832U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {905969664U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {1811939328U, 0U};



static void Always_34_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t13 = (t8 + 4);
    t14 = (t7 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB30;

LAB31:
LAB32:    t23 = (t0 + 1608);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 32);
    goto LAB29;

LAB9:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB33;

LAB34:
LAB35:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB36;

LAB37:
LAB38:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB13:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB42;

LAB43:
LAB44:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB45;

LAB46:
LAB47:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB48;

LAB49:
LAB50:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng16)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB51;

LAB52:
LAB53:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB54;

LAB55:
LAB56:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng20)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB57;

LAB58:
LAB59:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB27:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng22)));
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t13 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB60;

LAB61:
LAB62:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);
    goto LAB29;

LAB30:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB32;

LAB33:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB35;

LAB36:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB38;

LAB39:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB41;

LAB42:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB44;

LAB45:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB47;

LAB48:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB50;

LAB51:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB53;

LAB54:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB56;

LAB57:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB59;

LAB60:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB62;

}


extern void work_m_09203914721010598104_1286254862_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_09203914721010598104_1286254862", "isim/testbench_isim_beh.exe.sim/work/m_09203914721010598104_1286254862.didat");
	xsi_register_executes(pe);
}
