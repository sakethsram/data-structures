sll: m.o add_beg.o add_node.o del_node_by_val.o dumplist.o get_count.o get_node_by_pos.o get_node_by_val.o midval.o update_all_node_by_val.o update_node_by_pos.o update_node_by_val.o 
	gcc -o sll m.o add_beg.o add_node.o del_node_by_val.o dumplist.o get_count.o get_node_by_pos.o get_node_by_val.o midval.o update_all_node_by_val.o update_node_by_pos.o update_node_by_val.o  

add_beg.o: add_beg.c
	gcc add_beg.c -c

add_node.o: add_node.c
	gcc add_node.c -c

del_node_by_val.o: del_node_by_val.c
	gcc del_node_by_val.c -c

dumplist.o: dumplist.c
	gcc dumplist.c -c

get_count.o: get_count.c
	gcc get_count.c -c

get_node_by_pos.o: get_node_by_pos.c
	gcc get_node_by_pos.c -c

get_node_by_val.o: get_node_by_val.c
	gcc get_node_by_val.c -c

m.o: m.c
	gcc m.c -c

midval.o: midval.c
	gcc midval.c -c

update_all_node_by_val.o: update_all_node_by_val.c
	gcc update_all_node_by_val.c -c

update_node_by_pos.o: update_node_by_pos.c
	gcc update_node_by_pos.c -c

update_node_by_val.o: update_node_by_val.c
	gcc update_node_by_val.c -c

clean:
	rm -rf *.o
	rm -rf a.out
	rm -rf sll


