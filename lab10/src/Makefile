cleanrec:
	for dir in `ls`; \
	do \
		make -C "$${dir}" -f makefile clean; \
	done

removecode:
	sed -i '/START/,/END/d' */*.c */*.h
	sed -i '/START/,/END/d' */makefile


testall:
	for dir in `ls`; \
	do \
		make -C "$${dir}" -f makefile tests; \
	done

testleak:
	for dir in `ls`; \
	do \
		make -C "$${dir}" -f makefile ltests; \
	done

