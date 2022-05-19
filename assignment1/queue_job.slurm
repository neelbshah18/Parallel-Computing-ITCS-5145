#!/bin/sh
#SBATCH --partition=Centaurus
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --time=04:00:00
./run_bench.sh
