
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Factorial -dir "C:/Users/Raim/Documents/Laboratorio/Factorial/planAhead_run_1" -part xc3s500eft256-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Raim/Documents/Laboratorio/Factorial/Main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Raim/Documents/Laboratorio/Factorial} }
set_property target_constrs_file "MapeoFactorial.ucf" [current_fileset -constrset]
add_files [list {MapeoFactorial.ucf}] -fileset [get_property constrset [current_run]]
link_design
