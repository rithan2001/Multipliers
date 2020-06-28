/*
 * Generated by Bluespec Compiler (build 9f4a447)
 * 
 * On Sat Jun 13 11:17:50 IST 2020
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkMult0_h__
#define __mkMult0_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMult0 module */
class MOD_mkMult0 : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt32> INST_mcand;
  MOD_Reg<tUInt32> INST_mplr;
  MOD_Reg<tUInt32> INST_product;
 
 /* Constructor */
 public:
  MOD_mkMult0(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_RL_done;
  tUInt8 DEF_CAN_FIRE_RL_done;
  tUInt8 DEF_WILL_FIRE_RL_cycle;
  tUInt8 DEF_CAN_FIRE_RL_cycle;
  tUInt32 DEF_x__h380;
 
 /* Local definitions */
 private:
  tUInt32 DEF__read__h50;
 
 /* Rules */
 public:
  void RL_cycle();
  void RL_done();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMult0 &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMult0 &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMult0 &backing);
};

#endif /* ifndef __mkMult0_h__ */
