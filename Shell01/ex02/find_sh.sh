find . -type f -name '*.sh' -maxdepth 2 | sed 's:.*/::' | sed 's/\.[^.]*$//' 
