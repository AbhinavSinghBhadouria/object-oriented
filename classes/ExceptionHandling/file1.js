var person={
    name: "John",
    age: 30,
    address: "PSIT KANPUR",
}
console.log(person.name);


var student ={}
student["name"]="John";
student["age"]=30;
student["address"]="PSIT KANPUR";

console.log(student);


let x=5;
let y=10;
if(x<y){
    obj={greeting: "hi there"};
}

console.log(obj);


const myHonda={
    color: "red",
    wheels: 4,
    engine:{ cylinders:4, size:2.2},
};

console.log(myHonda.engine.cylinders);


function Car(make, model, year){
    this.make=make;
    this.madel=model;
    this.year=year;
}

const myCar= new Car("Ford", "Mustang", 2021);
const ncar= new Car("Nissan", "Altima", 2020);
const tcar= new Car("Toyota", "Camry", 2022);

console.log(myCar.make);
console.log(ncar.model);
console.log(tcar.year);



// 