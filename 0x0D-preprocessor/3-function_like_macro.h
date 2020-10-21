#ifndef ABS
#define ABS(x)

int main()
{
#if x < 0
	{
		(x = (x * -1));
	}
#endif /** If **/
	return (0);
}
#endif /** ABS **/
