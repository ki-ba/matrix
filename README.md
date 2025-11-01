# libmatrix

## minimal matrix calculation library

A small matrix calculation library for C projects. 
Made mainly to freshen my memories for the miniRT 42 Project which needs vectors.

### Abilities

+ Create a matrix of size i, j with a double[] initializer array
+ multiply  two matrixes and allocate the result
+ calculate the scalar product of two matrixes

### Installation

```bash
git clone git@github.com:ki-ba/matrix.git
git submodule update --recursive
```

### Dependancies

A working `libft` is needed (present as a submodule) or at least `ft_calloc`.

### License

[MIT License](https://mit-license.org/).
