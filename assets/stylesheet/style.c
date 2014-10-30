/**
 * Global Reset of all HTML Elements
 *
 * Resetting all of our HTML Elements ensures a smoother
 * visual transition between browsers. If you don't believe me,
 * try temporarily commenting out this block of code, then go
 * and look at Mozilla versus Safari, both good browsers with
 * a good implementation of CSS. The thing is, all browser CSS
 * defaults are different and at the end of the day if visual
 * consistency is what we're shooting for, then we need to
 * make sure we're resetting all spacing elements.
 *
 */
html,
body {
  border: 0;
  font-family: "Helvetica-Neue", "Helvetica", Arial, sans-serif;
  line-height: 1.5;
  margin: 0;
  padding: 0;
}
div,
span,
object,
iframe,
img,
table,
caption,
thead,
tbody,
tfoot,
tr,
tr,
td,
article,
aside,
canvas,
details,
figure,
hgroup,
menu,
nav,
footer,
header,
section,
summary,
mark,
audio,
video {
  border: 0;
  margin: 0;
  padding: 0;
}
h1,
h2,
h3,
h4,
h5,
h6,
p,
blockquote,
pre,
a,
abbr,
address,
cit,
code,
del,
dfn,
em,
ins,
q,
samp,
small,
strong,
sub,
sup,
b,
i,
hr,
dl,
dt,
dd,
ol,
ul,
li,
fieldset,
legend,
label {
  border: 0;
  font-size: 100%;
  vertical-align: baseline;
  margin: 0;
  padding: 0;
}
article,
aside,
canvas,
figure,
figure img,
figcaption,
hgroup,
footer,
header,
nav,
section,
audio,
video {
  display: block;
}
table {
  border-collapse: separate;
  border-spacing: 0;
}
table caption,
table th,
table td {
  text-align: left;
  vertical-align: middle;
}
a img {
  border: 0;
}
:focus {
  outline: 0;
}
/**
 *
 * Functions Style
 *
 */
/**
 *
 * Functions 
 * @name hidden
 * @description 
 *
 */
/**
 *
 * Functions 
 * @name hidden-text
 * @description 
 *
 */
