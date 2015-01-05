$(document).ready(function () {

    $("#inscription_form #captcha").keyup(function () {
        $result = ( parseInt($('#num1').val()) + parseInt($('#num2').val()) == parseInt($('#captcha').val()) );
        $('#spambot').hide();
        if ($result == false) {
            $('label.errorFormInscrit').show();
        } else {
            $('label.errorFormInscrit').hide();
        }
    });


    $('.home .chekSelect').click(function () {
        var lang = $(this).attr('id');
        var imgsrc = $(this).attr('imgsrc');
        $('.flagSelect').html('<img width="24" height="24" alt="' + imgsrc + '" src="' + $('#baseUrl').val() + '/wp-content/plugins/google-language-translator/images/flags24/' + imgsrc + '.png" class="flagimg">');
        doGoogleLanguageTranslator('fr|' + lang);
        $('#LangueEncour').val(imgsrc);
        $.ajax({
            type: "POST",
            url: $('#basePath').val() + "/langueSession.php",
            data: "lang=" + imgsrc,
            success: function (msg) {
                setTimeout(function () {
                    changeTexte();
                }, 7000);
            }
        });
    });

    $('.pro .chekSelect').click(function () {
        var lang = $(this).attr('id');
        var imgsrc = $(this).attr('imgsrc');
        $('.flagSelect').html('<img width="24" height="24" alt="' + imgsrc + '" src="' + $('#baseUrl').val() + '/wp-content/plugins/google-language-translator/images/flags24/' + imgsrc + '.png" class="flagimg">');
        doGoogleLanguageTranslator('fr|' + lang);
        $('#LangueEncour').val(imgsrc);
        $.ajax({
            type: "POST",
            url: $('#basePath').val() + "/langueSession.php",
            data: "lang=" + imgsrc,
            success: function (msg) {
//                        setTimeout(function() {                           
//                           changeTextePro();                        
//                        }, 7000); 
            }
        });
    });
    //Traduction

    setTimeout(function () {
        changeTexte();
    }, 20000);
// setTimeout(function() {  
//   changeTextePro();   
//}, 20000);
//var langEcour = $('#LangueEncour').val(); 
//$('.flagSelect').html('<img width="24" height="24" alt="French" src="'+$('#baseUrl').val()+'/wp-content/plugins/google-language-translator/images/flags24/'+langEcour+'.png" class="flagimg">');
// 
//Fin Traduction  
//
    $(".dropdown .dropdown-toggle").hover(
        function () {
            $(this).parents('#header').find('.open').children('.dropdown-body').hide();
            $(this).parents('#header').find('.open').removeClass('open');
            $(this).parent('.dropdown').addClass('open');
            $(this).parent('.dropdown').find('.dropdown-body').show();
        }
    );
// searche plugin liste user tchat

    $("#user-search").keyup(function () {

        // Retrieve the input field text and reset the count to zero
        var filter = $(this).val(), count = 0;
        // Loop through the comment list
        $("#user_list li").each(function () {

            // If the list item does not contain the text phrase fade it out
            if ($(this).text().search(new RegExp(filter, "i")) < 0) {
                $(this).fadeOut();

                // Show the list item if the phrase matches and increase the count by 1
            } else {
                $(this).show();
                count++;
            }
        });
    });
// Fin Searche plugin liste user tchat   
//share bouton
//$('.share-list .email').click(function() {
//    $( "#mr-social-sharing-toolkit-widget-2 .mr_social_sharing .nopin").click();
//});
    $('.share-list .fb').click(function () {
        $("#facebook .share").click();
    });

    $('.share-list .tw').click(function () {
        $("#twitter .share").click();
    });

    $('.share-list .google').click(function () {
        $("#googleplus .share").click();
    });
//Fin share bouton
//view comment
//$('.conversation .view-comment .msg').click( function(){
//  $(this).parents('.conversation').children('.add-comment').show();
//  return false;
//});
//$("img[class='avatar']").addClass("pic-2");
//newsletter
    $("#wpoi_email").addClass("form-control");
    $("#wpoi_email").attr('placeholder', 'Saisissez votre email');
    $(".input-group input[type=submit]").addClass("input-group-addon");
    $(".input-group form").attr('action', $('#baseUrlNews').val() + '/#wpoi_email');

//avatar
    $(".result-search .avatar.photo").addClass("img-with-border-and-rounded-corner");
    $("#UserAvatar .avatar.photo").addClass("img-with-border-and-rounded-corner");
    $("#blogUserConect .avatar.photo").addClass("img-with-border-and-rounded-corner");
    $(".carrousel-profil .avatar.photo").addClass("img-with-border-and-rounded-corner-big");
    setTimeout(function () {
        $(".cometchat_userscontentavatarimage").addClass("img-with-border-and-rounded-corner");
    }, 5000);
//facebook connect
    $('.social .facebook').click(function () {
        $(".new-fb-btn").click();
        return false;
    });
    $('.social .twitter').click(function () {
        $(".new-twit-btn").click();
        return false;
    });
    $('.social .googleplus').click(function () {
        $(".new-googleplus-btn").click();
        return false;
    });
//Fin facebook connect

//recherche messagerie
    $("#user-search-Message").keyup(function () {
        // Retrieve the input field text and reset the count to zero
        var filter = $(this).val(), count = 0;
        if (filter == '') {
            $("#content").append($("#NotSearch").html());
            paginationMessagerie();
            $("#NotSearch").html('');
        }
        // Loop through the comment list
        $("#pm-content #content div.conversation").each(function () {

            // If the list item does not contain the text phrase fade it out
            if ($(this).text().search(new RegExp(filter, "i")) < 0) {
                $("#NotSearch").append('<div class="' + $(this).attr("class") + '">' + $(this).html() + '</div>');
                $(this).remove();
                $(this).removeClass('showSearch');
                paginationMessagerie();
                // Show the list item if the phrase matches and increase the count by 1
            } else {
                $(this).show();
                $(this).addClass('showSearch')
                paginationMessagerie();
                count++;
            }
        });
    });


    $("#degustation_form").on('submit', function (e) {
        e.preventDefault();
        $('.erreur').html("");
        var valid = true;
        if (!$("#choix1").is(':checked')) {
            alert("Vous devez accepter la certification.");
            valid = false;
        }

        if ($('input[name="lieu"]').val()=='') {
            $('input[name="lieu"]').addClass("inputError");
            valid = false;
        }else{
           $('input[name="lieu"]').removeClass("inputError"); 
        }

        if ($('input[name="vin_champagne_spiritueux"]').val()=='' && $('input[name="nom_du_menu_ou_du_plat"]').val()=='') {
            $('input[name="vin_champagne_spiritueux"]').addClass("inputError");
            $('input[name="nom_du_menu_ou_du_plat"]').addClass("inputError");
            valid = false;
        }else{
           $('input[name="vin_champagne_spiritueux"]').removeClass("inputError");
            $('input[name="nom_du_menu_ou_du_plat"]').removeClass("inputError");
        }
        
        if ($('textarea[name="description_plat"]').val().length > 400) {
            $('textarea[name="description_plat"]').next('.erreur').html('Vous ne devez pas dépasser 400 caractéres.');
            valid = false;
        }

        
        if ($('textarea[name="description_champagne"]').val().length > 400) {
            $('textarea[name="description_champagne"]').next('.erreur').html('Vous ne devez pas dépasser 400 caractéres.');
            valid = false;
        }

        if (valid) {
            this.submit();
        }
    });

    //Tabel des listes degustations
    $("#myTable").tooltip();
    
     
    setTimeout(function() {
      $("#myTable_filter input[type='search']").attr( "placeholder", "Rechercher par Pays, Ville, Lieu, Vin…" );       
    }, 5000);
    //pagination Promotion
  if($('#paginationPromotion').length>0){  
    $.ajax({
        url:$('#basePath').val()+"/listePromotion.php",
             type:"POST",
             data:"actionfunction=showData&page=1",
        cache: false,
        success: function(response){

             $('#paginationPromotion').html(response);
             $(".imgLoadPromo").hide();
                //promo
                PromotionPro();
           }

      });
    $('#paginationPromotion').on('click','.page-numbers',function(){
       $page = $(this).attr('href');
	   $pageind = $page.indexOf('page=');
	   $page = $page.substring(($pageind+5));
           $(".imgLoadPromo").show(); 
	   $.ajax({
	     url:$('#basePath').val()+"/listePromotion.php",
                  type:"POST",
                  data:"actionfunction=showData&page="+$page,
        cache: false,
        success: function(response){		   
		  $('#paginationPromotion').html(response);
                  $(".imgLoadPromo").hide();
                  PromotionPro();                  
		}
		
	   });
	return false;
	});
  }    
    //Fin promotion
    
    //ajax video
   if($('.ChargementVideoHome').length>0){    
    setTimeout(function() {
        //video Home
       $.ajax({
        url:$('#basePath').val()+"/ajaxFile/youtubeHome.php",
             type:"POST",
             data:"actionfunction=showData&page=1",
        cache: false,
        success: function(response){
             $('.ChargementVideoHome').html(response);             
                //youtube
                youtubeHome();
           }

      }); 
    }, 5000);
  }
  //video Page
  if($('.ChargementVideoPage').length>0){    
    setTimeout(function() {
        //video Home
       $.ajax({
        url:$('#basePath').val()+"/ajaxFile/youtubePage.php",
             type:"POST",
             data:"actionfunction=showData&page=1",
        cache: false,
        success: function(response){
             $('.ChargementVideoPage').html(response);             
                //youtube
                youtubePage();
           }
      }); 
    }, 5000);
  }
  //video recherche
   if($('.ChargementVideoSearch').length>0){    
    setTimeout(function() {
        //video Home
       $.ajax({
        url:$('#basePath').val()+"/ajaxFile/youtubeSearch.php",
             type:"POST",
             data:"actionfunction=showData&page=1",
        cache: false,
        success: function(response){
             $('.ChargementVideoSearch').html(response);             
                //youtube
                youtubePage();
           }
      }); 
    }, 5000);
  }
 //video User
   if($('.ChargementVideoUser').length>0){    
    setTimeout(function() {
        //video Home
       $.ajax({
        url:$('#basePath').val()+"/ajaxFile/youtubeUser.php",
             type:"POST",
             data:"actionfunction=showData&page=1",
        cache: false,
        success: function(response){
             $('.ChargementVideoUser').html(response);             
                //youtube
                youtubePage();
           }
      }); 
    }, 5000);
  }  
//video pro
    if($('.ChargementVideoPro').length>0){
        setTimeout(function() {
            //video Home
            $.ajax({
                url:$('#basePath').val()+"/ajaxFile/youtubeEspacePro.php",
                type:"POST",
                data:"actionfunction=showData&page=1",
                cache: false,
                success: function(response){
                    $('.ChargementVideoPro').html(response);
                    //youtube
                    youtubePro();
                }

            });
            //video Pro
        }, 5000);
    }
    //fin ajax video
    
   
                                
}); //ready


