const cpp = {
    gerarClasse: (nomeClasse, atributos, tipoAtributos) => {
        let html = "";
        html += `// ${nomeClasse}.h <br>`;
        html += `using namespace std;<br>`;
        html += `<br><br>`;
        html += `//interface da classe<br>`;
        html += `class ${nomeClasse}{<br>`;
        html += `private:<br>`;
        atributos.map((atb, i) => {
            html += `${tipoAtributos[i]} ${atb};<br>`;
        });
        html += `<br>`;
        html += `public:<br>`;
        html += `${nomeClasse}();<br>`
        html += `${nomeClasse}(`;
        atributos.map((atb, i) => {
            html += ((i + 1) != atributos.length) ? `${tipoAtributos[i]}, ` : `${tipoAtributos[i]}`;
        });
        html += `);<br><br>`;
        html += `void ler();<br>`;
        html += `void imprimir();<br><br>`;
        html += `//métodos get ou de acesso<br>`;
        atributos.map((atb, i) => {
            html += `${tipoAtributos[i]} get${atb.charAt(0).toUpperCase() + atb.slice(1)}();<br>`;
        });
        html += `<br>`;
        html += `//métodos set ou de modificação de valores<br>`;
        atributos.map((atb, i) => {
            html += `void set${atb.charAt(0).toUpperCase() + atb.slice(1)}(${tipoAtributos[i]});<br>`;
        });
        html += `<br>};<br><br>`;
        html += `//Corpo dos métodos<br>`;
        html += `${nomeClasse}::${nomeClasse}() {<br>`;
        atributos.map((atb, i) => {
            html += `this->${atb} = ${cpp.dvalue(tipoAtributos[i])};<br>`;
        });
        html += `}<br><br>`;
        html += `${nomeClasse}::${nomeClasse}(`;
        atributos.map((atb, i) => {
            html += ((i + 1) != atributos.length) ? `${tipoAtributos[i]} ${atb}, ` : `${tipoAtributos[i]} ${atb}`;
        });
        html += `) {<br>`;
        atributos.map((atb, i) => {
            html += `this->${atb} = ${atb};<br>`;
        });
        html += `}<br><br>`;
        html += `void ${nomeClasse}::ler(){<br>`;
        html += `cout<<"&#92;nLer dados de ${nomeClasse}&#92;n";<br>`;
        atributos.map((atb, i) => {
            html += `cout<<"Informe o ${atb.charAt(0).toUpperCase() + atb.slice(1)}:";<br>`;
            html += `getline(cin, ${atb});fflush(stdin);<br>`;
        });
        html += `}<br><br>`;
        html += `void ${nomeClasse}::imprimir() {<br>`;
        html += `cout<<"&#92;nImprimir dados de ${nomeClasse}&#92;n";<br>`;
        atributos.map((atb, i) => {
            html += `cout<<"${atb.charAt(0).toUpperCase() + atb.slice(1)}:" << ${atb} << endl;<br>`;
        });
        html += `}<br><br>`;
        atributos.map((atb, i) => {
            html += `${tipoAtributos[i]} ${nomeClasse}::get${atb.charAt(0).toUpperCase() + atb.slice(1)}(){<br>`;
            html += `return this->${atb};<br>`;
            html += `}<br><br>`;
            html += ``;
            html += `void ${nomeClasse}::set${atb.charAt(0).toUpperCase() + atb.slice(1)}(${tipoAtributos[i]} ${atb}){<br>`;
            html += `this->${atb} = ${atb};<br>`;
            html += `}<br><br>`;
            html += ``;
        });
        html += ``;
        html += ``;
        html += ``;
        html += ``;

        document.body.insertAdjacentHTML("beforeend", html);
    },
    dvalue: (type, test) => {
        if(test != null && test != false) {
            switch (type) {
                case "string":
                    return `"Teste"`;
    
                case "int":
                    return `25`;
    
                case "float":
                    return `64`;
            }
        }else {
            switch (type) {
                case "string":
                    return `""`;
    
                case "int":
                    return 0;
    
                case "float":
                    return 0;
            }
        }
    },
    gerarMain: (nomeClasse, atributos, tipoAtributos) => {
        let html = `//${nomeClasse}.cpp<br>`;
        html += `#include "${nomeClasse}.h"<br><br>`;
        html += `int main(){<br>`;
        html += `${nomeClasse} ${nomeClasse.toLowerCase()}1;<br>`;
        html += `${nomeClasse.toLowerCase()}1.imprimir();<br><br>`;
        html += `${nomeClasse} ${nomeClasse.toLowerCase()}2(`;
        atributos.map((atb, i) => {
            html += ((i + 1) != atributos.length) ? `${cpp.dvalue(tipoAtributos[i], true)}, ` : `${cpp.dvalue(tipoAtributos[i], true)}`;
        });
        html += `);<br>`;
        html += `${nomeClasse.toLowerCase()}2.imprimir();<br>`;
        html += `}<br>`;
        document.body.insertAdjacentHTML("beforeend", html);
    }
}
