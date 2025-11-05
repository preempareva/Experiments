var notes_list =[]
//retrieve notes from local storage

let rectangle2 = document.getElementsByTagName("rectangle2");

console.log(main);
for(let note in notes_list)


function expand(id){

    //to expand
    let element = document.getElementById(id);
    element.classList.toggle("active");

    //to edit after expand
    text=element.childNodes[1];
    text.toggleAttribute("disabled");

    //to minimize and save
    notes_list(id)=text.value;
    localStorage.setItem("notes",JSON.stringify(notes_list));
    console.log(notes_list);
}

function del(id){
    let element = document.getElementById(id);
    element.remove();
}