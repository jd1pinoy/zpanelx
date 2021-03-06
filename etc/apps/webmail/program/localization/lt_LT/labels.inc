<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Sveiki! Čia $product';
$labels['username']  = 'Naudotojo vardas';
$labels['password']  = 'Slaptažodis';
$labels['server']    = 'Serveris';
$labels['login']     = 'Prisijungti';

// taskbar
$labels['logout']   = 'Atsijungti';
$labels['mail']     = 'El. paštas';
$labels['settings'] = 'Nuostatos';
$labels['addressbook'] = 'Adresų knyga';

// mailbox names
$labels['inbox']  = 'Gauti laiškai';
$labels['drafts'] = 'Juodraščiai';
$labels['sent']   = 'Išsiųsti laiškai';
$labels['trash']  = 'Šiukšlinė';
$labels['junk']   = 'Brukalas';

// message listing
$labels['subject'] = 'Tema';
$labels['from']    = 'Siuntėjas';
$labels['sender']  = 'Siuntėjas';
$labels['to']      = 'Gavėjas';
$labels['cc']      = 'Kopija';
$labels['bcc']     = 'Slaptoji kopija';
$labels['replyto'] = 'Atsakymą gaus';
$labels['followupto'] = 'Followup-To';
$labels['date']    = 'Data';
$labels['size']    = 'Dydis';
$labels['priority'] = 'Prioritetas';
$labels['organization'] = 'Organizacija';
$labels['readstatus'] = 'Neskaitytas';
$labels['listoptions'] = 'Sąrašo nuostatos…';

$labels['mailboxlist'] = 'Aplankai';
$labels['messagesfromto'] = 'Laiškai nuo $from iki $to iš $count';
$labels['threadsfromto'] = 'Gijos nuo $from iki $to iš $count';
$labels['messagenrof'] = 'Laiškas $nr iš $count';
$labels['fromtoshort'] = '$from – $to iš $count';

$labels['copy']     = 'Kopijuoti';
$labels['move']     = 'Perkelti';
$labels['moveto']   = 'Perkelti į…';
$labels['download'] = 'Parsisiųsti';
$labels['open']     = 'Atverti';
$labels['showattachment'] = 'Rodyti';
$labels['showanyway'] = 'Vistiek rodyti';

$labels['filename'] = 'Failo vardas';
$labels['filesize'] = 'Failo dydis';

$labels['addtoaddressbook'] = 'Įtraukti į adresų knygą';

// weekdays short
$labels['sun'] = 'Sek';
$labels['mon'] = 'Pir';
$labels['tue'] = 'Ant';
$labels['wed'] = 'Tre';
$labels['thu'] = 'Ket';
$labels['fri'] = 'Pen';
$labels['sat'] = 'Šeš';

// weekdays long
$labels['sunday']    = 'Sekmadienis';
$labels['monday']    = 'Pirmadienis';
$labels['tuesday']   = 'Antradienis';
$labels['wednesday'] = 'Trečiadienis';
$labels['thursday']  = 'Ketvirtadienis';
$labels['friday']    = 'Penktadienis';
$labels['saturday']  = 'Šeštadienis';

// months short
$labels['jan']	= 'Sau';
$labels['feb']	= 'Vas';
$labels['mar']	= 'Kov';
$labels['apr']	= 'Bal';
$labels['may']	= 'Gegužė';
$labels['jun']	= 'Bir';
$labels['jul'] 	= 'Lie';
$labels['aug']	= 'Rgp';
$labels['sep']	= 'Rgs';
$labels['oct']	= 'Spl';
$labels['nov']	= 'Lap';
$labels['dec']	= 'Grd';

// months long
$labels['longjan']	= 'Sausis';
$labels['longfeb']	= 'Vasaris';
$labels['longmar']	= 'Kovas';
$labels['longapr']	= 'Balandis';
$labels['longmay']	= 'Gegužė';
$labels['longjun']	= 'Biržėlis';
$labels['longjul']	= 'Liepa';
$labels['longaug']	= 'Rugpjūtis';
$labels['longsep']	= 'Rugsėjis';
$labels['longoct']	= 'Spalis';
$labels['longnov']	= 'Lapkritis';
$labels['longdec']	= 'Gruodis';

