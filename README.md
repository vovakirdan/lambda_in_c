# Lambda

## Usage
```C
int main() {
    int (*p)(int);

    assign(p, 
        λ(x, →, x+1);
    );
    printf("%d\n", p(1));  // 2
    return 0;
}
```
