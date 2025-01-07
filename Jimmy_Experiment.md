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

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle -sp nn_wm
python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-without-muscle -wn mass-without-muscle -sp nn_wo  

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-run -sp nn_wm_run
python3 main.py -d ../data/metadata_mass_wo.txt -a mass -t wo -wp mass-with-muscle -wn mass-without-muscle-run -sp nn_wo_run  

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-2 -sp nn_wm_run_2 -hms ../trained_policy/nn_wm_2/ -mms ../trained_policy/nn_wm_2/ -hml trained_policy/nn_wm/ -mml ../trained_policy/nn_wm/ -mn max 

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

./render/render ../data/metadata_mass_wo.txt ../trained_policy/nn_wo/current.pt ../trained_policy/nn_wo/current_muscle.pt


./render/render ../data/metadata.txt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_2/current_human.pt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_2/current_muscle.pt 

./render/render ../data/metadata_mass_wm.txt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_3/current.pt /home/sulab/hipexo/mass-tmech/trained_policy/nn_tmech_wm_3/current_muscle.pt 


./render/render ../data/metadata_mass_wo.txt /home/sulab/hipexo/mass-dart-exo/trained_policy/nn_wo_run/current.pt

python3 main.py -d ../data/metadata_mass_wm.txt -a mass -t wm -wp mass-with-muscle -wn mass-with-muscle-3 -sp nn_wm_run_3 -hms ../trained_policy/nn_wm_3/ -mms ../trained_policy/nn_wm_3/ -hml trained_policy/nn_wm/ -mml ../trained_policy/nn_wm/ -mn max