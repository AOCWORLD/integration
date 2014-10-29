
function ajouterPreference(){ 
 var user = $("#user1").val();
 var pref = $("#pref1").val();
 var type_pref = $("#type_pref").val();
 
 	//alert(user);
	//alert(pref);
	 $.ajax({ 
	   type: "POST",
	   url: $('#basePath').val()+"/ajouter_preference.php",
	   data: "user="+user+"&pref="+pref+"&type_pref="+type_pref,
	   success: function(msg){ //alert(msg); 				    
		 //$("#preferences0").html(msg);
		 
	   }
	});
}

function addPreferenceSearch(id){ 
 var user = $("#user"+id).val();
 var pref = $("#pref"+id).val();
 var type_pref = $("#type_pref"+id).val();
 
 	//alert(user);
	//alert(pref);
	 $.ajax({ 
	   type: "POST",
	   url: $('#basePath').val()+"/addPreferenceSearch.php",
	   data: "user="+user+"&pref="+pref+"&type_pref="+type_pref,
	   success: function(msg){ //alert(msg); 				    
		 $("#preferences"+id).html(msg);
		 
	   }
	});
}

