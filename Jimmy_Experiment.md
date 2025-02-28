- Run Training
```bash
cd python
conda activate exo 
python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle
```

## Jimmy experiments 
open another terminal 
```bash
cd python
conda activate exo 

python3 main.py -d ../data/metadata_fre_1.txt -a mass -t wm -wp mass-with-muscle-fre -wn mass-with-muscle-fre -sp nn_wm_fre_1 -hms ../trained_policy/nn_wm_fre_1/ -mms ../trained_policy/nn_wm_fre_1/

python3 main.py -d ../data/metadata_fre_2.txt -a mass -t wm -wp mass-with-muscle-fre -wn mass-with-muscle-fre -sp nn_wm_fre_2 -hms ../trained_policy/nn_wm_fre_2/ -mms ../trained_policy/nn_wm_fre_2/

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle-fre -wn mass-with-muscle-fre-low -sp nn_wm_fre_low -hms ../trained_policy/nn_wm_fre_low/ -mms ../trained_policy/nn_wm_fre_low/

python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-without-muscle -wn mass-without-muscle -sp nn_wo -hms ../trained_policy/nn_wo_fre_low/ -mms ../trained_policy/nn_wo_fre_low/

python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-muscle-fre -wn mass-without-muscle-fre-low -sp nn_wo  

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-run -sp nn_wm_run
python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-with-muscle -wn mass-without-muscle-run -sp nn_wo_run  

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-4 -sp nn_wm_run_4 -hms ../trained_policy/nn_wm_4/ -mms ../trained_policy/nn_wm_4/ -hml trained_policy/nn_wm/ -mml ../trained_policy/nn_wm/ -mn current 

python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-with-muscle -wn mass-without-muscle-2 -sp nn_wo_run_2 -hms ../trained_policy/nn_wo_2/ -mms ../trained_policy/nn_wo_2/ -hml ../trained_policy/nn_wo/ -mml ../trained_policy/nn_wo/ -mn max 

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-lstm -sp nn_wm_lstm -hms ../trained_policy/nn_wm_lstm/ -mms ../trained_policy/nn_wm_lstm/ -hml None -mml None -mn None  
```
```

wandb api key
'''
11cb5f884a0321d83fb4b46e7d054d426a5cad50 darda
'''


visualization
./render/render ../data/metadata_mass_wm.txt ../trained_policy/nn_wm/current.pt ../trained_policy/nn_wm/current_muscle.pt
./render/render ../data/metadata_mass_wm.txt ../trained_policy/nn_wm_3/current.pt ../trained_policy/nn_wm_3/current_muscle.pt

./render/render ../data/metadata_mass_wo.txt ../trained_policy/nn_wo/current.pt 
./render/render ../data/metadata_mass_wo.txt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wo_30_600/current_human.pt

./render/render ../data/metadata.txt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_2/current_human.pt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_2/current_muscle.pt 

./render/render ../data/metadata_mass_wm.txt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_3/current.pt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_3/current_muscle.pt 


./render/render ../data/metadata_mass_wo.txt /home/sulab/hipexo/mass-dart-exo/trained_policy/nn_wo_run/current.pt

./render/render ../data/metadata_fre_1.txt  ../trained_policy/nn_wm_fre_1/current.pt ../trained_policy/nn_wm_fre_1/current_muscle.pt

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-3 -sp nn_wm_run_3 -hms ../trained_policy/nn_wm_3/ -mms ../trained_policy/nn_wm_3/ -hml trained_policy/nn_wm/ -mml ../trained_policy/nn_wm/ -mn max