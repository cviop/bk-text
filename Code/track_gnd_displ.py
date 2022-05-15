from gmplot import gmplot

def main():
    gmap = gmplot.GoogleMapPlotter(50.1414537,14.6213022,11.94)
    
    while True:
        # -- Kod pro ziskani novych dat -- #

        # Vykreselni novych dat na mapu
        gmap.marker(latitude, longitude, 'cornflowerblue')
        gmap.draw("my_map.html")