$labels['today'] = 'Šiandien';

// toolbar buttons
$labels['refresh']          = 'Atnaujinti';
$labels['checkmail']        = 'Tikrinti, ar yra naujų laiškų';
$labels['compose']          = 'Rašyti naują laišką';
$labels['writenewmessage']  = 'Rašyti naują laišką';
$labels['reply']            = 'Atsakyti';
$labels['replytomessage']   = 'Atsakyti siuntėjui';
$labels['replytoallmessage'] = 'Atsakyti el. pašto grupei arba laiško siuntėjui ir visiems jo gavėjams';
$labels['replyall']         = 'Atsakyti visiems';
$labels['replylist']        = 'Atsakyti el. pašto grupei';
$labels['forward']          = 'Persiųsti';
$labels['forwardinline']    = 'Persiųsti cituojant';
$labels['forwardattachment'] = 'Persiųsti priedu';
$labels['forwardmessage']   = 'Persiųsti laišką';
$labels['deletemessage']    = 'Pašalinti laišką';
$labels['movemessagetotrash'] = 'Perkelti laišką į šiukšlinę';
$labels['printmessage']     = 'Atspausdinti laišką';
$labels['previousmessage']  = 'Rodyti ankstesnį laišką';
$labels['firstmessage']     = 'Rodyti pirmąjį laišką';
$labels['nextmessage']      = 'Rodyti tolesnį laišką';
$labels['lastmessage']      = 'Rodyti paskutinį laišką';
$labels['backtolist']       = 'Grižti į laiškų sarašą';
$labels['viewsource']       = 'Rodyti pirminį tekstą';
$labels['mark']             = 'Pažymėti';
$labels['markmessages']     = 'Pažymėti laiškus';
$labels['markread']         = 'Kaip skaitytus';
$labels['markunread']       = 'Kaip neskaitytus';
$labels['markflagged']      = 'Pažymėti gairele';
$labels['markunflagged']    = 'Pašalinti gairelę';
$labels['moreactions']      = 'Kiti veiksmai…';
$labels['more']             = 'Daugiau';
$labels['back']             = 'Grįžti';
$labels['options']          = 'Nuostatos';

$labels['select'] = 'Pažymėti';
$labels['all'] = 'visus';
$labels['none'] = 'Nerūšiuoti';
$labels['currpage'] = 'matomus šiame puslapyje';
$labels['unread'] = 'neskaitytus';
$labels['flagged'] = 'su gairele';
$labels['unanswered'] = 'neatsakytus';
$labels['withattachment'] = 'Su priedu';
$labels['deleted'] = 'pašalintus';
$labels['undeleted'] = 'Neištrintas';
$labels['invert'] = 'invertuoti';
$labels['filter'] = 'Rodyti';
$labels['list'] = 'Sąrašas';
$labels['threads'] = 'Gijos';
$labels['expand-all'] = 'išskleisti visas';
$labels['expand-unread'] = 'išskleisti turinčias neskaitytų laiškų';
$labels['collapse-all'] = 'suskleisti visas';
$labels['threaded'] = 'Rodyti gijas';

$labels['autoexpand_threads'] = 'Išskleisti gijas';
$labels['do_expand'] = 'visas';
$labels['expand_only_unread'] = 'tik turinčias neskaitytų laiškų';
$labels['fromto'] = 'Siuntėjas/Gavėjas';
$labels['flag'] = 'Gairelė';
$labels['attachment'] = 'Priedas';
$labels['nonesort'] = 'Nerūšiuoti';
$labels['sentdate'] = 'Išsiuntimo laikas';
$labels['arrival'] = 'Gavimo laikas';
$labels['asc'] = 'didėjančiai';
$labels['desc'] = 'mažėjančiai';
$labels['listcolumns'] = 'Stulpelių sąrašas';
$labels['listsorting'] = 'Stulpelis rikiavimui';
$labels['listorder'] = 'Rikiavimo tvarka';
$labels['listmode'] = 'Sąrašo rodymo veiksena';

