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
static const char *ng0 = "C:/Users/Rian/Documents/MICROELETRONICA/Nova pasta/reg_mux/reg_mux_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1476730680_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 5072);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 5072);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 4992);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1476730680_2372691052_p_1(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (80 * 1000LL);
    t2 = (t0 + 8276);
    t4 = (t0 + 5136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, t1);
    t9 = (640 * 1000LL);
    t10 = (t0 + 8280);
    t12 = (t0 + 5136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 4U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 4U, t9);
    t17 = (t0 + 5136);
    xsi_driver_intertial_reject(t17, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1476730680_2372691052_p_2(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (240 * 1000LL);
    t2 = (t0 + 8284);
    t4 = (t0 + 5200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, t1);
    t9 = (t0 + 5200);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1476730680_2372691052_p_3(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (400 * 1000LL);
    t2 = (t0 + 8288);
    t4 = (t0 + 5264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, t1);
    t9 = (t0 + 5264);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1476730680_2372691052_p_4(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (560 * 1000LL);
    t2 = (t0 + 8292);
    t4 = (t0 + 5328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, t1);
    t9 = (t0 + 5328);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1476730680_2372691052_p_5(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int64 t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t1 = (160 * 1000LL);
    t2 = (t0 + 8296);
    t4 = (t0 + 5392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_delta(t4, 0U, 2U, t1);
    t9 = (320 * 1000LL);
    t10 = (t0 + 8298);
    t12 = (t0 + 5392);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 2U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 2U, t9);
    t17 = (480 * 1000LL);
    t18 = (t0 + 8300);
    t20 = (t0 + 5392);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 2U);
    xsi_driver_subsequent_trans_delta(t20, 0U, 2U, t17);
    t25 = (640 * 1000LL);
    t26 = (t0 + 8302);
    t28 = (t0 + 5392);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 2U);
    xsi_driver_subsequent_trans_delta(t28, 0U, 2U, t25);
    t33 = (t0 + 5392);
    xsi_driver_intertial_reject(t33, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1476730680_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1476730680_2372691052_p_0,(void *)work_a_1476730680_2372691052_p_1,(void *)work_a_1476730680_2372691052_p_2,(void *)work_a_1476730680_2372691052_p_3,(void *)work_a_1476730680_2372691052_p_4,(void *)work_a_1476730680_2372691052_p_5};
	xsi_register_didat("work_a_1476730680_2372691052", "isim/reg_mux_tb_isim_beh.exe.sim/work/a_1476730680_2372691052.didat");
	xsi_register_executes(pe);
}
