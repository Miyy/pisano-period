//  pis.cpp
//  Pisano period function

extern int fib(int m, bool new_loop);

void pis(int m)
{
	int period = 1,
	    pre_fib = fib(m, 1),
	    cur_fib = fib(m, 1);

	cout << "\t\t\t<tr>\n";
	cout << "\t\t\t\t<td>" << m << "</td>\n";

	while(period <= 20)
	{
		cout << "<td>" << cur_fib << "</td>";
		pre_fib = cur_fib;
		cur_fib = fib(m, 0);
		++period;
	}

	pre_fib = fib(m, 1);
	cur_fib = fib(m, 1);
	period = 1;

	while(pre_fib != 1 && cur_fib)
	{	
		pre_fib = cur_fib;
		cur_fib = fib(m, 0);
		++period;
	}

	cout << "\t\t\t\t<td>" << period << "</td>\n";
	cout << "\t\t\t</tr>\n";
}