$labels['folderactions'] = 'Veiksmai su aplankais…';
$labels['compact'] = 'Suglaudinti';
$labels['empty'] = 'Ištuštinti';

$labels['quota'] = 'Disko naudojimas';
$labels['unknown']  = 'nežinomas';
$labels['unlimited']  = 'neribotas';

$labels['quicksearch']  = 'Sparčioji paieška';
$labels['resetsearch']  = 'Atšaukti paiešką';
$labels['searchmod']  = 'Paieškos modifikatoriai';
$labels['msgtext']  = 'Visas laiškas';
$labels['body']  = 'Laiško tekstas';

$labels['openinextwin'] = 'Atverti naujame lange';
$labels['emlsave'] = 'Parsisiųsti (.eml)';
$labels['changeformattext'] = 'Rodyti grynojo teksto formatu';
$labels['changeformathtml'] = 'Rodyti HTML formatu';

// message compose
$labels['editasnew']      = 'Redaguoti kaip naują';
$labels['send']           = 'Siųsti';
$labels['sendmessage']    = 'Išsiųsti laiską';
$labels['savemessage']    = 'Išsaugoti šį juodraštį';
$labels['addattachment']  = 'Pridėti failą';
$labels['charset']        = 'Koduotė';
$labels['editortype']     = 'Laiško tipas';
$labels['returnreceipt']  = 'Prašyti pristatymo pažymos';
$labels['dsn']            = 'Laiško pristatymo pažyma';
$labels['mailreplyintro'] = '$date, $sender rašė:';
$labels['originalmessage'] = 'Originalus laiškas';

$labels['editidents']    = 'Tvarkyti tapatybes';
$labels['spellcheck']    = 'Tikrinti rašybą';
$labels['checkspelling'] = 'Tikrinti rašybą';
$labels['resumeediting'] = 'Tęsti redagavimą';
$labels['revertto']      = 'Atstatyti į';

$labels['attach'] = 'Pridėti failą';
$labels['attachments'] = 'Pridėti failai';
$labels['upload'] = 'Įkelti';
$labels['uploadprogress'] = '$percent ($current iš $total)';
$labels['close']  = 'Užverti';
$labels['messageoptions']  = 'Laiško savybės…';

$labels['low']     = 'Žemas';
$labels['lowest']  = 'Žemiausias';
$labels['normal']  = 'Normalus';
$labels['high']    = 'Aukštas';
$labels['highest'] = 'Aukščiausias';

$labels['nosubject']  = '(tema nenurodyta)';
$labels['showimages'] = 'Rodyti paveikslėlius';
$labels['alwaysshow'] = 'Visada rodyti paveikslėlius $sender laiškuose';
$labels['isdraft']    = 'Tai – laiško juodraštis.';
$labels['andnmore']   = '$nr daugiau...';
$labels['togglemoreheaders'] = 'Rodyti daugiau antraščių';
$labels['togglefullheaders'] = 'Įjungti/išjungti neapdorotas laiškų antraštes';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Grynasis tekstas';
$labels['savesentmessagein'] = 'Išsiųstus laiškus įrašyti į';
$labels['dontsave'] = 'neįrašyti';
$labels['maxuploadsize'] = 'Maksimalus leistinas failo dydis yra $size';

$labels['addcc'] = 'Pridėti Cc';
$labels['addbcc'] = 'Pridėti Bcc';
$labels['addreplyto'] = 'Pridėti Reply-To';
$labels['addfollowupto'] = 'Pridėti Followup-To';

// mdn
$labels['mdnrequest'] = 'Šio laiško siuntėjas paprašė patvirtinti, kad jūs jį perskaitėte. Ar išsiųsti tai patvirtinančią pažymą?';
$labels['receiptread'] = 'Patvirtinimas (laiškas perskaitytas)';
$labels['yourmessage'] = 'Tai – pažyma, patvirtinanti, jog buvo perskaitytas Jūsų laiškas';
$labels['receiptnote'] = 'Pastaba: šia pažyma patvirtinamas tik faktas, jog laiškas buvo parodytas gavėjui. Ja negarantuojama, jog gavėjas perskaitė ir suprato laiško turinį.';

