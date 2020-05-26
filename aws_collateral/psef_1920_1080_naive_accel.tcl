catch {::common::set_param -quiet hls.xocc.mode csynth};
# 
# Hls run script generated by the compiler
# 

set vpp_optimize_level 0
open_project psef_1920_1080_naive_accel
set_top psef_1920_1080_naive_accel
add_files "/home/centos/clockwork/soda_codes/psef_1920_1080_opt/isl_code/psef_1920_1080_naive.cpp" -cflags " -D __VIVADO_SYNTH__ -I /home/centos/clockwork -I /home/centos/clockwork/soda_codes/psef_1920_1080_opt/isl_code "
open_solution solution
set_part xcvu9p-flgb2104-2-i
create_clock -period 250.000000MHz -name default
config_sdx -target xocc
config_export -vivado_optimization_level $vpp_optimize_level
config_dataflow -strict_mode warning
set_clock_uncertainty 27.000000%
config_rtl -enable_maxiConservative=1
config_interface -m_axi_addr64
config_export -format ip_catalog -ipname psef_1920_1080_naive_accel
csynth_design
export_design
close_project
puts "HLS completed successfully"
exit
