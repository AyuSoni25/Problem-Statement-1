const readline  = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
})

readline.question(`Enter Month Number : `, month => {
    switch (month) {
        case '1':
            console.log(`31 days`);
            break;
        case '2':
            console.log(`28 days`);
            break;
        case '3':
            console.log(`31 days`);
            break;
        case '4':
            console.log(`30 days`);
            break;
        case '5':
            console.log(`31 days`);
            break;
        case '6':
            console.log(`30 days`);
            break;
        case '7':
            console.log(`31 days`);
            break;
        case '8':
            console.log(`31 days`);
            break;
        case '9':
            console.log(`30 days`);
            break;
        case '10':
            console.log(`31 days`);
            break;
        case '11':
            console.log(`30 days`);
            break;
        case '12':
            console.log(`31 days`);
            break;
                
        default:
            console.log(`Bad Input`);
            break;
    }
    readline.close();
})