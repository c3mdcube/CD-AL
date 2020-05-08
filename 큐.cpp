#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	queue<int> q;

	while (n--)
	{
		char cmd[10];
		scanf("%s", cmd);

		if (!strcmp(cmd, "push"))
		{
			int num;
			scanf("%d", &num);
			q.push(num);
		}
		else if (!strcmp(cmd, "pop"))
		{
			if (q.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (!strcmp(cmd, "size"))
		{
			printf("%d\n", q.size());
		}
		else if (!strcmp(cmd, "empty"))
		{
			printf("%d\n", q.empty());
		}
		else if (!strcmp(cmd, "front"))
		{
			if (q.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", q.front());
			}
		}
		else if (!strcmp(cmd, "back"))
		{
			if (q.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", q.back());
			}
		}
	}

	return 0;
}
