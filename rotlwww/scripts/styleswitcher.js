/*
 *  Original version from http://www.alistapart.com/d/alternate/styleswitcher.js
 *  Modified to give it some format under VIM.
 *
 *  ReyBrujo, 2005
 */


//<![CDATA[
/*  NAME   : setActiveStyleSheet                                 {{{1
 */
function setActiveStyleSheet(title) {
    var i, a, main;

    for(i=0; (a = document.getElementsByTagName("link")[i]); i++) {
        if(a.getAttribute("rel").indexOf("style") != -1 && a.getAttribute("title")) {
            a.disabled = true;
            if(a.getAttribute("title") == title)
                a.disabled = false;
        }
    }

    for(i=0; (a = document.getElementsByTagName("option")[i]); i++)
        a.selected = (a.getAttribute("value") == title);
}


/*  NAME   : getActiveStyleSheet                                 {{{1
 */
function getActiveStyleSheet() {
    var i, a;
    
    for(i=0; (a = document.getElementsByTagName("link")[i]); i++) {
        if(a.getAttribute("rel").indexOf("style") != -1 && a.getAttribute("title") && !a.disabled)
            return a.getAttribute("title");
    }

    return null;
}


/*  NAME   : getPreferredStyleSheet                              {{{1
 */
function getPreferredStyleSheet() {
    var i, a;

    for(i=0; (a = document.getElementsByTagName("link")[i]); i++) {
    if(a.getAttribute("rel").indexOf("style") != -1 && a.getAttribute("rel").indexOf("alt") == -1 && a.getAttribute("title"))
        return a.getAttribute("title");
    }

    return null;
}


/*  NAME   : createCookie                                        {{{1
 */
function createCookie(name,value,days) {
    if (days) {
        var date = new Date();
        date.setTime(date.getTime()+(days*24*60*60*1000));
        var expires = "; expires="+date.toGMTString();
    }
    else
        expires = "";

    document.cookie = name+"="+value+expires+"; path=/";
}


/*  NAME   : readCookie                                          {{{1
 */
function readCookie(name) {
    var nameEQ = name + "=";
    var ca = document.cookie.split(';');

    for(var i=0;i < ca.length;i++) {
        var c = ca[i];
        while (c.charAt(0)==' ')
            c = c.substring(1,c.length);

        if (c.indexOf(nameEQ) == 0)
            return c.substring(nameEQ.length,c.length);
    }

    return null;
}


/*  NAME   : Entry point                                         {{{1
 */
window.onload = function(e) {
    var cookie = readCookie("style");
    var title = cookie ? cookie : getPreferredStyleSheet();

    setActiveStyleSheet(title);
}


window.onunload = function(e) {
    var title = getActiveStyleSheet();

    createCookie("style", title, 365);
}


var cookie = readCookie("style");
var title = cookie ? cookie : getPreferredStyleSheet();
setActiveStyleSheet(title);


/* }}} */
////]]>

/*  VIM modelines and signature                                  {{{1
    _____________________________________________________________________
    ReyBrujo, 2004                                                             
    Best viewed with an old ASCII editor (VIM, EDIT or even NOTEPAD ;)

      vim:tw=80:ts=4:sw=4:et:ai:nowrap
      vim600:fdm=marker
                                                                             */
