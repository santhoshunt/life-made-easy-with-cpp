# Remove leading and trailing white spaces from a string

> Since C++ doesn't have an inbuild method to do this we combine certain methods like `string::erase()`, `string::find_last_not_of()`, `string::find_first_not_of()` to accomplish the task. One could actually remove any leading or trailing characters from a string using this technique

## References

- [string::erase](https://www.cplusplus.com/reference/string/string/erase/)
- [string::find_first_not_of](https://www.cplusplus.com/reference/string/string/find_first_not_of/)
- [string::find_last_not_of](https://www.cplusplus.com/reference/string/string/find_last_not_of/)

## Note !!

> You could also use `boost::trim in C++ library` to do this. [Click here](https://www.geeksforgeeks.org/boosttrim-in-cpp-library/) to know more about it.
