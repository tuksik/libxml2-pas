{
	xinclude.c : API to handle XInclude processing
  
	World Wide Web Consortium Working Draft 26 October 2000
	http://www.w3.org/TR/2000/WD-xinclude-20001026
  
	See Copyright for the status of this software.
  
	daniel@veillard.com
}

{
	------------------------------------------------------------------------------
	Translated into pascal with help of h2pas utility from the FreePascal project.
	Petr Kozelka <pkozelka@email.cz>
	------------------------------------------------------------------------------
}

function xmlXIncludeProcess(doc:xmlDocPtr):longint;cdecl;external LIBXML2_SO;