// address boook
$labels['name']         = 'Rodomas vardas';
$labels['firstname']    = 'Vardas';
$labels['surname']      = 'Pavardė';
$labels['middlename']   = 'Kiti vardai';
$labels['nameprefix']   = 'Titulas';
$labels['namesuffix']   = 'Sufiksas';
$labels['nickname']     = 'Pravardė';
$labels['jobtitle']     = 'Pareigos';
$labels['department']   = 'Padalinys';
$labels['gender']       = 'Lytis';
$labels['maidenname']   = 'Mergautinė pavardė';
$labels['email']        = 'El. paštas';
$labels['phone']        = 'Telefono numeris';
$labels['address']      = 'Adresas';
$labels['street']       = 'Gatvė, namas ir butas';
$labels['locality']     = 'Miestas';
$labels['zipcode']      = 'Pašto kodas';
$labels['region']       = 'Regionas';
$labels['country']      = 'Valstybė';
$labels['birthday']     = 'Gimimo data';
$labels['anniversary']  = 'Jubiliejus';
$labels['website']      = 'Svetainė';
$labels['instantmessenger'] = 'Tikralaikiai pokalbiai';
$labels['notes'] = 'Pastabos';
$labels['male']   = 'vyras';
$labels['female'] = 'moteris';
$labels['manager'] = 'Vadybininkas(-ė)';
$labels['assistant'] = 'Padėjėjo(-os)';
$labels['spouse'] = 'Sutuoktinis';
$labels['allfields'] = 'Visi laukai';
$labels['search'] = 'Paieška';
$labels['advsearch'] = 'Išplėstinė paieška';
$labels['advanced'] = 'Išsamiau';
$labels['other'] = 'Kitas';

$labels['typehome']   = 'Namų';
$labels['typework']   = 'Darbo';
$labels['typeother']  = 'Kitas';
$labels['typemobile']  = 'Mobilusis';
$labels['typemain']  = 'Pagrindinis';
$labels['typehomefax']  = 'Namų faksas';
$labels['typeworkfax']  = 'Darbo faksas';
$labels['typecar']  = 'Automobilyje';
$labels['typepager']  = 'Pranešimų gaviklis';
$labels['typevideo']  = 'Vaizdo';
$labels['typeassistant']  = 'Padėjėjo(-os)';
$labels['typehomepage']  = 'Tinklalapis';
$labels['typeblog'] = 'Tinklaraštis';
$labels['typeprofile'] = 'Profilis';

$labels['addfield'] = 'Pridėti lauką…';
$labels['addcontact'] = 'Pridėti adresatą';
$labels['editcontact'] = 'Taisyti adresatą';
$labels['contacts'] = 'Adresatai';
$labels['contactproperties'] = 'Adresato savybės';
$labels['personalinfo'] = 'Asmeniniai duomenys';

$labels['edit']   = 'Redaguoti';
$labels['cancel'] = 'Atsisakyti';
$labels['save']   = 'Įrašyti';
$labels['delete'] = 'Pašalinti';
$labels['rename'] = 'Pervardinti';
$labels['addphoto'] = 'Pridėti';
$labels['replacephoto'] = 'Pakeisti';
$labels['uploadphoto'] = 'Įkelti nuotrauką';

$labels['newcontact']     = 'Sukurti naują adresatą';
$labels['deletecontact']  = 'Ištrinti pažymėtus adresatus';
$labels['composeto']      = 'Rašyti laišką';
$labels['contactsfromto'] = 'Adresatai nuo $from iki $to iš $count';
$labels['print']          = 'Spausdinti';
$labels['export']         = 'Eksportuoti';
$labels['exportall']      = 'Eksportuoti visus';
$labels['exportsel']      = 'Eksportuoti pažymėtus';
$labels['exportvcards']   = 'Eksportuoti adresatus  „vCard“ formatu';
$labels['newcontactgroup'] = 'Kurti adresatų grupę';
$labels['grouprename']    = 'Pervardinti grupę';
$labels['groupdelete']    = 'Pašalinti grupę';
$labels['groupremoveselected'] = 'Pašalinti pažymėtus adresatus iš grupės';

