use rand::Rng;
use std::time::{Duration, Instant};

//Funcion principal
//Se encarga de realizar una busqueda secuencial en un arreglo randomizado
fn main() -> () {
    let now = Instant::now();

    let num1: u64 = 0;//Los numeros son de tipo primitivo de rust u64, se define 0 siendo este numero no parte de la lista, asi se evalua el peor caso
    print! ("Se va a buscar el numero: ");
    println! ("{}",num1);

    let mut random = rand::thread_rng();

    let vals:  Vec<u64> = (1..10000000).map(|_|random.gen_range(1..10000000)).collect(); // Se encarga de crear un arreglo/vector compuesto de numeros randomizados

    let mut state = false;

    for i in &vals {
        if *i == num1 { 
            state = true;
        }
    }

    if state {
        println!("El numero buscado si se encuentra en la lista");
    }
    else{
        println!("El numero buscado no se encuentra en la lista");
    }

    print!("El tiempo de ejecucion es de: ");
    println!("{}", now.elapsed().as_nanos());

}
