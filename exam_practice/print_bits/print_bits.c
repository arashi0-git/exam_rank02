

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

//octetをi bitだけ右にずらすoctetの一桁目が0か1か判断して出力
//&演算子で判断