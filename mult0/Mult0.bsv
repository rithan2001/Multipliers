package Mult0; 

// Simple (naive) binary multiplier

typedef Bit#(16) Tin;
typedef Bit#(32) Tout;

(* synthesize *)
module mkMult0();
  

function Tin power(Tin x,  Tin y) ;

    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
endfunction 

 Tin d = 9, r = power(2,2);

   Reg#(Tout)    product <- mkReg(0);
   Reg#(Tout)    mcand   <- mkReg({0, d});
   Reg#(Tin)     mplr    <- mkReg(r);

   rule cycle ( mplr != 0 );
      if (mplr[0] == 1) product <= product + mcand;
      mcand   <= mcand << 1;
      mplr    <= mplr  >> 1;
   endrule
   
   rule done ( mplr == 0 );
      $display ("Product = %d", product);
      $finish;
   endrule

endmodule: mkMult0
        
endpackage: Mult0
