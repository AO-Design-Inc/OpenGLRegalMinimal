emcc -lRegal -Wall -g -gsource-map esUtil.c -o esUtil.o -s USE_REGAL=1 
emcc -lRegal -Wall -g -gsource-map regal_test2.C -o regal_test.js -s USE_REGAL=1 
