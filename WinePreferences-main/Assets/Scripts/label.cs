using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class label : MonoBehaviour
{
    public TextMeshProUGUI label1;
    public TextMeshProUGUI label2;
    public TextMeshProUGUI label3;

    public string[] labels = {"Agiorgitiko", "Aglianico", "Albillo", "Aleatico", "Alfrocheiro",
            "Ambulo Blanco", "Ansonica", "Aramon", "Arinto", "Arneis", "Aspiren", "Athiri", "Aubun",
            "Azal", "Bacchus", "Baga", "Bical", "Bobal", "Bordeaux", "Braquet", "Breton", "Burgundy",
            "Calabrese", "Callet", "Canaiolo", "Cardinal", "Carignan", "carricante", "Cencibel",
            "Champagne", "Chasan", "Cienna", "Cinsaut", "Concord", "Cot", "Crouchen", "Dolcetto",
            "Dornfelder", "Durif", "Encruzado", "Erbaluce", "Espadeiro", "Falanghina", "Fiano",
            "Frappato", "Freisa", "Friulano", "Fromenteau", "Furmint", "Gamay Noir", "Garganega",
            "Garnacha Peluda", "Glera", "Godello", "Gordo", "Graciano", "Granaccia", "Grasevina",
            "Grau", "Grauburgender", "Grechetto", "Greco Nero", "Grillo", "Groslot", "Gro Manseng",
            "Hanepoot", "Harriague", "Herbemont", "Inzolia", "Isabella", "Jaen", "Jakot", "Kadarka",
            "Kanzler", "Kekfrankos", "Kerner", "Kevedinka", "Koshu", "Kotsifali", "La Crosse",
            "Labrusca", "Lemberger", "Listan", "Loureiro", "Macabeo", "Madeira", "Madrasa", "Malagousia",
            "Malbec", "Malvasia", "Marechal Foch", "Maria Gomes", "Marquette", "Mataro", "Mauzac",
            "Mavrud", "Mazuelo", "Melnik", "Melon", "Merlot", "Meunier", "Milgranet", "Misket", "Moll",
            "Morillon", "Moristel", "Moscatel", "Moscato", "Moschofilero", "Muscadelle", "Neyret", "Niagra",
            "Nieddera", "Norton", "Nosiola", "Ormeasco", "Ortego", "Ortrugo", "Ottavienello", "Pansa Blanca",
            "Pardillo", "Parellada", "Passerina", "Pecorino", "Pederna", "Pelaverga", "Peloursin", "Persan",
            "Picolit", "Pineau", "Pinot Bianco", "Pinot Grigio", "Poulsard", "Primitivo", "Rebula", "Ravat",
            "Regent", "Ribollo", "Riesling", "Rivaner", "Rolle", "Rollo", "Rondo", "Rondinella", "Rubin",
            "Sagrantino", "Sangiovese", "Saperavi", "Sauvignonasse", "Savatiano", "Schiava", "Seibel",
            "Shiraz", "Silvaner", "Sirah", "Syrah", "Terret", "Thiniatiko", "Timorasso", "Tinta Amarela",
            "Verdesse", "Vidal", "Villard", "Zelen", "Zenit"};

    public void display()
    {
        label1.text = labels[Random.Range(0, labels.Length)].ToString();
        label2.text = labels[Random.Range(0, labels.Length)].ToString();
        label3.text = labels[Random.Range(0, labels.Length)].ToString();
    }
}
