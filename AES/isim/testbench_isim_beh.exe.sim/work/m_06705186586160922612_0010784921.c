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
static const char *ng0 = "/home/A01519795/Documents/Graduate/Spring2016/ECE6470/Project/verilog/AES/key_expander.v";
static int ng1[] = {0, 0};



static void Initial_58_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(59, ng0);

LAB2:    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_130_1(char *t0)
{
    char t4[32];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 10368);
    *((int *)t2) = 1;
    t3 = (t0 + 7600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t4, 128, t6, 127, 0);
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 128);
    goto LAB2;

}

static void Always_134_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 10384);
    *((int *)t2) = 1;
    t3 = (t0 + 7848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_138_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 10400);
    *((int *)t2) = 1;
    t3 = (t0 + 8096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);

LAB5:    xsi_set_current_line(140, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_142_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 10416);
    *((int *)t2) = 1;
    t3 = (t0 + 8344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_146_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 10432);
    *((int *)t2) = 1;
    t3 = (t0 + 8592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_150_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10448);
    *((int *)t2) = 1;
    t3 = (t0 + 8840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);

LAB5:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_154_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 10464);
    *((int *)t2) = 1;
    t3 = (t0 + 9088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_158_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 10480);
    *((int *)t2) = 1;
    t3 = (t0 + 9336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);

LAB5:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 3128U);
    t5 = *((char **)t4);
    t4 = (t0 + 5768);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_162_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 10496);
    *((int *)t2) = 1;
    t3 = (t0 + 9584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(163, ng0);

LAB5:    xsi_set_current_line(164, ng0);
    t4 = (t0 + 3448U);
    t5 = *((char **)t4);
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_166_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 10512);
    *((int *)t2) = 1;
    t3 = (t0 + 9832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(167, ng0);

LAB5:    xsi_set_current_line(168, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}

static void Always_170_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 10048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 10528);
    *((int *)t2) = 1;
    t3 = (t0 + 10080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(171, ng0);

LAB5:    xsi_set_current_line(172, ng0);
    t4 = (t0 + 4088U);
    t5 = *((char **)t4);
    t4 = (t0 + 6248);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 128);
    goto LAB2;

}


extern void work_m_06705186586160922612_0010784921_init()
{
	static char *pe[] = {(void *)Initial_58_0,(void *)Always_130_1,(void *)Always_134_2,(void *)Always_138_3,(void *)Always_142_4,(void *)Always_146_5,(void *)Always_150_6,(void *)Always_154_7,(void *)Always_158_8,(void *)Always_162_9,(void *)Always_166_10,(void *)Always_170_11};
	xsi_register_didat("work_m_06705186586160922612_0010784921", "isim/testbench_isim_beh.exe.sim/work/m_06705186586160922612_0010784921.didat");
	xsi_register_executes(pe);
}
