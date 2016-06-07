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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Raim/Documents/Laboratorio/Factorial/FSM_CL.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_14_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 1868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2064);
    *((int *)t2) = 1;
    t3 = (t0 + 1896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 932U);
    t5 = *((char **)t4);
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 2);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1160);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1252);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1252);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 932U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(21, ng0);

LAB14:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1252);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB13;

LAB9:    xsi_set_current_line(27, ng0);

LAB15:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 840U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t4) == 0)
        goto LAB16;

LAB18:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;

LAB19:    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(33, ng0);

LAB24:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1160);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1252);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);

LAB22:    goto LAB13;

LAB11:    xsi_set_current_line(40, ng0);

LAB25:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 840U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t4) == 0)
        goto LAB26;

LAB28:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;

LAB29:    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1160);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1252);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);

LAB32:    goto LAB13;

LAB16:    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(28, ng0);

LAB23:    xsi_set_current_line(29, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 1160);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 2);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1252);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB22;

LAB26:    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(41, ng0);

LAB33:    xsi_set_current_line(42, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 1160);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1252);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB32;

}


extern void work_m_00000000001139470164_3662366567_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000001139470164_3662366567", "isim/fact_tb_isim_beh.exe.sim/work/m_00000000001139470164_3662366567.didat");
	xsi_register_executes(pe);
}
