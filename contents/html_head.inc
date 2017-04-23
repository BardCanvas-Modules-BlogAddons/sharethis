<?php
/**
 * Styles and scripts for the module
 *
 * @package    BardCanvas
 * @subpackage sharethis
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 *
 * @var config   $config
 * @var module   $this_module
 * @var template $template
 *
 * @var post_record  $post
 * @var media_record $item
 */

use hng2_base\config;
use hng2_base\module;
use hng2_base\template;
use hng2_media\media_record;
use hng2_modules\posts\post_record;

global $settings, $template;

if( $template->layout == "admin" ) return;
if( $template->layout == "embeddable" ) return;
if( $settings->get("modules:sharethis.head_code") == "" ) return;
?>

<!-- [+] sharethis code -->

<?= $settings->get("modules:sharethis.head_code"); ?>


<!-- [-] sharethis code -->

