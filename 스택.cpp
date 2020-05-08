#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	stack<int> s;

	while (n--)
	{
		char cmd[10];
		scanf("%s", cmd);

		if (!strcmp(cmd, "push"))
		{
			int num;
			scanf("%d", &num);
			s.push(num);
		}
		else if (!strcmp(cmd, "top"))
		{
			printf("%d\n", s.empty() ? -1 : s.top());
		}
		else if (!strcmp(cmd, "size"))
		{
			printf("%d\n", s.size());
		}
		else if (!strcmp(cmd, "empty"))
		{
			printf("%d\n", s.empty());
		}
		else if (!strcmp(cmd, "pop"))
		{
			printf("%d\n", s.empty() ? -1 : s.top());
			if (!s.empty())
				s.pop();
		}
	}

	return 0;
}