/*
== malihu jquery custom scrollbar plugin ==
Plugin URI: http://manos.malihu.gr/jquery-custom-content-scroller
*/
/*
CONTENTS: 
    1. BASIC STYLE - Plugin's basic/essential CSS properties (normally, should not be edited). 
    2. VERTICAL SCROLLBAR - Positioning and dimensions of vertical scrollbar. 
    3. HORIZONTAL SCROLLBAR - Positioning and dimensions of horizontal scrollbar.
    4. VERTICAL AND HORIZONTAL SCROLLBARS - Positioning and dimensions of 2-axis scrollbars. 
    5. TRANSITIONS - CSS3 transitions for hover events, auto-expanded and auto-hidden scrollbars. 
    6. SCROLLBAR COLORS, OPACITY AND BACKGROUNDS 
        6.1 THEMES - Scrollbar colors, opacity, dimensions, backgrounds etc. via ready-to-use themes.
*/
/* 
------------------------------------------------------------------------------------------------------------------------
1. BASIC STYLE  
------------------------------------------------------------------------------------------------------------------------
*/
.mCustomScrollbar {
  -ms-touch-action: none;
  touch-action: none;
  /* MSPointer events - direct all pointer events to js */
}
.mCustomScrollbar.mCS_no_scrollbar {
  -ms-touch-action: auto;
  touch-action: auto;
}
.mCustomScrollBox {
  /* contains plugin's markup */
  position: relative;
  overflow: hidden;
  height: 100%;
  max-width: 100%;
  outline: none;
  direction: ltr;
}
.mCSB_container {
  /* contains the original content */
  overflow: hidden;
  width: auto;
  height: auto;
}
/* 
------------------------------------------------------------------------------------------------------------------------
2. VERTICAL SCROLLBAR 
y-axis
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_inside > .mCSB_container {
  margin-right: 30px;
}
.mCSB_container.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-right: 0;
}
/* non-visible scrollbar */
.mCS-dir-rtl > .mCSB_inside > .mCSB_container {
  /* RTL direction/left-side scrollbar */
  margin-right: 0;
  margin-left: 30px;
}
.mCS-dir-rtl > .mCSB_inside > .mCSB_container.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-left: 0;
}
/* RTL direction/left-side scrollbar */
.mCSB_scrollTools {
  /* contains scrollbar markup (draggable element, dragger rail, buttons etc.) */
  position: absolute;
  width: 16px;
  height: auto;
  left: auto;
  top: 0;
  right: 0;
  bottom: 0;
}
.mCSB_outside + .mCSB_scrollTools {
  right: -26px;
}
/* scrollbar position: outside */
.mCS-dir-rtl > .mCSB_inside > .mCSB_scrollTools,
.mCS-dir-rtl > .mCSB_outside + .mCSB_scrollTools {
  /* RTL direction/left-side scrollbar */
  right: auto;
  left: 0;
}
.mCS-dir-rtl > .mCSB_outside + .mCSB_scrollTools {
  left: -26px;
}
/* RTL direction/left-side scrollbar (scrollbar position: outside) */
.mCSB_scrollTools .mCSB_draggerContainer {
  /* contains the draggable element and dragger rail markup */
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  right: 0;
  height: auto;
}
.mCSB_scrollTools a + .mCSB_draggerContainer {
  margin: 20px 0;
}
.mCSB_scrollTools .mCSB_draggerRail {
  width: 2px;
  height: 100%;
  margin: 0 auto;
  -webkit-border-radius: 16px;
  -moz-border-radius: 16px;
  border-radius: 16px;
}
.mCSB_scrollTools .mCSB_dragger {
  /* the draggable element */
  cursor: pointer;
  width: 100%;
  height: 30px;
  /* minimum dragger height */
  z-index: 1;
}
.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  /* the dragger element */
  position: relative;
  width: 4px;
  height: 100%;
  margin: 0 auto;
  -webkit-border-radius: 16px;
  -moz-border-radius: 16px;
  border-radius: 16px;
  text-align: center;
}
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  width: 12px;
  /* auto-expanded scrollbar */
}
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  width: 8px;
  /* auto-expanded scrollbar */
}
.mCSB_scrollTools .mCSB_buttonUp,
.mCSB_scrollTools .mCSB_buttonDown {
  display: block;
  position: absolute;
  height: 20px;
  width: 100%;
  overflow: hidden;
  margin: 0 auto;
  cursor: pointer;
}
.mCSB_scrollTools .mCSB_buttonDown {
  bottom: 0;
}
/* 
------------------------------------------------------------------------------------------------------------------------
3. HORIZONTAL SCROLLBAR 
x-axis
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_horizontal.mCSB_inside > .mCSB_container {
  margin-right: 0;
  margin-bottom: 30px;
}
.mCSB_horizontal.mCSB_outside > .mCSB_container {
  min-height: 100%;
}
.mCSB_horizontal > .mCSB_container.mCS_no_scrollbar_x.mCS_x_hidden {
  margin-bottom: 0;
}
/* non-visible scrollbar */
.mCSB_scrollTools.mCSB_scrollTools_horizontal {
  width: auto;
  height: 16px;
  top: auto;
  right: 0;
  bottom: 0;
  left: 0;
}
.mCustomScrollBox + .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCustomScrollBox + .mCSB_scrollTools + .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  bottom: -26px;
}
/* scrollbar position: outside */
.mCSB_scrollTools.mCSB_scrollTools_horizontal a + .mCSB_draggerContainer {
  margin: 0 20px;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 2px;
  margin: 7px 0;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_dragger {
  width: 30px;
  /* minimum dragger width */
  height: 100%;
  left: 0;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 4px;
  margin: 6px auto;
}
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  height: 12px;
  /* auto-expanded scrollbar */
  margin: 2px auto;
}
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  height: 8px;
  /* auto-expanded scrollbar */
  margin: 4px 0;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonLeft,
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonRight {
  display: block;
  position: absolute;
  width: 20px;
  height: 100%;
  overflow: hidden;
  margin: 0 auto;
  cursor: pointer;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonLeft {
  left: 0;
}
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonRight {
  right: 0;
}
/* 
------------------------------------------------------------------------------------------------------------------------
4. VERTICAL AND HORIZONTAL SCROLLBARS 
yx-axis 
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_container_wrapper {
  position: absolute;
  height: auto;
  width: auto;
  overflow: hidden;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  margin-right: 30px;
  margin-bottom: 30px;
}
.mCSB_container_wrapper > .mCSB_container {
  padding-right: 30px;
  padding-bottom: 30px;
}
.mCSB_vertical_horizontal > .mCSB_scrollTools.mCSB_scrollTools_vertical {
  bottom: 20px;
}
.mCSB_vertical_horizontal > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  right: 20px;
}
/* non-visible horizontal scrollbar */
.mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden + .mCSB_scrollTools.mCSB_scrollTools_vertical {
  bottom: 0;
}
/* non-visible vertical scrollbar/RTL direction/left-side scrollbar */
.mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden + .mCSB_scrollTools ~ .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  right: 0;
}
/* RTL direction/left-side scrollbar */
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  left: 20px;
}
/* non-visible scrollbar/RTL direction/left-side scrollbar */
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden + .mCSB_scrollTools ~ .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  left: 0;
}
.mCS-dir-rtl > .mCSB_inside > .mCSB_container_wrapper {
  /* RTL direction/left-side scrollbar */
  margin-right: 0;
  margin-left: 30px;
}
.mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden > .mCSB_container {
  padding-right: 0;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
.mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden > .mCSB_container {
  padding-bottom: 0;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
.mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-right: 0;
  /* non-visible scrollbar */
  margin-left: 0;
}
/* non-visible horizontal scrollbar */
.mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden {
  margin-bottom: 0;
}
/* 
------------------------------------------------------------------------------------------------------------------------
5. TRANSITIONS  
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_scrollTools,
.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_buttonUp,
.mCSB_scrollTools .mCSB_buttonDown,
.mCSB_scrollTools .mCSB_buttonLeft,
.mCSB_scrollTools .mCSB_buttonRight {
  -webkit-transition: opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  -moz-transition: opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  -o-transition: opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  transition: opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
}
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger_bar,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerRail,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger_bar,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerRail {
  -webkit-transition: width 0.2s ease-out 0.2s, height 0.2s ease-out 0.2s, margin-left 0.2s ease-out 0.2s, margin-right 0.2s ease-out 0.2s, margin-top 0.2s ease-out 0.2s, margin-bottom 0.2s ease-out 0.2s, opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  -moz-transition: width 0.2s ease-out 0.2s, height 0.2s ease-out 0.2s, margin-left 0.2s ease-out 0.2s, margin-right 0.2s ease-out 0.2s, margin-top 0.2s ease-out 0.2s, margin-bottom 0.2s ease-out 0.2s, opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  -o-transition: width 0.2s ease-out 0.2s, height 0.2s ease-out 0.2s, margin-left 0.2s ease-out 0.2s, margin-right 0.2s ease-out 0.2s, margin-top 0.2s ease-out 0.2s, margin-bottom 0.2s ease-out 0.2s, opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
  transition: width 0.2s ease-out 0.2s, height 0.2s ease-out 0.2s, margin-left 0.2s ease-out 0.2s, margin-right 0.2s ease-out 0.2s, margin-top 0.2s ease-out 0.2s, margin-bottom 0.2s ease-out 0.2s, opacity 0.2s ease-in-out, background-color 0.2s ease-in-out;
}
/* 
------------------------------------------------------------------------------------------------------------------------
6. SCROLLBAR COLORS, OPACITY AND BACKGROUNDS  
------------------------------------------------------------------------------------------------------------------------
*/
/* 
    ----------------------------------------
    6.1 THEMES 
    ----------------------------------------
    */
/* default theme ("light") */
.mCSB_scrollTools {
  opacity: 0.75;
  filter: "alpha(opacity=75)";
  -ms-filter: "alpha(opacity=75)";
}
.mCS-autoHide > .mCustomScrollBox > .mCSB_scrollTools,
.mCS-autoHide > .mCustomScrollBox ~ .mCSB_scrollTools {
  opacity: 0;
  filter: "alpha(opacity=0)";
  -ms-filter: "alpha(opacity=0)";
}
.mCustomScrollbar > .mCustomScrollBox > .mCSB_scrollTools.mCSB_scrollTools_onDrag,
.mCustomScrollbar > .mCustomScrollBox ~ .mCSB_scrollTools.mCSB_scrollTools_onDrag,
.mCustomScrollBox:hover > .mCSB_scrollTools,
.mCustomScrollBox:hover ~ .mCSB_scrollTools,
.mCS-autoHide:hover > .mCustomScrollBox > .mCSB_scrollTools,
.mCS-autoHide:hover > .mCustomScrollBox ~ .mCSB_scrollTools {
  opacity: 1;
  filter: "alpha(opacity=100)";
  -ms-filter: "alpha(opacity=100)";
}
.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.4);
  filter: "alpha(opacity=40)";
  -ms-filter: "alpha(opacity=40)";
}
.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.75);
  filter: "alpha(opacity=75)";
  -ms-filter: "alpha(opacity=75)";
}
.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.85);
  filter: "alpha(opacity=85)";
  -ms-filter: "alpha(opacity=85)";
}
.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.9);
  filter: "alpha(opacity=90)";
  -ms-filter: "alpha(opacity=90)";
}
.mCSB_scrollTools .mCSB_buttonUp,
.mCSB_scrollTools .mCSB_buttonDown,
.mCSB_scrollTools .mCSB_buttonLeft,
.mCSB_scrollTools .mCSB_buttonRight {
  background-image: url(mCSB_buttons.png);
  /* css sprites */
  background-repeat: no-repeat;
  opacity: 0.4;
  filter: "alpha(opacity=40)";
  -ms-filter: "alpha(opacity=40)";
}
.mCSB_scrollTools .mCSB_buttonUp {
  background-position: 0 0;
  /* 
        sprites locations 
        light: 0 0, -16px 0, -32px 0, -48px 0, 0 -72px, -16px -72px, -32px -72px
        dark: -80px 0, -96px 0, -112px 0, -128px 0, -80px -72px, -96px -72px, -112px -72px
        */
}
.mCSB_scrollTools .mCSB_buttonDown {
  background-position: 0 -20px;
  /* 
        sprites locations
        light: 0 -20px, -16px -20px, -32px -20px, -48px -20px, 0 -92px, -16px -92px, -32px -92px
        dark: -80px -20px, -96px -20px, -112px -20px, -128px -20px, -80px -92px, -96px -92px, -112 -92px
        */
}
.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: 0 -40px;
  /* 
        sprites locations 
        light: 0 -40px, -20px -40px, -40px -40px, -60px -40px, 0 -112px, -20px -112px, -40px -112px
        dark: -80px -40px, -100px -40px, -120px -40px, -140px -40px, -80px -112px, -100px -112px, -120px -112px
        */
}
.mCSB_scrollTools .mCSB_buttonRight {
  background-position: 0 -56px;
  /* 
        sprites locations 
        light: 0 -56px, -20px -56px, -40px -56px, -60px -56px, 0 -128px, -20px -128px, -40px -128px
        dark: -80px -56px, -100px -56px, -120px -56px, -140px -56px, -80px -128px, -100px -128px, -120px -128px
        */
}
.mCSB_scrollTools .mCSB_buttonUp:hover,
.mCSB_scrollTools .mCSB_buttonDown:hover,
.mCSB_scrollTools .mCSB_buttonLeft:hover,
.mCSB_scrollTools .mCSB_buttonRight:hover {
  opacity: 0.75;
  filter: "alpha(opacity=75)";
  -ms-filter: "alpha(opacity=75)";
}
.mCSB_scrollTools .mCSB_buttonUp:active,
.mCSB_scrollTools .mCSB_buttonDown:active,
.mCSB_scrollTools .mCSB_buttonLeft:active,
.mCSB_scrollTools .mCSB_buttonRight:active {
  opacity: 0.9;
  filter: "alpha(opacity=90)";
  -ms-filter: "alpha(opacity=90)";
}
/* theme: "dark" */
.mCS-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.15);
}
.mCS-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -80px 0;
}
.mCS-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -80px -20px;
}
.mCS-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -80px -40px;
}
.mCS-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -80px -56px;
}
/* ---------------------------------------- */
/* theme: "light-2", "dark-2" */
.mCS-light-2.mCSB_scrollTools .mCSB_draggerRail,
.mCS-dark-2.mCSB_scrollTools .mCSB_draggerRail {
  width: 4px;
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.1);
  -webkit-border-radius: 1px;
  -moz-border-radius: 1px;
  border-radius: 1px;
}
.mCS-light-2.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-2.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 4px;
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.75);
  -webkit-border-radius: 1px;
  -moz-border-radius: 1px;
  border-radius: 1px;
}
.mCS-light-2.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-dark-2.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-light-2.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-2.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 4px;
  margin: 6px auto;
}
.mCS-light-2.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.85);
}
.mCS-light-2.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-light-2.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.9);
}
.mCS-light-2.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -32px 0;
}
.mCS-light-2.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -32px -20px;
}
.mCS-light-2.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -40px -40px;
}
.mCS-light-2.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -40px -56px;
}
/* theme: "dark-2" */
.mCS-dark-2.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.1);
  -webkit-border-radius: 1px;
  -moz-border-radius: 1px;
  border-radius: 1px;
}
.mCS-dark-2.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
  -webkit-border-radius: 1px;
  -moz-border-radius: 1px;
  border-radius: 1px;
}
.mCS-dark-2.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-dark-2.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-dark-2.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-dark-2.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -112px 0;
}
.mCS-dark-2.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -112px -20px;
}
.mCS-dark-2.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -120px -40px;
}
.mCS-dark-2.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -120px -56px;
}
/* ---------------------------------------- */
/* theme: "light-thick", "dark-thick" */
.mCS-light-thick.mCSB_scrollTools .mCSB_draggerRail,
.mCS-dark-thick.mCSB_scrollTools .mCSB_draggerRail {
  width: 4px;
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.1);
  -webkit-border-radius: 2px;
  -moz-border-radius: 2px;
  border-radius: 2px;
}
.mCS-light-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 6px;
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.75);
  -webkit-border-radius: 2px;
  -moz-border-radius: 2px;
  border-radius: 2px;
}
.mCS-light-thick.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-dark-thick.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 4px;
  margin: 6px 0;
}
.mCS-light-thick.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-thick.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 6px;
  margin: 5px auto;
}
.mCS-light-thick.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.85);
}
.mCS-light-thick.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-light-thick.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.9);
}
.mCS-light-thick.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -16px 0;
}
.mCS-light-thick.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -16px -20px;
}
.mCS-light-thick.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -20px -40px;
}
.mCS-light-thick.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -20px -56px;
}
/* theme: "dark-thick" */
.mCS-dark-thick.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.1);
  -webkit-border-radius: 2px;
  -moz-border-radius: 2px;
  border-radius: 2px;
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
  -webkit-border-radius: 2px;
  -moz-border-radius: 2px;
  border-radius: 2px;
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-dark-thick.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -96px 0;
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -96px -20px;
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -100px -40px;
}
.mCS-dark-thick.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -100px -56px;
}
/* ---------------------------------------- */
/* theme: "light-thin", "dark-thin" */
.mCS-light-thin.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.1);
}
.mCS-light-thin.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-thin.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 2px;
}
.mCS-light-thin.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-dark-thin.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
}
.mCS-light-thin.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-thin.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 2px;
  margin: 7px auto;
}
/* theme "dark-thin" */
.mCS-dark-thin.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.15);
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-dark-thin.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -80px 0;
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -80px -20px;
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -80px -40px;
}
.mCS-dark-thin.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -80px -56px;
}
/* ---------------------------------------- */
/* theme "rounded", "rounded-dark", "rounded-dots", "rounded-dots-dark" */
.mCS-rounded.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.15);
}
.mCS-rounded.mCSB_scrollTools .mCSB_dragger,
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger,
.mCS-rounded-dots.mCSB_scrollTools .mCSB_dragger,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger {
  height: 14px;
}
.mCS-rounded.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dots.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 14px;
  margin: 0 1px;
}
.mCS-rounded.mCSB_scrollTools_horizontal .mCSB_dragger,
.mCS-rounded-dark.mCSB_scrollTools_horizontal .mCSB_dragger,
.mCS-rounded-dots.mCSB_scrollTools_horizontal .mCSB_dragger,
.mCS-rounded-dots-dark.mCSB_scrollTools_horizontal .mCSB_dragger {
  width: 14px;
}
.mCS-rounded.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dots.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  height: 14px;
  margin: 1px 0;
}
.mCS-rounded.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCS-rounded.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  width: 16px;
  /* auto-expanded scrollbar */
  height: 16px;
  margin: -1px 0;
}
.mCS-rounded.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-rounded.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail,
.mCS-rounded-dark.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-rounded-dark.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  width: 4px;
  /* auto-expanded scrollbar */
}
.mCS-rounded.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCS-rounded.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  height: 16px;
  /* auto-expanded scrollbar */
  width: 16px;
  margin: 0 -1px;
}
.mCS-rounded.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-rounded.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail,
.mCS-rounded-dark.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-rounded-dark.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  height: 4px;
  /* auto-expanded scrollbar */
  margin: 6px 0;
}
.mCS-rounded.mCSB_scrollTools .mCSB_buttonUp {
  background-position: 0 -72px;
}
.mCS-rounded.mCSB_scrollTools .mCSB_buttonDown {
  background-position: 0 -92px;
}
.mCS-rounded.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: 0 -112px;
}
.mCS-rounded.mCSB_scrollTools .mCSB_buttonRight {
  background-position: 0 -128px;
}
/* theme "rounded-dark", "rounded-dots-dark" */
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.15);
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-rounded-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -80px -72px;
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -80px -92px;
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -80px -112px;
}
.mCS-rounded-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -80px -128px;
}
/* theme "rounded-dots", "rounded-dots-dark" */
.mCS-rounded-dots.mCSB_scrollTools_vertical .mCSB_draggerRail,
.mCS-rounded-dots-dark.mCSB_scrollTools_vertical .mCSB_draggerRail {
  width: 4px;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_draggerRail,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-rounded-dots.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-rounded-dots-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  background-color: transparent;
  background-position: center;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_draggerRail,
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAgAAAAICAYAAADED76LAAAANElEQVQYV2NkIAAYiVbw//9/Y6DiM1ANJoyMjGdBbLgJQAX/kU0DKgDLkaQAvxW4HEvQFwCRcxIJK1XznAAAAABJRU5ErkJggg==");
  background-repeat: repeat-y;
  opacity: 0.3;
  filter: "alpha(opacity=30)";
  -ms-filter: "alpha(opacity=30)";
}
.mCS-rounded-dots.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-rounded-dots-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  height: 4px;
  margin: 6px 0;
  background-repeat: repeat-x;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -16px -72px;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -16px -92px;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -20px -112px;
}
.mCS-rounded-dots.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -20px -128px;
}
/* theme "rounded-dots-dark" */
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAgAAAAICAYAAADED76LAAAALElEQVQYV2NkIAAYSVFgDFR8BqrBBEifBbGRTfiPZhpYjiQFBK3A6l6CvgAAE9kGCd1mvgEAAAAASUVORK5CYII=");
}
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -96px -72px;
}
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -96px -92px;
}
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -100px -112px;
}
.mCS-rounded-dots-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -100px -128px;
}
/* ---------------------------------------- */
/* theme "3d", "3d-dark", "3d-thick", "3d-thick-dark" */
.mCS-3d.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-repeat: repeat-y;
  background-image: -moz-linear-gradient(left, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -webkit-gradient(linear, left top, right top, color-stop(0%, rgba(255, 255, 255, 0.5)), color-stop(100%, rgba(255, 255, 255, 0)));
  background-image: -webkit-linear-gradient(left, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -o-linear-gradient(left, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -ms-linear-gradient(left, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: linear-gradient(to right, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
}
.mCS-3d.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  background-repeat: repeat-x;
  background-image: -moz-linear-gradient(top, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0%, rgba(255, 255, 255, 0.5)), color-stop(100%, rgba(255, 255, 255, 0)));
  background-image: -webkit-linear-gradient(top, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -o-linear-gradient(top, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: -ms-linear-gradient(top, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
  background-image: linear-gradient(to bottom, rgba(255, 255, 255, 0.5) 0%, rgba(255, 255, 255, 0) 100%);
}
/* theme "3d", "3d-dark" */
.mCS-3d.mCSB_scrollTools_vertical .mCSB_dragger,
.mCS-3d-dark.mCSB_scrollTools_vertical .mCSB_dragger {
  height: 70px;
}
.mCS-3d.mCSB_scrollTools_horizontal .mCSB_dragger,
.mCS-3d-dark.mCSB_scrollTools_horizontal .mCSB_dragger {
  width: 70px;
}
.mCS-3d.mCSB_scrollTools,
.mCS-3d-dark.mCSB_scrollTools {
  opacity: 1;
  filter: "alpha(opacity=30)";
  -ms-filter: "alpha(opacity=30)";
}
.mCS-3d.mCSB_scrollTools .mCSB_draggerRail,
.mCS-3d.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  -webkit-border-radius: 16px;
  -moz-border-radius: 16px;
  border-radius: 16px;
}
.mCS-3d.mCSB_scrollTools .mCSB_draggerRail,
.mCS-3d-dark.mCSB_scrollTools .mCSB_draggerRail {
  width: 8px;
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.2);
  box-shadow: inset 1px 0 1px rgba(0, 0, 0, 0.5), inset -1px 0 1px rgba(255, 255, 255, 0.2);
}
.mCS-3d.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-3d.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-3d.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #555;
}
.mCS-3d.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 8px;
}
.mCS-3d.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-3d-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 8px;
  margin: 4px 0;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.5), inset 0 -1px 1px rgba(255, 255, 255, 0.2);
}
.mCS-3d.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 8px;
  margin: 4px auto;
}
.mCS-3d.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -32px -72px;
}
.mCS-3d.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -32px -92px;
}
.mCS-3d.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -40px -112px;
}
.mCS-3d.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -40px -128px;
}
/* theme "3d-dark" */
.mCS-3d-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.1);
  box-shadow: inset 1px 0 1px rgba(0, 0, 0, 0.1);
}
.mCS-3d-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.1);
}
.mCS-3d-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -112px -72px;
}
.mCS-3d-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -112px -92px;
}
.mCS-3d-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -120px -112px;
}
.mCS-3d-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -120px -128px;
}
/* ---------------------------------------- */
/* theme: "3d-thick", "3d-thick-dark" */
.mCS-3d-thick.mCSB_scrollTools,
.mCS-3d-thick-dark.mCSB_scrollTools {
  opacity: 1;
  filter: "alpha(opacity=30)";
  -ms-filter: "alpha(opacity=30)";
}
.mCS-3d-thick.mCSB_scrollTools,
.mCS-3d-thick-dark.mCSB_scrollTools,
.mCS-3d-thick.mCSB_scrollTools .mCSB_draggerContainer,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_draggerContainer {
  -webkit-border-radius: 7px;
  -moz-border-radius: 7px;
  border-radius: 7px;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  -webkit-border-radius: 5px;
  -moz-border-radius: 5px;
  border-radius: 5px;
}
.mCSB_inside + .mCS-3d-thick.mCSB_scrollTools_vertical,
.mCSB_inside + .mCS-3d-thick-dark.mCSB_scrollTools_vertical {
  right: 1px;
}
.mCS-3d-thick.mCSB_scrollTools_vertical,
.mCS-3d-thick-dark.mCSB_scrollTools_vertical {
  box-shadow: inset 1px 0 1px rgba(0, 0, 0, 0.1), inset 0 0 14px rgba(0, 0, 0, 0.5);
}
.mCS-3d-thick.mCSB_scrollTools_horizontal,
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal {
  bottom: 1px;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.1), inset 0 0 14px rgba(0, 0, 0, 0.5);
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  box-shadow: inset 1px 0 0 rgba(255, 255, 255, 0.4);
  width: 12px;
  margin: 2px;
  position: absolute;
  height: auto;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
}
.mCS-3d-thick.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.4);
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-3d-thick.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #555;
}
.mCS-3d-thick.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  height: 12px;
  width: auto;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_draggerContainer {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.05);
  box-shadow: inset 1px 1px 16px rgba(0, 0, 0, 0.1);
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_draggerRail {
  background-color: transparent;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -32px -72px;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -32px -92px;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -40px -112px;
}
.mCS-3d-thick.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -40px -128px;
}
/* theme: "3d-thick-dark" */
.mCS-3d-thick-dark.mCSB_scrollTools {
  box-shadow: inset 0 0 14px rgba(0, 0, 0, 0.2);
}
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal {
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.1), inset 0 0 14px rgba(0, 0, 0, 0.2);
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  box-shadow: inset 1px 0 0 rgba(255, 255, 255, 0.4), inset -1px 0 0 rgba(0, 0, 0, 0.2);
}
.mCS-3d-thick-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.4), inset 0 -1px 0 rgba(0, 0, 0, 0.2);
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #777;
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_draggerContainer {
  background-color: #fff;
  background-color: rgba(0, 0, 0, 0.05);
  box-shadow: inset 1px 1px 16px rgba(0, 0, 0, 0.1);
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: transparent;
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -112px -72px;
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -112px -92px;
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -120px -112px;
}
.mCS-3d-thick-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -120px -128px;
}
/* ---------------------------------------- */
/* theme: "minimal", "minimal-dark" */
.mCSB_outside + .mCS-minimal.mCSB_scrollTools_vertical,
.mCSB_outside + .mCS-minimal-dark.mCSB_scrollTools_vertical {
  right: 0;
  margin: 12px 0;
}
.mCustomScrollBox.mCS-minimal + .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCustomScrollBox.mCS-minimal + .mCSB_scrollTools + .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCustomScrollBox.mCS-minimal-dark + .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCustomScrollBox.mCS-minimal-dark + .mCSB_scrollTools + .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  bottom: 0;
  margin: 0 12px;
}
/* RTL direction/left-side scrollbar */
.mCS-dir-rtl > .mCSB_outside + .mCS-minimal.mCSB_scrollTools_vertical,
.mCS-dir-rtl > .mCSB_outside + .mCS-minimal-dark.mCSB_scrollTools_vertical {
  left: 0;
  right: auto;
}
.mCS-minimal.mCSB_scrollTools .mCSB_draggerRail,
.mCS-minimal-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: transparent;
}
.mCS-minimal.mCSB_scrollTools_vertical .mCSB_dragger,
.mCS-minimal-dark.mCSB_scrollTools_vertical .mCSB_dragger {
  height: 50px;
}
.mCS-minimal.mCSB_scrollTools_horizontal .mCSB_dragger,
.mCS-minimal-dark.mCSB_scrollTools_horizontal .mCSB_dragger {
  width: 50px;
}
.mCS-minimal.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.2);
  filter: "alpha(opacity=20)";
  -ms-filter: "alpha(opacity=20)";
}
.mCS-minimal.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-minimal.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.5);
  filter: "alpha(opacity=50)";
  -ms-filter: "alpha(opacity=50)";
}
/* theme: "minimal-dark" */
.mCS-minimal-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.2);
  filter: "alpha(opacity=20)";
  -ms-filter: "alpha(opacity=20)";
}
.mCS-minimal-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-minimal-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.5);
  filter: "alpha(opacity=50)";
  -ms-filter: "alpha(opacity=50)";
}
/* ---------------------------------------- */
/* theme "light-3", "dark-3" */
.mCS-light-3.mCSB_scrollTools .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools .mCSB_draggerRail {
  width: 6px;
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.2);
}
.mCS-light-3.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-3.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 6px;
}
.mCS-light-3.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-dark-3.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-light-3.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 6px;
  margin: 5px 0;
}
.mCS-light-3.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-light-3.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  width: 12px;
}
.mCS-light-3.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-light-3.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCS-dark-3.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  height: 12px;
  margin: 2px 0;
}
.mCS-light-3.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -32px -72px;
}
.mCS-light-3.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -32px -92px;
}
.mCS-light-3.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -40px -112px;
}
.mCS-light-3.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -40px -128px;
}
/* theme "dark-3" */
.mCS-dark-3.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-dark-3.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-dark-3.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-dark-3.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-dark-3.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.1);
}
.mCS-dark-3.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -112px -72px;
}
.mCS-dark-3.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -112px -92px;
}
.mCS-dark-3.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -120px -112px;
}
.mCS-dark-3.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -120px -128px;
}
/* ---------------------------------------- */
/* theme "inset", "inset-dark", "inset-2", "inset-2-dark", "inset-3", "inset-3-dark" */
.mCS-inset.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-2.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-3.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_draggerRail {
  width: 12px;
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.2);
}
.mCS-inset.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-2.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-3.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  width: 6px;
  margin: 3px 5px;
  position: absolute;
  height: auto;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
}
.mCS-inset.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-2.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-3.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  height: 6px;
  margin: 5px 3px;
  position: absolute;
  width: auto;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
}
.mCS-inset.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-inset-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-inset-2.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-inset-2-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-inset-3.mCSB_scrollTools_horizontal .mCSB_draggerRail,
.mCS-inset-3-dark.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 12px;
  margin: 2px 0;
}
.mCS-inset.mCSB_scrollTools .mCSB_buttonUp,
.mCS-inset-2.mCSB_scrollTools .mCSB_buttonUp,
.mCS-inset-3.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -32px -72px;
}
.mCS-inset.mCSB_scrollTools .mCSB_buttonDown,
.mCS-inset-2.mCSB_scrollTools .mCSB_buttonDown,
.mCS-inset-3.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -32px -92px;
}
.mCS-inset.mCSB_scrollTools .mCSB_buttonLeft,
.mCS-inset-2.mCSB_scrollTools .mCSB_buttonLeft,
.mCS-inset-3.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -40px -112px;
}
.mCS-inset.mCSB_scrollTools .mCSB_buttonRight,
.mCS-inset-2.mCSB_scrollTools .mCSB_buttonRight,
.mCS-inset-3.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -40px -128px;
}
/* theme "inset-dark", "inset-2-dark", "inset-3-dark" */
.mCS-inset-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-inset-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.1);
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_buttonUp,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_buttonUp,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_buttonUp {
  background-position: -112px -72px;
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_buttonDown,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_buttonDown,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_buttonDown {
  background-position: -112px -92px;
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_buttonLeft,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_buttonLeft,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_buttonLeft {
  background-position: -120px -112px;
}
.mCS-inset-dark.mCSB_scrollTools .mCSB_buttonRight,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_buttonRight,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_buttonRight {
  background-position: -120px -128px;
}
/* theme "inset-2", "inset-2-dark" */
.mCS-inset-2.mCSB_scrollTools .mCSB_draggerRail,
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: transparent;
  border-width: 1px;
  border-style: solid;
  border-color: #fff;
  border-color: rgba(255, 255, 255, 0.2);
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
.mCS-inset-2-dark.mCSB_scrollTools .mCSB_draggerRail {
  border-color: #000;
  border-color: rgba(0, 0, 0, 0.2);
}
/* theme "inset-3", "inset-3-dark" */
.mCS-inset-3.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.6);
}
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.6);
}
.mCS-inset-3.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.75);
}
.mCS-inset-3.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.85);
}
.mCS-inset-3.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-inset-3.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #000;
  background-color: rgba(0, 0, 0, 0.9);
}
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.75);
}
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.85);
}
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCS-inset-3-dark.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #fff;
  background-color: rgba(255, 255, 255, 0.9);
}
/* ---------------------------------------- */
.gldp-default {
  position: absolute;
  font-family: 'helvetica';
}
/* Core style for every cell */
.gldp-default .core {
  box-sizing: border-box;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  position: relative;
  float: left;
  padding: 0;
  margin: 0;
  font-size: 14px;
  text-align: center;
  cursor: pointer;
  color: #222;
  background: #ffffff;
  background: -moz-linear-gradient(top, #ffffff 0%, #dadada 98%, #ffffff 99%, #dadada 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #ffffff), color-stop(98%, #dadada), color-stop(99%, #ffffff), color-stop(100%, #dadada));
  background: -webkit-linear-gradient(top, #ffffff 0%, #dadada 98%, #ffffff 99%, #dadada 100%);
  background: -o-linear-gradient(top, #ffffff 0%, #dadada 98%, #ffffff 99%, #dadada 100%);
  background: -ms-linear-gradient(top, #ffffff 0%, #dadada 98%, #ffffff 99%, #dadada 100%);
  background: linear-gradient(to bottom, #ffffff 0%, #dadada 98%, #ffffff 99%, #dadada 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#dadada', GradientType=0);
}
/* Cell border */
.gldp-default .border {
  border-style: solid;
  border-width: 0;
  border-color: #888;
}
/* Month/Year text and select */
.gldp-default .monyear,
.gldp-default .monyear select {
  font-size: 16px !important;
  font-weight: bold;
  text-shadow: 1px 1px 0 rgba(255, 255, 255, 0.75);
}
/* Month/Year text */
.gldp-default .monyear span {
  margin: 0 5px 0 5px;
}
/* Prev/Next arrows */
.gldp-default .prev-arrow,
.gldp-default .next-arrow {
  color: #222;
  text-shadow: 1px 1px 0 rgba(255, 255, 255, 0.75);
}
.gldp-default .prev-arrow:active,
.gldp-default .next-arrow:active {
  color: #f00;
}
.gldp-default .prev-arrow-off,
.gldp-default .next-arrow-off {
  color: #222;
  opacity: 0.15;
}
/* Days of the week */
.gldp-default .dow {
  color: #fff;
  font-weight: bold;
  cursor: wait !important;
  background: #ff0000;
  background: -moz-linear-gradient(top, #ff0000 0%, #ffcccc 1%, #ff0000 2%, #aa0000 98%, #dd4444 99%, #880000 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #ff0000), color-stop(1%, #dd4444), color-stop(2%, #ff0000), color-stop(98%, #aa0000), color-stop(99%, #ffcccc), color-stop(100%, #880000));
  background: -webkit-linear-gradient(top, #ff0000 0%, #ffcccc 1%, #ff0000 2%, #aa0000 98%, #dd4444 99%, #880000 100%);
  background: -o-linear-gradient(top, #ff0000 0%, #ffcccc 1%, #ff0000 2%, #aa0000 98%, #dd4444 99%, #880000 100%);
  background: -ms-linear-gradient(top, #ff0000 0%, #ffcccc 1%, #ff0000 2%, #aa0000 98%, #dd4444 99%, #880000 100%);
  background: linear-gradient(to bottom, #ff0000 0%, #ffcccc 1%, #ff0000 2%, #aa0000 98%, #dd4444 99%, #880000 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#ff0000', endColorstr='#880000', GradientType=0);
}
/* Weekdays */
.gldp-default .mon,
.gldp-default .tue,
.gldp-default .wed,
.gldp-default .thu,
.gldp-default .fri {
  font-weight: bold;
  text-shadow: 1px 1px 0 rgba(255, 255, 255, 0.75);
}
/* Weekend days */
.gldp-default .sat,
.gldp-default .sun {
  color: #3858a8;
  font-weight: bold;
  text-shadow: 1px 1px 0 rgba(255, 255, 255, 0.75);
}
/* Selectable days that are outside of current month being shown */
.gldp-default .outday {
  color: #666 !important;
}
/* Hover */
.gldp-default .mon:hover,
.gldp-default .tue:hover,
.gldp-default .wed:hover,
.gldp-default .thu:hover,
.gldp-default .fri:hover,
.gldp-default .sat:hover,
.gldp-default .sun:hover {
  background: #fcfff4;
  background: -moz-linear-gradient(top, #fcfff4 0%, #e9e9ce 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #fcfff4), color-stop(100%, #e9e9ce));
  background: -webkit-linear-gradient(top, #fcfff4 0%, #e9e9ce 100%);
  background: -o-linear-gradient(top, #fcfff4 0%, #e9e9ce 100%);
  background: -ms-linear-gradient(top, #fcfff4 0%, #e9e9ce 100%);
  background: linear-gradient(to bottom, #fcfff4 0%, #e9e9ce 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#fcfff4', endColorstr='#e9e9ce', GradientType=0);
}
/* Non-Selectable days */
.gldp-default .noday {
  color: #444;
  font-weight: normal;
  cursor: wait !important;
  background: #aaaaaa;
  background: -moz-linear-gradient(top, #aaaaaa 0%, #8a8a8a 98%, #aaaaaa 99%, #8a8a8a 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #aaaaaa), color-stop(98%, #8a8a8a), color-stop(99%, #aaaaaa), color-stop(100%, #8a8a8a));
  /* Chrome,Safari4+ */
  background: -webkit-linear-gradient(top, #aaaaaa 0%, #8a8a8a 98%, #aaaaaa 99%, #8a8a8a 100%);
  background: -o-linear-gradient(top, #aaaaaa 0%, #8a8a8a 98%, #aaaaaa 99%, #8a8a8a 100%);
  background: -ms-linear-gradient(top, #aaaaaa 0%, #8a8a8a 98%, #aaaaaa 99%, #8a8a8a 100%);
  background: linear-gradient(to bottom, #aaaaaa 0%, #8a8a8a 98%, #aaaaaa 99%, #8a8a8a 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#aaaaaa', endColorstr='#8a8a8a', GradientType=0);
}
/* Currently selected day */
.gldp-default .selected {
  color: #fff;
  font-weight: bold;
  border-color: #c00;
  background: #e8bf88;
  background: -moz-linear-gradient(top, #e8bf88 0%, #ffc19d 1%, #fd8642 2%, #ab2412 98%, #ef753f 99%, #ef753f 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #e8bf88), color-stop(1%, #ffc19d), color-stop(2%, #fd8642), color-stop(98%, #ab2412), color-stop(99%, #ef753f), color-stop(100%, #ef753f));
  background: -webkit-linear-gradient(top, #e8bf88 0%, #ffc19d 1%, #fd8642 2%, #ab2412 98%, #ef753f 99%, #ef753f 100%);
  background: -o-linear-gradient(top, #e8bf88 0%, #ffc19d 1%, #fd8642 2%, #ab2412 98%, #ef753f 99%, #ef753f 100%);
  background: -ms-linear-gradient(top, #e8bf88 0%, #ffc19d 1%, #fd8642 2%, #ab2412 98%, #ef753f 99%, #ef753f 100%);
  background: linear-gradient(to bottom, #e8bf88 0%, #ffc19d 1%, #fd8642 2%, #ab2412 98%, #ef753f 99%, #ef753f 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#e8bf88', endColorstr='#ef753f', GradientType=0);
}
/* Today */
.gldp-default .today {
  color: #fff;
  font-weight: bold;
  border-color: #00c;
  background: #88bfe8;
  background: -moz-linear-gradient(top, #88bfe8 0%, #9dc1ff 1%, #4286fd 2%, #0124ab 98%, #3775ef 99%, #3775ef 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #88bfe8), color-stop(1%, #9dc1ff), color-stop(2%, #4286fd), color-stop(98%, #0124ab), color-stop(99%, #3775ef), color-stop(100%, #3775ef));
  background: -webkit-linear-gradient(top, #88bfe8 0%, #9dc1ff 1%, #4286fd 2%, #0124ab 98%, #3775ef 99%, #3775ef 100%);
  background: -o-linear-gradient(top, #88bfe8 0%, #9dc1ff 1%, #4286fd 2%, #0124ab 98%, #3775ef 99%, #3775ef 100%);
  background: -ms-linear-gradient(top, #88bfe8 0%, #9dc1ff 1%, #4286fd 2%, #0124ab 98%, #3775ef 99%, #3775ef 100%);
  background: linear-gradient(to bottom, #88bfe8 0%, #9dc1ff 1%, #4286fd 2%, #0124ab 98%, #3775ef 99%, #3775ef 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#88bfe8', endColorstr='#3775ef', GradientType=0);
}
/* Special */
.gldp-default .special {
  color: #fff;
  font-weight: bold;
  border-color: #0c0;
  background: #88e888;
  background: -moz-linear-gradient(top, #88e888 0%, #9dff9d 1%, #42fd42 2%, #01ab01 98%, #37ef37 99%, #37ef37 100%);
  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #88e888), color-stop(1%, #9dff9d), color-stop(2%, #42fd42), color-stop(98%, #01ab01), color-stop(99%, #37ef37), color-stop(100%, #37ef37));
  background: -webkit-linear-gradient(top, #88e888 0%, #9dff9d 1%, #42fd42 2%, #01ab01 98%, #37ef37 99%, #37ef37 100%);
  background: -o-linear-gradient(top, #88e888 0%, #9dff9d 1%, #42fd42 2%, #01ab01 98%, #37ef37 99%, #37ef37 100%);
  background: -ms-linear-gradient(top, #88e888 0%, #9dff9d 1%, #42fd42 2%, #01ab01 98%, #37ef37 99%, #37ef37 100%);
  background: linear-gradient(to bottom, #88e888 0%, #9dff9d 1%, #42fd42 2%, #01ab01 98%, #37ef37 99%, #37ef37 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#88e888', endColorstr='#37ef37', GradientType=0);
}
/*
Version: 3.5.1 Timestamp: Tue Jul 22 18:58:56 EDT 2014
*/
.select2-container {
  margin: 0;
  position: relative;
  display: inline-block;
  /* inline-block for ie7 */
  zoom: 1;
  *display: inline;
  vertical-align: middle;
}
.select2-container,
.select2-drop,
.select2-search,
.select2-search input {
  /*
    Force border-box so that % widths fit the parent
    container without overlap because of margin/padding.
    More Info : http://www.quirksmode.org/css/box.html
  */
  -webkit-box-sizing: border-box;
  /* webkit */
  -moz-box-sizing: border-box;
  /* firefox */
  box-sizing: border-box;
  /* css3 */
}
.select2-container .select2-choice {
  display: block;
  height: 26px;
  padding: 0 0 0 8px;
  overflow: hidden;
  position: relative;
  border: 1px solid #aaa;
  white-space: nowrap;
  line-height: 26px;
  color: #444;
  text-decoration: none;
  border-radius: 4px;
  background-clip: padding-box;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  background-color: #fff;
  background-image: -webkit-gradient(linear, left bottom, left top, color-stop(0, #eeeeee), color-stop(0.5, #ffffff));
  background-image: -webkit-linear-gradient(center bottom, #eeeeee 0%, #ffffff 50%);
  background-image: -moz-linear-gradient(center bottom, #eeeeee 0%, #ffffff 50%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#eeeeee', GradientType=0);
  background-image: linear-gradient(to top, #eeeeee 0%, #ffffff 50%);
}
html[dir="rtl"] .select2-container .select2-choice {
  padding: 0 8px 0 0;
}
.select2-container.select2-drop-above .select2-choice {
  border-bottom-color: #aaa;
  border-radius: 0 0 4px 4px;
  background-image: -webkit-gradient(linear, left bottom, left top, color-stop(0, #eeeeee), color-stop(0.9, #ffffff));
  background-image: -webkit-linear-gradient(center bottom, #eeeeee 0%, #ffffff 90%);
  background-image: -moz-linear-gradient(center bottom, #eeeeee 0%, #ffffff 90%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#eeeeee', GradientType=0);
  background-image: linear-gradient(to bottom, #eeeeee 0%, #ffffff 90%);
}
.select2-container.select2-allowclear .select2-choice .select2-chosen {
  margin-right: 42px;
}
.select2-container .select2-choice > .select2-chosen {
  margin-right: 26px;
  display: block;
  overflow: hidden;
  white-space: nowrap;
  text-overflow: ellipsis;
  float: none;
  width: auto;
}
html[dir="rtl"] .select2-container .select2-choice > .select2-chosen {
  margin-left: 26px;
  margin-right: 0;
}
.select2-container .select2-choice abbr {
  display: none;
  width: 12px;
  height: 12px;
  position: absolute;
  right: 24px;
  top: 8px;
  font-size: 1px;
  text-decoration: none;
  border: 0;
  background: url('../images/select2.png') right top no-repeat;
  cursor: pointer;
  outline: 0;
}
.select2-container.select2-allowclear .select2-choice abbr {
  display: inline-block;
}
.select2-container .select2-choice abbr:hover {
  background-position: right -11px;
  cursor: pointer;
}
.select2-drop-mask {
  border: 0;
  margin: 0;
  padding: 0;
  position: fixed;
  left: 0;
  top: 0;
  min-height: 100%;
  min-width: 100%;
  height: auto;
  width: auto;
  opacity: 0;
  z-index: 9998;
  /* styles required for IE to work */
  background-color: #fff;
  filter: alpha(opacity=0);
}
.select2-drop {
  width: 100%;
  margin-top: -1px;
  position: absolute;
  z-index: 9999;
  top: 100%;
  background: #fff;
  color: #000;
  border: 1px solid #aaa;
  border-top: 0;
  border-radius: 0 0 4px 4px;
  -webkit-box-shadow: 0 4px 5px rgba(0, 0, 0, 0.15);
  box-shadow: 0 4px 5px rgba(0, 0, 0, 0.15);
}
.select2-drop.select2-drop-above {
  margin-top: 1px;
  border-top: 1px solid #aaa;
  border-bottom: 0;
  border-radius: 4px 4px 0 0;
  -webkit-box-shadow: 0 -4px 5px rgba(0, 0, 0, 0.15);
  box-shadow: 0 -4px 5px rgba(0, 0, 0, 0.15);
}
.select2-drop-active {
  border: 1px solid #5897fb;
  border-top: none;
}
.select2-drop.select2-drop-above.select2-drop-active {
  border-top: 1px solid #5897fb;
}
.select2-drop-auto-width {
  border-top: 1px solid #aaa;
  width: auto;
}
.select2-drop-auto-width .select2-search {
  padding-top: 4px;
}
.select2-container .select2-choice .select2-arrow {
  display: inline-block;
  width: 18px;
  height: 100%;
  position: absolute;
  right: 0;
  top: 0;
  border-left: 1px solid #aaa;
  border-radius: 0 4px 4px 0;
  background-clip: padding-box;
  background: #ccc;
  background-image: -webkit-gradient(linear, left bottom, left top, color-stop(0, #cccccc), color-stop(0.6, #eeeeee));
  background-image: -webkit-linear-gradient(center bottom, #cccccc 0%, #eeeeee 60%);
  background-image: -moz-linear-gradient(center bottom, #cccccc 0%, #eeeeee 60%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#eeeeee', endColorstr='#cccccc', GradientType=0);
  background-image: linear-gradient(to top, #cccccc 0%, #eeeeee 60%);
}
html[dir="rtl"] .select2-container .select2-choice .select2-arrow {
  left: 0;
  right: auto;
  border-left: none;
  border-right: 1px solid #aaa;
  border-radius: 4px 0 0 4px;
}
.select2-container .select2-choice .select2-arrow b {
  display: block;
  width: 100%;
  height: 100%;
  background: url('../images/select2.png') no-repeat 0 1px;
}
html[dir="rtl"] .select2-container .select2-choice .select2-arrow b {
  background-position: 2px 1px;
}
.select2-search {
  display: inline-block;
  width: 100%;
  min-height: 26px;
  margin: 0;
  padding-left: 4px;
  padding-right: 4px;
  position: relative;
  z-index: 10000;
  white-space: nowrap;
}
.select2-search input {
  width: 100%;
  height: auto !important;
  min-height: 26px;
  padding: 4px 20px 4px 5px;
  margin: 0;
  outline: 0;
  font-family: sans-serif;
  font-size: 1em;
  border: 1px solid #aaa;
  border-radius: 0;
  -webkit-box-shadow: none;
  box-shadow: none;
  background: #ffffff url('../images/select2.png') no-repeat 100% -22px;
  background: url('../images/select2.png') no-repeat 100% -22px, -webkit-gradient(linear, left bottom, left top, color-stop(0.85, #ffffff), color-stop(0.99, #eeeeee));
  background: url('../images/select2.png') no-repeat 100% -22px, -webkit-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2.png') no-repeat 100% -22px, -moz-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2.png') no-repeat 100% -22px, linear-gradient(to bottom, #ffffff 85%, #eeeeee 99%) 0 0;
}
html[dir="rtl"] .select2-search input {
  padding: 4px 5px 4px 20px;
  background: #ffffff url('../images/select2.png') no-repeat -37px -22px;
  background: url('../images/select2.png') no-repeat -37px -22px, -webkit-gradient(linear, left bottom, left top, color-stop(0.85, #ffffff), color-stop(0.99, #eeeeee));
  background: url('../images/select2.png') no-repeat -37px -22px, -webkit-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2.png') no-repeat -37px -22px, -moz-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2.png') no-repeat -37px -22px, linear-gradient(to bottom, #ffffff 85%, #eeeeee 99%) 0 0;
}
.select2-drop.select2-drop-above .select2-search input {
  margin-top: 4px;
}
.select2-search input.select2-active {
  background: #ffffff url('../images/select2-spinner.gif') no-repeat 100%;
  background: url('../images/select2-spinner.gif') no-repeat 100%, -webkit-gradient(linear, left bottom, left top, color-stop(0.85, #ffffff), color-stop(0.99, #eeeeee));
  background: url('../images/select2-spinner.gif') no-repeat 100%, -webkit-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2-spinner.gif') no-repeat 100%, -moz-linear-gradient(center bottom, #ffffff 85%, #eeeeee 99%);
  background: url('../images/select2-spinner.gif') no-repeat 100%, linear-gradient(to bottom, #ffffff 85%, #eeeeee 99%) 0 0;
}
.select2-container-active .select2-choice,
.select2-container-active .select2-choices {
  border: 1px solid #5897fb;
  outline: none;
  -webkit-box-shadow: 0 0 5px rgba(0, 0, 0, 0.3);
  box-shadow: 0 0 5px rgba(0, 0, 0, 0.3);
}
.select2-dropdown-open .select2-choice {
  border-bottom-color: transparent;
  -webkit-box-shadow: 0 1px 0 #fff inset;
  box-shadow: 0 1px 0 #fff inset;
  border-bottom-left-radius: 0;
  border-bottom-right-radius: 0;
  background-color: #eee;
  background-image: -webkit-gradient(linear, left bottom, left top, color-stop(0, #ffffff), color-stop(0.5, #eeeeee));
  background-image: -webkit-linear-gradient(center bottom, #ffffff 0%, #eeeeee 50%);
  background-image: -moz-linear-gradient(center bottom, #ffffff 0%, #eeeeee 50%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#eeeeee', endColorstr='#ffffff', GradientType=0);
  background-image: linear-gradient(to top, #ffffff 0%, #eeeeee 50%);
}
.select2-dropdown-open.select2-drop-above .select2-choice,
.select2-dropdown-open.select2-drop-above .select2-choices {
  border: 1px solid #5897fb;
  border-top-color: transparent;
  background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0, #ffffff), color-stop(0.5, #eeeeee));
  background-image: -webkit-linear-gradient(center top, #ffffff 0%, #eeeeee 50%);
  background-image: -moz-linear-gradient(center top, #ffffff 0%, #eeeeee 50%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#eeeeee', endColorstr='#ffffff', GradientType=0);
  background-image: linear-gradient(to bottom, #ffffff 0%, #eeeeee 50%);
}
.select2-dropdown-open .select2-choice .select2-arrow {
  background: transparent;
  border-left: none;
  filter: none;
}
html[dir="rtl"] .select2-dropdown-open .select2-choice .select2-arrow {
  border-right: none;
}
.select2-dropdown-open .select2-choice .select2-arrow b {
  background-position: -18px 1px;
}
html[dir="rtl"] .select2-dropdown-open .select2-choice .select2-arrow b {
  background-position: -16px 1px;
}
.select2-hidden-accessible {
  border: 0;
  clip: rect(0 0 0 0);
  height: 1px;
  margin: -1px;
  overflow: hidden;
  padding: 0;
  position: absolute;
  width: 1px;
}
/* results */
.select2-results {
  max-height: 200px;
  padding: 0 0 0 4px;
  margin: 4px 4px 4px 0;
  position: relative;
  overflow-x: hidden;
  overflow-y: auto;
  -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
}
html[dir="rtl"] .select2-results {
  padding: 0 4px 0 0;
  margin: 4px 0 4px 4px;
}
.select2-results ul.select2-result-sub {
  margin: 0;
  padding-left: 0;
}
.select2-results li {
  list-style: none;
  display: list-item;
  background-image: none;
}
.select2-results li.select2-result-with-children > .select2-result-label {
  font-weight: bold;
}
.select2-results .select2-result-label {
  padding: 3px 7px 4px;
  margin: 0;
  cursor: pointer;
  min-height: 1em;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}
.select2-results-dept-1 .select2-result-label {
  padding-left: 20px;
}
.select2-results-dept-2 .select2-result-label {
  padding-left: 40px;
}
.select2-results-dept-3 .select2-result-label {
  padding-left: 60px;
}
.select2-results-dept-4 .select2-result-label {
  padding-left: 80px;
}
.select2-results-dept-5 .select2-result-label {
  padding-left: 100px;
}
.select2-results-dept-6 .select2-result-label {
  padding-left: 110px;
}
.select2-results-dept-7 .select2-result-label {
  padding-left: 120px;
}
.select2-results .select2-highlighted {
  background: #3875d7;
  color: #fff;
}
.select2-results li em {
  background: #feffde;
  font-style: normal;
}
.select2-results .select2-highlighted em {
  background: transparent;
}
.select2-results .select2-highlighted ul {
  background: #fff;
  color: #000;
}
.select2-results .select2-no-results,
.select2-results .select2-searching,
.select2-results .select2-ajax-error,
.select2-results .select2-selection-limit {
  background: #f4f4f4;
  display: list-item;
  padding-left: 5px;
}
/*
disabled look for disabled choices in the results dropdown
*/
.select2-results .select2-disabled.select2-highlighted {
  color: #666;
  background: #f4f4f4;
  display: list-item;
  cursor: default;
}
.select2-results .select2-disabled {
  background: #f4f4f4;
  display: list-item;
  cursor: default;
}
.select2-results .select2-selected {
  display: none;
}
.select2-more-results.select2-active {
  background: #f4f4f4 url('../images/select2-spinner.gif') no-repeat 100%;
}
.select2-results .select2-ajax-error {
  background: rgba(255, 50, 50, 0.2);
}
.select2-more-results {
  background: #f4f4f4;
  display: list-item;
}
/* disabled styles */
.select2-container.select2-container-disabled .select2-choice {
  background-color: #f4f4f4;
  background-image: none;
  border: 1px solid #ddd;
  cursor: default;
}
.select2-container.select2-container-disabled .select2-choice .select2-arrow {
  background-color: #f4f4f4;
  background-image: none;
  border-left: 0;
}
.select2-container.select2-container-disabled .select2-choice abbr {
  display: none;
}
/* multiselect */
.select2-container-multi .select2-choices {
  height: auto !important;
  height: 1%;
  margin: 0;
  padding: 0 5px 0 0;
  position: relative;
  border: 1px solid #aaa;
  cursor: text;
  overflow: hidden;
  background-color: #fff;
  background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, color-stop(1%, #eeeeee), color-stop(15%, #ffffff));
  background-image: -webkit-linear-gradient(top, #eeeeee 1%, #ffffff 15%);
  background-image: -moz-linear-gradient(top, #eeeeee 1%, #ffffff 15%);
  background-image: linear-gradient(to bottom, #eeeeee 1%, #ffffff 15%);
}
html[dir="rtl"] .select2-container-multi .select2-choices {
  padding: 0 0 0 5px;
}
.select2-locked {
  padding: 3px 5px 3px 5px !important;
}
.select2-container-multi .select2-choices {
  min-height: 26px;
}
.select2-container-multi.select2-container-active .select2-choices {
  border: 1px solid #5897fb;
  outline: none;
  -webkit-box-shadow: 0 0 5px rgba(0, 0, 0, 0.3);
  box-shadow: 0 0 5px rgba(0, 0, 0, 0.3);
}
.select2-container-multi .select2-choices li {
  float: left;
  list-style: none;
}
html[dir="rtl"] .select2-container-multi .select2-choices li {
  float: right;
}
.select2-container-multi .select2-choices .select2-search-field {
  margin: 0;
  padding: 0;
  white-space: nowrap;
}
.select2-container-multi .select2-choices .select2-search-field input {
  padding: 5px;
  margin: 1px 0;
  font-family: sans-serif;
  font-size: 100%;
  color: #666;
  outline: 0;
  border: 0;
  -webkit-box-shadow: none;
  box-shadow: none;
  background: transparent !important;
}
.select2-container-multi .select2-choices .select2-search-field input.select2-active {
  background: #ffffff url('../images/select2-spinner.gif') no-repeat 100% !important;
}
.select2-default {
  color: #999 !important;
}
.select2-container-multi .select2-choices .select2-search-choice {
  padding: 3px 5px 3px 18px;
  margin: 3px 0 3px 5px;
  position: relative;
  line-height: 13px;
  color: #333;
  cursor: default;
  border: 1px solid #aaaaaa;
  border-radius: 3px;
  -webkit-box-shadow: 0 0 2px #ffffff inset, 0 1px 0 rgba(0, 0, 0, 0.05);
  box-shadow: 0 0 2px #ffffff inset, 0 1px 0 rgba(0, 0, 0, 0.05);
  background-clip: padding-box;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  background-color: #e4e4e4;
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#eeeeee', endColorstr='#f4f4f4', GradientType=0);
  background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, color-stop(20%, #f4f4f4), color-stop(50%, #f0f0f0), color-stop(52%, #e8e8e8), color-stop(100%, #eeeeee));
  background-image: -webkit-linear-gradient(top, #f4f4f4 20%, #f0f0f0 50%, #e8e8e8 52%, #eeeeee 100%);
  background-image: -moz-linear-gradient(top, #f4f4f4 20%, #f0f0f0 50%, #e8e8e8 52%, #eeeeee 100%);
  background-image: linear-gradient(to top, #f4f4f4 20%, #f0f0f0 50%, #e8e8e8 52%, #eeeeee 100%);
}
html[dir="rtl"] .select2-container-multi .select2-choices .select2-search-choice {
  margin: 3px 5px 3px 0;
  padding: 3px 18px 3px 5px;
}
.select2-container-multi .select2-choices .select2-search-choice .select2-chosen {
  cursor: default;
}
.select2-container-multi .select2-choices .select2-search-choice-focus {
  background: #d4d4d4;
}
.select2-search-choice-close {
  display: block;
  width: 12px;
  height: 13px;
  position: absolute;
  right: 3px;
  top: 4px;
  font-size: 1px;
  outline: none;
  background: url('../images/select2.png') right top no-repeat;
}
html[dir="rtl"] .select2-search-choice-close {
  right: auto;
  left: 3px;
}
.select2-container-multi .select2-search-choice-close {
  left: 3px;
}
html[dir="rtl"] .select2-container-multi .select2-search-choice-close {
  left: auto;
  right: 2px;
}
.select2-container-multi .select2-choices .select2-search-choice .select2-search-choice-close:hover {
  background-position: right -11px;
}
.select2-container-multi .select2-choices .select2-search-choice-focus .select2-search-choice-close {
  background-position: right -11px;
}
/* disabled styles */
.select2-container-multi.select2-container-disabled .select2-choices {
  background-color: #f4f4f4;
  background-image: none;
  border: 1px solid #ddd;
  cursor: default;
}
.select2-container-multi.select2-container-disabled .select2-choices .select2-search-choice {
  padding: 3px 5px 3px 5px;
  border: 1px solid #ddd;
  background-image: none;
  background-color: #f4f4f4;
}
.select2-container-multi.select2-container-disabled .select2-choices .select2-search-choice .select2-search-choice-close {
  display: none;
  background: none;
}
/* end multiselect */
.select2-result-selectable .select2-match,
.select2-result-unselectable .select2-match {
  text-decoration: underline;
}
.select2-offscreen,
.select2-offscreen:focus {
  clip: rect(0 0 0 0) !important;
  width: 1px !important;
  height: 1px !important;
  border: 0 !important;
  margin: 0 !important;
  padding: 0 !important;
  overflow: hidden !important;
  position: absolute !important;
  outline: 0 !important;
  left: 0px !important;
  top: 0px !important;
}
.select2-display-none {
  display: none;
}
.select2-measure-scrollbar {
  position: absolute;
  top: -10000px;
  left: -10000px;
  width: 100px;
  height: 100px;
  overflow: scroll;
}
/* Retina-ize icons */
@media only screen and (-webkit-min-device-pixel-ratio: 1.5), only screen and (min-resolution: 2dppx) {
  .select2-search input,
  .select2-search-choice-close,
  .select2-container .select2-choice abbr,
  .select2-container .select2-choice .select2-arrow b {
    background-image: url('select2x2.png') !important;
    background-repeat: no-repeat !important;
    background-size: 60px 40px !important;
  }
  .select2-search input {
    background-position: 100% -21px !important;
  }
}
input::-webkit-input-placeholder {
  color: #a3a9c3;
  font-family: "Roboto";
  font-size: 14px;
}
input::-moz-placeholder {
  color: #a3a9c3;
  font-family: "Roboto";
  font-size: 14px;
}
input:-moz-placeholder {
  /* Older versions of Firefox */
  color: #a3a9c3;
  font-family: "Roboto";
  font-size: 14px;
}
input:-ms-input-placeholder {
  color: #a3a9c3;
  font-family: "Roboto";
  font-size: 14px;
}
.menu-right {
  /* Cachons la case à cocher */
  /* on prépare le label */
  /* Aspect des checkboxes */
  /* :before sert à créer la case à cocher */
  /* Aspect général de la coche */
  /* Aspect si "pas cochée" */
  /* Aspect si "cochée" */
}
.menu-right [type="checkbox"]:not(:checked),
.menu-right [type="checkbox"]:checked {
  position: absolute;
  left: -9999px;
}
.menu-right [type="checkbox"]:not(:checked) + label,
.menu-right [type="checkbox"]:checked + label {
  /*display: block;*/
  position: relative;
  /* permet de positionner les pseudo-éléments */
  cursor: pointer;
  /* affiche un curseur adapté */
}
.menu-right [type="checkbox"]:not(:checked) + label:before,
.menu-right [type="checkbox"]:checked + label:before {
  display: none;
  content: '';
  position: absolute;
  right: 14px;
  top: 2px;
  width: 15px;
  height: 15px;
  /* dim. de la case */
  border: 1px solid #cbcbcb;
  -moz-border-radius: 3px;
  -webkit-border-radius: 3px;
  border-radius: 3px;
  -moz-background-clip: padding;
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  background-color: #fff;
  -moz-box-shadow: inset 1px 1px 3px rgba(102, 102, 102, 0.5);
  -webkit-box-shadow: inset 1px 1px 3px rgba(102, 102, 102, 0.5);
  box-shadow: inset 1px 1px 3px rgba(102, 102, 102, 0.5);
}
.menu-right [type="checkbox"]:not(:checked) + label:after,
.menu-right [type="checkbox"]:checked + label:after {
  content: '✔';
  position: absolute;
  top: 1px;
  right: -20px;
  font-size: 13px;
  color: #314789;
  transition: all .2s;
  /* on prévoit une animation */
}
.menu-right [type="checkbox"]:not(:checked) + label:after {
  opacity: 0;
  /* coche invisible */
  transform: scale(0);
  /* mise à l'échelle à 0 */
}
.menu-right [type="checkbox"]:checked + label:after {
  opacity: 1;
  /* coche opaque */
  transform: scale(1);
  /* mise à l'échelle 1:1 */
}
#header {
  position: fixed;
  top: -1px;
  left: 0;
  right: 0;
  z-index: 5;
}
#header .bg-fixed-wrap-top {
  /*opacity: .65;*/
  /*background-color: #070a1c;*/
  background: url(../images/bg-fixed-wrap-top-v2.jpg) no-repeat 50% 50%;
  min-height: 31px;
}
#header .bg-fixed-wrap-top .nav-menu {
  min-height: 30px;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left {
  list-style: none;
  float: left;
  margin: 7px 0;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left li {
  display: inline-block;
  float: left;
  padding: 0 5px;
  border-right: 1px solid #a3a9c3;
  text-transform: uppercase;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left li:last-child {
  border-right: none;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left li:hover a {
  color: #00bf79;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left li a {
  display: block;
  color: #a3a9c3;
  font-family: "Roboto Condensed";
  font-size: 11px;
  font-weight: bold;
}
#header .bg-fixed-wrap-top .nav-menu .menu-left li a.active {
  color: #00bf79;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown {
  float: right;
  min-height: 30px;
  min-width: 50px;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown.open .menu-right {
  display: block;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .dropdown-toggle {
  background: url(../images/row-bottom.png) no-repeat 100% 50%;
  cursor: pointer;
  margin-right: 8px;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .dropdown-toggle .flag {
  background: url(../images/flag-fr.png) no-repeat 50% 50%;
  width: 25px;
  height: 14px;
  display: block;
  margin: 8px 0;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right {
  display: none;
  position: absolute;
  right: 0;
  z-index: 1000;
  float: left;
  text-align: left;
  padding: 20px;
  margin: 5px 0 0 0;
  min-width: 605px;
  background-color: #fff;
  -moz-box-shadow: 0 0 3px rgba(0, 0, 0, 0.75);
  -webkit-box-shadow: 0 0 3px rgba(0, 0, 0, 0.75);
  box-shadow: 0 0 3px rgba(0, 0, 0, 0.75);
  border-radius: 0;
  list-style: none;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right:before {
  background: url(../images/row-top.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 14px;
  height: 10px;
  position: absolute;
  right: 6px;
  top: -10px;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right .title {
  color: #575757;
  font-family: "Roboto Condensed";
  font-size: 14px;
  font-weight: bold;
  border-bottom: 1px solid #a5a5a5;
  width: 100%;
  margin-bottom: 15px;
  padding-bottom: 15px;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li {
  width: 23%;
  margin-right: 2%;
  float: left;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li:last-child {
  width: 25%;
  margin-right: 0;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul {
  list-style: none;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul .title {
  border-bottom: none;
  padding-bottom: 0;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul li {
  color: #343434;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: normal;
  padding-bottom: 5px;
}
#header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul li label {
  color: #343434;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: normal;
  /*padding-bottom: 15px;*/
}
#header .bg-fixed-wrap-bottom {
  /*opacity: .65;*/
  background-color: #010776;
  min-height: 70px;
}
#header .bg-fixed-wrap-bottom .logo {
  display: block;
  margin: 11px 0;
  max-width: 332px;
}
#header.affix .bg-fixed-wrap-top {
  opacity: 1;
}
#header.affix .bg-fixed-wrap-bottom {
  opacity: 1;
  display: none;
}
#header.affix .nav-bar {
  background-color: #010776;
}
#header.affix .nav-bar .logo-img {
  display: block;
}
#header.affix .nav-bar .sep {
  margin-top: 35px;
}
#header.affix .nav-bar nav {
  min-height: 85px;
}
#header.affix .nav-bar nav.connexion .dropdown .dropdown-toggle {
  background-position: 53% 40%;
}
#header.affix .nav-bar nav.region .select2-container {
  min-height: 85px;
}
#header.affix .nav-bar nav.region .select2-container .select2-choice {
  padding: 46px 20px 15px 12%;
}
#header.affix .nav-bar nav.region .select2-container .select2-choice .select2-arrow b {
  background-position: 0 70%;
}
#header.affix .nav-bar nav.categorie .select2-container {
  min-height: 85px;
}
#header.affix .nav-bar nav.categorie .select2-container .select2-choice {
  padding: 46px 20px 15px 12%;
}
#header.affix .nav-bar nav.categorie .select2-container .select2-choice .select2-arrow b {
  background-position: 0 70%;
}
#header.affix .nav-bar nav .dropdown .dropdown-toggle {
  padding: 46px 0 15px 12%;
  background-position: 80% 72%;
}
#header.affix .nav-bar nav .dropdown.cat .dropdown-toggle {
  background-position: 95% 72%;
}
#header.affix .nav-bar nav.col-md-2,
#header.affix .nav-bar nav .col-sm-2 {
  width: 15%;
}
#header.affix .nav-bar nav.col-md-6,
#header.affix .nav-bar nav .col-sm-6 {
  width: 48%;
}
#header.affix .nav-bar .search {
  margin: 21px 0 21px 5%;
}
#header.affix .nav-bar .page-title {
  display: none;
}
#header .nav-bar .logo-img {
  display: none;
  margin: 18px 0;
  width: 5%;
  float: left;
}
#header .nav-bar nav {
  color: #a3a9c3;
  font-family: "Roboto Condensed";
  font-size: 16px;
  min-height: 70px;
  /*text-align: center;*/
  /*&:hover {
                color: #fff;
                background-color: #00bf79;
                .dropdown {
                    .dropdown-toggle {
                        background-image: url(../images/nav-row-over.png);
                    }
                }
            }*/
}
#header .nav-bar nav .select2-container {
  width: 100%;
  min-height: 70px;
}
#header .nav-bar nav .select2-container.select2-container-active {
  box-shadow: none;
}
#header .nav-bar nav .select2-container.select2-container-active .select2-choice {
  box-shadow: none;
}
#header .nav-bar nav .select2-container.select2-dropdown-open .select2-choice {
  background-color: #00bf79;
  color: #fff;
  box-shadow: none;
}
#header .nav-bar nav .select2-container.select2-dropdown-open .select2-choice .select2-arrow b {
  background: url(../images/nav-row-over.png) no-repeat 0 50%;
}
#header .nav-bar nav .select2-container .select2-choice {
  background-image: none;
  background-color: transparent;
  border: none;
  padding: 23px 20px 23px 12%;
  border-radius: 0;
  line-height: inherit;
  color: #a3a9c3;
  font-family: "Roboto Condensed";
  font-size: 16px;
  height: auto;
  /*abbr {
                        display: block;
                        background: url(../images/nav-row.png) no-repeat 100% 50%;
                        width: 10px;
                        height: 8px;
                        top: 30px;
                    }*/
}
#header .nav-bar nav .select2-container .select2-choice .select2-arrow {
  background-image: none;
  background-color: transparent;
  border: none;
}
#header .nav-bar nav .select2-container .select2-choice .select2-arrow b {
  background: url(../images/nav-row.png) no-repeat 0 50%;
}
#header .nav-bar nav .select2-container .select2-choice:hover {
  background-color: #00bf79;
  color: #fff;
}
#header .nav-bar nav .select2-container .select2-choice:hover .select2-arrow b {
  background: url(../images/nav-row-over.png) no-repeat 0 50%;
}
#header .nav-bar nav.connexion {
  text-align: center;
}
#header .nav-bar nav.connexion .dropdown .dropdown-toggle {
  padding-left: 0;
}
#header .nav-bar nav .dropdown.open .dropdown-toggle {
  color: #fff;
  background-color: #00bf79;
  background-image: url(../images/nav-row-over.png);
}
#header .nav-bar nav .dropdown.cat {
  /*.dropdown-body {
                        min-width: 210px;;
                    }*/
}
#header .nav-bar nav .dropdown.cat .dropdown-toggle {
  background-position: 95% 55%;
}
#header .nav-bar nav .dropdown .dropdown-toggle {
  padding: 23px 0 23px 12%;
  background-image: url(../images/nav-row.png);
  background-position: 80% 55%;
  background-repeat: no-repeat;
  display: block;
  cursor: pointer;
}
#header .nav-bar nav .dropdown .dropdown-toggle:hover {
  color: #fff;
  background-color: #00bf79;
  background-image: url(../images/nav-row-over.png);
}
#header .nav-bar nav .dropdown .dropdown-body {
  position: absolute;
  display: none;
  list-style: none;
  background-color: #1d213c;
  padding: 15px 0;
  text-align: left;
  /*min-width: 235px;*/
  max-height: 315px;
  z-index: 1000;
  left: 0;
  right: 0;
  /*overflow-y: scroll;
                    overflow: auto;*/
}
#header .nav-bar nav .dropdown .dropdown-body:before {
  background: url(../images/row-top-nav.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 23px;
  height: 10px;
  position: absolute;
  right: 50%;
  top: -9px;
}
#header .nav-bar nav .dropdown .dropdown-body li {
  color: #939bbd;
  font-family: "Roboto";
  font-size: 12px;
  padding-left: 15px;
}
#header .nav-bar nav .dropdown .dropdown-body li:hover {
  color: #fff;
  background-color: #00bf79;
}
#header .nav-bar .sep {
  background: url(../images/sep.png) no-repeat 50% 50%;
  width: 1px;
  height: 42px;
  float: left;
  margin-top: 14px;
}
#header .nav-bar .region {
  width: 13%;
  float: left;
}
#header .nav-bar .categorie {
  width: 18%;
  float: left;
}
#header .nav-bar .search {
  width: 39%;
  float: left;
  margin: 14px 4% 13px 10%;
}
#header .nav-bar .search input[type="text"] {
  border: 1px solid #01ba77;
  padding: 10px 15px;
  color: #a3a9c3;
  font-family: "Roboto";
  font-size: 14px;
  float: left;
  width: 75%;
  background: transparent;
}
#header .nav-bar .search input[type="submit"] {
  width: 20%;
  min-height: 43px;
  background-color: #01ba77;
  color: #fbfbfb;
  font-family: "Roboto";
  font-size: 18px;
  font-weight: bold;
  border: none;
}
#header .nav-bar .connexion {
  width: 15%;
  float: right;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-toggle {
  background-image: none;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-toggle span {
  padding-left: 5px;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-toggle:hover {
  background-image: none;
  background-color: inherit;
  color: #a3a9c3;
}
#header .nav-bar .connexion.profil .dropdown.open .dropdown-toggle {
  background-image: none;
  background-color: inherit;
  color: #a3a9c3;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body {
  padding: 30px;
  background-color: #f4f4f4;
  min-width: 450px;
  min-height: 230px;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-title {
  color: #9a9aa6;
  font-family: "Roboto Condensed";
  font-size: 28px;
  font-weight: bold;
  width: 100%;
  text-transform: uppercase;
  margin-bottom: 20px;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-img {
  float: left;
  width: 24%;
  margin-right: 6%;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-top {
  float: left;
  width: 70%;
  margin-bottom: 20px;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-top .flag-img {
  width: 20%;
  float: left;
  margin-right: 7%;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-top .profil-adress {
  color: #868ba2;
  font-family: "Roboto";
  font-size: 14px;
  line-height: 20px;
  float: left;
  width: 73%;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-bottom {
  float: left;
  width: 70%;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-bottom .name-prop {
  display: block;
  color: #868ba2;
  font-family: "Roboto";
  font-size: 12px;
  width: 100%;
  margin-bottom: 10px;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-bottom .name-profil {
  display: block;
  color: #3f496d;
  font-family: "Roboto Condensed";
  font-size: 18px;
  width: 100%;
}
#header .nav-bar .connexion.profil .dropdown .dropdown-body:before {
  background: url(../images/row-top-gris.png) no-repeat 50% 50%;
}
#header .nav-bar .connexion .dropdown .dropdown-toggle {
  background-image: url(../images/big-row-bottom.png);
  background-position: 53% 20%;
}
#header .nav-bar .connexion .dropdown .dropdown-toggle:hover {
  background-color: #4288dd;
  background-image: url(../images/big-row-bottom-over.png);
}
#header .nav-bar .connexion .dropdown.open .dropdown-toggle {
  background-color: #4288dd;
  background-image: url(../images/big-row-top.png);
}
#header .nav-bar .connexion .dropdown .dropdown-body {
  position: absolute;
  right: 0;
  left: inherit;
  min-width: 500px;
  min-height: 450px;
  background-color: #fff;
  padding: 20px 30px 30px 30px;
  z-index: 1000;
}
#header .nav-bar .connexion .dropdown .dropdown-body:before {
  background: url(../images/row-top.png) no-repeat 50% 50%;
  top: -9px;
  right: 74px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form {
  width: 100%;
  float: left;
  position: relative;
}
#header .nav-bar .connexion .dropdown .dropdown-body form.left {
  /*padding-right: 5%;
                            &:after {
                                background: url(../images/border-left-form.png) no-repeat 50% 50%;
                                content: ' ';
                                display: inline-block;
                                width: 1px;
                                height: 323px;
                                position: absolute;
                                right: 0;
                                top: 0;
                            }*/
}
#header .nav-bar .connexion .dropdown .dropdown-body form.left .form-action a {
  clear: both;
  margin-top: 10px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form.right {
  padding-left: 5%;
  display: none !important;
}
#header .nav-bar .connexion .dropdown .dropdown-body form.right .form-action {
  margin-bottom: 30px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .title {
  color: #3f496d;
  font-family: "Roboto Condensed";
  font-size: 16px;
  margin-bottom: 15px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-groupe {
  width: 100%;
  margin-bottom: 10px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-groupe label {
  width: 100%;
  color: #858ba1;
  font-family: "Roboto";
  font-size: 12px;
  margin-bottom: 5px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-groupe input {
  width: 100%;
  min-height: 43px;
  border: 1px solid #b8bbc9;
  padding: 0 10px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-action {
  width: 100%;
  margin-bottom: 25px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-action .btn-white {
  padding: 10px 20px;
  border: 1px solid #3f496d;
  float: right;
  color: #3f496d;
  font-family: "Roboto Condensed";
  font-size: 14px;
  border-radius: 0;
  background-color: #fff;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .form-action .btn-bleu {
  padding: 10px 20px;
  border: 1px solid #3f496d;
  float: right;
  color: #fff;
  font-family: "Roboto Condensed";
  font-size: 14px;
  border-radius: 0;
  background-color: #4288dd;
  font-weight: normal;
  text-transform: none;
  text-shadow: none;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .reset-password {
  width: 100%;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .reset-password a {
  float: right;
  color: #858ba1;
  font-family: "Roboto";
  font-size: 11px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social {
  width: 100%;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social .title {
  display: block;
  width: 100%;
  color: #3f496d;
  font-family: "Roboto Condensed";
  font-size: 16px;
  margin-bottom: 15px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social a {
  display: block;
  width: 30px;
  height: 30px;
  float: left;
  margin-right: 3px;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social a.facebook {
  background: url(../images/facebook.png) no-repeat 50% 50%;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social a.twitter {
  background: url(../images/twitter.png) no-repeat 50% 50%;
}
#header .nav-bar .connexion .dropdown .dropdown-body form .social a.googleplus {
  background: url(../images/googleplus.png) no-repeat 50% 50%;
}
#header .nav-bar .page-title {
  width: 100%;
  text-align: center;
  clear: both;
}
#header .nav-bar .page-title h1 {
  font-family: "Roboto";
  font-size: 50px;
  color: #1affab;
  font-weight: 100;
}
#header .nav-bar .page-title p {
  font-family: "Roboto";
  font-size: 25px;
  line-height: 30px;
  color: #fff;
  font-weight: 300;
}
#header.big-header {
  min-height: 234px !important;
  background: url(../images/bg-header-bottom-v4.jpg) no-repeat 50% 50% !important;
  position: relative;
}
#header.big-header .bg-fixed-wrap-bottom .title-flag {
  float: left;
  width: 4%;
  margin: 16px 1% 30px 0;
}
#header.big-header .bg-fixed-wrap-bottom .title {
  margin: 10px 0 0 0 !important;
  width: 73%;
}
#header.big-header .bg-fixed-wrap-bottom .subtitle {
  color: #fff;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  float: left;
  width: 70%;
}
#header.big-header .bg-fixed-wrap-bottom .profil {
  width: 15%;
}
#header.big-header .bg-fixed-header-bottom {
  min-height: 112px;
  position: relative;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil {
  position: absolute;
  top: 20px;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item {
  min-width: 400px;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop {
  color: #a1a3aa;
  font-family: "Roboto Condensed";
  font-size: 16px;
  position: absolute;
  float: none;
  width: auto;
  margin: 0;
  top: 15px;
  left: 175px;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop-name {
  color: #ebebee;
  font-family: "Roboto";
  font-size: 28px;
  font-weight: 100;
  position: absolute;
  float: none;
  width: auto;
  margin: 0;
  top: 40px;
  left: 175px;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control {
  top: inherit;
  bottom: 10px;
  background-image: none;
  width: 16px;
  height: 16px;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control.left {
  background: url(../images/slide-profil/control-left.png) no-repeat 50% 50%;
  left: 140px;
  right: inherit;
}
#header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control.right {
  background: url(../images/slide-profil/control-right.png) no-repeat 50% 50%;
  left: 160px;
  right: inherit;
}
#header.big-header .bg-fixed-header-bottom .prop {
  float: left;
  width: 41%;
  margin: 35px 0 0 15%;
  color: #a1a3aa;
  font-family: "Roboto Condensed";
  font-size: 16px;
}
#header.big-header .bg-fixed-header-bottom .prop-name {
  float: left;
  width: 41%;
  margin: 0 0 0 15%;
  color: #ebebee;
  font-family: "Roboto";
  font-size: 28px;
  font-weight: 100;
}
#header.big-header .bg-fixed-header-bottom .flag {
  float: left;
  margin: 33px 0 0 18%;
}
#header.big-header .bg-fixed-header-bottom .region {
  color: #a1a3aa;
  font-family: "Roboto Condensed";
  font-size: 16px;
  margin: 40px 0 0 15px;
  float: left;
}
#header.big-header .bg-fixed-header-bottom .favoris {
  float: right;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 13px;
  -moz-border-radius: 2px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  padding: 10px 20px 10px 45px;
  background: #31374f url(../images/ico-fav.png) no-repeat 20px 50%;
  margin-top: 30px;
  text-decoration: none;
  border: 0;
}
#header.big-header .bg-fixed-header-bottom .favoris:hover,
#header.big-header .bg-fixed-header-bottom .favoris.active {
  color: #fff;
  background: #4288dd url(../images/ico-fav-over.png) no-repeat 20px 50%;
}
#header.big-header .bg-fixed-header-bottom.pro .container-fluid {
  position: relative;
}
#header.big-header .bg-fixed-header-bottom.pro .favoris {
  margin: 30px 25% 0 0;
  width: 19%;
}
#header.big-header .bg-fixed-header-bottom.pro .nb-favoris {
  color: #64687a;
  font-family: "Roboto Condensed";
  font-size: 12px;
  float: right;
  width: 19%;
  margin: 5px 25% 0 0;
  display: block;
  text-align: center;
  clear: both;
  cursor: pointer;
}
#header.big-header .bg-fixed-header-bottom.pro .img-restau {
  position: absolute;
  right: 0;
  top: 30px;
  max-width: 22%;
}
#footer {
  background-color: #ebebee;
  padding: 60px 0 70px;
  margin-top: 60px;
}
#footer .top-footer {
  margin-bottom: 60px;
}
#footer .top-footer img {
  width: 100%;
  height: 100%;
}
#footer .top-footer iframe {
  width: 100%;
}
#footer .bottom-footer {
  color: #6f6e6e;
}
#footer .bottom-footer .first {
  margin-left: 15%;
  width: 22%;
  float: left;
}
#footer .bottom-footer .sep-footer {
  float: left;
  width: 1px;
  height: 100px;
  background: url(../images/sep-footer.png) no-repeat 50% 50%;
  margin-right: 3%;
}
#footer .bottom-footer .second {
  width: 16%;
  float: left;
}
#footer .bottom-footer .header-list {
  font-size: 18px;
  font-weight: 400;
  padding-bottom: 15px;
}
#footer .bottom-footer ul {
  list-style: none;
}
#footer .bottom-footer ul li {
  padding-bottom: 5px;
}
#footer .bottom-footer .input-group {
  display: block;
}
#footer .bottom-footer .input-group .form-control {
  border-radius: 0;
  background-color: #f3f3f5;
  color: #909090;
  font-size: 13px;
  float: left;
  width: 70%;
  border-right: 0;
}
#footer .bottom-footer .input-group .input-group-addon {
  border-radius: 0;
  background-color: #b5b5b5;
  color: #fff;
  font-size: 16px;
  width: 30%;
  min-height: 34px;
  border: 0;
}
#footer .bottom-footer .search-zone {
  margin-top: 65px;
}
#footer .bottom-footer .search-zone .input-group {
  margin: 0 auto;
  width: 40%;
  position: relative;
}
#footer .bottom-footer .search-zone .input-group .form-control {
  background-color: transparent;
  width: 100%;
  padding: 12px 50px 12px 20px;
  border-right: 1px solid #ccc;
}
#footer .bottom-footer .search-zone .input-group .btn-default {
  position: absolute;
  min-width: 45px;
  right: 0;
  top: 0;
  bottom: 0;
  border-radius: 0;
  border: none;
  background: url(../images/sprit-search.png) no-repeat 50% 50%;
}
#footer.small {
  margin: 65px 0 0 0;
  padding: 45px 0;
}
#footer.small .bottom-footer {
  color: #9f9f9f;
  text-align: center;
}
#footer.small .bottom-footer ul {
  list-style: none;
  width: 35%;
  margin: 0 auto;
}
#footer.small .bottom-footer ul li {
  float: left;
  padding: 0 10px;
  border-right: 1px solid #b4bdce;
}
#footer.small .bottom-footer ul li:last-child {
  border-right: none;
}
#footer.small .bottom-footer ul li a {
  color: #9f9f9f;
  font-family: "Roboto Condensed";
  font-size: 16px;
}
#footer.white {
  margin: 60px 0 65px 0;
  background-color: #fcfcfc;
  padding: 45px 0 85px 0;
}
#footer.white img {
  width: 100%;
  margin-top: 10%;
}
#footer.white p {
  color: #212f41;
  font-family: "Courgette";
  font-size: 14px;
  text-indent: 20px;
}
#footer.white p span {
  font-size: 18px;
}
#footer.white p.last {
  float: right;
  margin: 20px 0 25px 0;
  text-indent: 0;
}
#footer.white p.signature {
  float: right;
  color: #043a94;
  text-indent: 0;
  font-weight: bold;
  clear: both;
}
#footer.pro {
  padding: 60px 0;
  margin: 0;
}
#footer.pro img {
  max-width: 100%;
}
#footer.pro form {
  background-color: #f4f4f4;
  width: 100%;
  padding: 30px 25px;
  margin: 60px 0 0 0;
  -webkit-border-radius: 3px;
  -moz-border-radius: 3px;
  border-radius: 3px;
}
#footer.pro form .form-control {
  width: 75%;
  float: left;
  min-height: 45px;
  padding: 20px 25px;
  color: #a4aac3;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  background: transparent;
  border-radius: 0;
  border: 1px solid #d5d5d5;
  -moz-box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
  -webkit-box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
  box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
}
#footer.pro form .btn-default {
  width: 25%;
  float: left;
  min-height: 45px;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 18px;
  font-weight: bold;
  background-color: #c1c1c1;
  border: 0;
  border-radius: 0;
}
#footer.pro ul {
  list-style: none;
  margin: 90px 16% 0 16%;
}
#footer.pro ul li {
  float: left;
  padding: 0 35px;
  border-right: 1px solid #ced3dd;
  height: 18px;
  line-height: 18px;
}
#footer.pro ul li:last-child {
  border-right: 0;
}
#footer.pro ul li a {
  color: #9f9f9f;
  font-family: "Roboto Condensed";
  font-size: 16px;
}
body {
  font-family: 'Roboto', sans-serif;
  font-size: 14px;
  font-weight: 400;
}
.container-fluid {
  padding-left: 0;
  padding-right: 0;
}
#wrap .carrousel-videos .carousel .carousel-inner.galerie .item.active iframe {
  width: 100%;
}
.home #wrap .carrousel-videos .carousel .carousel-inner.galerie .item.active iframe {
  width: 100%;
  min-height: 500px;
}
#pm-content .title-msg {
  background: url(../images/title-msg.png) no-repeat 0 50%;
  height: 35px;
  padding-left: 45px;
  min-width: 185px;
  display: block;
  line-height: 35px;
}
.messagerie .title-messagerie {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #00bf79 url(../images/ico-messagerie.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.messagerie .body-messagerie {
  padding: 25px 20px 30px 25px;
  background-color: #fff;
  margin-bottom: 10px;
}
.messagerie .body-messagerie .mCustomScrollbar {
  height: 405px;
}
.messagerie .body-messagerie .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #f2f2f2;
}
.messagerie .body-messagerie .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #00bf79;
}
.messagerie .body-messagerie .mCustomScrollbar .mCSB_inside .mCSB_container {
  margin-right: 80px;
}
#pm-menu .inbox {
  background: url(../images/inbox.png) no-repeat 0 50%;
  height: 20px;
  padding-left: 25px;
  min-width: 160px;
}
#pm-menu .send {
  background: url(../images/send.png) no-repeat 0 50%;
  height: 20px;
  padding-left: 25px;
  min-width: 160px;
}
.video-js .vjs-poster {
  z-index: inherit !important;
}
.popup .modal-content {
  border: 1px solid #ccc;
  background-color: #fff;
}
.popup .modal-content .modal-header {
  background-color: #f5f6f7;
}
.popup .modal-content .modal-header .modal-title {
  color: #000;
  font-size: 14px;
}
.popup .modal-content .modal-header .search {
  background: transparent;
  border: 1px solid #ccc;
  margin: 10px 0 0 0;
  padding: 3px 10px;
}
.popup .modal-content .modal-body {
  padding: 0;
}
.popup .modal-content .modal-body ul {
  list-style: none;
  padding: 5px 10px;
}
.popup .modal-content .modal-body ul li {
  width: 100%;
  padding: 5px 0;
  border-bottom: 1px solid #ccc;
  min-height: 50px;
  clear: both;
}
.popup .modal-content .modal-body ul li:last-child {
  border-bottom: 0;
}
.popup .modal-content .modal-body ul li .profil {
  float: left;
  margin-right: 15px;
  padding: 0;
  width: 40px;
  height: 40px;
}
.popup .modal-content .modal-body ul li .flag {
  float: left;
  margin-right: 15px;
  padding: 12px 0 0 0;
}
.popup .modal-content .modal-body ul li .name {
  float: left;
  font-size: 14px;
  color: #000;
  font-weight: bold;
  display: block;
  padding: 8px 0 0 0;
}
.popup .modal-content .modal-body ul li .details {
  float: right;
  min-width: 50px;
  display: block;
  height: 25px;
  line-height: 25px;
  color: #4e5665;
  padding: 0 8px;
  border: 1px solid #ccc;
  text-shadow: 0 1px 0 #fff;
  background-color: #f6f7f8 ;
  border-radius: 2px;
  -webkit-border-radius: 2px;
  -moz-border-radius: 2px;
  -ms-border-radius: 2px;
  text-align: center;
  margin: 7px 0 0 0;
  text-decoration: none;
}
.popup .modal-content .modal-body .mCustomScrollbar {
  height: 308px;
}
.popup .modal-content .modal-body .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #ebebee;
}
.popup .modal-content .modal-body .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #97979c;
}
.popup .modal-content .modal-body .mCustomScrollbar .mCSB_inside .mCSB_container {
  margin-right: 20px;
}
.modal-dialog {
  width: 450px;
}
.modal-content {
  border: 1px solid #9782db;
  -moz-border-radius: 0 0 0 Infinitypx 0 0 137px;
  -webkit-border-radius: 0;
  border-radius: 0;
  -moz-background-clip: padding;
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  background-color: rgba(208, 199, 234, 0.85);
  -moz-box-shadow: 0 1px 3px rgba(0, 0, 0, 0.3);
  -webkit-box-shadow: 0 1px 3px rgba(0, 0, 0, 0.3);
  box-shadow: 0 1px 3px rgba(0, 0, 0, 0.3);
}
.modal-content .modal-header .modal-title {
  color: #110537;
  font-family: "Roboto Condensed";
  font-size: 16px;
}
.modal-content .modal-body {
  text-align: center;
}
.modal-content .modal-body p {
  text-align: left;
  color: #110537;
  font-family: "Roboto";
  font-size: 12px;
}
.select2-drop {
  border: 0 !important;
  border-radius: 0;
  margin: 0;
  background: #1d213c;
  padding: 15px 0;
  text-align: left;
  box-shadow: none;
}
.select2-drop:hover .nicescroll-rails {
  opacity: 1 !important;
}
.select2-drop .nicescroll-rails {
  background-color: #10132c !important;
  width: 5px !important;
  opacity: 0 !important;
}
.select2-drop .nicescroll-rails > div {
  background-color: #4a638d !important;
  border-radius: 0 !important;
  border: 0 !important;
}
.select2-drop:before {
  background: url(../images/row-top-nav.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 23px;
  height: 10px;
  position: absolute;
  right: 50%;
  top: -9px;
}
.select2-drop.select2-drop-active {
  border: 0;
  border-radius: 0;
  margin: 0;
  background-color: #1d213c;
  padding: 15px 0;
  text-align: left;
  box-shadow: none;
}
.select2-drop.select2-drop-active:before {
  background: url(../images/row-top-nav.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 23px;
  height: 10px;
  position: absolute;
  right: 50%;
  top: -9px;
}
.select2-drop.select2-drop-above {
  border: 0;
  border-radius: 0;
  margin: 0;
  background-color: #1d213c;
  padding: 15px 0;
  text-align: left;
  box-shadow: none;
}
.select2-drop.select2-drop-above:before {
  background: url(../images/row-top-nav.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 23px;
  height: 10px;
  position: absolute;
  right: 50%;
  top: -9px;
}
.select2-drop .select2-search {
  /*display: none;*/
  padding: 0;
}
.select2-drop .select2-search input {
  background: #fff;
  min-height: 20px;
  padding: 0 7px 0 20px;
  color: #939bbd;
  font-family: "Roboto";
  font-size: 12px;
}
.select2-drop .select2-results {
  max-height: 315px;
  padding: 0;
  margin: 0;
  /*overflow-x: inherit;
        overflow-y: inherit;*/
}
.select2-drop .select2-results li {
  color: #939bbd;
  font-family: "Roboto";
  font-size: 12px;
  padding-left: 15px;
  margin-right: 7px;
}
.select2-drop .select2-results li:hover,
.select2-drop .select2-results li.select2-highlighted {
  color: #fff;
  background-color: #00bf79;
}
.mCSB_scrollTools {
  opacity: 0;
}
.mCustomScrollbar :hover .mCSB_scrollTools {
  opacity: 1;
}
.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_dragger:active .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_dragger:hover .mCSB_dragger_bar {
  background-color: #4a638d;
  width: 5px;
  border-radius: 0;
}
.mCSB_scrollTools .mCSB_draggerRail {
  background-color: #10132c;
  width: 5px;
}
.mCSB_inside > .mCSB_container {
  margin-right: 11px;
}
.pdr-0 {
  padding-right: 0;
}
.pdl-0 {
  padding-left: 0;
}
.pdlr-0 {
  padding-left: 0;
  padding-right: 0;
}
.comment {
  display: block;
  font-family: 'Roboto';
  font-size: 11px;
  background: url(../images/comment.png) no-repeat 0 50%;
  height: 12px;
  width: 35px;
  float: left;
  padding-left: 12px;
  cursor: pointer;
}
.view {
  display: block;
  font-family: 'Roboto';
  font-size: 11px;
  background: url(../images/view.png) no-repeat 0 50%;
  height: 12px;
  width: 35px;
  float: left;
  padding-left: 12px;
  cursor: pointer;
}
.share-accueil {
  background: url(../images/ico-share.png) no-repeat 0 50%;
  height: 15px;
  width: 17px;
  float: left;
  cursor: pointer;
}
.share-accueil:hover {
  background: url(../images/ico-share-over.png) no-repeat 0 50%;
}
.note {
  list-style: none;
  width: 100%;
  height: 15px;
  margin: 15px 0 10px 0;
}
.note li {
  float: left;
  margin-left: 3px;
}
.note li:last-child {
  margin-left: 0;
}
.note li.note-active {
  background: url(../images/note-active.png) no-repeat 0 50%;
  height: 12px;
  width: 12px;
}
.note li.note-not-active {
  background: url(../images/note-not-active.png) no-repeat 0 50%;
  height: 12px;
  width: 12px;
}
.view-comment {
  float: right;
}
.view-comment ul {
  list-style: none;
}
.view-comment ul li {
  float: left;
  min-height: 12px;
  border-right: 1px solid #55575d;
  padding-right: 10px;
  margin-right: 10px;
  /*&:first-child {
                border-right : 1px solid #55575d;
                padding-right: 10px;
                margin-right: 10px;
            }*/
}
.view-comment ul li:last-child {
  border-right: 0;
  padding-right: 0;
  margin-right: 0;
}
.view-comment ul li .tooltip.bottom {
  font-family: "Roboto Condensed";
  margin-top: 5px;
}
.view-comment ul li .tooltip.bottom .tooltip-arrow {
  border-bottom-color: #fff;
}
.view-comment ul li .tooltip.bottom .tooltip-inner {
  background-color: #fff;
  /*border: 1px solid #000;*/
  color: #000;
  border-radius: 0;
  padding: 5px;
}
.view-comment ul li .tooltip.bottom .tooltip-inner span {
  color: #00bf79;
  margin-right: 5px;
}
.view-comment ul li a {
  display: block;
  height: 13px;
  width: 15px;
}
.view-comment ul li a.send {
  background: url(../images/logo-send.png) no-repeat 50% 50%;
}
.view-comment ul li a.send:hover {
  background: url(../images/logo-send-over.png) no-repeat 50% 50%;
}
.view-comment ul li a.msg {
  background: url(../images/logo-msg.png) no-repeat 50% 50%;
}
.view-comment ul li a.discu {
  background: url(../images/logo-discu.png) no-repeat 0 50%;
  color: #00bf79;
  font-family: "Roboto Condensed";
  font-size: 12px;
  min-width: 120px;
  padding-left: 20px;
  height: 15px;
}
.view-comment ul li a.discu span {
  display: block;
}
.img-with-border {
  background-color: #d2d2d8;
  padding: 4px;
}
.img-with-rounded-corner {
  border-radius: 50px;
  -webkit-border-radius: 50px;
  -moz-border-radius: 50px;
}
.img-with-border-and-rounded-corner {
  background-color: #d2d2d8;
  padding: 4px;
  border-radius: 50px;
  -webkit-border-radius: 50px;
  -moz-border-radius: 50px;
}
.img-with-border-and-rounded-corner-big {
  background-color: #d2d2d8;
  padding: 4px;
  border-radius: 80px;
  -webkit-border-radius: 80px;
  -moz-border-radius: 80px;
}
/*.img-with-avatar {
    background-image: url(../images/avatar-pdf.png);
    background-repeat: no-repeat;
    background-position: 50% 50%;
}
.img-with-border-and-rounded-corner-and-avatar {
    background-color: #d2d2d8;
    background-image: url(../images/avatar-pdf.png);
    background-repeat: no-repeat;
    background-position: 50% 50%;
    padding: 4px;
    border-radius: 50px;
    -webkit-border-radius: 50px;
    -moz-border-radius: 50px;
}*/
.carousel-indicators {
  z-index: inherit;
}
.img-edit {
  position: relative;
}
.img-edit:hover .edit {
  opacity: 1;
}
.img-edit .edit {
  width: 32px;
  height: 32px;
  position: absolute;
  top: 13px;
  right: 10px;
  background: url(../images/img-edit.png) no-repeat 50% 50%;
  opacity: 0;
}
.img-delete {
  position: relative;
}
.img-delete:hover .delete {
  opacity: 1;
}
.img-delete .delete {
  width: 32px;
  height: 32px;
  position: absolute;
  top: 13px;
  right: 10px;
  background: url(../images/img-delete.png) no-repeat 50% 50%;
  opacity: 0;
}
.bloc-with-edit {
  position: relative;
}
.bloc-with-edit:hover .edit {
  opacity: 1;
  z-index: 1;
}
.bloc-with-edit .edit {
  width: 32px;
  height: 32px;
  position: absolute;
  top: 0;
  right: 0;
  background: url(../images/img-edit.png) no-repeat 50% 50%;
  opacity: 0;
}
.home .bg-wrap-top {
  background: url(../images/bg-header-top-v3.jpg) no-repeat 50% 50%;
  min-height: 300px;
}
.no-home .bg-wrap-top {
  /*background: url(../images/bg-header-top-v4.jpg) no-repeat 50% 50%;*/
  min-height: 122px;
}
.no-home #header {
  background: url(../images/bg-header-top-v4.jpg) no-repeat 50% 50%;
  min-height: 122px;
}
.no-home #header .bg-fixed-wrap-top {
  background: none;
  min-height: 37px;
}
.no-home #header .bg-fixed-wrap-top .nav-menu {
  min-height: 37px;
}
.no-home #header .bg-fixed-wrap-top .nav-menu .menu-left {
  margin: 5px 0;
}
.no-home #header .bg-fixed-wrap-top .nav-menu .menu-left .ico-acc {
  background: url(../images/logo-acceuil.png) no-repeat 50% 50%;
  display: block;
  width: 28px;
  height: 28px;
}
.no-home #header .bg-fixed-wrap-top .nav-menu .menu-left .no-ico {
  margin-top: 7px;
}
.no-home #header .bg-fixed-wrap-top .nav-menu .dropdown {
  min-height: 37px;
}
.no-home #header .bg-fixed-wrap-top .nav-menu .dropdown .dropdown-toggle .flag {
  margin: 11px 0;
}
.no-home #header .bg-fixed-wrap-bottom {
  background-color: inherit;
  opacity: 1;
  min-height: 84px;
}
.no-home #header .bg-fixed-wrap-bottom .title {
  color: #fff;
  font-family: "Roboto Condensed";
  font-size: 38px;
  font-weight: bold;
  float: left;
  text-transform: uppercase;
  margin: 21px 0;
  width: auto;
}
.no-home #header .bg-fixed-wrap-bottom .profil {
  float: right;
  color: #898d9d;
  font-family: "Roboto";
  font-size: 18px;
  font-weight: 300;
  margin: 28px 7% 25px 0;
  width: auto;
}
.no-home #header .bg-fixed-wrap-bottom .profil .sexe {
  padding-left: 3px;
}
.no-home #header .bg-fixed-wrap-bottom .profil .name {
  padding-left: 3px;
}
.no-home #wrap {
  background-color: #fff;
  padding-top: 45px;
}
.no-home #wrap.contact {
  /*padding-top: 95px;*/
}
.no-home #wrap.contact .contact-bloc .middle {
  width: 70%;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal {
  max-width: 365px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group {
  margin: 0 0 8px 0;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group.big-marge {
  margin: 0 0 45px 0;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control {
  padding: 12px 20px;
  color: #808d8e;
  font-family: "Roboto";
  font-size: 14px;
  border-radius: 0;
  min-height: 43px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control ::-webkit-input-placeholder {
  color: #808d8e;
  font-family: "Roboto";
  font-size: 14px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control ::-moz-placeholder {
  color: #808d8e;
  font-family: "Roboto";
  font-size: 14px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control :-moz-placeholder {
  /* Older versions of Firefox */
  color: #808d8e;
  font-family: "Roboto";
  font-size: 14px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control :-ms-input-placeholder {
  color: #808d8e;
  font-family: "Roboto";
  font-size: 14px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group .form-control-txt {
  width: 100%;
  padding: 12px 20px;
  background-color: #fff;
  background-image: none;
  border: 1px solid #ccc;
  webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group-btnn {
  float: right;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group-btnn .btn-default {
  color: #fff;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: bold;
  background-color: #7f8d8d;
  border: 0;
  border-radius: 0;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal p {
  float: left;
  color: #808d8e;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: 300;
  margin-top: 7px;
}
.no-home #wrap.contact .contact-bloc .middle .form-horizontal p span {
  color: #eb4738;
}
.no-home #wrap.contact .contact-bloc .middle .adr-adr {
  color: #7f8d8d;
  font-family: "Roboto";
  font-size: 16px;
  border-bottom: 1px solid #d5d9d9;
  border-top: 1px solid #d5d9d9;
  margin-top: 40px;
  padding: 30px 0;
  width: 70%;
}
.no-home.la-une #wrap {
  background-color: #ebebee;
  padding-top: 40px;
}
.no-home.la-une #wrap .article {
  background-color: #fff;
  padding: 30px;
  min-height: 1030px;
}
.no-home.la-une #wrap .article .title-article {
  margin-bottom: 50px;
}
.no-home.la-une #wrap .article .title-article .date {
  color: #0179df;
  font-family: "Roboto Condensed";
  font-size: 14px;
}
.no-home.la-une #wrap .article .title-article .title {
  color: #56585f;
  font-family: "Roboto Condensed";
  font-size: 30px;
}
.no-home.la-une #wrap .article .body-article p {
  color: #3e3f45;
  font-family: "Roboto";
  font-size: 15px;
  line-height: 18px;
  font-weight: 300;
  text-indent: 20px;
  margin-bottom: 20px;
}
.no-home.la-une #wrap .article .body-article p.last {
  margin-bottom: 30px;
}
.no-home.la-une #wrap .article .commentaire {
  padding-bottom: 35px;
  border-bottom: 2px solid #4288dd;
}
.no-home.la-une #wrap .article .add-comment {
  margin-top: 35px;
}
.no-home.la-une #wrap .article .add-comment .img-profil {
  float: left;
  width: 20%;
  text-align: center;
}
.no-home.la-une #wrap .article .add-comment .img-profil img {
  margin-bottom: 15px;
}
.no-home.la-une #wrap .article .add-comment .img-profil span {
  width: 100%;
  display: block;
  color: #55575d;
  font-family: "Roboto";
  font-size: 16px;
}
.no-home.la-une #wrap .article .add-comment .form-groupe {
  width: 80%;
  float: left;
  position: relative;
}
.no-home.la-une #wrap .article .add-comment .form-groupe:before {
  content: ' ';
  position: absolute;
  top: 42px;
  left: -10px;
  display: inline-block;
  width: 13px;
  height: 13px;
  background: url(../images/sep-comment.png) no-repeat 50% 50%;
}
.no-home.la-une #wrap .article .add-comment .form-groupe textarea {
  width: 100%;
  color: #a2a3a5;
  font-family: "Roboto";
  font-size: 14px;
  padding: 20px 15px;
  min-height: 155px;
  border: 1px solid #ccc;
  background-color: #fff;
  margin-bottom: 10px;
}
.no-home.la-une #wrap .article .add-comment .form-groupe .btn-default {
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 16px;
  border: 1px solid #9b9fa7;
  background-color: #9b9fa7;
  border-radius: 0;
  padding: 8px 40px;
  float: right;
}
.no-home.la-une #wrap .right-top {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.la-une #wrap .right-top .title-video {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #00bf79 url(../images/ico-video.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.la-une #wrap .right-top .carrousel-videos {
  width: 100%;
  padding: 0;
  float: none;
  min-height: 610px;
  border-bottom: 2px solid #00bf79;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner {
  min-height: inherit;
  max-height: 320px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner .item > img {
  min-height: 280px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner .item .carousel-caption {
  min-height: 60px;
  bottom: 0px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner .item .carousel-caption .video-title {
  margin: 10px 0 0 15px;
  font-size: 16px;
  display: block;
  float: none;
  text-align: left;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner .item .carousel-caption .date {
  float: left;
  color: #00bf79;
  font-family: "Roboto Condensed";
  font-size: 11px;
  margin-right: 15px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-inner .item .carousel-caption .info {
  margin: 0 15px 0 0;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-control {
  bottom: -60px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-control.left {
  left: 25%;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-control.right {
  right: 25%;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-indicators {
  left: 43%;
  bottom: -60px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .carousel .carousel-indicators li.active {
  background: url(../images/carousel/indicator-active-green.png) no-repeat 50% 50%;
}
.no-home.la-une #wrap .right-top .carrousel-videos .thumbs {
  margin-top: 20px;
  max-height: 200px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .thumbs .carousel-inner .item a {
  padding: 3px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom .date {
  margin-right: 5px;
}
.no-home.la-une #wrap .right-top .carrousel-videos .thumbs .carousel-inner .item a.selected {
  border: 2px solid #00bf79;
  position: relative;
  background-color: #fff;
}
.no-home.la-une #wrap .right-top .carrousel-videos .thumbs .carousel-inner .item a.selected:before {
  top: -22px;
}
.no-home.la-une #wrap .right-top .title-tchat {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #4288dd url(../images/ico-tchat-small.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.la-une #wrap .right-top .chat .search {
  margin-top: 15px;
  min-height: inherit;
  padding: 5px 15px;
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar {
  height: 282px;
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil:hover {
  background-color: #f6f6f7;
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil img {
  margin: 4px 3% 4px 3%;
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil .infos {
  margin: 0 3% 0 3%;
  /*img {
                                    margin: 25px 0 0 0;
                                }*/
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil .infos .name {
  float: left;
  margin: 17px 10px 0 0;
}
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil .status .enligne,
.no-home.la-une #wrap .right-top .chat .mCustomScrollbar .profil .status .horsligne {
  margin: 20px 10px 0 0;
  border-left: 1px solid #ccc;
  padding-left: 13px;
  width: 45px;
  height: 30px;
}
.no-home.la-une #wrap .right-top .chat .module-chat ul {
  background-position: 95% 50%;
}
.no-home.la-une #wrap .right-top .chat .module-chat ul li {
  margin-right: 4%;
}
.no-home.la-une #wrap .right-top .chat .module-chat ul li:first-child {
  margin-left: 5%;
}
.no-home.la-une #wrap .right-bottom {
  width: 100%;
  background-color: #fff;
  padding: 30px 10px 30px 20px;
  margin-bottom: 15px;
}
.no-home.la-une #wrap .right-bottom .list-bloc {
  margin-top: 0;
  min-height: inherit;
}
.no-home.la-une #wrap .right-bottom .list-bloc.mCustomScrollbar {
  height: 280px;
}
.no-home.la-une #wrap .right-bottom .list-bloc.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #e6ebed;
  border-radius: 0;
}
.no-home.la-une #wrap .right-bottom .list-bloc.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #9fb5d0;
}
.no-home.la-une #wrap .right-bottom .list-bloc .conversation {
  min-height: 140px;
  width: 98%;
}
.no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture {
  padding: 20px 0 0 0;
}
.no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture:after {
  top: 20px;
  left: 20%;
  height: 105px;
}
.no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-txt {
  padding: 25px 25px 10px 40px;
  display: table-cell;
  vertical-align: middle;
}
.no-home.la-une #wrap .search {
  padding: 40px 5px 40px 20px;
}
.no-home.la-une #wrap .search form {
  width: 95%;
  margin-bottom: 45px;
}
.no-home.la-une #wrap .search form .form-control {
  width: 80%;
  float: left;
  min-height: 45px;
  padding: 12px 20px;
  color: #55575f;
  font-family: "Roboto";
  font-size: 18px;
  border-radius: 0;
  border: 1px solid #d5d5d5;
  -moz-box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
  -webkit-box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
  box-shadow: inset 0 0 2px rgba(0, 0, 0, 0.14);
}
.no-home.la-une #wrap .search form .btn-default {
  width: 20%;
  float: left;
  min-height: 45px;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 18px;
  background-color: #c1c1c1;
  border: 0;
  border-radius: 0;
  margin-top: 0;
  padding: 0;
}
.no-home.la-une #wrap .search form .region {
  float: left;
  width: 49%;
  margin: 15px 1% 0 0;
}
.no-home.la-une #wrap .search form .region .select2-container {
  width: 100%;
}
.no-home.la-une #wrap .search form .region .select2-container .select2-choice {
  height: 30px;
  line-height: 30px;
  padding: 0 0 0 20px;
  color: #55575f;
  border-radius: 0;
  border: 1px solid #d5d5d5;
  background: transparent;
}
.no-home.la-une #wrap .search form .region .select2-container .select2-choice .select2-arrow {
  border-left: 0;
  border-radius: 0;
  background: #c1c1c1;
}
.no-home.la-une #wrap .search form .categorie {
  float: left;
  width: 49%;
  margin: 15px 0 0 1%;
}
.no-home.la-une #wrap .search form .categorie .select2-container {
  width: 100%;
}
.no-home.la-une #wrap .search form .categorie .select2-container .select2-choice {
  height: 30px;
  line-height: 30px;
  padding: 0 0 0 20px;
  color: #55575f;
  border-radius: 0;
  border: 1px solid #d5d5d5;
  background: transparent;
}
.no-home.la-une #wrap .search form .categorie .select2-container .select2-choice .select2-arrow {
  border-left: 0;
  border-radius: 0;
  background: #c1c1c1;
}
.no-home.la-une #wrap .search .result-search ul {
  list-style: none;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar {
  width: 100%;
  height: 625px;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li {
  min-height: 156px;
  margin-right: 20px;
  border-bottom: 1px solid #ccc;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-left {
  margin: 10px 3% 0px 0;
  float: left;
  width: 20%;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-middle {
  float: left;
  width: 42%;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-middle .name {
  color: #55575f;
  font-family: "Roboto Condensed";
  font-size: 24px;
  text-transform: uppercase;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-middle .ville {
  color: #838387;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  margin-bottom: 20px;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-middle .prop {
  color: #838387;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  margin-bottom: 10px;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-right {
  float: left;
  width: 35%;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-right .flag {
  float: right;
  margin-bottom: 15px;
  margin-top: 10px;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-right .favoris {
  float: right;
  color: #818284;
  font-family: "Roboto Condensed";
  font-size: 13px;
  border: 1px solid #d4d4d4;
  -moz-border-radius: 2px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  -moz-background-clip: padding;
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  background-color: #f3f3f3;
  margin-bottom: 10px;
  padding: 10px 20px 10px 45px;
  background-image: url(../images/ico-favoris.png);
  background-position: 20px 50%;
  background-repeat: no-repeat;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-right p {
  float: right;
  color: #00bf79;
  font-family: "Roboto Condensed";
  font-size: 12px;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #f2f2f3;
  border-radius: 0;
}
.no-home.la-une #wrap .search .result-search ul.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #4288dd;
}
.no-home.la-une #footer.small {
  margin: 0;
}
.no-home.recherche .select2-drop.select2-drop-active {
  width: 100%;
  margin: 0;
  padding: 0;
  position: absolute;
  top: 100%;
  background: #fff;
  border-radius: 0;
  -webkit-box-shadow: 0 4px 5px rgba(0, 0, 0, 0.15);
  -moz-box-shadow: 0 4px 5px rgba(0, 0, 0, 0.15);
  box-shadow: 0 4px 5px rgba(0, 0, 0, 0.15);
}
.no-home.recherche .select2-drop.select2-drop-active:before {
  display: none;
}
.no-home.recherche .select2-drop.select2-drop-active .select2-search {
  z-index: inherit;
}
.no-home.recherche .select2-drop.select2-drop-active .select2-results li {
  color: #55575f;
}
.no-home.recherche .select2-drop.select2-drop-active .select2-results li.select2-highlighted {
  background-color: #c1c1c1;
}
.no-home.recherche .select2-drop.select2-drop-active .nicescroll-rails {
  background-color: #c1c1c1 !important;
}
.no-home.recherche .select2-drop.select2-drop-active .nicescroll-rails > div {
  background-color: #55575f !important;
}
.no-home.recherche #wrap .right-top .carrousel-videos {
  min-height: 570px;
}
.no-home.recherche #wrap .article {
  min-height: 943px;
}
.no-home.paypal #header .bg-fixed-wrap-bottom .title span {
  color: #fff;
  font-family: "Roboto";
  font-size: 16px;
  font-weight: normal;
  text-transform: uppercase;
  margin: 0 0 0 5px;
}
.no-home.paypal .payement {
  background-color: #fbfbfb;
  padding: 95px 65px 40px 65px;
}
.no-home.paypal .payement .estim-date {
  width: 275px;
  height: 102px;
  margin: 0 auto 100px auto;
}
.no-home.paypal .payement .estim-date .numbers {
  overflow: hidden;
}
.no-home.paypal .payement .estim-date .numbers .bloc {
  width: 97px;
  height: 67px;
  background: url(../images/btn-paypal.png) no-repeat 50% 50%;
  float: left;
  padding-top: 30px;
  text-align: center;
  color: #767676;
  margin-right: 30px;
}
.no-home.paypal .payement .estim-date .numbers .bloc.last {
  margin-right: 0px;
}
.no-home.paypal .payement .module-paypal {
  border: 1px solid #d1d1d1;
  background-color: #fbfbfb;
  -moz-box-shadow: 0 1px 3px rgba(0, 0, 0, 0.2);
  -webkit-box-shadow: 0 1px 3px rgba(0, 0, 0, 0.2);
  box-shadow: 0 1px 3px rgba(0, 0, 0, 0.2);
  width: 22%;
  margin: 0 0 3% 3%;
  min-height: 180px;
  padding: 20px 0 0 0;
  text-align: center;
  float: left;
}
.no-home.paypal .payement .module-paypal.first {
  margin: 0 0 3% 0;
}
.no-home.paypal .payement .module-paypal .devis {
  display: block;
  color: #56585f;
  font-family: "Roboto Condensed";
  font-size: 30px;
  text-transform: uppercase;
  margin-bottom: 10px;
}
.no-home.paypal .payement .module-paypal .btn-paypal {
  display: block;
  width: 155px;
  height: 35px;
  background: url(../images/btn-paypal.png) no-repeat 50% 50%;
  margin: 0 auto 10px auto;
}
.no-home.paypal .payement .module-paypal .partenaires {
  width: 201px;
  height: 14px;
  margin: 0 auto;
}
.no-home.user {
  background-color: #ebebee;
}
.no-home.user #nb-favoris {
  width: inherit;
  margin: 5px 2% 0 0;
}
.no-home.user .bg-wrap-top {
  min-height: 0;
}
.no-home.user #wrap {
  padding-top: 45px;
}
.no-home.user #wrap .bloc-infos {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.user #wrap .bloc-infos.info-open .body-infos {
  display: block;
}
.no-home.user #wrap .bloc-infos .title-infos {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #6c7993 url(../images/ico-infos.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.user #wrap .bloc-infos .body-infos {
  width: 100%;
  background-color: #fff;
  padding: 40px 35px 30px 30px;
  display: none;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top {
  width: 100%;
  margin-bottom: 55px;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .title {
  display: block;
  width: 100%;
  color: #6c7993;
  font-family: "Roboto Condensed";
  font-size: 18px;
  font-weight: bold;
  border-bottom: 1px solid #ced0d2;
  padding-bottom: 15px;
  text-transform: uppercase;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe {
  width: 100%;
  min-height: 53px;
  border-bottom: 1px solid #ced0d2;
  clear: both;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe.big {
  min-height: 80px;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe.big label {
  padding: 29px 5px 0 0;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe.big input[type="text"] {
  min-height: 79px;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label {
  color: #838487;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  padding: 16px 5px 0 0;
  float: left;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label.w-20 {
  width: 20%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label.w-35 {
  width: 35%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label.w-40 {
  width: 40%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label.w-50 {
  width: 50%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"],
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"] {
  color: #838487;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  min-height: 52px;
  border: 0;
  padding: 0;
  float: left;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"].w-80,
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"].w-80 {
  width: 80%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"].w-65,
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"].w-65 {
  width: 65%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"].w-60,
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"].w-60 {
  width: 60%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"].w-50,
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"].w-50 {
  width: 50%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"].w-40,
.no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"].w-40 {
  width: 40%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .title {
  display: block;
  width: 100%;
  color: #6c7993;
  font-family: "Roboto Condensed";
  font-size: 18px;
  font-weight: bold;
  border-bottom: 1px solid #ced0d2;
  padding-bottom: 15px;
  text-transform: uppercase;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe {
  width: 100%;
  min-height: 53px;
  border-bottom: 1px solid #ced0d2;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe label {
  color: #838487;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  padding: 16px 5px 0 0;
  float: left;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe label.w-30 {
  width: 30%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe input[type="text"] {
  color: #838487;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  min-height: 52px;
  border: 0;
  padding: 0;
  float: left;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe input[type="text"].w-70 {
  width: 70%;
}
.no-home.user #wrap .bloc-infos .body-infos .infos-bottom .form-groupe select {
  color: #838487;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  float: left;
  margin: 16px 0 0 0;
}
.no-home.user #wrap .bloc-infos .body-infos .form-action {
  width: 100%;
}
.no-home.user #wrap .bloc-infos .body-infos .form-action .btn-default {
  float: right;
  padding: 10px 45px;
  border: 1px solid #9b9fa7;
  background-color: #9b9fa7;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 16px;
  border-radius: 0;
}
.no-home.user #wrap .bloc-photo {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.user #wrap .bloc-photo .title-photo {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #6c7993 url(../images/ico-photo.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.user #wrap .bloc-photo .body-photo {
  width: 100%;
  background-color: #fff;
  padding: 40px 35px 70px 30px;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-left {
  float: left;
  width: 38%;
  position: relative;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-left .edit {
  width: 32px;
  height: 32px;
  position: absolute;
  top: -35px;
  right: 0;
  background: url(../images/img-edit.png) no-repeat 50% 50%;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-left .carousel .carousel-control {
  top: inherit;
  bottom: -30px;
  background-image: none;
  width: 16px;
  height: 16px;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-left .carousel .carousel-control.left {
  background: url(../images/slide-profil/control-left.png) no-repeat 50% 50%;
  left: inherit;
  right: 20px;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-left .carousel .carousel-control.right {
  background: url(../images/slide-profil/control-right.png) no-repeat 50% 50%;
  right: 0;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-right {
  float: left;
  width: 57%;
  margin-left: 5%;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-right .carousel .carousel-control {
  top: inherit;
  bottom: -30px;
  background-image: none;
  width: 16px;
  height: 16px;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-right .carousel .carousel-control.left {
  background: url(../images/slide-profil/control-left.png) no-repeat 50% 50%;
  left: inherit;
  right: 20px;
}
.no-home.user #wrap .bloc-photo .body-photo .carousel-right .carousel .carousel-control.right {
  background: url(../images/slide-profil/control-right.png) no-repeat 50% 50%;
  right: 0;
}
.no-home.user #wrap .bloc-forum {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.user #wrap .bloc-forum .title-forum {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #00bf79 url(../images/ico-forum.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.user #wrap .bloc-forum .body-forum {
  padding: 20px 10px 30px 30px;
  background-color: #fff;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar {
  height: 275px;
  margin-bottom: 25px;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #f2f2f3;
  border-radius: 0;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #00bf79;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation {
  padding-bottom: 10px;
  margin-bottom: 10px;
  margin-right: 20px;
  border-bottom: 1px solid #cfd1d5;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .img-forum {
  width: 13%;
  float: left;
  margin-right: 2%;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text {
  width: 84%;
  float: left;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-top {
  width: 100%;
  margin-bottom: 3px;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-top .name {
  color: #55575d;
  font-family: "Roboto";
  font-size: 14px;
  text-decoration: underline;
  float: left;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-top .date {
  color: #00bf79;
  font-family: "Roboto";
  font-size: 12px;
  float: right;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-bottom {
  width: 100%;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-bottom .forum-comment {
  position: relative;
  padding: 10px 15px;
  color: #55575d;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: 300;
  background-color: #f0f0f0;
  border: 1px solid #dfdfdf;
  margin-left: 3%;
  width: 97%;
}
.no-home.user #wrap .bloc-forum .body-forum .mCustomScrollbar .conversation .text .text-bottom .forum-comment:before {
  background: url(../images/forum-comment-row.png) no-repeat 50% 50%;
  content: ' ';
  display: inline-block;
  width: 13px;
  height: 13px;
  position: absolute;
  left: -10px;
  top: 12px;
}
.no-home.user #wrap .bloc-forum .body-forum .forum-add-comment {
  padding-top: 20px;
  border-top: 2px solid #00bf79;
  margin-right: 25px;
}
.no-home.user #wrap .bloc-forum .body-forum .forum-add-comment .img-forum-comment {
  width: 13%;
  float: left;
  margin-right: 2%;
}
.no-home.user #wrap .bloc-forum .body-forum .forum-add-comment .forum-input {
  padding: 15px;
  border-radius: 0;
  border: 1px solid #9c9fa8;
  box-shadow: none;
  width: 85%;
  float: left;
}
.no-home.user #wrap .bloc-forum .body-forum .forum-add-comment .forum-action {
  width: 100%;
  margin-top: 10px;
}
.no-home.user #wrap .bloc-forum .body-forum .forum-add-comment .forum-action .btn-forum-action {
  float: right;
  padding: 10px 45px;
  border: 1px solid #9b9fa7;
  background-color: #9b9fa7;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 16px;
  border-radius: 0;
}
.no-home.user #wrap .bloc-favoris {
  width: 100%;
}
.no-home.user #wrap .bloc-favoris .title-favoris {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #4288dd url(../images/ico-favori.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.user #wrap .bloc-favoris .body-favoris {
  padding: 25px 35px 30px 30px;
  background-color: #fff;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list {
  list-style: none;
  position: relative;
  height: 60px;
  margin-bottom: 35px;
  border-bottom: 4px solid #4288dd;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list li {
  display: table;
  float: left;
  text-align: center;
  height: 56px;
  margin-right: 2px;
  cursor: pointer;
  background-color: #e9e9e9;
  border-radius: 2px 2px 0 0;
  -moz-border-radius: 2px 2px 0 0;
  -webkit-border-radius: 2px 2px 0 0;
  width: 48%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list li a {
  text-decoration: none;
  display: table-cell;
  vertical-align: middle;
  color: #2c3d4f;
  font-family: "Roboto Condensed";
  font-size: 14px;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list li.active {
  background-color: #4288dd;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list li.active a {
  color: #fff;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-list li:last-child {
  margin-right: 0;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content {
  list-style: none;
  position: relative;
  width: 100%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li {
  width: 100%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li.mCustomScrollbar {
  height: 500px;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
  margin-right: 0;
  border-radius: 0;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  border-radius: 0;
  margin-right: 0;
  background-color: #5294e4;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav {
  width: 100%;
  padding-bottom: 25px;
  margin-bottom: 25px;
  border-bottom: 1px solid #cfd1d5;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav.last {
  margin-bottom: 0;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .left {
  float: left;
  margin-right: 5%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .right {
  float: right;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .img-fav {
  width: 55%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .img-fav img {
  width: 100%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav {
  width: 40%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav .fav-top {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav .fav-top .flag-fav {
  /*float: left;*/
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav .fav-top .date-fav {
  color: #4187dd;
  font-family: "Roboto Condensed";
  font-size: 12px;
  /*float: right;*/
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav .fav-middle {
  width: 100%;
  color: #a2a3a5;
  font-family: "Roboto";
  font-size: 14px;
  margin-bottom: 5px;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li .fav .txt-fav .fav-bottom {
  width: 100%;
  color: #b5b9c3;
  font-family: "Roboto";
  font-size: 12px;
  padding-left: 22px;
  background: url(../images/favoris-tab.png) no-repeat 0 50%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li.fav-user .fav .img-fav {
  width: 20%;
}
.no-home.user #wrap .bloc-favoris .body-favoris .mod-tab .tab-content li.fav-user .fav .txt-fav {
  width: 75%;
}
.no-home.user #wrap .right-top .chat .mCustomScrollbar {
  height: 330px;
}
.no-home.user #wrap .right-top .carrousel-videos {
  min-height: 570px;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a {
  width: 23%;
  margin-right: 2%;
  border: 0;
  background-color: transparent;
  padding: 0;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a .last {
  margin-right: 0;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a > img {
  border: 2px solid transparent;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a .captions {
  min-height: inherit;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a.selected {
  border: 0;
  background-color: transparent;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .thumbs .carousel-inner .item a.selected > img {
  border: 2px solid #00bf79;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .carousel-indicators {
  bottom: -50px;
}
.no-home.user #wrap .right-top .carrousel-videos .carousel .carousel-control {
  bottom: -50px;
}
.no-home.user #wrap .right-bottom .list-bloc {
  height: inherit;
}
.no-home.user #wrap .right-bottom .list-bloc .conversation .perso-picture p {
  text-align: center;
}
.no-home.user #wrap .right-bottom .list-bloc .conversation .perso-picture p span {
  display: block;
}
.no-home.pro {
  background-color: #fff;
}
.no-home.pro #wrap {
  padding-top: 35px;
}
.no-home.pro #wrap .bg-no-white {
  background-color: #ebebee;
}
.no-home.pro #wrap .bg-no-white .share {
  padding: 0 25% 0 0;
  margin-bottom: 25px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo {
  width: 100%;
  margin: 0 0 10px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .title-infos-photo {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #4288dd url(../images/ico-infos-photo-favori.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo {
  padding: 25px 35px 30px 30px;
  background-color: #fff;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-top {
  padding: 0 0 35px 0;
  margin: 0 0 20px 0;
  border-bottom: 1px solid #ccc;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left {
  float: left;
  width: 50%;
  position: relative;
  /*.edit {
                                width: 32px;
                                height: 32px;
                                position: absolute;
                                top: -35px;
                                right: 0;
                                background: url(../images/img-edit.png) no-repeat 50% 50%;
                            }*/
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .titlecarousel {
  font-family: "Roboto Condensed";
  font-size: 18px;
  display: block;
  width: 100%;
  color: #4288dd;
  margin: 0 0 20px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .carousel .item img {
  /*float: left;*/
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .carousel .item .name {
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  color: #1d213c;
  /*float: left;
                                        padding: 15px 0 0 10px;*/
  padding: 10px 0 0 0;
  display: block;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .carousel .carousel-control {
  top: inherit;
  bottom: -15px;
  background-image: none;
  width: 8px;
  height: 11px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .carousel .carousel-control.left {
  background: url(../images/control-left-small.png) no-repeat 50% 50%;
  left: 15px;
  right: inherit;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-left .carousel .carousel-control.right {
  background: url(../images/control-right-small.png) no-repeat 50% 50%;
  left: 35px;
  right: inherit;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right {
  float: left;
  width: 48%;
  margin-left: 2%;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .titlecarousel {
  font-family: "Roboto Condensed";
  font-size: 18px;
  display: block;
  width: 100%;
  color: #4288dd;
  margin: 0 0 20px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .carousel .item img {
  /*float: left;*/
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .carousel .item .name {
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  color: #1d213c;
  /*float: left;
                                        padding: 15px 0 0 10px;*/
  padding: 10px 0 0 0;
  display: block;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .carousel .carousel-control {
  top: inherit;
  bottom: -15px;
  background-image: none;
  width: 8px;
  height: 11px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .carousel .carousel-control.left {
  background: url(../images/control-left-small.png) no-repeat 50% 50%;
  left: 15px;
  right: inherit;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-right .carousel .carousel-control.right {
  background: url(../images/control-right-small.png) no-repeat 50% 50%;
  left: 35px;
  right: inherit;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle {
  float: left;
  width: 100%;
  margin-bottom: 15px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .titlecarousel {
  font-family: "Roboto Condensed";
  font-size: 18px;
  display: block;
  width: 100%;
  color: #4288dd;
  margin: 0 0 20px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .item {
  min-height: 215px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .item .bloc {
  width: 50%;
  float: left;
  margin: 0 0 10px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .item .bloc img {
  /*float: left;*/
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .item .bloc .name {
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  color: #1d213c;
  /*float: left;
                                            padding: 15px 0 0 10px;*/
  padding: 10px 0 0 0;
  display: block;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .carousel-control {
  top: inherit;
  bottom: -15px;
  background-image: none;
  width: 16px;
  height: 16px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .carousel-control.left {
  background: url(../images/slide-profil/control-left.png) no-repeat 50% 50%;
  left: inherit;
  right: 20px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-middle .carousel .carousel-control.right {
  background: url(../images/slide-profil/control-right.png) no-repeat 50% 50%;
  left: inherit;
  right: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom {
  float: left;
  width: 100%;
  margin-bottom: 40px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .titlecarousel {
  font-family: "Roboto Condensed";
  font-size: 18px;
  display: block;
  width: 100%;
  color: #4288dd;
  margin: 0 0 20px 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .item {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .item > img {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-control {
  top: inherit;
  bottom: -25px;
  background-image: none;
  width: 16px;
  height: 16px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-control.left {
  background: url(../images/slide-profil/control-left.png) no-repeat 50% 50%;
  left: inherit;
  right: 20px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-control.right {
  background: url(../images/slide-profil/control-right.png) no-repeat 50% 50%;
  left: inherit;
  right: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-indicators {
  bottom: -25px;
  left: 0;
  width: auto;
  padding: 0;
  margin: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-indicators li {
  border: 1px solid #ccc;
  width: 10px;
  height: 10px;
  margin: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .carousel-bottom .carousel .carousel-indicators li.active {
  background-color: #4288dd;
  width: 10px;
  height: 10px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .description-infos {
  font-family: "Roboto";
  font-weight: 300;
  font-size: 13px;
  line-height: 22px;
  color: #1d213c;
  clear: both;
  margin-bottom: 20px;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .description-infos.mCustomScrollbar {
  height: 110px;
  width: 100%;
  /*.mCSB_container {
                                    margin-right: 0;
                                }*/
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .description-infos.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-infos-photo .body-infos-photo .description-infos.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #5294e4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .bloc-itin {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .bloc-itin .title-itin {
  display: block;
  width: 100%;
  min-height: 50px;
  line-height: 50px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #4288dd url(../images/ico-itineraire.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.pro #wrap .bg-no-white .bloc-itin .body-itin {
  height: 220px;
  border: 1px solid #ccc;
}
.no-home.pro #wrap .bg-no-white .bloc-itin .body-itin .carte {
  height: 100%;
  width: 100%;
  margin: auto;
}
.no-home.pro #wrap .bg-no-white .bloc-videos {
  width: 100%;
  /*margin-bottom: 10px;*/
}
.no-home.pro #wrap .bg-no-white .bloc-videos .title-video {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #00bf79 url(../images/ico-video.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos {
  width: 100%;
  padding: 0;
  float: none;
  min-height: 500px;
  /*border-bottom: 2px solid #00bf79;*/
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner {
  min-height: inherit;
  max-height: 320px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item > img {
  min-height: 280px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item a .captions {
  min-height: inherit;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item .carousel-caption {
  min-height: 60px;
  bottom: 0px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item .carousel-caption .video-title {
  margin: 10px 0 0 15px;
  font-size: 16px;
  display: block;
  float: none;
  text-align: left;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item .carousel-caption .date {
  float: left;
  color: #00bf79;
  font-family: "Roboto Condensed";
  font-size: 11px;
  margin-right: 15px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-inner .item .carousel-caption .info {
  margin: 0 15px 0 0;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control {
  bottom: -30px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.left {
  left: 25%;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.right {
  right: 25%;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-indicators {
  left: 40%;
  bottom: -30px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-indicators li.active {
  background: url(../images/carousel/indicator-active-green.png) no-repeat 50% 50%;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .thumbs {
  margin-top: 20px;
  max-height: 200px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .thumbs .carousel-inner .item a {
  padding: 3px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom .date {
  margin-right: 5px;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .thumbs .carousel-inner .item a.selected {
  border: 2px solid #00bf79;
  position: relative;
  background-color: #fff;
}
.no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .thumbs .carousel-inner .item a.selected:before {
  top: -22px;
}
.no-home.pro #wrap .bg-no-white .calendar {
  width: 100%;
  margin-bottom: 10px;
}
.no-home.pro #wrap .bg-no-white .calendar .title-calendar {
  display: block;
  width: 100%;
  min-height: 70px;
  line-height: 70px;
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  padding: 0 30px;
  background: #00bf79 url(../images/ico-calendar.png) no-repeat 90% 50%;
  text-transform: uppercase;
  text-decoration: none;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar {
  padding: 16px 20px 15px 20px;
  background-color: #fff;
  /*min-height: 360px;*/
  /*min-height: 400px;*/
  list-style: none;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li {
  list-style: none;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table caption {
  text-align: center;
  margin: 0 0 10px 0;
  font-size: 16px;
  text-transform: uppercase;
  color: #00bf79;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table thead tr th {
  background: #fff;
  font-family: Myriad Pro;
  color: #676c7a;
  font-size: 14px;
  font-weight: 400;
  border-width: 0px 1px 1px 0px !important;
  height: 25px !important;
  width: 40px !important;
  border-style: solid;
  border-color: #888;
  text-align: center !important;
  border-left: 10px solid #fff !important;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tfoot tr td {
  background: #fff;
  border-width: 0px 1px 1px 0px !important;
  height: 30px !important;
  width: 40px !important;
  border-style: solid;
  border-color: #888;
  text-align: center !important;
  border-left: 10px solid #fff !important;
  border-top: 2px solid #fff !important;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tfoot tr td.pad {
  border: 0;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tfoot tr a {
  font-family: Myriad Pro;
  color: #676c7a;
  font-size: 14px;
  font-weight: 400;
  text-decoration: none;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tbody tr td {
  background: #fff;
  font-family: Myriad Pro;
  color: #676c7a;
  font-size: 14px;
  font-weight: 400;
  border-width: 0px 1px 1px 0px !important;
  height: 30px !important;
  width: 40px !important;
  border-style: solid;
  border-color: #888;
  text-align: center !important;
  border-left: 10px solid #fff !important;
  border-top: 10px solid #fff !important;
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tbody tr td.today {
  background-color: #00bf79;
  color: #fff;
  /*border-color: #00bf79;*/
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tbody tr td.event {
  background-color: cornflowerblue;
  color: #fff !important;
  /*border-color: cornflowerblue;*/
}
.no-home.pro #wrap .bg-no-white .calendar .body-calendar li table tbody tr td.event a {
  color: #fff !important;
}
.no-home.pro #wrap .bg-no-white .appel {
  width: 100%;
  min-height: 130px;
  margin: 0 0 10px 0;
  background: #97979c;
}
.no-home.pro #wrap .bg-no-white .appel:hover {
  background: #f69b0c;
}
.no-home.pro #wrap .bg-no-white .appel .reserv {
  display: block;
  text-align: center;
  /*min-height: 130px;*/
  text-decoration: none;
  color: #fff;
  font-family: "Roboto Condensed";
  font-size: 16px;
  font-weight: bold;
  text-transform: uppercase;
  background: url(../images/ico-reservation.png) no-repeat 50% 20%;
  padding: 40% 0 0 0;
}
.no-home.pro #wrap .bg-no-white .appel .download {
  display: block;
  /*background: url(../images/ico-download.png) no-repeat 50% 20%;*/
  font-family: "Roboto Condensed";
  font-size: 14px;
  color: #f69b0c;
  background: #fff;
  text-align: center;
  line-height: 17px;
  border-radius: 5px;
  width: 87px;
  height: 17px;
  margin: 8px auto 0;
}
.no-home.pro #wrap .bg-no-white .reservation {
  width: 100%;
  min-height: 130px;
  background: #97979c;
}
.no-home.pro #wrap .bg-no-white .reservation:hover {
  background: #9ad916;
}
.no-home.pro #wrap .bg-no-white .reservation a {
  display: block;
  text-align: center;
  min-height: 130px;
  text-decoration: none;
  color: #fff;
  font-family: "Roboto Condensed";
  font-size: 16px;
  line-height: 16px;
  font-weight: bold;
  background: url(../images/ico-chat.png) no-repeat 50% 20%;
  padding: 50% 0 0 0;
}
.no-home.pro #wrap .bg-no-white .horaire {
  width: 100%;
  background-color: #7179ad;
  min-height: 270px;
  padding: 22px 27px;
}
.no-home.pro #wrap .bg-no-white .horaire .top {
  border-top: 1px solid #171f63;
  border-bottom: 1px solid #171f63;
  padding: 10px 0;
  margin: 0 0 15px 0;
}
.no-home.pro #wrap .bg-no-white .horaire .top .titleleft {
  color: #fff;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  float: left;
  text-transform: uppercase;
}
.no-home.pro #wrap .bg-no-white .horaire .top .titleright {
  color: #171e64;
  font-family: "Roboto Condensed";
  font-size: 18px;
  float: right;
}
.no-home.pro #wrap .bg-no-white .horaire table {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.odd {
  background-color: #bdbcdf;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.even {
  background-color: #a9a9d5;
}
.no-home.pro #wrap .bg-no-white .horaire table tr td {
  color: #171f63;
  font-family: "Roboto Condensed";
  font-size: 12px;
  border-bottom: 2px solid #7179ad;
  padding: 0 8px;
}
.no-home.pro #wrap .bg-no-white .horaire table tr td.small {
  width: 39%;
  border-right: 2px solid #7179ad;
}
.no-home.pro #wrap .bg-no-white .horaire table tr td.big {
  width: 60%;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.active {
  background-color: #171f63;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.active td {
  color: #fff;
  border-top: 2px solid #fff;
  border-bottom: 2px solid #fff;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.active td.small {
  border-left: 2px solid #fff;
}
.no-home.pro #wrap .bg-no-white .horaire table tr.active td.big {
  border-right: 2px solid #fff;
}
.no-home.pro #wrap .bg-no-white .tab {
  width: 100%;
  padding: 25px 10px 35px 10px;
  background-color: #fff;
}
.no-home.pro #wrap .bg-no-white .tab .title-top {
  text-align: center;
  color: #484c5b;
  font-family: "Roboto";
  font-size: 20px;
  font-weight: 300;
  margin: 0 0 15px 0;
}
.no-home.pro #wrap .bg-no-white .tab .title-top span {
  text-transform: uppercase;
  margin-right: 5px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-title {
  width: 100%;
  min-height: 40px;
  line-height: 40px;
  background-color: #7179ae;
  text-align: center;
  color: #fff;
  font-family: "Roboto Condensed";
  font-size: 24px;
  text-transform: uppercase;
  margin: 0 0 4px 0;
}
.no-home.pro #wrap .bg-no-white .tab .mCustomScrollbar {
  width: 100%;
  height: 500px;
}
.no-home.pro #wrap .bg-no-white .tab .mCustomScrollbar .mCSB_container {
  margin-right: 0;
}
.no-home.pro #wrap .bg-no-white .tab .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d1ef;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #857ba4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .head {
  width: 100%;
  background-color: #9fa7cd;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .head div {
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 18px;
  padding: 6px 0;
  border-bottom: 2px solid #fff;
  font-weight: normal;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left {
  width: 96%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody.odd {
  background-color: #cfd1dd;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody.even {
  background-color: #ebebeb;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody tr.head {
  width: 100%;
  background-color: #9fa7cd;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody tr.head td {
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 18px;
  padding: 6px 0;
  border-bottom: 2px solid #fff;
  font-weight: normal;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody tr th {
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 12px;
  text-align: center;
  border-bottom: 1px solid #fff;
  border-right: 1px solid #fff;
  font-weight: normal;
}
.no-home.pro #wrap .bg-no-white .tab .tab-left tbody tr td {
  color: #1d213b;
  font-family: "Roboto";
  font-size: 14px;
  text-align: center;
  border-bottom: 1px solid #fff;
  padding: 9px 0;
  font-weight: 300;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .mCustomScrollbar {
  width: 100%;
  height: 500px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .mCustomScrollbar .mCSB_container {
  margin-right: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d1ef;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #857ba4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .carousel-inner.galerie .item {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .carousel-inner.galerie .item table {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .carousel-inner.galerie .item table tr.head td {
  min-height: 40px;
  padding: 6px 0;
  width: 100%;
  background-color: #cfd1de;
  border-bottom: 1px solid #fff;
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 18px;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .carousel-inner.galerie .item table tr.bottom td {
  min-height: 40px;
  padding: 9px 0;
  width: 100%;
  background-color: #cfd1de;
  border-bottom: 1px solid #fff;
  color: #1d213b;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .carousel-inner.galerie .item table tr td {
  min-height: 40px;
  padding: 9px 0;
  width: 100%;
  background-color: #ebebeb;
  border-bottom: 1px solid #fff;
  color: #1d213b;
  font-family: "Roboto";
  font-size: 14px;
  font-weight: 300;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well {
  min-height: inherit;
  padding: 0;
  margin-bottom: 1px;
  background-color: inherit;
  border: 0;
  border-radius: 0;
  -webkit-box-shadow: none;
  box-shadow: none;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-inner .item {
  width: 100%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-inner .item a {
  width: 50%;
  float: left;
  min-height: 37px;
  line-height: 37px;
  text-align: center;
  opacity: .6;
  background-color: #aeb4d6;
  border-bottom: 3px solid #9fa6cd;
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 14px;
  text-decoration: none;
  cursor: pointer;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-inner .item a.first {
  position: relative;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-inner .item a.first:after {
  width: 2px;
  height: 37px;
  position: absolute;
  content: "";
  top: 0;
  right: -1px;
  display: inline-block;
  background: #fff;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-inner .item a.selected {
  background: #9fa6cd;
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 14px;
  opacity: 1;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-control {
  position: absolute;
  top: 15px;
  bottom: inherit;
  left: -15px;
  width: 15px;
  height: 10px;
  font-size: inherit;
  color: inherit;
  text-align: inherit;
  text-shadow: none;
  filter: alpha(opacity=100);
  opacity: 1;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-control.left {
  background: url(../images/control-left-tab.png) no-repeat 50% 50%;
}
.no-home.pro #wrap .bg-no-white .tab .tab-middle .carousel .well .carousel .carousel-control.right {
  background: url(../images/control-right-tab.png) no-repeat 50% 50%;
  left: inherit;
  right: -15px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .head {
  width: 100%;
  color: #1d213b;
  font-family: "Roboto Condensed";
  font-size: 16px;
  background-color: #ad9fdd;
  min-height: 40px;
  line-height: 40px;
  text-align: center;
  margin: 0 0 2px 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave.mCustomScrollbar {
  width: 100%;
  height: 500px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave.mCustomScrollbar .mCSB_container {
  margin-right: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d1ef;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #857ba4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd {
  min-height: 120px;
  background-color: #eee9f2;
  text-align: center;
  /*&:after {
                                    content: "";
                                    display: inline-block;
                                    position: absolute;
                                    right: -155px;
                                    top: 40px;
                                    width: 185px;
                                    height: 142px;
                                    background: url(../images/bg-hover-product.png) no-repeat 50% 50%;
                                }*/
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd img {
  padding: 10px 0 0 0 ;
  cursor: pointer;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd .description-product {
  display: none;
  position: absolute;
  right: -165px;
  top: 40px;
  width: 185px;
  height: 142px;
  background: url(../images/bg-hover-product.png) no-repeat 50% 50%;
  padding: 20px 15px 15px 25px ;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd .description-product .name-product {
  display: block;
  color: #110537;
  font-family: "Roboto Condensed";
  font-size: 16px;
  margin: 0 0 15px 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd .description-product p {
  color: #110537;
  font-family: "Roboto";
  font-size: 12px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd:hover {
  position: relative;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .odd:hover .description-product {
  display: block;
  z-index: 9999;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even {
  min-height: 120px;
  background-color: #e3dae9;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even img {
  padding: 10px 0 0 0 ;
  cursor: pointer;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even .description-product {
  display: none;
  position: absolute;
  right: -165px;
  top: 40px;
  width: 185px;
  height: 142px;
  background: url(../images/bg-hover-product.png) no-repeat 50% 50%;
  padding: 20px 15px 15px 25px ;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even .description-product .name-product {
  display: block;
  color: #110537;
  font-family: "Roboto Condensed";
  font-size: 16px;
  margin: 0 0 15px 0;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even .description-product p {
  color: #110537;
  font-family: "Roboto";
  font-size: 12px;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even:hover {
  position: relative;
}
.no-home.pro #wrap .bg-no-white .tab .tab-right .cave .even:hover .description-product {
  display: block;
  z-index: 9999;
}
.no-home.pro #wrap .bg-no-white .tab .description {
  color: #1d213b;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: 300;
  line-height: 22px;
  padding: 30px 0 0 0;
  text-indent: 20px;
  clear: both;
}
.no-home.pro #wrap .bg-no-white .tab .description.mCustomScrollbar {
  height: 275px;
  width: 100%;
  /*.mCSB_container {
                                margin-right: 0;
                            }*/
}
.no-home.pro #wrap .bg-no-white .tab .description.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .tab .description.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #5294e4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro #wrap .bg-no-white .informations {
  width: 100%;
  margin: 10px 0 0 0;
}
.no-home.pro #wrap .bg-no-white .informations .mail-box {
  display: block;
  width: 50%;
  min-height: 102px;
  background: #ffffff url(../images/mailbox.png) no-repeat 50% 50%;
  background-size: 60%;
  float: left;
  margin-bottom: 9px;
}
.no-home.pro #wrap .bg-no-white .informations .text-mailBox {
  color: #000;
  font-family: "Roboto Condensed";
  font-size: 13px;
  padding: 10px 5px;
  font-weight: 400;
  width: 50%;
  min-height: 102px;
  background: #fff;
  float: right;
  margin-bottom: 9px;
}
.no-home.pro #wrap .bg-no-white .informations .text-mailBox a {
  color: #00bf79;
}
.no-home.pro #wrap .bg-no-white .informations .left {
  width: 48%;
  float: left;
  min-height: 158px;
  background: #fff;
  border: 2px solid #2eaa52;
  text-align: center;
  padding: 15px 2% 25px 2%;
}
.no-home.pro #wrap .bg-no-white .informations .left:hover {
  background: #2eaa52;
}
.no-home.pro #wrap .bg-no-white .informations .left:hover a {
  color: #fff;
}
.no-home.pro #wrap .bg-no-white .informations .left a {
  display: block;
  min-height: 75px;
  text-decoration: none;
  background: url(../images/ico-tel.png) no-repeat 0 50%;
  color: #000c5b;
  font-family: "Roboto Condensed";
  font-size: 16px;
  font-weight: bold;
  padding: 0 0 0 45px;
  text-align: left;
  text-transform: uppercase;
}
.no-home.pro #wrap .bg-no-white .informations .left p {
  color: #9ed800;
  font-family: "Roboto Condensed";
  font-size: 18px;
  font-weight: bold;
  margin: 10px 0 0 0;
}
.no-home.pro #wrap .bg-no-white .informations .right {
  width: 48%;
  float: right;
  min-height: 158px;
  background: #fff;
  border: 2px solid #2eaa52;
  text-align: center;
  padding: 15px 2% 5px 2%;
  /*&:hover {
                            background: #019da9;
                            a {
                                color: #fff;
                            }
                        }*/
}
.no-home.pro #wrap .bg-no-white .informations .right a {
  display: block;
  min-height: 105px;
  text-decoration: none;
  background: url(../images/ico-rappel.png) no-repeat 50% 20px;
  font-family: "Roboto Condensed";
  color: #13abb6;
  font-size: 12px;
  font-weight: bold;
  text-transform: uppercase;
  text-align: center;
  padding: 0;
}
.no-home.pro #wrap .bg-no-white .informations .right form {
  /*border: 2px solid #ffc000;
							-moz-border-radius: 5px;
							-webkit-border-radius: 5px;
							border-radius: 5px;
							-moz-background-clip: padding;
							-webkit-background-clip: padding-box;
							background-clip: padding-box;*/
  border: 2px solid #2eaa52;
  background-color: transparent;
  width: 100%;
  min-height: 25px;
  position: relative;
}
.no-home.pro #wrap .bg-no-white .informations .right form input[type="text"] {
  float: left;
  border: 0;
  height: 21px;
  line-height: 21px;
  width: 80%;
  color: #a5a5a5;
  font-family: "Roboto Condensed";
  font-size: 12px;
  text-align: center;
}
.no-home.pro #wrap .bg-no-white .informations .right form input[type="submit"] {
  float: right;
  width: 20%;
  height: 21px;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 10px;
  -moz-border-radius: 4px;
  -webkit-border-radius: 4px;
  border-radius: 4px;
  -moz-background-clip: padding;
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  background-color: #5e5e5e;
  background-image: url(data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiA/Pgo8c3ZnIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgd2lkdGg9IjEwMCUiIGhlaWdodD0iMTAwJSIgdmlld0JveD0iMCAwIDEwMCAxMDAiIHByZXNlcnZlQXNwZWN0UmF0aW89Im5vbmUiPjxsaW5lYXJHcmFkaWVudCBpZD0iaGF0MCIgZ3JhZGllbnRVbml0cz0ib2JqZWN0Qm91bmRpbmdCb3giIHgxPSI1MCUiIHkxPSIxMDAlIiB4Mj0iNTAlIiB5Mj0iLTEuNDIxMDg1NDcxNTIwMmUtMTQlIj4KPHN0b3Agb2Zmc2V0PSIwJSIgc3RvcC1jb2xvcj0iIzVlNWU1ZSIgc3RvcC1vcGFjaXR5PSIxIi8+CjxzdG9wIG9mZnNldD0iMTAwJSIgc3RvcC1jb2xvcj0iIzhkOGQ4ZCIgc3RvcC1vcGFjaXR5PSIxIi8+CiAgIDwvbGluZWFyR3JhZGllbnQ+Cgo8cmVjdCB4PSIwIiB5PSIwIiB3aWR0aD0iMTAwIiBoZWlnaHQ9IjEwMCIgZmlsbD0idXJsKCNoYXQwKSIgLz4KPC9zdmc+);
  background-image: -moz-linear-gradient(bottom, #5e5e5e 0%, #8d8d8d 100%);
  background-image: -o-linear-gradient(bottom, #5e5e5e 0%, #8d8d8d 100%);
  background-image: -webkit-linear-gradient(bottom, #5e5e5e 0%, #8d8d8d 100%);
  background-image: linear-gradient(bottom, #5e5e5e 0%, #8d8d8d 100%);
}
.no-home.pro #wrap .bg-no-white .informations .right p {
  color: #ffd800;
  font-family: "Roboto Condensed";
  font-size: 18px;
  font-weight: bold;
  margin: 10px 0 0 0;
}
.no-home.pro #wrap .bg-white {
  background-color: #fcfcfc;
  padding: 45px 0;
  margin: 60px 0 0 0;
}
.no-home.pro #wrap .bg-white .list-bloc {
  min-height: inherit;
}
.no-home.pro #wrap .bg-white .chat .search {
  padding: 5px 15px;
  border: 1px solid #a9acb0;
  margin-bottom: 12px;
  width: 100%;
  background-color: transparent;
}
.no-home.pro #wrap .bg-white .chat.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
}
.no-home.pro #wrap .bg-white .chat.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #c4c4c4;
}
.no-home.pro #wrap .bg-white .module-chat {
  width: 100%;
}
.no-home.pro #wrap .bg-white .module-chat ul {
  list-style: none;
  width: 100%;
  margin: 55px 0 45px 0;
}
.no-home.pro #wrap .bg-white .module-chat ul li {
  float: left;
  width: 50%;
  text-align: center;
  margin-bottom: 30px;
}
.no-home.pro #wrap .bg-white .module-chat ul li a {
  display: block;
  background-position: 50% 50%;
  background-repeat: no-repeat;
  margin: 0 auto;
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-mail {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-msg-big.png);
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-discussion {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-discu-big.png);
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-video {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-video-big.png);
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-audio {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-audio-big.png);
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-cam {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-cam-big.png);
}
.no-home.pro #wrap .bg-white .module-chat ul li a.big-calendar {
  width: 90px;
  height: 90px;
  background-image: url(../images/ico-calendar-big.png);
}
.no-home.pro2 .tab-left-1 .tab-left-title {
  background-color: #9183c7;
  margin: 0 0 1px 0;
  min-height: 40px;
  line-height: 40px;
  width: 100%;
  text-align: center;
  color: #211d3b;
  font-family: "Roboto Condensed";
  font-size: 18px;
}
.no-home.pro2 .tab-left-1 table {
  width: 33%;
  margin-right: 1px;
  float: left;
}
.no-home.pro2 .tab-left-1 table.last {
  margin-right: 0;
}
.no-home.pro2 .tab-left-1 table.mCustomScrollbar {
  height: 600px;
}
.no-home.pro2 .tab-left-1 table.mCustomScrollbar .mCSB_container {
  margin-right: 0;
}
.no-home.pro2 .tab-left-1 table.mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d1ef;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro2 .tab-left-1 table.mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #857ba4;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro2 .tab-left-1 table tr.head td {
  border: 1px solid #fff;
  min-height: 40px;
  line-height: 40px;
  width: 100%;
  text-align: center;
  color: #211d3b;
  font-family: "Roboto Condensed";
  font-size: 18px;
}
.no-home.pro2 .tab-left-1 table tr td {
  min-height: 120px;
  text-align: center;
  border: 1px solid #fff;
}
.no-home.pro2 .tab-left-1 table tr td img {
  padding: 13px 0 10px 0;
  min-height: 95px;
}
.no-home.pro2 .tab-left-1 table.left tr.head td {
  background-color: #ad9fdd;
}
.no-home.pro2 .tab-left-1 table.left tr.even td {
  background-color: #e9e1ed;
}
.no-home.pro2 .tab-left-1 table.left tr.odd td {
  background-color: #d9cde1;
}
.no-home.pro2 .tab-left-1 table.middle tr.head td {
  background-color: #c4a9e2;
}
.no-home.pro2 .tab-left-1 table.middle tr.even td {
  background-color: #eee8f1;
}
.no-home.pro2 .tab-left-1 table.middle tr.odd td {
  background-color: #e4dae9;
}
.no-home.pro2 .tab-left-1 table.right tr.head td {
  background-color: #ad9fdd;
}
.no-home.pro2 .tab-left-1 table.right tr.even td {
  background-color: #e9e1ed;
}
.no-home.pro2 .tab-left-1 table.right tr.odd td {
  background-color: #d9cde1;
}
.no-home.pro2 .tab-left-1 table.right tr td img {
  padding: 8px 0 6px 0;
  min-height: 104px;
}
.no-home.pro2 .tab-right-1 .tab-right-title {
  background-color: #82dac4;
  margin: 0 0 1px 0;
  min-height: 81px;
  line-height: 18px;
  width: 100%;
  text-align: center;
  color: #211d3b;
  font-family: "Roboto Condensed";
  font-size: 18px;
  padding: 20px 0 0 0;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar {
  width: 100%;
  height: 600px;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar .mCustomScrollBox {
  height: 600px;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar .mCSB_container {
  margin-right: 0;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #bfd8cf;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #70d3ba;
  margin-right: 0;
  border-radius: 0;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar tr td {
  text-align: center;
  border: 1px solid #fff;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.even td {
  background-color: #e9f2ef;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.even td img {
  height: 118px;
  max-width: 100%;
  width: 75px;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.odd td {
  background-color: #d9e8e2;
}
.no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.odd td img {
  height: 118px;
  max-width: 100%;
  width: 75px;
}
.no-home.pro2 #wrap .bg-no-white .tab .description.mCustomScrollbar {
  height: 222px;
}
.no-home.pro3 #wrap .bg-no-white .tab .description.mCustomScrollbar {
  height: 222px;
}
.no-home.pro3 .tab-left-1 {
  padding-right: 5px;
}
.no-home.pro3 .tab-left-1 table {
  width: 49.555%;
}
.no-home.pro3 .tab-right-1 {
  padding-left: 2px;
}
.no-home.pro3 .tab-right-1 .tab-right-title {
  font-size: 14px;
}
.no-home.pro3 .tab-right-2 {
  padding-right: 2px;
}
.no-home.pro3 .tab-right-2 .tab-right-title {
  background-color: #f27a7a;
  margin: 0 0 1px 0;
  min-height: 81px;
  line-height: 18px;
  width: 100%;
  text-align: center;
  color: #211d3b;
  font-family: "Roboto Condensed";
  font-size: 14px;
  padding: 20px 0 0 0;
}
.no-home.pro3 .tab-right-2 table {
  width: 100%;
}
.no-home.pro3 .tab-right-2 table tr td {
  text-align: center;
  border: 1px solid #fff;
}
.no-home.pro3 .tab-right-2 table tr.even td {
  background-color: #eee2e2;
}
.no-home.pro3 .tab-right-2 table tr.even td img {
  height: 118px;
  max-width: 100%;
  width: 75px;
}
.no-home.pro3 .tab-right-2 table tr.odd td {
  background-color: #e1cdcd;
}
.no-home.pro3 .tab-right-2 table tr.odd td img {
  height: 118px;
  max-width: 100%;
  width: 75px;
}
#wrap {
  position: relative;
}
#wrap.affix {
  margin-top: 172px;
}
#wrap .bg-gray {
  min-height: 850px;
  background-color: #ebebee;
  padding-top: 10px;
}
#wrap .share {
  margin-bottom: 10px;
}
#wrap .share .open-to-share {
  float: right;
  background: url(../images/open-to-share.png) no-repeat 100% 50%;
  width: 150px;
  height: 24px;
}
#wrap .share .open-to-share:hover .share-list {
  display: block;
}
#wrap .share .open-to-share .share-list {
  display: none;
  list-style: none;
  margin: 4px 50px 0 0;
}
#wrap .share .open-to-share .share-list > li {
  float: right;
}
#wrap .share .open-to-share .share-list .email {
  display: block;
  width: 22px;
  height: 17px;
  background: url(../images/email.png) no-repeat 50% 50%;
}
#wrap .share .open-to-share .share-list .google {
  display: block;
  width: 19px;
  height: 19px;
  background: url(../images/google.png) no-repeat 50% 50%;
  margin-right: 10px;
}
#wrap .share .open-to-share .share-list .tw {
  display: block;
  width: 17px;
  height: 15px;
  background: url(../images/tw.png) no-repeat 50% 50%;
  margin-right: 10px;
  margin-top: 2px;
}
#wrap .share .open-to-share .share-list .fb {
  display: block;
  width: 10px;
  height: 19px;
  background: url(../images/fb.png) no-repeat 50% 50%;
  margin-right: 10px;
}
#wrap .chat .title {
  display: block;
  width: 100%;
  min-height: 178px;
  background: #4187dd url(../images/ico-tchat.png) no-repeat 50% 15%;
  margin-bottom: 15px;
  text-align: center;
  text-decoration: none;
}
#wrap .chat .title p {
  color: #fff;
  font-family: "Roboto";
  font-size: 24px;
  font-weight: 300;
  padding-top: 40%;
  text-transform: uppercase;
}
#wrap .chat .search {
  padding: 5px 15px;
  border: 1px solid #a9acb0;
  margin-bottom: 12px;
  width: 100%;
  background-color: transparent;
}
#wrap .chat .mCustomScrollbar {
  border-top: 1px solid #dde2e7;
  border-bottom: 1px solid #dde2e7;
  height: 379px;
  width: 95%;
  list-style: none;
  margin-bottom: 15px;
}
#wrap .chat .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
  margin-right: 0;
  border-radius: 0;
}
#wrap .chat .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #5294e4;
  margin-right: 0;
  border-radius: 0;
}
#wrap .chat .mCustomScrollbar .profil {
  /*min-height: 69px;
                margin-right: 8px;*/
  border-bottom: 1px solid #dde2e7;
  margin-right: 0;
}
#wrap .chat .mCustomScrollbar .profil:hover {
  background-color: #f6f6f7;
}
#wrap .chat .mCustomScrollbar .profil img {
  float: left;
  /*margin: 9px 12px 9px 15px;*/
  margin: 5px 3% 5px 3%;
}
#wrap .chat .mCustomScrollbar .profil .infos {
  float: left;
  /*margin: 9px 12px 9px 15px;*/
  margin: 5px 3% 5px 3%;
}
#wrap .chat .mCustomScrollbar .profil .infos img {
  margin: 10px 0 0 0;
}
#wrap .chat .mCustomScrollbar .profil .infos .name {
  font-family: "Roboto";
  font-size: 18px;
  font-weight: 300;
  color: #737981;
  float: left;
  width: 100%;
}
#wrap .chat .mCustomScrollbar .profil .status {
  float: right;
}
#wrap .chat .mCustomScrollbar .profil .status .enligne {
  display: block;
  width: 20px;
  height: 20px;
  background: url(../images/enligne.png) no-repeat 50% 50%;
  margin-right: 20px;
  margin-top: 25px;
}
#wrap .chat .mCustomScrollbar .profil .status .horsligne {
  display: block;
  width: 20px;
  height: 20px;
  background: url(../images/horsligne.png) no-repeat 50% 50%;
  margin-right: 20px;
  margin-top: 25px;
}
#wrap .chat .module-chat {
  width: 100%;
  border-top: 2px solid #4288dd;
}
#wrap .chat .module-chat ul {
  list-style: none;
  min-height: 85px;
  width: 100%;
  margin-top: 5px;
  background-color: #d6d6db;
  background-image: url(../images/chat-row.png);
  background-position: 90% 50%;
  background-repeat: no-repeat;
}
#wrap .chat .module-chat ul li {
  float: left;
  margin-right: 8%;
}
#wrap .chat .module-chat ul li:first-child {
  margin-left: 5%;
}
#wrap .chat .module-chat ul li:last-child {
  margin-right: 0;
}
#wrap .chat .module-chat ul li a {
  display: block;
  background-position: 50% 50%;
  background-repeat: no-repeat;
}
#wrap .chat .module-chat ul li a.mail {
  width: 25px;
  height: 19px;
  background-image: url(../images/chat-mail.png);
  margin: 33px 0;
}
#wrap .chat .module-chat ul li a.discussion {
  width: 22px;
  height: 24px;
  background-image: url(../images/chat-discussion.png);
  margin: 30px 0;
}
#wrap .chat .module-chat ul li a.video {
  width: 32px;
  height: 20px;
  background-image: url(../images/chat-video.png);
  margin: 32px 0;
}
#wrap .chat .module-chat ul li a.audio {
  width: 18px;
  height: 25px;
  background-image: url(../images/chat-audio.png);
  margin: 30px 0;
}
#wrap .chat .module-chat ul li a.cam {
  width: 20px;
  height: 25px;
  background-image: url(../images/chat-cam.png);
  margin: 30px 0;
}
#wrap .chat .module-chat ul li a.calendar {
  width: 21px;
  height: 25px;
  background-image: url(../images/chat-calendar.png);
  margin: 30px 0;
}
#wrap .carrousel-videos {
  width: 60.33333333%;
  padding-right: 15px;
  padding-left: 15px;
  float: left;
}
#wrap .carrousel-videos .carousel .carousel-inner {
  min-height: 320px;
  /*overflow: inherit;*/
}
#wrap .carrousel-videos .carousel .carousel-inner .item > img {
  min-height: 500px;
}
#wrap .carrousel-videos .carousel .carousel-inner .item .carousel-caption {
  min-height: 65px;
  bottom: 2px;
  padding: 0;
  right: 0;
  left: 0;
  background-color: #1d213c;
  z-index: inherit;
}
#wrap .carrousel-videos .carousel .carousel-inner .item .carousel-caption .video-title {
  font-family: "Roboto Condensed";
  color: #dadae5;
  font-size: 19px;
  float: left;
  margin: 15px 0 0 22px;
}
#wrap .carrousel-videos .carousel .carousel-inner .item .carousel-caption .info {
  float: right;
  margin: 25px 25px 0 0;
}
#wrap .carrousel-videos .carousel .carousel-inner .item .carousel-caption .info .date {
  font-family: "Roboto Condensed";
  font-size: 11px;
  color: #00bf79;
}
#wrap .carrousel-videos .carousel .carousel-control {
  top: inherit;
  bottom: -35px;
  background-image: none;
  width: 25px;
  height: 25px;
}
#wrap .carrousel-videos .carousel .carousel-control.left {
  left: 30%;
  background: url(../images/carousel/control-left.png) no-repeat 50% 50%;
}
#wrap .carrousel-videos .carousel .carousel-control.right {
  right: 30%;
  background: url(../images/carousel/control-right.png) no-repeat 50% 50%;
}
#wrap .carrousel-videos .carousel .carousel-indicators {
  bottom: -35px;
  left: 45%;
  list-style-type: none;
  margin-left: 0;
  width: auto;
}
#wrap .carrousel-videos .carousel .carousel-indicators li {
  width: 25px;
  height: 25px;
  line-height: 25px;
  background-color: transparent;
  border-radius: 0;
  border: 0;
  text-indent: inherit;
  color: #8f9092;
  font-family: "Roboto";
  font-size: 14px;
}
#wrap .carrousel-videos .carousel .carousel-indicators li.active {
  background: url(../images/carousel/indicator-active.png) no-repeat 50% 50%;
  color: #fff;
}
#wrap .carrousel-videos .thumbs {
  margin: 15px 0 0 0;
  padding: 0;
  min-height: inherit;
  background-color: inherit;
  border: 0;
  border-radius: 0;
  box-shadow: inherit;
}
#wrap .carrousel-videos .thumbs .carousel-inner {
  min-height: inherit;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item {
  width: 100%;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a {
  display: block;
  float: left;
  width: 25%;
  background-color: transparent;
  border-radius: 0;
  margin: 0;
  border: 2px solid transparent;
  padding: 5px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a img {
  width: 100%;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a.selected {
  border: 2px solid #fb2929;
  position: relative;
  background-color: #fff;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a.selected:before {
  background: url(../images/carousel/row-bottom-carousel.png) no-repeat 50% 50%;
  content: "";
  display: inline-block;
  width: 23px;
  height: 11px;
  position: absolute;
  left: 40%;
  top: -19px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions {
  min-height: 60px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .top {
  width: 100%;
  margin-top: 5px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .top .name {
  font-family: "Roboto";
  font-size: 18px;
  font-weight: 300;
  color: #55585d;
  float: left;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .top img {
  float: right;
  margin-top: 5px;
  width: 26px;
  height: 16px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom {
  width: 100%;
  margin-top: 5px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom .date {
  font-family: "Roboto Condensed";
  font-size: 11px;
  color: #55585d;
  float: left;
  margin-right: 10px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom span {
  font-family: "Roboto";
  font-size: 11px;
  color: #55585d;
  float: left;
  margin-right: 5px;
  min-width: 33px;
  padding-left: 20px;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom span.ico-discu {
  width: 15px;
  height: 12px;
  background: url(../images/ico-discu.png) no-repeat 0 50%;
}
#wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .bottom span.ico-view {
  width: 16px;
  height: 10px;
  background: url(../images/ico-view.png) no-repeat 0 50%;
}
#wrap .videos {
  width: 23%;
  float: right;
}
#wrap .videos .title {
  display: block;
  width: 100%;
  min-height: 178px;
  background: #00bf79 url(../images/ico-actu.png) no-repeat 50% 15%;
  margin-bottom: 35px;
  text-align: center;
  text-decoration: none;
}
#wrap .videos .title p {
  color: #fff;
  font-family: "Roboto";
  font-size: 24px;
  font-weight: 300;
  padding-top: 30%;
  text-transform: uppercase;
}
#wrap .videos .title .sub-title {
  font-size: 16px;
  text-transform: uppercase;
  padding-top: 0;
}
#wrap .videos .mCustomScrollbar {
  border-top: 0;
  border-bottom: 2px solid #00bf79;
  height: 525px;
  width: 100%;
  list-style: none;
  padding-bottom: 35px;
}
#wrap .videos .mCustomScrollbar .mCSB_scrollTools .mCSB_draggerRail {
  background-color: #d8d8de;
  margin-right: 0;
  border-radius: 0;
}
#wrap .videos .mCustomScrollbar .mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  background-color: #00bf79;
  margin-right: 0;
  border-radius: 0;
}
#wrap .videos .mCustomScrollbar .profil {
  min-height: 110px;
  margin-bottom: 25px;
}
#wrap .videos .mCustomScrollbar .profil:last-child {
  margin-bottom: 0;
}
#wrap .videos .mCustomScrollbar .profil img {
  float: left;
  width: 42%;
  margin-right: 3%;
}
#wrap .videos .mCustomScrollbar .profil .infos {
  float: left;
  width: 52%;
  margin-right: 3%;
}
#wrap .videos .mCustomScrollbar .profil .infos .info-title {
  float: left;
  font-family: "Roboto";
  font-size: 18px;
  font-weight: 300;
  color: #737981;
}
#wrap .videos .mCustomScrollbar .profil .infos .flag {
  float: right;
  width: initial;
}
#wrap .videos .mCustomScrollbar .profil .video-title {
  font-family: "Roboto Condensed";
  font-size: 14px;
  margin-right: 3%;
  color: #131729;
  width: 52%;
  float: left;
}
#wrap .videos .mCustomScrollbar .profil .note-fav {
  width: 52%;
  float: left;
}
#wrap .videos .mCustomScrollbar .profil .nb-view {
  width: 52%;
  float: right;
}
#wrap .videos .mCustomScrollbar .profil .comment {
  padding-left: 20px;
}
#wrap .videos .mCustomScrollbar .profil .view {
  padding-left: 20px;
}
.list-bloc {
  margin-top: 60px;
  min-height: 588px;
}
.list-bloc.with-add {
  position: relative;
  margin-top: 25px !important;
}
.list-bloc.with-add .add-bloc {
  width: 27px;
  height: 25px;
  position: absolute;
  top: -40px;
  right: 2%;
  background: url(../images/bloc-add.png) no-repeat 50% 50%;
}
.list-bloc.with-add .conversation {
  position: relative;
}
.list-bloc.with-add .conversation .edit {
  width: 32px;
  height: 32px;
  position: absolute;
  top: 10px;
  right: 10px;
  background: url(../images/img-edit.png) no-repeat 50% 50%;
}
.list-bloc.with-add .conversation .delete {
  width: 32px;
  height: 32px;
  position: absolute;
  top: 10px;
  right: 45px;
  background: url(../images/img-delete.png) no-repeat 50% 50%;
}
.list-bloc .left {
  float: left;
  width: 19%;
  position: relative;
  /*&:hover {
            .bottom-visit {
                height: 590px;
                opacity: 0.8;
                background-color: #129e61;
            }
        }*/
}
.list-bloc .middle {
  float: left;
  width: 62%;
  padding: 0 40px;
  position: relative;
}
.list-bloc .right {
  float: left;
  width: 19%;
  position: relative;
  /*&:hover {
            .bottom-visit {
                height: 590px;
                opacity: 0.8;
                background-color: #129e61;
            }
        }*/
}
.list-bloc .top-visit {
  height: 590px;
  overflow: hidden;
  /*img {
            width: 100%;
            height: 100%;
        }*/
}
.list-bloc .bottom-visit {
  height: 180px;
  background-color: #a6a6a6;
  text-align: center;
  position: absolute;
  bottom: 0;
  width: 100%;
  display: table;
}
.list-bloc .bottom-visit p {
  font-family: "Roboto";
  font-size: 36px;
  font-weight: 100;
  color: #fff;
  vertical-align: middle;
  overflow: hidden;
  display: table-cell;
}
.list-bloc .bottom-visit:hover {
  opacity: 0.8;
  background-color: #129e61;
}
.list-bloc .conversation {
  min-height: 196px;
  display: table;
  border-top: 1px solid #fff;
  background-color: #f0f2f3;
  position: relative;
  width: 100%;
}
.list-bloc .conversation:first-child {
  border-top: 0;
}
.list-bloc .conversation:nth-child(2) {
  background-color: #e3e8ec;
}
.list-bloc .conversation .perso-picture {
  width: 20%;
  text-align: center;
  /*overflow: hidden;
            display: table-cell;
            vertical-align: middle;
            padding: 33px;*/
  float: left;
  padding-top: 35px;
}
.list-bloc .conversation .perso-picture p {
  color: #8b8d92;
  font-size: 12px;
}
.list-bloc .conversation .perso-picture p span {
  color: #55585d;
  font-size: 16px;
}
.list-bloc .conversation .perso-picture:after {
  background: url(../images/sep-conversation.png) no-repeat;
  content: ' ';
  display: inline-block;
  width: 11px;
  height: 133px;
  position: absolute;
  top: 28px;
  left: 20%;
}
.list-bloc .conversation .perso-txt {
  padding: 30px 30px 10px 25px;
  float: left;
  width: 80%;
}
.list-bloc .conversation .perso-txt h3 {
  color: #437cc1;
  font-family: "Roboto Condensed";
  font-size: 18px;
}
.list-bloc .conversation .perso-txt .date-txt {
  color: #8a8d92;
  font-family: "Roboto";
  font-size: 12px;
  padding: 5px 0 15px;
}
.list-bloc .conversation .perso-txt p {
  color: #55575d;
  font-family: "Roboto";
  font-size: 13px;
  font-weight: 300;
}
.list-bloc .conversation .view-comment {
  margin-right: 30px;
  margin-bottom: 10px;
}
.list-bloc .conversation .add-comment {
  display: none;
  width: 100%;
  background-color: #fff;
  padding: 10px 0;
}
.list-bloc .conversation .add-comment .img-profil {
  float: left;
  width: 22%;
  text-align: center;
}
.list-bloc .conversation .add-comment .img-profil img {
  margin-bottom: 15px;
}
.list-bloc .conversation .add-comment .img-profil span {
  width: 100%;
  display: block;
  color: #55575d;
  font-family: "Roboto";
  font-size: 16px;
}
.list-bloc .conversation .add-comment .form-groupe {
  width: 78%;
  float: left;
  position: relative;
}
.list-bloc .conversation .add-comment .form-groupe:before {
  content: ' ';
  position: absolute;
  top: 42px;
  left: -10px;
  display: inline-block;
  width: 13px;
  height: 13px;
  background: url(../images/sep-comment.png) no-repeat 50% 50%;
}
.list-bloc .conversation .add-comment .form-groupe textarea {
  width: 94%;
  color: #a2a3a5;
  font-family: "Roboto";
  font-size: 14px;
  padding: 20px 15px;
  min-height: 80px;
  border: 1px solid #ccc;
  background-color: #fff;
  margin-bottom: 10px;
}
.list-bloc .conversation .add-comment .form-groupe .btn-default {
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 16px;
  border: 1px solid #9b9fa7;
  background-color: #9b9fa7;
  border-radius: 0;
  padding: 8px 40px;
  float: right;
  margin-right: 6%;
}
.list-bloc .conversation .txt-comm {
  position: absolute;
  bottom: 7px;
  right: 30px;
}
.list-bloc .conversation .txt-comm ul {
  list-style: none;
}
.list-bloc .conversation .txt-comm ul li {
  float: left;
  padding: 0 10px 0 0;
  position: relative;
}
.list-bloc .conversation .txt-comm ul li:first-child:after {
  background: url(../images/sep-texto.png) no-repeat;
  content: ' ';
  display: inline-block;
  width: 1px;
  height: 17px;
  position: absolute;
  top: 5px;
  left: 20px;
}
.list-bloc .conversation .txt-comm ul li:last-child {
  color: #00bf79;
  font-size: 12px;
}
.list-bloc .pagination {
  margin: 0 auto;
  display: table;
  margin-top: 25px;
}
.list-bloc .pagination li {
  display: inline-flex;
  text-align: center;
}
.list-bloc .pagination li a {
  border: 0;
  color: #8f9092;
  padding: 6px 5px;
  min-width: 22px;
}
.list-bloc .pagination li a:hover,
.list-bloc .pagination li a.active {
  background: url(../images/pagination-hover.png) no-repeat 50% 50%;
  /*line-height: 10px;*/
  color: #fff;
}
.list-bloc .pagination li:first-child {
  /*font-size: 33px;*/
  font-weight: 100;
}
.list-bloc .pagination li:last-child {
  /*font-size: 33px;*/
  font-weight: 100;
}
.contact-bloc {
  width: 100%;
}
.contact-bloc .middle {
  width: 70%;
  margin: 0 auto;
}
.contact-bloc .img-inscrit {
  padding: 20% 35% 18%;
}
.contact-bloc .inscrit-ins {
  color: #555;
  font-family: "Roboto";
  font-size: 39px;
  text-align: center;
  font-weight: 100;
}
.contact-bloc .sign_in .form-horizontal {
  background-color: #f3f3f3;
  width: 375px;
  margin: 0 auto;
  padding: 35px 30px 25px 30px;
}
.contact-bloc .sign_in .form-horizontal .form-group {
  margin: 0 0 20px 0;
}
.contact-bloc .sign_in .form-horizontal .form-group.last {
  margin: 0 0 30px 0;
}
.contact-bloc .sign_in .form-horizontal .form-group .form-control {
  border-radius: 0;
}
.contact-bloc .sign_in .form-horizontal .control-label {
  text-align: left;
  color: #5d5d5d;
  font-family: "Roboto Condensed";
  font-size: 14px;
  padding: 0 0 5px 0;
  font-weight: 400;
}
.contact-bloc .sign_in .form-horizontal .second-select {
  padding: 0;
}
.contact-bloc .sign_in .form-horizontal .checkbox {
  padding: 0;
}
.contact-bloc .sign_in .form-horizontal .checkbox label {
  font-family: "Roboto Condensed";
  font-size: 14px;
  color: #5d5d5d;
  padding-right: 30px;
}
.contact-bloc .sign_in .form-horizontal .checkbox label span {
  color: #0161d6;
}
.contact-bloc .sign_in .form-horizontal .form-group-bttn {
  margin-top: 20px;
}
.contact-bloc .sign_in .form-horizontal .form-group-bttn button {
  float: right;
  color: #fbfbfb;
  font-family: "Roboto Condensed";
  font-size: 12px;
  padding: 5px 15px;
  border: 1px solid #2f79ed;
  -moz-border-radius: 2px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  -moz-background-clip: padding;
  -webkit-background-clip: padding-box;
  background-clip: padding-box;
  background-color: #4b8df9;
}
@media screen and (min-width: 1420px) {
  .container {
    width: 1400px;
  }
  .no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-left {
    width: 17%;
  }
  .no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-middle {
    width: 50%;
  }
  .no-home.la-une #wrap .search .result-search ul.mCustomScrollbar li .search-right {
    width: 30%;
  }
  .no-home.recherche #wrap .article {
    min-height: 1030px;
  }
  .no-home.recherche #wrap .right-top .carrousel-videos {
    min-height: 610px;
  }
  /*.no-home.pro #wrap .bg-no-white .calendar .body-calendar {
		min-height: 480px;
	}*/
  .no-home.pro #wrap .bg-no-white .bloc-itin .body-itin {
    height: 184px;
  }
  .no-home.pro #wrap .bg-no-white .tab .description.mCustomScrollbar {
    height: 291px;
  }
  .no-home.pro #wrap .bg-no-white .calendar .body-calendar {
    padding: 24px 20px 23px 20px;
  }
}
@media screen and (max-width: 1420px) {
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 60% 0 0 0;
  }
  .no-home.pro #header.big-header .bg-fixed-wrap-bottom .subtitle {
    width: 60%;
  }
}
@media screen and (max-width: 1199px) {
  /*.no-home.pro #wrap .bg-no-white .container .row .container-fluid .col-md-12.col-sm-12 .col-md-4.col-sm-4  {width: 100%;margin-bottom: 20px;padding: 0;}
	.no-home.pro #wrap .bg-no-white .tab .tab-middle {margin-bottom: 20px;}
	.no-home.pro #wrap .bg-no-white .tab .col-md-4.col-sm-4 {width: 33.33333333%; !important}*/
  .no-home.pro #wrap .bg-no-white .container .row .container-fluid .col-md-12 .col-md-4,
  .no-home.pro #wrap .bg-no-white .container .row .container-fluid col-sm-12 .col-sm-4 {
    width: 100%;
    margin-bottom: 20px;
    padding: 0;
  }
  .no-home.pro #wrap .bg-no-white .tab .col-md-4,
  .no-home.pro #wrap .bg-no-white .tab .col-sm-4 {
    width: 33.33333333%!important;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos {
    min-height: 600px;
  }
  .no-home.pro #wrap .bg-no-white .appel .reserv {
    padding: 20% 0 0 0;
  }
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 24% 0 0 0;
  }
  .no-home #wrap.contact .contact-bloc .middle .form-horizontal {
    margin-right: 20px;
  }
  .no-home.la-une #wrap .article .add-comment .img-profil {
    width: 30%;
  }
  .no-home.la-une #wrap .article .add-comment .form-groupe {
    width: 70%;
  }
  .no-home.pro #wrap .bg-no-white .informations .mail-box {
    background-size: 20%;
  }
}
@media screen and (min-width: 992px) and (max-width: 1199px) {
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  #header .nav-bar .search input[type="submit"] {
    font-size: 15px;
  }
  #header .nav-bar nav .select2-container .select2-choice {
    font-size: 12px;
    /*padding: 48px 20px 19px 12%;*/
    padding: 33px 20px 19px 12%;
  }
  #header.affix .nav-bar nav.region .select2-container .select2-choice,
  #header.affix .nav-bar nav.categorie .select2-container .select2-choice {
    padding: 46px 20px 21px 12%;
  }
  #wrap .carrousel-videos .carousel .carousel-indicators {
    left: 43%;
  }
  #header.big-header .bg-fixed-header-bottom.pro .favoris {
    margin: 10px 25% 0 0;
  }
  #header.big-header .bg-fixed-header-bottom.pro .img-restau {
    top: 10px;
  }
}
@media screen and (min-width: 768px) and (max-width: 991px) {
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  #header .nav-bar .page-title h1 {
    margin-top: 11%;
  }
  #header .nav-bar nav .select2-container .select2-choice {
    padding: 26px 20px 26px 12%;
    font-size: 12px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-toggle {
    padding: 29px 0 23px 0;
  }
  #header .nav-bar .search input[type="submit"] {
    font-size: 10px;
  }
  #header .nav-bar nav {
    font-size: 12px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-toggle {
    padding: 26px 0 26px 0;
  }
  #header .nav-bar .logo-img {
    width: 7%;
  }
  #header.affix .nav-bar nav.region .select2-container .select2-choice,
  #header.affix .nav-bar nav.categorie .select2-container .select2-choice {
    padding: 60px 20px 25px 12%;
    font-size: 12px;
  }
  #header.affix .nav-bar nav .dropdown .dropdown-toggle {
    padding: 48px 0 19px 12%;
  }
  #wrap .chat .title p {
    font-size: 20px;
    padding-top: 65%;
  }
  #wrap .videos .title p {
    font-size: 20px;
    padding-top: 40%;
  }
  #wrap .carrousel-videos .carousel .carousel-indicators {
    left: 41%;
  }
  #header.affix .nav-bar .search {
    margin-top: 38px;
  }
  #header.affix .nav-bar .logo-img {
    margin-top: 35px;
  }
  .list-bloc .conversation .perso-picture {
    width: 25%;
  }
  .list-bloc .conversation .perso-picture:after {
    left: 25%;
  }
  .list-bloc .conversation .perso-txt {
    width: 75%;
  }
  #header.big-header .bg-fixed-header-bottom.pro .favoris {
    width: auto;
    margin: 20px 25% 0 0;
  }
  #header.big-header .bg-fixed-header-bottom .flag {
    margin: 33px 0 0 25%;
  }
  #header.big-header .bg-fixed-wrap-bottom .subtitle {
    width: 65%;
  }
  #header.big-header .bg-fixed-header-bottom.pro .img-restau {
    top: 45px;
  }
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture:after {
    left: 30%;
  }
  .no-home.la-une #wrap .right-top .carrousel-videos {
    min-height: 530px;
  }
  .no-home.recherche #wrap .right-top .carrousel-videos {
    min-height: 440px;
  }
  .no-home.recherche #wrap .right-bottom .list-bloc .conversation .perso-picture {
    width: 30%;
  }
  .no-home.recherche #wrap .right-bottom .list-bloc .conversation .perso-picture img {
    max-width: 100%;
  }
  .no-home.recherche #wrap .right-bottom .list-bloc .conversation .perso-picture:after {
    left: 35%;
  }
  .no-home.recherche #wrap .right-bottom .list-bloc .conversation .perso-txt {
    width: 70%;
  }
  .no-home.user #wrap .right-top .carrousel-videos .carousel .carousel-indicators {
    left: 34%;
  }
  .no-home.user #wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .top .name {
    font-size: 12px;
  }
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture {
    width: 30%;
  }
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture:after {
    left: 35%;
  }
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-txt {
    width: 70%;
  }
  .no-home.logged-in #wrap .right-bottom .list-bloc .conversation .perso-txt {
    padding: 40px 25px 10px 40px;
  }
  .no-home #header .bg-fixed-wrap-bottom .title {
    font-size: 30px !important;
  }
  .home #wrap .carrousel-videos .carousel .carousel-inner.galerie .item.active iframe {
    min-height: 400px;
  }
  .no-home.pro #header.big-header .bg-fixed-wrap-bottom .subtitle {
    width: 50%;
  }
  .no-home.la-une #wrap .article .add-comment .img-profil {
    width: 35%;
  }
  .no-home.la-une #wrap .article .add-comment .form-groupe {
    width: 65%;
  }
}
@media screen and (max-width: 991px) {
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos {
    min-height: 550px;
  }
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 32% 0 0 0;
  }
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  .list-bloc .bottom-visit p {
    font-size: 28px;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-indicators {
    min-width: 400px !important;
    left: 25% !important;
  }
}
@media screen and (max-width: 767px) {
  .col-xs-1,
  .col-sm-1,
  .col-md-1,
  .col-lg-1,
  .col-xs-2,
  .col-sm-2,
  .col-md-2,
  .col-lg-2,
  .col-xs-3,
  .col-sm-3,
  .col-md-3,
  .col-lg-3,
  .col-xs-4,
  .col-sm-4,
  .col-md-4,
  .col-lg-4,
  .col-xs-5,
  .col-sm-5,
  .col-md-5,
  .col-lg-5,
  .col-xs-6,
  .col-sm-6,
  .col-md-6,
  .col-lg-6,
  .col-xs-7,
  .col-sm-7,
  .col-md-7,
  .col-lg-7,
  .col-xs-8,
  .col-sm-8,
  .col-md-8,
  .col-lg-8,
  .col-xs-9,
  .col-sm-9,
  .col-md-9,
  .col-lg-9,
  .col-xs-10,
  .col-sm-10,
  .col-md-10,
  .col-lg-10,
  .col-xs-11,
  .col-sm-11,
  .col-md-11,
  .col-lg-11,
  .col-xs-12,
  .col-sm-12,
  .col-md-12,
  .col-lg-12 {
    padding: 0;
  }
  .no-home #header .bg-fixed-wrap-bottom .title {
    font-size: 26px !important;
  }
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-toggle:hover,
  #header .nav-bar .connexion .dropdown .dropdown-toggle {
    padding: 32px 0 23px 0;
  }
  #header.big-header .bg-fixed-header-bottom .flag {
    margin: 33px 0 0 35%;
  }
  #header.affix .nav-bar nav.connexion .dropdown .dropdown-toggle {
    padding: 55px 0 15px 12%;
  }
  #wrap .chat .title {
    min-height: inherit;
    text-align: inherit;
    background-position: 95% 50%;
  }
  #wrap .chat .title p {
    padding: 20px;
    font-size: 20px;
  }
  #wrap .chat .title p br {
    display: none;
  }
  #wrap .chat .mCustomScrollbar {
    width: 100%;
  }
  #wrap .carrousel-videos {
    width: 100%;
    padding: 0;
    min-height: 600px;
    margin-bottom: 15px;
    margin-top: 15px;
  }
  #wrap .videos {
    width: 100%;
  }
  #wrap .videos .title {
    min-height: inherit;
    text-align: inherit;
    background-position: 95% 50%;
  }
  #wrap .videos .title p {
    padding: 20px 0 0 20px;
    font-size: 20px;
  }
  #wrap .videos .title .sub-title {
    padding: 0 0 20px 20px;
    font-size: 12px;
  }
  #footer .bottom-footer .input-group .input-group-addon {
    float: right;
  }
  .home .list-bloc .middle {
    width: 100%;
    padding: 0;
    margin: 10px 0;
  }
  .home .list-bloc .left,
  .home .list-bloc .right {
    width: 100%;
  }
  .home .list-bloc .left .top-visit img,
  .home .list-bloc .right .top-visit img {
    width: 100%;
  }
  .home .list-bloc .left .bottom-visit,
  .home .list-bloc .right .bottom-visit {
    position: relative;
    height: 50px;
  }
  .home .ALune {
    float: none;
  }
  #header .nav-bar .logo-img,
  #header.affix .nav-bar .logo-img {
    display: none;
    width: 0;
    margin: 0;
  }
  #header .nav-bar .region,
  #header .nav-bar .categorie,
  #header.affix .nav-bar nav,
  #header.affix .nav-bar nav {
    width: 20%;
  }
  #header .nav-bar .search,
  #header.affix .nav-bar .search {
    width: 40%;
    margin: 14px 0 13px 0;
  }
  #header .nav-bar .connexion,
  #header.affix .nav-bar nav {
    width: 18%;
    font-size: 10px;
  }
  #header .nav-bar .search input[type="text"] {
    padding: 10px 5px;
    width: 60%;
  }
  #header .nav-bar .search input[type="submit"] {
    width: 40%;
    font-size: 12px;
  }
  /*#header .nav-bar .page-title h1 {margin-top: 17%;}*/
  #header.affix .nav-bar nav .dropdown .dropdown-toggle {
    padding-left: 2%;
  }
  .home .list-bloc .conversation .perso-picture {
    width: 25%;
  }
  .home .list-bloc .conversation .perso-picture:after {
    left: 26%;
  }
  .home .list-bloc .conversation .perso-txt {
    width: 75%;
  }
  #footer {
    padding: 20px 0 50px 0;
    margin-top: 10px;
  }
  #footer .top-footer {
    margin-bottom: 10px;
  }
  #footer .bottom-footer {
    padding: 0 15px;
  }
  #footer .bottom-footer .first {
    width: 100%;
    margin-left: 0;
    margin-bottom: 10px;
  }
  #footer .bottom-footer .sep-footer {
    display: none;
  }
  #footer .bottom-footer .second {
    width: 100%;
    margin-bottom: 10px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-body:before {
    right: 20px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-body {
    padding: 10px 15px 15px 15px;
    min-width: 470px;
  }
  .select2-drop.select2-drop-active {
    min-width: 120px;
  }
  .list-bloc .bottom-visit p {
    font-size: 25px;
  }
  #header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right {
    min-width: 470px;
    padding: 10px;
  }
  #header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul li label {
    font-size: 11px;
  }
  .home #wrap .carrousel-videos .carousel .carousel-inner.galerie .item.active iframe {
    min-height: inherit;
  }
  .no-home.la-une #wrap .article {
    min-height: inherit;
    margin-bottom: 15px;
  }
  #header .bg-fixed-wrap-bottom .title {
    font-size: 25px;
  }
  #header.big-header .bg-fixed-wrap-bottom .subtitle {
    width: 35%;
  }
  #header .bg-fixed-wrap-bottom .profil {
    margin: 28px 3% 0 0;
    font-size: 14px;
  }
  #header.big-header .bg-fixed-header-bottom .favoris {
    font-size: 10px;
    margin: 10px 25% 0 0;
    padding: 5px 5px 5px 45px;
  }
  #header.big-header .bg-fixed-header-bottom.pro .nb-favoris {
    font-size: 10px;
    margin: 5px 27% 0 0;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop {
    font-size: 12px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop-name {
    font-size: 20px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item {
    min-width: 320px;
  }
  /*.no-home.pro #wrap .bg-no-white .tab .col-md-4.col-sm-4, .no-home.pro #wrap .bg-no-white .tab .col-md-5.col-sm-5 {width: 100%; !important}*/
  .no-home.pro #wrap .bg-no-white .tab .col-md-4,
  .no-home.pro #wrap .bg-no-white .tab .col-sm-4,
  .no-home.pro #wrap .bg-no-white .tab .col-md-5,
  .no-home.pro #wrap .bg-no-white .tab .col-sm-5 {
    width: 100% !important;
  }
  .no-home.pro #wrap .bg-no-white .reservation {
    margin: 0 0 10px 0;
  }
  .no-home.pro #wrap .bg-no-white .appel .reserv {
    padding: 10% 0 0 0;
  }
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 14% 0 0 0;
  }
  .no-home.pro #wrap .bg-white {
    padding: 25px 0;
    margin: 20px 0 0 0;
  }
  #footer.pro form .btn-default {
    font-size: 14px;
  }
  .no-home.la-une #wrap .search form .btn-default {
    font-size: 14px;
  }
  .no-home #wrap.contact .contact-bloc .middle {
    width: 90%;
  }
  .no-home #wrap.contact .contact-bloc .middle .form-horizontal {
    max-width: inherit;
    width: 100%;
    margin: 0;
  }
  .no-home #wrap.contact .contact-bloc .middle .form-horizontal .form-group-btnn {
    margin: 0 0 20px 0;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.left {
    left: 15%;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.right {
    right: 15%;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-indicators {
    min-height: 55px !important;
    min-width: 300px !important;
    max-width: 300px !important;
    bottom: -60px !important;
    left: 20% !important;
  }
  .no-home.pro2 .tab-right-1,
  .no-home.pro3 .tab-right-2 {
    clear: both;
    margin-top: 20px;
  }
  .no-home.pro2 .tab-right-1 table {
    width: 100%;
  }
  .no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.even td img,
  .no-home.pro2 .tab-right-1 table .mCustomScrollbar tr.odd td img {
    height: auto;
  }
}
@media screen and (max-width: 630px) {
  #header .bg-fixed-wrap-bottom .title {
    font-size: 20px;
  }
  .no-home #header .bg-fixed-wrap-bottom .profil {
    margin: 35px 3% 0 0;
  }
  #header.big-header .bg-fixed-header-bottom.pro .img-restau {
    top: 85px;
  }
  #header.big-header .bg-fixed-header-bottom.pro .favoris,
  #header.big-header .bg-fixed-header-bottom.pro .nb-favoris {
    margin: 10px 5% 0 0;
    width: 27%;
  }
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 20% 0 0 0;
  }
  .no-home.pro .list-bloc .conversation .perso-picture {
    width: 30%;
  }
  .no-home.pro .list-bloc .conversation .perso-picture:after {
    left: 31%;
  }
  .no-home.pro .list-bloc .conversation .perso-txt {
    width: 70%;
  }
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  #header .nav-bar .connexion .dropdown .dropdown-toggle:hover,
  #header .nav-bar nav.connexion .dropdown .dropdown-toggle {
    font-size: 9px;
  }
  .no-home.pro #wrap .bg-no-white .informations .mail-box {
    background-size: 30%;
  }
}
@media screen and (max-width: 480px) {
  .home #header .nav-bar .page-title h1 {
    font-size: 20px !important;
    margin-top: 20%;
  }
  #header .nav-bar .page-title h1 {
    font-size: 20px !important;
    margin-top: 20%;
  }
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-txt {
    padding: 25px 25px 10px 50px !important;
  }
  .no-home #header .bg-fixed-wrap-bottom .title {
    font-size: 20px !important;
  }
  #header .nav-bar .connexion .dropdown .dropdown-toggle:hover,
  #header .nav-bar nav.connexion .dropdown .dropdown-toggle {
    padding: 17px 0 23px 0;
    background-position: 53% 10%;
  }
  /*#header .nav-bar nav.connexion .dropdown .dropdown-toggle {padding: 32px 0 8px 0;}*/
  #header.affix .nav-bar nav.connexion .dropdown .dropdown-toggle {
    padding: 40px 0 15px 0;
  }
  #header .nav-bar .search input[type="submit"] {
    font-size: 9px;
    word-wrap: break-word;
  }
  .home #wrap .carrousel-videos {
    min-height: 550px;
  }
  .home #wrap .carrousel-videos .carousel .carousel-control.right {
    right: 15%;
  }
  .home #wrap .carrousel-videos .carousel .carousel-inner {
    min-height: inherit;
  }
  #header .nav-bar .connexion.profil .dropdown .dropdown-body {
    padding: 10px;
    min-height: 180px;
    min-width: 300px;
  }
  #header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-img {
    width: 40%;
    margin-right: 3%;
  }
  #header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-top,
  #header .nav-bar .connexion.profil .dropdown .dropdown-body .profil-description-bottom {
    width: 57%;
  }
  #header .nav-bar .connexion .dropdown .dropdown-body {
    padding: 5px;
    min-width: 300px;
  }
  .select2-drop.select2-drop-active:before {
    right: 70%;
  }
  .home .list-bloc .top-visit {
    height: inherit;
  }
  .home .list-bloc .conversation .perso-picture {
    width: 30%;
  }
  .home .list-bloc .conversation .perso-picture:after {
    left: 31%;
  }
  .home .list-bloc .conversation .perso-txt {
    width: 70%;
  }
  #header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right {
    min-width: 300px;
    padding: 5px;
  }
  #header .bg-fixed-wrap-top .nav-menu .dropdown .menu-right > li ul li label {
    font-size: 7px;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos {
    min-height: 500px;
  }
  .no-home.pro #wrap .bg-no-white .informations .left a {
    font-size: 12px;
  }
  .no-home #header .bg-fixed-wrap-bottom .profil {
    margin: 5px 3% 0 0;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil {
    top: 50px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item {
    min-width: 200px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item img {
    max-width: 40%;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop {
    left: 90px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-inner .item .prop-name {
    left: 90px;
    font-size: 14px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control {
    bottom: -5px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control.left {
    left: 75px;
  }
  #header.big-header .bg-fixed-header-bottom .carrousel-profil .carousel-control.right {
    left: 95px;
  }
  #header.big-header .bg-fixed-header-bottom.pro .favoris,
  #header.big-header .bg-fixed-header-bottom.pro .nb-favoris {
    width: 55%;
  }
  /*#header.big-header .bg-fixed-header-bottom.pro .img-restau {max-width: 30%;}*/
  .no-home.pro #wrap .bg-no-white .appel .reserv {
    padding: 20% 0 0 0;
  }
  .no-home.pro #wrap .bg-no-white .reservation a {
    padding: 30% 0 0 0;
  }
  .no-home.la-une #wrap .search form .btn-default {
    font-size: 12px;
  }
  /*.list-bloc .conversation .perso-picture {width: 30%;}*/
  .no-home.la-une #wrap .right-bottom .list-bloc .conversation .perso-picture:after {
    left: 30%;
  }
  .list-bloc .conversation .perso-txt {
    width: 70%;
  }
  .no-home.la-une #wrap .article .add-comment .img-profil {
    width: 40%;
  }
  .no-home.la-une #wrap .article .add-comment .form-groupe {
    width: 60%;
  }
  #comments .conversation .img-forum,
  #comments .conversation .avatar.photo,
  #pm-content #content .conversation .avatar.photo {
    width: 28% !important;
  }
  #pm-content #content .conversation .text {
    width: 70% !important;
  }
  #pm-content #content .conversation {
    margin-bottom: 10px !important;
  }
  .no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe label,
  .no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="text"],
  .no-home.user #wrap .bloc-infos .body-infos .infos-top .form-groupe input[type="password"] {
    font-size: 12px !important;
  }
  .userSlide #slider3 #myCarouselphotoright .item img {
    height: 102px !important;
  }
  .popup .modal-dialog {
    width: 300px;
  }
  #wrap .carrousel-videos .thumbs .carousel-inner .item a .captions .top .name {
    width: 70%;
    word-break: break-word;
  }
  .no-home.pro #wrap .bg-no-white .tab .tab-middle {
    margin-bottom: 20px;
  }
  .no-home.pro2 .tab-left-1 table {
    width: 32%;
    margin-right: 0px;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.left {
    left: 15%;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-control.right {
    right: 15%;
  }
  .no-home.pro #wrap .bg-no-white .bloc-videos .carrousel-videos .carousel .carousel-indicators {
    min-height: 55px !important;
    min-width: 225px !important;
    max-width: 225px !important;
    bottom: -60px !important;
    left: 15% !important;
  }
  .no-home.pro #wrap .bg-no-white .informations .mail-box {
    background-size: 40%;
  }
  .no-home.pro #wrap .bg-no-white .informations .text-mailBox {
    font-size: 12px;
    padding: 10px 3px 3px 3px;
  }
}
