#ifndef FRENCH_H
#define FRENCH_H
 
#include <3ds/types.h>
 
// FRENCH
static const char *const lang_FR[STR_MAX] = {
     
	/** GUI **/
	": Retourner vers le Menu HOME",							// "Return to HOME Menu"
	"START",                                                    // "START" (used on cartridge indicator)
	"Pas de cartouche",                                         // "No cartridge"
	"Paramètres",                                               // "Settings"
	"Cartouche inconnue",                                       // "Unknown Cartridge"
	": Retour",                                                // "B: Back"    
	": Ajouter jeux",												// "Y: Add Games"
	 
	/** Settings: GUI **/
	"Langue",                                                 	// "Language"
	"Thème",                                                    // "Theme"
	"Couleur",                                                  // "Color"
	"Menu des couleurs",                                        // "Menu Color"
	"Afficher le nom du fichier",                               // "Show filename"
	"Compteur de jeux",                                          // "Game counter"
	"Image du bas personnalisée",                               // "Custom bottom image"
	"Mise à jour auto. bootstrap",                        // "Auto-update bootstrap"
	"Mise à jour auto. TWLoader",                           	// "Auto-update to latest TWLoader"
	 
	/** Settings: NTR/TWL_mode **/
	"Sélection du linker(s)",                                   // "Flashcard(s) select"
	"LED arc-en-ciel",                                          // "Rainbow LED"
	"Vitesse du CPU ARM9",                                      // "ARM9 CPU Speed"
	"Boost VRAM",                                               // "VRAM boost"
	"Écran de démarrage DS/DSi",                                // "DS/DSi Boot Screen"
	"Message de Santé et Sécurité",                             // "Health and Safety message"
	"Reset Slot-1",                                          // "Reset Slot-1"
	"Affichage Console",                                           		// "Console output"
	"Verrouiller SCFG_EXT ARM9",                                 // "Lock ARM9 SCFG_EXT"
	"Bootstrap",                                                // "Bootstrap"
	 
	/** Settings: Top Screen **/
	": Mise à jour du bootstrap (release)",        // "X: Update bootstrap (Official release)"
	": Mise à jour du bootstrap (non-officiel)",    // "Y: Update bootstrap (Unofficial release)"
	"START: Mettre à jour TWLoader",                            // "START: Update TWLoader"
	 
	/** Settings: GUI values **/
	 
	// Color
	"Gris",                                                     // "Gray"
	"Brun",                                                    	// "Brown"
	"Rouge",                                                    // "Red"
	"Rose",                                                     // "Pink"
	"Orange",                                                   // "Orange"
	"Jaune",                                                   	// "Yellow"
	"Jaune-Vert",                                            	// "Yellow-Green"
	"Vert 1",                                                  	// "Green 1"
	"Vert 2",                                                  	// "Green 2"
	"Vert clair",                                             // "Light green"
	"Bleu ciel",                                                // "Sky blue"
	"Bleu clair",                                             // "Light blue"
	"Bleu",                                                     // "Blue"
	"Violet",                                                   // "Violet"
	"Pourpre",                                                  // "Purple"
	"Fuchsia",                                                  // "Fuchsia"
	"Rouge et bleu",                                               // "Red and blue"
	"Jaune et vert",                                             	// "Green and yellow"
	"Noël",                                                		// "Christmas"

	// Menu Color
	"Blanc",                                                    // "White"
	"Noir",                                                    	// "Black"

	/** Settings: GUI descriptions **/
	"La langue à utiliser pour l'UI,",                          // "The language to use for the UI,"
	"incluant le texte des bannières des jeux.",                // "including game banner text."
	 
	"Le thème à utiliser dans TWLoader.",                       // "The theme to use in TWLoader."
	"Appuyez sur  pour les sous-thèmes.",                      // "Press A for sub-themes."
	 
	"La couleur de l'arrière plan du haut,",                    // "The color of the top background,"
	"de la bordure START et du contour des points.",            // "the START border, and the circling dots."
	 
	"La couleur de la bordure du haut,",                       	// "The color of the top border,"
	"et de l'arrière plan du bas.",                             // "and the bottom background."
	 
	"Afficher le nom du fichier du jeu dans ",  				// "Shows game filename at the top of the bubble."
	"le bas de la bulle.",                                      // (empty)
	 
	"Un numéro de jeu sélectionné et listé",              	// "A number of selected game and listed games"
	"est affiché au dessous de la bulle de texte.",            // "is shown below the text bubble."
	 
	"Charge une image personnalisée sur l'écran du bas",        // "Loads a custom bottom screen image"
	"dans le menu des jeux.",                                   // "for the game menu."
	 
	"Mise à jour auto. de nds-bootstrap au démarrage.",         // "Auto-update nds-bootstrap at launch."
	"",                                                         // (empty)

	"Télécharger automatiquement le dernier CIA ",              // "Auto-download the CIA of the latest"
	"de TWLoader au démarrage.",                              	// "TWLoader version at launch."
	 
	/** Settings: NTR/TWL_mode descriptions **/
	"Sélectionnez un linker à utiliser pour",                   // "Pick a flashcard to use to"
	"lancer les ROMs.",                                        	// "run ROMs from it."
	 
	"Afficher un arc-en-ciel clignotant dans",  // "See rainbow colors glowing in"
	"la LED de notification.",                                  // "the Notification LED."
	 
	"Sélectionner pour se débarrasser de lags ",             	// "Set to TWL to get rid of lags in some games."
	"dans certains jeux.",                                      // (empty)
	 
	"Permettre l'écriture VRAM 8 bit",                             // "Allows 8 bit VRAM writes"
	"et étendre le bus de 32 bit.",                           	// "and expands the bus to 32 bit."
	 
	"Afficher l'animation de démarrage de la DS/DSi",           // "Displays the DS/DSi boot animation"
	"avant le lancement du jeu.",                                    	// "before launched game."
	 
	"Afficher le message de Santé et Sécurité",                 // "Displays the Health and Safety"
	"sur l'écran du bas.",                            			// "message on the bottom screen."
	 
	"Activer si les cartouches Slot-1 sont coincées",        // "Enable this if Slot-1 carts are stuck"
	"sur des écrans blancs.",                                   // "on white screens."
	 
	"Aficher du texte avant de lancer un jeu.",                 // "Displays some text before launched game."
	"",                                                         // (empty)
	 
	"Verrouille le SCFG_EXT de l'ARM9,",                         // "Locks the ARM9 SCFG_EXT,"
	"évitant les conflits avec la récente libnds.",      // "avoiding conflict with recent libnds."
	 
	"Changer entre les fichiers de bootstrap ",              // "Change between release and"
	"(release et non-officiel).",                               			// "unofficial bootstrap file."
	 
	/** Start menu **/
	// Options
	"Emplacement des jeux",                                    // "Game location"
	"Box Art: Activer",                                         // "Box Art: On"
	"Box Art: Désactiver",                                      // "Box Art: OFF"
	"Démarrer GBARunner2",                                      // "Start GBARunner2"
	"Bordure du haut: Activer",                                 // "Top border: On"
	"Bordure du haut: Désactiver",                              // "Top border: Off"
	"Désélectionner la donor ROM",                              // "Unset donor rom"
	"Recherche",                                                // "Search"
	// Values
	"Carte SD",                                                 // "SD Card"
	"Linker",                                                	// "Flashcard"
	"Utiliser le clavier pour trouver des roms",                // "Use the keyboard to find roms"
	 
	/** Select menu **/
	// Options
	"Vitesse du CPU ARM9",                                      // "ARM9 CPU Speed"
	"Boost VRAM",                                               // "VRAM boost"
	"Verrouiller SCFG_EXT ARM9",                                 // "Lock ARM9 SCFG_EXT"
	"Définir comme donor ROM",                                  // "Set as donor ROM"
	"Définir la couleur de la LED",                             // "Set LED color"
	// Values
	"Par défaut",                                               // "Default"
	 
	/** Sub-theme **/
	"Sélection du sous-thème: DSi Menu",                        // "Sub-theme select: DSi Menu"
	"Sélection du sous-thème: R4",                              // "Sub-theme select: R4"
	"Sélection du sous-thème: akMenu/Wood",                     // "Sub-theme select: Wood"
	 
	"Aucun autre sous-thèmes pour ce thème.",                  // "No sub-themes exist for this theme."
	 
	/** Settings others minor strings **/
	"/: Sauvegarder and Retourner",                           // "A/B: Save and Return"
	"Gauche/Droite: Choisir",                                   // "Left/Right: Pick"
	"Paramètres: GUI",                                          // "Settings: GUI"
	"Paramètres: NTR/TWL-mode",                                 // "Settings: NTR/TWL-mode"
 
};
 
 
#endif /* FRENCH_H */
