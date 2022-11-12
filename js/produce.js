const input = require('readline-sync').question;
const fs = require('fs');

const count = input("Please enter the problem number! : ")

const strig = fs.readFileSync('../template.c').toString()

fs.writeFile(`../${count}.c` , strig ,function(err){
    if (err === null) {
        console.log('성공적으로 파일을 생성하였습니다.');
    } else {
        console.log('파일 생성을 실패했습니다.');
    }
});

