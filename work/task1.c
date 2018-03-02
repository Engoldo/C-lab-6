void drawFractal(char arr[][100], int x, int y, int size)
{
	if (size > 0)
	{
		drawFractal(arr, x , y, size / 3);
		drawFractal(arr, x + size, y, size / 3);
		drawFractal(arr, x - size, y, size / 3);
		drawFractal(arr, x, y + size, size / 3);
		drawFractal(arr, x, y - size, size / 3);
	}
	arr[y][x]='*';
}