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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    simprims_ver_m_00000000003359274523_2662658903_0502132496_init();
    simprims_ver_m_00000000003359274523_2662658903_1305646157_init();
    simprims_ver_m_00000000003359274523_2662658903_3147490468_init();
    simprims_ver_m_00000000001255213976_2021654676_0502132496_init();
    simprims_ver_m_00000000001255213976_2021654676_1305646157_init();
    simprims_ver_m_00000000001255213976_2021654676_3147490468_init();
    simprims_ver_m_00000000001255213976_2021654676_3996189223_init();
    simprims_ver_m_00000000001255213976_2021654676_2230776548_init();
    simprims_ver_m_00000000000648012491_3151998091_3996189223_init();
    simprims_ver_m_00000000000648012491_3151998091_2230776548_init();
    simprims_ver_m_00000000001867363923_1692233196_3996189223_init();
    simprims_ver_m_00000000001867363923_1692233196_2230776548_init();
    simprims_ver_m_00000000003598591109_2564395165_2462568698_init();
    simprims_ver_m_00000000003598591109_2959576533_2462568698_init();
    simprims_ver_m_00000000000126354981_1080494567_init();
    work_m_00000000000038742112_2840218536_init();
    work_m_00000000002424605880_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002424605880_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
