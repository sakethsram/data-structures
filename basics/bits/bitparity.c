int get_bit_val_by_pos(int n, int bp);

int get_bit_count(int n)
{
	int i = 0, bc = 0, bp = 0, bitval;

	for(i = 31; i >= 0; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		if (bitval == 1)
			bc = bc + 1;
	}
	return bc;
}

