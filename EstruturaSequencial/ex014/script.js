let peso    
let excesso
let multa

function pesoPeixe(peso) {

    if (peso > 50) {
        excesso = peso - 50
        multa = excesso * 4
    } else {
        excesso = 0
        multa = 0
    }

    console.log(`Exceso de ${excesso} KG e a multa de R$ ${multa}`)
}


console.log(pesoPeixe(80))