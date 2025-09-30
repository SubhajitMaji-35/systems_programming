cleanrec:
	for dir in `ls`; \
	do \
		make -C "$${dir}" -f makefile clean; \
	done

removecode:
	sed -i '/START/,/END/d' */*.c

testall:
	for dir in `ls`; \
	do \
		make -C "$${dir}" -f makefile tests; \
	done