$labels['previouspage']   = 'Rodyti ankstesnį puslapį';
$labels['firstpage']      = 'Rodyti pirmąjį puslapį';
$labels['nextpage']       = 'Rodyti tolesnį puslapį';
$labels['lastpage']       = 'Rodyti paskutinį puslapį';

$labels['group'] = 'Grupė';
$labels['groups'] = 'Grupės';
$labels['personaladrbook'] = 'Asmeniniai adresai';

$labels['searchsave'] = 'Įrašyti kaip radinių aplanką';
$labels['searchdelete'] = 'Pašalinti radinių aplanką';

$labels['import'] = 'Importuoti';
$labels['importcontacts'] = 'Importuoti adresatus';
$labels['importfromfile'] = 'Importuoti iš failo:';
$labels['importtarget'] = 'Pridėti naujus adresatus į adresų knygą:';
$labels['importreplace'] = 'Perrašyti visą adresų knygą';
$labels['importdesc'] = 'Galite įkelti kontaktus iš jau turimos adresų knygos. <br/>Šiuo metu galima importuoti kontaktus iš <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> arba CSV (comma-separated) duomenų formatų.';
$labels['done'] = 'Baigta';

// settings
$labels['settingsfor'] = 'Nuostatos';
$labels['about'] = 'Apie';
$labels['preferences'] = 'Nuostatos';
$labels['userpreferences'] = 'Naudotojo nuostatos';
$labels['editpreferences'] = 'Keisti naudotojo nuostatas';

$labels['identities'] = 'Tapatybės';
$labels['manageidentities'] = 'Tvarkyti šios paskyros tapatybes';
$labels['newidentity'] = 'Nauja tapatybė';

$labels['newitem'] = 'Naujas elementas';
$labels['edititem'] = 'Redaguoti elementą';

