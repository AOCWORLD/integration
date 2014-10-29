// ==UserScript==
// @name          YouTube - Custom colors video progress bar
// @namespace     http://userstyles.org
// @description	  Brighten up your YouTube experience with this custom video progress bar. The subtle yet vibrant glows will bring some life and color to the YouTube HTML5 video player.
// @author        TokHaar
// @homepage      http://userstyles.org/styles/95280
// @include       http://youtube.com/*
// @include       https://youtube.com/*
// @include       http://*.youtube.com/*
// @include       https://*.youtube.com/*
// @run-at        document-start
// ==/UserScript==
(function() {
var css = ".html5-play-progress, .ytp-play-progress {\n   background: #00FF00 !important; \n}\n.html5-scrubber-button:hover, .ytp-scrubber-button:hover {\n   background: #00FF00 !important;\n}\n.ytp-volume-slider-foreground:before {\n   background: #00FF00 !important;\n}";
if (typeof GM_addStyle != "undefined") {
	GM_addStyle(css);
} else if (typeof PRO_addStyle != "undefined") {
	PRO_addStyle(css);
} else if (typeof addStyle != "undefined") {
	addStyle(css);
} else {
	var node = document.createElement("style");
	node.type = "text/css";
	node.appendChild(document.createTextNode(css));
	var heads = document.getElementsByTagName("head");
	if (heads.length > 0) {
		heads[0].appendChild(node); 
	} else {
		// no head yet, stick it whereever
		document.documentElement.appendChild(node);
	}
}
})();
