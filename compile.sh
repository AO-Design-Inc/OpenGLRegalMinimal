#emcc -Wall -g -gsource-map esUtil.c -o esUtil.o -s USE_REGAL=1 
emcc -lEGL -Wall -g -gsource-map esUtil.c regal_test2.C -o regal_test.js -s USE_REGAL=1 
