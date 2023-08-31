run:
	clang ${file}.c -o ./output/${file} && ./output/${file} && rm -r ./output/*
