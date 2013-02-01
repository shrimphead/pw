/**
 * Form THeming.
 *
 * - Drop down menus etc.
 */
(function($) {

$(document).ready(function() {
  jQuery.event.props = jQuery.event.props.join('|').replace('layerX|layerY|', '').split('|');

 // New form validation in case of multiple forms detected.
  if ($('#ad-s-node-form').length) {
    //console.log('form-theme!');
   //var description = jQuery('.form-item-field-image-und-0 > .description');
   $('.form-item-field-image-und-0 > label').append('<div id="form-item-field-image-und-0-description-toggle" class="small-description">?</div>');
   $('#form-item-field-image-und-0-description-toggle').click(function(){
     $(this).toggleClass("down");
   });

   // if element
   if ($('.form-irem-field-image-und-0 > .description').length > 0) {
     toggle('.form-item-field-image-und-0 > .description');
   }

//   jQuery('.form-item-field-image-und-0 > .description').css('font-size:.8em');
  };
});

}(jQuery));