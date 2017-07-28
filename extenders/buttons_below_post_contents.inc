<?php
/**
 * Posts extender: profile renderer below the post contents
 * 
 * @package    BardCanvas
 * @subpackage sharethis
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 * 
 * Imported globals:
 * @var post_record $post
 */

use hng2_modules\posts\post_record;

global $post, $settings;

if( empty($post) ) return;
if( $post->status != "published" ) return;
if( $settings->get("modules:sharethis.head_code")   == "" ) return;
if( $settings->get("modules:sharethis.button_code") == "" ) return;

echo "
    <div class='post_social_buttons' data-module='sharethis'>
        {$settings->get("modules:sharethis.button_code")}
    </div>
";
