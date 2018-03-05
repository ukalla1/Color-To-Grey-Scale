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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Red = %h, Green = %h, Blue = %h";
static int ng1[] = {0, 0};
static const char *ng2 = "out = %h";
static const char *ng3 = "C:/Users/uttej/Desktop/My Docs/DSD assignment/assignment2/phase1/Question1/Color2BW_tb.v";
static const char *ng4 = "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_r.txt";
static const char *ng5 = "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_g.txt";
static const char *ng6 = "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_b.txt";
static const char *ng7 = "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\output.txt";
static const char *ng8 = "w";
static int ng9[] = {16384, 0};
static int ng10[] = {1, 0};
static const char *ng11 = "%d\n";

void Monitor_52_1(char *);
void Monitor_71_3(char *);
static void NetReassign_57_4(char *);
static void NetReassign_58_5(char *);
static void NetReassign_59_6(char *);
void Monitor_52_1(char *);
void Monitor_71_3(char *);


static void Monitor_52_1_Func(char *t0)
{
    char t4[8];
    char t15[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t4, 8, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 2088);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t15, 8, t14, t18, t21, 2, 1, t22, 32, 1);
    t23 = (t0 + 2248);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t0 + 2248);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 2248);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t26, 8, t25, t29, t32, 2, 1, t33, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t4, 8, (char)118, t15, 8, (char)118, t26, 8);

LAB1:    return;
}

static void Monitor_71_3_Func(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    xsi_vlogfile_write(1, 0, 3, ng2, 2, t0, (char)118, t2, 8);

LAB1:    return;
}

static void Initial_48_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng3);

LAB4:    xsi_set_current_line(49, ng3);
    t2 = (t0 + 1928);
    xsi_vlogfile_readmemh(ng4, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(50, ng3);
    t2 = (t0 + 2088);
    xsi_vlogfile_readmemh(ng5, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(51, ng3);
    t2 = (t0 + 2248);
    xsi_vlogfile_readmemh(ng6, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(52, ng3);
    Monitor_52_1(t0);
    xsi_set_current_line(55, ng3);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng8);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(56, ng3);
    xsi_set_current_line(56, ng3);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng3);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));

LAB1:    return;
LAB6:    xsi_set_current_line(56, ng3);

LAB8:    xsi_set_current_line(57, ng3);
    t13 = (t0 + 1448);
    xsi_set_assignedflag(t13);
    t14 = (t0 + 7420);
    *((int *)t14) = 1;
    NetReassign_57_4(t0);
    xsi_set_current_line(58, ng3);
    t2 = (t0 + 1608);
    xsi_set_assignedflag(t2);
    t4 = (t0 + 7424);
    *((int *)t4) = 1;
    NetReassign_58_5(t0);
    xsi_set_current_line(59, ng3);
    t2 = (t0 + 1768);
    xsi_set_assignedflag(t2);
    t4 = (t0 + 7428);
    *((int *)t4) = 1;
    NetReassign_59_6(t0);
    xsi_set_current_line(60, ng3);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng3);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(62, ng3);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(63, ng3);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(56, ng3);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB5;

}

static void Always_69_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng3);
    t2 = (t0 + 5456);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng3);

LAB5:    xsi_set_current_line(71, ng3);
    Monitor_71_3(t0);
    xsi_set_current_line(72, ng3);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng11, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(73, ng3);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void NetReassign_57_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng3);
    t3 = 0;
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1928);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = (t0 + 7420);
    if (*((int *)t16) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t19 = (t0 + 5472);
    *((int *)t19) = 0;

LAB8:
LAB1:    return;
LAB4:    t17 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t17, t6, 0, 0, 0, 8, ((int*)(t16)));
    t3 = 1;
    goto LAB5;

LAB6:    t18 = (t0 + 5472);
    *((int *)t18) = 1;
    goto LAB8;

}

static void NetReassign_58_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng3);
    t3 = 0;
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = (t0 + 7424);
    if (*((int *)t16) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t19 = (t0 + 5488);
    *((int *)t19) = 0;

LAB8:
LAB1:    return;
LAB4:    t17 = (t0 + 1608);
    xsi_vlogvar_assignassignvalue(t17, t6, 0, 0, 0, 8, ((int*)(t16)));
    t3 = 1;
    goto LAB5;

LAB6:    t18 = (t0 + 5488);
    *((int *)t18) = 1;
    goto LAB8;

}

static void NetReassign_59_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng3);
    t3 = 0;
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = (t0 + 7428);
    if (*((int *)t16) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t19 = (t0 + 5504);
    *((int *)t19) = 0;

LAB8:
LAB1:    return;
LAB4:    t17 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t17, t6, 0, 0, 0, 8, ((int*)(t16)));
    t3 = 1;
    goto LAB5;

LAB6:    t18 = (t0 + 5504);
    *((int *)t18) = 1;
    goto LAB8;

}

void Monitor_52_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4696);
    t2 = (t0 + 5520);
    xsi_vlogfile_monitor((void *)Monitor_52_1_Func, t1, t2);

LAB1:    return;
}

void Monitor_71_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4944);
    t2 = (t0 + 5536);
    xsi_vlogfile_monitor((void *)Monitor_71_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001039350535_0911796589_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Always_69_2,(void *)NetReassign_57_4,(void *)NetReassign_58_5,(void *)NetReassign_59_6,(void *)Monitor_52_1,(void *)Monitor_71_3};
	xsi_register_didat("work_m_00000000001039350535_0911796589", "isim/Color2BW_tb_isim_beh.exe.sim/work/m_00000000001039350535_0911796589.didat");
	xsi_register_executes(pe);
}
