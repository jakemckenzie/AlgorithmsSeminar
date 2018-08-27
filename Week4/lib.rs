const ITERS: usize = 20;

fn print_fib(n: usize) {
    let mut x = (1, 1);
    for i in 0..n {
        println!("{}: {}", i, x.0);
        x = (x.1, x.0 + x.1)
    }
}

fn make_fib(n: usize) -> Vec<i32> {
    let mut x = vec![1, 1];
    for i in 2..n {
        let next_x = x[i - 1] + x[i - 2];
        x.push(next_x)
    }
    x
}

struct Fib {
    x: (usize, usize),
}

impl Fib {
    fn new() -> Fib {
        Fib { x: (0, 1) }
    }
}

impl Iterator for Fib {
    type Item = usize;
    fn next(&mut self) -> Option<Self::Item> {
        self.x = (self.x.1, self.x.0 + self.x.1);
        Some(self.x.0)
    }
}

fn main() {
    println!("# print_fib");
    print_fib(ITERS);

    println!("\n# make_fib");
    println!("{:?}", make_fib(ITERS));

    println!("\n# iterator");
    for (i, x) in Fib::new().take(ITERS).enumerate() {
        println!("{}: {}", i, x);
    }
}