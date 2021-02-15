#ifndef MAIN
# define MAIN

# include <ctime>
# include <ctime>
# include <cstdlib>

struct	Data { std::string s1; int n; std::string s2; };

void	*serialize(void);
Data	*deserialize(void *raw);

#endif