var chat = function (id) {
    jQuery('#cometchat_userlist_' + id).click();
}

function youtubeHome(){  
   //carousel video home page
	$('.home #myCarousel .galerie').carousel({
	    interval: 4000
	});
	
	//pause && play
	$('.video-stream').click(function () {
        $('.home #myCarouselthumb').carousel({
			interval: false
		});
		$('.home #myCarousel .galerie').carousel({
			interval: false
		});
    });

	$('.home #myCarousel .galerie').on('slid.bs.carousel', function() {
      var id = $('.home #myCarousel .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $('.home [id^=carousel-selector-'+id+']').addClass('selected');
	});
        
	$('.home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.home #myCarouselthumb .galerie').carousel(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
        
	$('.home #myCarouselthumb').carousel({
		interval: 16000
	});
    
    $('.home #myCarouselthumb').on('slid.bs.carousel', function() {
      var id = $('.home #myCarouselthumb .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $('.home [id^=carousel-selector-'+id+']').addClass('selected');
	});

	$('.home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.home #myCarousel .galerie').carousel(id);
	  $('.home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	}); 
        
       $('.fancybox-media')
    .attr('rel', 'media-gallery')
    .fancybox({
            openEffect : 'none',
            closeEffect : 'none',
            prevEffect : 'none',
            nextEffect : 'none',

            arrows : false,
            
            helpers : {
                    media : {
                       youtube : {
                            params : {
                                autoplay : 1,
                                color    :'white',
                                theme    :'light',
                           }
                        } 
                    },                    
                    overlay : {
                            css : {
                                    'background' : 'rgba(238,238,238,0.85)'
                            }
                    }
            }
    });  
}
function youtubePage(){  
   //carousel video home page
	$('.no-home #myCarousel .galerie').carousel({
	    interval: 4000
	});
	
	//pause && play
	$('.video-stream').click(function () {
        $('.no-home #myCarouselthumb').carousel({
			interval: false
		});
		$('.no-home #myCarousel .galerie').carousel({
			interval: false
		});
    });

	$('.no-home #myCarousel .galerie').on('slid.bs.carousel', function() {
      var id = $('.no-home #myCarousel .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.no-home [id^=carousel-selector-]').removeClass('selected');
	  $('.no-home [id^=carousel-selector-'+id+']').addClass('selected');
	});
        
	$('.no-home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.no-home #myCarouselthumb .galerie').carousel(id);
	  $('.no-home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});
        
	$('.no-home #myCarouselthumb').carousel({
		interval: 16000
	});
    
    $('.no-home #myCarouselthumb').on('slid.bs.carousel', function() {
      var id = $('.no-home #myCarouselthumb .item.active').data('slide-number');
	  var id_selector = $(this).attr("id");
	  id = parseInt(id);
	  $('.no-home [id^=carousel-selector-]').removeClass('selected');
	  $('.no-home [id^=carousel-selector-'+id+']').addClass('selected');
	});

	$('.no-home [id^=carousel-selector-]').click( function(){
	  var id_selector = $(this).attr("id");
	  var id = id_selector.substr(id_selector.length -1);
	  id = parseInt(id);
	  $('.no-home #myCarousel .galerie').carousel(id);
	  $('.no-home [id^=carousel-selector-]').removeClass('selected');
	  $(this).addClass('selected');
	});       
}

function youtubePro(){
    youtubePage();

    $('.share-accueil').on("click",function() {
        var data = {
            'youtube': $(this).data('youtube'),
            'title': $(this).data('title'),
            'user': $(this).data('user')
        };
        $.ajax({
            url: template_url+"/send_youtube_home.php", // your ajax url
            type: 'POST',
            dataType: 'json',
            data: data,
            success: function(data, textStatus, xhr) {

            }
        });
        $(this).parent("div").parent("div").parent("a").parent("div").find('.share-accueil-active').each(function(){
            $(this).removeClass('share-accueil-active');
            $(this).addClass('share-accueil');
        });
        $(this).addClass('share-accueil-active');

    });
}

function indicateurTelContact(val){  
  //indicateur tel 
    $.ajax({
         type: "POST",
         url: $('#basePath').val()+"/indicateurTel.php",
         data: 'pays='+val,
         success: function(msg){              
           $('#tel').val('(+'+msg+')');
         }
     }); 
}
function indicateurTel(val, idPro, nbre){ 
  //indicateur tel 
    $.ajax({
         type: "POST",
         url: $('#basePath').val()+"/indicateurTel.php",
         data: 'pays='+val,
         success: function(msg){                 
           $('#IndTel'+idPro+nbre).val('(+'+msg+')');
         }
     }); 
}

function PromotionPro(){
    if ( $( ".body-promo" ).length ) {
        $('.prods-slider .slider').bxSlider();
        //clique page 1
        $( ".btn-next-1" ).click( function(){
                $(this).parents('.page-1').css ('display','none');
                $(this).parents('.page').find('.page-2').css ('display','block');
                return false;
        });
       } 
       
       //Promotion
    $(".btn-next-2").click(function () {
        var errorForm = 0;
        if($(this).parents('.page').find('#name').val() == ""){       
        $(this).parents('.page').find('#name').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#name').removeClass("inputError");
        
        if($(this).parents('.page').find('#prenom').val() == ""){       
        $(this).parents('.page').find('#prenom').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#prenom').removeClass("inputError");
        
        if($(this).parents('.page').find('#pays').val() == ""){       
        $(this).parents('.page').find('#pays').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#pays').removeClass("inputError");
        
        if($(this).parents('.page').find('#ville').val() == ""){       
        $(this).parents('.page').find('#ville').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#ville').removeClass("inputError");
        
        if($(this).parents('.page').find('#tel').val() == ""){       
        $(this).parents('.page').find('#tel').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#tel').removeClass("inputError");
        
        if($(this).parents('.page').find('#email').val() == ""){       
        $(this).parents('.page').find('#email').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#email').removeClass("inputError");
        
        if($(this).parents('.page').find('#contact').val() == ""){       
        $(this).parents('.page').find('#contact').addClass("inputError"); errorForm++;
        }else $(this).parents('.page').find('#contact').removeClass("inputError");
        
        if(errorForm == 0){ 
            var str = $(this).parents('.page').find('form').serialize();            
            $.ajax({
                type: "POST",
                url: $('#basePath').val()+"/promotionEnvoi.php",
                data: str,
                success: function(msg){  
                }
            }); 
            
          $(this).parents('.page-2').css ('display','none');
          $(this).parents('.page').find('.page-3').css ('display','block');  
        }        
        return false;
    });   
    
    //pagination
        //first
        if($('.pagination .first').length>0){ 
          $(".bloc-promo-bottom .btn-moins").show();   
            $(".bloc-promo-bottom .btn-moins").click(function () {
                $('.pagination .first').click();
                return false;
            });
        }else{ 
           $(".bloc-promo-bottom .btn-moins").hide(); 
        }
        
        //last
         if($('.pagination .last').length>0){ 
          $(".bloc-promo-bottom .btn-plus").show();   
            $(".bloc-promo-bottom .btn-plus").click(function () {
                $('.pagination .last').click();
                return false;
            });
        }else{ 
           $(".bloc-promo-bottom .btn-plus").hide(); 
        }
        
}

function changeTexte() {
    var langEcour = $('#LangueEncour').val();
    var str = $('#SearchBlob').html();//alert("ss"+str);
    var res = str.replace("<font>", "");
    var resFinal = res.replace("</font>", "");
    var res1 = resFinal.replace("<font>", "");
    var resFinal1 = res1.replace("</font>", "");
    $('#SearchPlace').attr("placeholder", resFinal1);

    var str = $('#SearchTchatHome').html();
    var res = str.replace("<font>", "");
    var resFinal = res.replace("</font>", "");
    var res1 = resFinal.replace("<font>", "");
    var resFinal1 = res1.replace("</font>", "");
    $('#user-search').attr("placeholder", resFinal1);
}

function changeTextePro() {
    var langEcour = $('#LangueEncour').val();
    if (langEcour != 'French') {
        var nbre = $('#NbrePror').val();
        for (i = 0; i < nbre; i++) {
            //$('.prop.'+i).html($('#propHidden'+i).val());
            $('.prop-name.' + i + 'T').html($('#nameHidden' + i).val());
        }
    }
}
//delete photos   
function deletePhoto(id) {
    //liste photos
    $(".imgLoad").show();
    $.ajax({
        type: "POST",
        url: $('#basePath').val() + "/deletePhoto.php",
        data: "id=" + id,
        success: function (msg) {
            $("#" + id).remove();
            $(".imgLoad").hide();
        }
    });
}


function sup_blog(blog) {
    $(".imgLoad").show();
    $.ajax({
        type: "POST",
        url: $('#basePath').val() + "/sup_blog.php",
        data: "blog=" + blog,
        success: function (msg) {
            //alert(msg);
            $("#bloguser" + blog).hide();
            $(".imgLoad").hide();
            //$("#bloguser"+blog).romove();
        }

    });
}


//envoie article user
function envoieArticle(idArticle) {
    $(".imgLoad").show();
    $.ajax({
        type: "POST",
        url: $('#basePath').val() + "/envoie_Article.php",
        data: "idArticle=" + idArticle,
        success: function (msg) {
            //alert(msg); envoieMsg
            $("#envoieMsg" + idArticle).show();
            $(".imgLoad").hide();
        }

    });
}

function valideSearch(idUser) {
    $('#myMod' + idUser).on('loaded.bs.modal', function (e) {
        $(".mCustomScrollbar").mCustomScrollbar();
        $("#user-search-Pref").keyup(function () {
            // Retrieve the input field text and reset the count to zero
            var filter = $(this).val(), count = 0;

            // Loop through the comment list
            $("#user_list-Pref  li").each(function () {

                // If the list item does not contain the text phrase fade it out
                if ($(this).text().search(new RegExp(filter, "i")) < 0) {
                    $(this).fadeOut();

                    // Show the list item if the phrase matches and increase the count by 1
                } else {
                    $(this).show();
                    count++;
                }
            });
        });
    })
}
//FIn envoie article user
   