$labels['preferhtml'] = 'Rodyti HTML';
$labels['defaultcharset'] = 'Numatytoji koduotė';
$labels['htmlmessage'] = 'HTML laiškas';
$labels['messagepart'] = 'Dalis';
$labels['digitalsig'] = 'Skaitmeninis parašas';
$labels['dateformat'] = 'Datos formatas';
$labels['timeformat'] = 'Laiko formatas';
$labels['prettydate'] = 'Dailios datos';
$labels['setdefault']  = 'Laikyti numatytąja';
$labels['autodetect']  = 'Aptikti automatiškai';
$labels['language']  = 'Kalba';
$labels['timezone']  = 'Laiko juosta';
$labels['pagesize']  = 'Eilučių skaičius puslapyje';
$labels['signature'] = 'Parašas';
$labels['dstactive']  = 'Vasaros laikas skiriasi';
$labels['showinextwin'] = 'Atidaryti pranešimą naujame lange';
$labels['composeextwin'] = 'Rašyti naujame lange';
$labels['htmleditor'] = 'Laiškus kurti HTML formatu';
$labels['htmlonreply'] = 'tik atsakymus į HTML formato laiškus';
$labels['htmlonreplyandforward'] = 'atsakant į HTML laišką arba jį persiunčiant';
$labels['htmlsignature'] = 'HTML parašas';
$labels['showemail'] = 'Show email address with display name';
$labels['previewpane'] = 'Rodyti laiško peržiūros polangį';
$labels['skin'] = 'Grafinis apvalkalas';
$labels['logoutclear'] = 'Išvalyti Šiukšlinę atsijungiant';
$labels['logoutcompact'] = 'Suglaudinti gautųjų laiškų aplanką atsijungiant';
$labels['uisettings'] = 'Naudotojo sąsaja';
$labels['serversettings'] = 'Serverio nuostatos';
$labels['mailboxview'] = 'Pašto dėžutės rodymas';
$labels['mdnrequests'] = 'Gavus prašymą patvirtinti, jog laiškas perskaitytas';
$labels['askuser'] = 'visuomet klausti, ar siųsti patvirtinimą';
$labels['autosend'] = 'visuomet siųsti patvirtinimą automatiškai';
$labels['autosendknown'] = 'automatiškai siųsti patvirtinimą adresų knygoje esantiems adresatams, kitu atveju klausti';
$labels['autosendknownignore'] = 'automatiškai siųsti patvirtinimą adresų knygoje esantiems adresatams, kitu atveju nesiųsti';
$labels['ignore'] = 'niekada nesiųsti patvirtinimo';
$labels['readwhendeleted'] = 'Pažymėti laišką kaip skaitytą prieš šalinant';
$labels['flagfordeletion'] = 'Pažymėti laišką šalinimui užuot šalinus';
$labels['skipdeleted'] = 'Nerodyti pašalintų laiškų';
$labels['deletealways'] = 'Pašalinti laiškus, jeigu nepavyksta jų perkelti į Šiukšlinę';
$labels['deletejunk'] = 'Pašalinti Brukalo aplanke esančius laiškus';
$labels['showremoteimages'] = 'Įkelti paveikslėlius iš interneto serverių';
$labels['fromknownsenders'] = 'tik žinomų siuntėjų laiškuose';
$labels['always'] = 'visada';
$labels['showinlineimages'] = 'Rodyti pridėtus paveikslėlius žemiau laiško';
$labels['autosavedraft']  = 'Automatiškai įrašyti juodraščius';
$labels['everynminutes']  = 'kas $n min.';
$labels['refreshinterval']  = 'Atnaujinti (patikrinti, ar nėra naujų laiškų ir pan.)';
$labels['never']  = 'niekada';
$labels['immediately']  = 'nedelsiant';
$labels['messagesdisplaying'] = 'Laiškų rodymas';
$labels['messagescomposition'] = 'Laiškų rašymas';
$labels['mimeparamfolding'] = 'Prisegtų failų vardų kodavimas';
$labels['2231folding'] = 'visiškas RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'visiškas RFC 2047 (kitos programos)';
$labels['force7bit'] = 'Naudoti MIME kodavimą 8 bitų simboliams';
$labels['advancedoptions'] = 'Papildomos nuostatos';
$labels['focusonnewmessage'] = 'Fokusuoti naršyklės langą gavus naują laišką';
$labels['checkallfolders'] = 'Naujų laiškų ieškoti visuose aplankuose';
$labels['displaynext'] = 'Rodyti pranešimą pašalinus/perkėlus laišką';
$labels['defaultfont'] = 'Numatytasis HTML laiškų šriftas';
$labels['mainoptions'] = 'Pagrindinės nuostatos';
$labels['browseroptions'] = 'Naršyklės nuostatos';
$labels['section'] = 'Sekcija';
$labels['maintenance'] = 'Priežiūra';
$labels['newmessage'] = 'Naujas laiškas';
$labels['signatureoptions'] = 'Parašo nuostatos';
$labels['whenreplying'] = 'Kuriant atsakymą';
$labels['replyempty'] = 'necituoti originalaus laiško';
$labels['replytopposting'] = 'rašyti atsakymą virš cituojamo laiško';
$labels['replybottomposting'] = 'rašyti atsakymą po cituojamu laišku';
$labels['replyremovesignature'] = 'Pašalinti cituojamame laiške esantį parašą';
$labels['autoaddsignature'] = 'Automatiškai pridėti parašą';
$labels['newmessageonly'] = 'tik naujuose laiškuose';
$labels['replyandforwardonly'] = 'tik atsakymuose ir persiunčiamuose laiškuose';
$labels['insertsignature'] = 'Pridėti parašą';
$labels['previewpanemarkread']  = 'Peržiūros polangyje parodytus laiškus žymėti skaitytais';
$labels['afternseconds']  = 'praėjus $n sek.';
$labels['reqmdn'] = 'Visuomet prašyti patvirtinimo, jog laiškas perskaitytas';
$labels['reqdsn'] = 'Visuomet prašyti laiško pristatymo pažymos';
$labels['replysamefolder'] = 'Atsakymus talpinti į tą patį aplanką, kuriame yra pirminis laiškas';
$labels['defaultabook'] = 'Numatytoji adresų knyga';
$labels['autocompletesingle'] = 'Užbaigiant adresus, praleisti antrinius';
$labels['listnamedisplay'] = 'Rodyti adresatus kaip';
$labels['spellcheckbeforesend'] = 'Tikrinti rašybą prieš išsiunčiant laišką';
$labels['spellcheckoptions'] = 'Rašybos tikrinimo nuostatos';
$labels['spellcheckignoresyms'] = 'Nepaisyti žodžių su spec. simboliais';
$labels['spellcheckignorenums'] = 'Nepaisyti žodžių su skaitmenimis';
$labels['spellcheckignorecaps'] = 'Nepaisyti žodžių vien iš didžiųjų raidžių';
$labels['addtodict'] = 'Įtraukti į žodyną';
$labels['mailtoprotohandler'] = 'Užregistruoti svetainę kaip dirbančią su „mailto:“ saitais';
$labels['forwardmode'] = 'Laiškų persiuntimo būdas';
$labels['inline'] = 'kaip citatą';
$labels['asattachment'] = 'kaip priedas';

