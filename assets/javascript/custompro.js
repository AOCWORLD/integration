$(document).ready(function(){
	$('#rappeltel').submit(function(e) {
		e.preventDefault();
		$(this).next(".erreur").html("");
		$(this).next(".erreur").next(".succes").html("");
		var data = {
			'phonenumber': $(this).children('input[name="phonenumber"]').val(),
			'myemail': $(this).children('input[name="myemail"]').val()
		};
		
		var succes=$(this).next(".erreur").next(".succes");
		var error=$(this).next(".erreur");
		var phonenumber = $(this).children('input[name="phonenumber"]');

		if(phonenumber.val()==""){
			error.html("Numéro de téléphone ne peut pas être vide");
		}
		else{
			$.ajax({
				url: template_url+"/send_mail_phone.php", // your ajax url
				type: 'POST',
				dataType: 'json',
				data: data,
				success: function(data, textStatus, xhr) {
					//alert(data);
					phonenumber.val('');
					succes.html("Votre demande a été envoyé avec succes");
				},
				error: function(jqXHR, textStatus, errorThrown) {
					error.html("Erreur survenu l'hors de la soumission de votre demande");
				}
			});
		}
	});
	
	$('#send_url_video').submit(function(e) {
		e.preventDefault();
		$(this).next(".erreur").html("");
		$(this).next(".erreur").next(".succes").html("");
		var data = {
			'url_video': $(this).children('input[name="url_video"]').val(),
			'mail_system': $(this).children('input[name="mail_system"]').val()
		};
		
		var succes=$(this).next(".erreur").next(".succes");
		var error=$(this).next(".erreur");
		var url_video = $(this).children('input[name="url_video"]');

		if(url_video.val()==""){
			error.html("Url vidéo ne peut pas être vide");
		}
		else{
			$.ajax({
				url: template_url+"/send_mail_phone.php", // your ajax url
				type: 'POST',
				dataType: 'json',
				data: data,
				success: function(data, textStatus, xhr) {
					//alert(data);
					url_video.val('');
					succes.html("Votre demande a été envoyé avec succes");
				},
				error: function(jqXHR, textStatus, errorThrown) {
					error.html("Erreur survenu l'hors de la soumission de votre demande");
				}
			});
		}
	});
	
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
});