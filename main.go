package main

import "github.com/krux02/swig-test/foo"
import "fmt"

func main() {
	fmt.Println("Hello World!")
	fmt.Println(foo.Foo(12, 17))
}
