/*
 * Generated by Bluespec Compiler (build 9f4a447)
 * 
 * On Thu Jun 11 14:05:09 IST 2020
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkMult1Tb.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkMult1Tb::MODEL_mkMult1Tb()
{
  mkMult1Tb_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkMult1Tb()
{
  MODEL_mkMult1Tb *model = new MODEL_mkMult1Tb();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkMult1Tb &INST_top = *((MOD_mkMult1Tb *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_x_ULT_20___d3;
	 INST_top.INST_dut.PORT_EN_acknowledge = (tUInt8)0u;
	 INST_top.INST_dut.DEF_WILL_FIRE_acknowledge = (tUInt8)0u;
	 INST_top.INST_dut.PORT_EN_start = (tUInt8)0u;
	 INST_top.INST_dut.DEF_WILL_FIRE_start = (tUInt8)0u;
	 INST_top.DEF_x__h318 = INST_top.INST_x.METH_read();
	 DEF_INST_top_DEF_x_ULT_20___d3 = (INST_top.DEF_x__h318) < 20u;
	 INST_top.DEF_CAN_FIRE_RL_rule_tb_1 = INST_top.INST_dut.METH_RDY_start() && DEF_INST_top_DEF_x_ULT_20___d3;
	 INST_top.DEF_WILL_FIRE_RL_rule_tb_1 = INST_top.DEF_CAN_FIRE_RL_rule_tb_1;
	 INST_top.DEF_CAN_FIRE_RL_rule_tb_2 = (INST_top.INST_dut.METH_RDY_acknowledge() && INST_top.INST_dut.METH_RDY_result()) && DEF_INST_top_DEF_x_ULT_20___d3;
	 INST_top.DEF_WILL_FIRE_RL_rule_tb_2 = INST_top.DEF_CAN_FIRE_RL_rule_tb_2;
	 INST_top.DEF_CAN_FIRE_RL_stop = !DEF_INST_top_DEF_x_ULT_20___d3;
	 INST_top.DEF_WILL_FIRE_RL_stop = INST_top.DEF_CAN_FIRE_RL_stop;
	 INST_top.INST_dut.DEF__read__h158 = INST_top.INST_dut.INST_mplr.METH_read();
	 INST_top.INST_dut.DEF_mplr_EQ_0___d2 = (INST_top.INST_dut.DEF__read__h158) == 0u;
	 INST_top.INST_dut.DEF_CAN_FIRE_RL_cycle = !(INST_top.INST_dut.DEF_mplr_EQ_0___d2);
	 INST_top.INST_dut.DEF_WILL_FIRE_RL_cycle = INST_top.INST_dut.DEF_CAN_FIRE_RL_cycle;
	 if (INST_top.DEF_WILL_FIRE_RL_rule_tb_2)
	   INST_top.RL_rule_tb_2();
	 if (INST_top.DEF_WILL_FIRE_RL_rule_tb_1)
	   INST_top.RL_rule_tb_1();
	 if (INST_top.DEF_WILL_FIRE_RL_stop)
	   INST_top.RL_stop();
	 if (INST_top.INST_dut.DEF_WILL_FIRE_RL_cycle)
	   INST_top.INST_dut.RL_cycle();
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_dut.INST_available.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut.INST_product.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut.INST_mcand.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut.INST_mplr.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_x.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_y.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkMult1Tb::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkMult1Tb_instance = new MOD_mkMult1Tb(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkMult1Tb_instance->INST_dut.set_clk_0)("CLK");
  (mkMult1Tb_instance->set_clk_0)("CLK");
}
void MODEL_mkMult1Tb::destroy_model()
{
  delete mkMult1Tb_instance;
  mkMult1Tb_instance = NULL;
}
void MODEL_mkMult1Tb::reset_model(bool asserted)
{
  (mkMult1Tb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkMult1Tb::get_instance()
{
  return mkMult1Tb_instance;
}

/* Fill in version numbers */
void MODEL_mkMult1Tb::get_version(unsigned int *year,
				  unsigned int *month,
				  char const **annotation,
				  char const **build)
{
  *year = 0u;
  *month = 0u;
  *annotation = NULL;
  *build = "9f4a447";
}

/* Get the model creation time */
time_t MODEL_mkMult1Tb::get_creation_time()
{
  
  /* Thu Jun 11 08:35:09 UTC 2020 */
  return 1591864509llu;
}

/* State dumping function */
void MODEL_mkMult1Tb::dump_state()
{
  (mkMult1Tb_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkMult1Tb & mkMult1Tb_backing(tSimStateHdl simHdl)
{
  static MOD_mkMult1Tb *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkMult1Tb(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkMult1Tb::dump_VCD_defs()
{
  (mkMult1Tb_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkMult1Tb::dump_VCD(tVCDDumpType dt)
{
  (mkMult1Tb_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkMult1Tb_backing(sim_hdl));
}
