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
static const char *ng0 = "C:/Users/uttej/Desktop/My Docs/DSD assignment/assignment2/phase1/Question1/Color2BW.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {3, 0};
static int ng3[] = {4, 0};
static int ng4[] = {6, 0};
static int ng5[] = {8, 0};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static int ng8[] = {5, 0};
static int ng9[] = {7, 0};



static void Cont_33_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t2, 8);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t7, 16, t4, 16, t5, 32);
    xsi_vlogtype_concat(t3, 16, 16, 1U, t7, 16);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t12, 8, t10, 8);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 16, t9, 16, t11, 32);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t13, 16);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t3, 16, t8, 16);
    t15 = (t0 + 7064);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 6840);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t2, 8);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t7, 16, t4, 16, t5, 32);
    xsi_vlogtype_concat(t3, 16, 16, 1U, t7, 16);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t12, 8, t10, 8);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 16, t9, 16, t11, 32);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t13, 16);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t3, 16, t8, 16);
    t15 = (t0 + 7128);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 6856);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_35_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 16, t3, 16, t4, 16);
    t2 = (t0 + 7192);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 6872);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_37_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t2, 8);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t7, 16, t4, 16, t5, 32);
    xsi_vlogtype_concat(t3, 16, 16, 1U, t7, 16);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t12, 8, t10, 8);
    t11 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 16, t9, 16, t11, 32);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t13, 16);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t3, 16, t8, 16);
    t15 = (t0 + 7256);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 6888);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_38_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t2, 8);
    t5 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t7, 16, t4, 16, t5, 32);
    xsi_vlogtype_concat(t3, 16, 16, 1U, t7, 16);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t12, 8, t10, 8);
    t11 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 16, t9, 16, t11, 32);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t13, 16);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t3, 16, t8, 16);
    t15 = (t0 + 7320);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 6904);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_39_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 16, t3, 16, t4, 16);
    t2 = (t0 + 7384);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 6920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_42_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t6, 8, t2, 8);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t7, 16, t4, 16, t5, 32);
    xsi_vlogtype_concat(t3, 16, 16, 1U, t7, 16);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t12, 8, t10, 8);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 16, t9, 16, t11, 32);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t13, 16);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t3, 16, t8, 16);
    t15 = (t0 + 7448);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 6936);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_45_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 16, t3, 16, t4, 16);
    t2 = (t0 + 7512);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 6952);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_46_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 16, t3, 16, t4, 16);
    t2 = (t0 + 7576);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 6968);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_47_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2968U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 7640);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 6984);
    *((int *)t25) = 1;

LAB1:    return;
}


extern void work_m_00000000004251436763_3166993715_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Cont_35_2,(void *)Cont_37_3,(void *)Cont_38_4,(void *)Cont_39_5,(void *)Cont_42_6,(void *)Cont_45_7,(void *)Cont_46_8,(void *)Cont_47_9};
	xsi_register_didat("work_m_00000000004251436763_3166993715", "isim/Color2BW_tb_isim_beh.exe.sim/work/m_00000000004251436763_3166993715.didat");
	xsi_register_executes(pe);
}
