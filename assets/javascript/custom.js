$(document).ready(function() { 
	
    $( "#inscription_form #captcha" ).keyup(function() {  
            $result = ( parseInt($('#num1').val()) + parseInt($('#num2').val()) == parseInt($('#captcha').val()) ) ;
            $('#spambot').hide();
            if($result == false){
                $('label.errorFormInscrit').show();                
            }else{
               $('label.errorFormInscrit').hide();   
            }           
     });
	
            
   

    $('.chekSelect').click(function() {		 
                var lang = $( this ).attr('id');
                var imgsrc = $( this ).attr('imgsrc');
                $('.flagSelect').html('<img width="24" height="24" alt="French" src="'+$('#baseUrl').val()+'/wp-content/plugins/google-language-translator/images/flags24/'+imgsrc+'.png" class="flagimg">');
                doGoogleLanguageTranslator('fr|'+lang);  
                $('#LangueEncour').val(imgsrc); 
                $.ajax({ 
                    type: "POST",
                    url: $('#basePath').val()+"/langueSession.php",
                    data: "lang="+imgsrc,
                    success: function(msg){                       
                        setTimeout(function() {
                           changeTexte();
                        }, 7000); 
                    }
                 });
	});
 //Traduction
 
 setTimeout(function() {
   changeTexte();
}, 20000); 
var langEcour = $('#LangueEncour').val(); 
 $('.flagSelect').html('<img width="24" height="24" alt="French" src="'+$('#baseUrl').val()+'/wp-content/plugins/google-language-translator/images/flags24/'+langEcour+'.png" class="flagimg">');
 
//Fin Traduction  
//
 $( ".dropdown .dropdown-toggle" ).hover(
        function() {
            $(this).parents('#header').find('.open').children('.dropdown-body').hide();
            $(this).parents('#header').find('.open').removeClass('open');
            $(this).parent('.dropdown').addClass('open');
            $(this).parent('.dropdown').find('.dropdown-body').show();
       }
      );
// searche plugin liste user tchat
	
    $("#user-search").keyup(function(){
 
        // Retrieve the input field text and reset the count to zero
        var filter = $(this).val(), count = 0; 
        // Loop through the comment list
        $("#user_list li").each(function(){
 
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
$('.share-list .fb').click(function() {
    $("#facebook .share").click();
});

$('.share-list .tw').click(function() {
    $("#twitter .share").click();
});

$('.share-list .google').click(function() {
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
$(".input-group form").attr('action', $('#baseUrlNews').val()+'/#wpoi_email');

//avatar
$(".result-search .avatar.photo").addClass("img-with-border-and-rounded-corner");
$("#UserAvatar .avatar.photo").addClass("img-with-border-and-rounded-corner");
$("#blogUserConect .avatar.photo").addClass("img-with-border-and-rounded-corner");
$(".carrousel-profil .avatar.photo").addClass("img-with-border-and-rounded-corner-big");
setTimeout(function() {
    $(".cometchat_userscontentavatarimage").addClass("img-with-border-and-rounded-corner");
}, 5000);
//facebook connect
$('.social .facebook').click(function(){    
    $(".new-fb-btn").click();
    return false;
});
$('.social .twitter').click(function(){    
    $(".new-twit-btn").click();
    return false;
});
$('.social .googleplus').click(function(){    
    $(".new-googleplus-btn").click();
    return false;
});
//Fin facebook connect

//recherche messagerie
$("#user-search-Message").keyup(function(){ 
            // Retrieve the input field text and reset the count to zero
            var filter = $(this).val(), count = 0; 
            if(filter == ''){
               $("#content").append($("#NotSearch").html()); 
               paginationMessagerie();
               $("#NotSearch").html('');
            }
            // Loop through the comment list
            $("#pm-content #content div.conversation").each(function(){

                // If the list item does not contain the text phrase fade it out
                if ($(this).text().search(new RegExp(filter, "i")) < 0) {
                    $("#NotSearch").append('<div class="'+$(this).attr( "class" )+'">'+$(this).html()+'</div>');
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

}); //ready


var chat=function(id){
	jQuery('#cometchat_userlist_'+id).click();
}

function changeTexte(){
     var langEcour = $('#LangueEncour').val();      
     var str = $('#SearchBlob').html();//alert("ss"+str);
     var res = str.replace("<font>", ""); 
     var resFinal = res.replace("</font>", ""); 
     var res1 = resFinal.replace("<font>", ""); 
     var resFinal1 = res1.replace("</font>", "");      
     $('#SearchPlace').attr("placeholder",resFinal1);  
      
  var str = $('#SearchTchatHome').html(); 
  var res = str.replace("<font>", ""); 
  var resFinal = res.replace("</font>", ""); 
  var res1 = resFinal.replace("<font>", ""); 
  var resFinal1 = res1.replace("</font>", ""); 
  $('#user-search').attr("placeholder",resFinal1);   
}
//delete photos   
   function deletePhoto(id){
      //liste photos  
        $(".imgLoad").show();
        $.ajax({ 
            type: "POST",
            url: $('#basePath').val()+"/deletePhoto.php",
            data: "id="+id,
            success: function(msg){                   
                  $("#"+id).remove();
                  $(".imgLoad").hide();
            }
         });
   } 
   
   
function sup_blog(blog){ 
         $(".imgLoad").show();
	 $.ajax({ 
	   type: "POST",
	   url: $('#basePath').val()+"/sup_blog.php",
	   data: "blog="+blog,
	   success: function(msg){ 
                 //alert(msg);   
		 $("#bloguser"+blog).hide();
                 $(".imgLoad").hide();
		 //$("#bloguser"+blog).romove();
	   }
	   
	});
}


//envoie article user
function envoieArticle(idArticle){ 
   $(".imgLoad").show();
        $.ajax({ 
          type: "POST",
          url: $('#basePath').val()+"/envoie_Article.php",
          data: "idArticle="+idArticle,
          success: function(msg){ 
                //alert(msg); envoieMsg
                $("#envoieMsg"+idArticle).show();
                $(".imgLoad").hide();
          }

       });  
}

function valideSearch(idUser){ 
   $('#myMod'+idUser).on('loaded.bs.modal', function (e) {
            $(".mCustomScrollbar").mCustomScrollbar();  
            $("#user-search-Pref").keyup(function(){ 
                // Retrieve the input field text and reset the count to zero
                var filter = $(this).val(), count = 0; 
               
                // Loop through the comment list
                $("#user_list-Pref  li").each(function(){

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
   