$labels['folder']  = 'Aplankas';
$labels['folders']  = 'Aplankai';
$labels['foldername']  = 'Aplanko vardas';
$labels['subscribed']  = 'Užsakytas';
$labels['messagecount'] = 'Laiškai';
$labels['create']  = 'Sukurti';
$labels['createfolder']  = 'Sukurti naują aplanką';
$labels['managefolders']  = 'Tvarkyti aplankus';
$labels['specialfolders'] = 'Specialieji aplankai';
$labels['properties'] = 'Savybės';
$labels['folderproperties'] = 'Aplanko savybės';
$labels['parentfolder'] = 'Tėvinis aplankas';
$labels['location'] = 'Vieta';
$labels['info'] = 'Informacija';
$labels['getfoldersize'] = 'Spustelėkite, norėdami sužinoti aplanko dydį';
$labels['changesubscription'] = 'Spustelėkite, norėdami keisti prenumeratos nuostatas';
$labels['foldertype'] = 'Aplanko tipas';
$labels['personalfolder']  = 'Asmeninis aplankas';
$labels['otherfolder']  = 'Kito naudotojo aplankas';
$labels['sharedfolder']  = 'Viešas aplankas';

$labels['sortby'] = 'Rikiuoti pagal';
$labels['sortasc']  = 'Rikiuoti didėjančiai';
$labels['sortdesc'] = 'Rikiuoti mažėjančiai';
$labels['undo'] = 'Atšaukti';

$labels['installedplugins'] = 'Įdiegti įskiepiai';
$labels['plugin'] = 'Papildinys';
$labels['version'] = 'Versija';
$labels['source'] = 'Šaltinis';
$labels['license'] = 'Licencija';
$labels['support'] = 'Gauti pagalbos';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unikodas';
$labels['english'] = 'Anglų';
$labels['westerneuropean'] = 'Vakarų Europos';
$labels['easterneuropean'] = 'Rytų Europos';
$labels['southeasterneuropean'] = 'Pietryčių Europos';
$labels['baltic'] = 'Baltijos šalių';
$labels['cyrillic'] = 'Kirilica';
$labels['arabic'] = 'Arabų';
$labels['greek'] = 'Graikų';
$labels['hebrew'] = 'Hebrajų';
$labels['turkish'] = 'Turkų';
$labels['nordic'] = 'Šiaurės šalių';
$labels['thai'] = 'Tajų';
$labels['celtic'] = 'Keltų';
$labels['vietnamese'] = 'Vietnamiečių';
$labels['japanese'] = 'Japonų';
$labels['korean'] = 'Korėjiečių';
$labels['chinese'] = 'Kinų';

?>
