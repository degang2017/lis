/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2017 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: shendegang <php_shen@163.com>                                |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef LIS_VIEW_H
#define LIS_VIEW_H

#define LIS_VIEW_PROPERTY_NAME_INSTANCE     "_instance"
#define LIS_VIEW_PROPERTY_NAME_TPLVARS      "_tpl_vars"
#define LIS_VIEW_PROPERTY_NAME_TPLDIR       "_tpl_dir"

extern zend_class_entry *lis_view_ce;
void lis_view_instance();
static int lis_view_render_tpl(lis_view_t *view, zend_array *symbol_table, zend_string *tpl, zval *ret);
static int lis_view_render(lis_view_t *view, zend_string *tpl, zval *vars, zval *return_val);
static int lis_view_exec_tpl(lis_view_t *view, zend_op_array *op_array, zend_array *symbol_table, zval* ret);
static int lis_view_simple_valid_var_name(char *var_name, int len);

LIS_STARTUP_FUNCTION(view);
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
