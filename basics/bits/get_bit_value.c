int get_bit_val_by_pos(int n, int bp)
{
	int mask = 1, t, res;

	t = mask << bp;
	res = n & t; 
	
	if(res==0)
		return 0;
	return 1;
}
