/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_js_bindings.py -c system_jsb.ini" on 2012-12-17
* Script version: v0.5
*/
#include "js_bindings_system_functions.h"
#include "js_bindings_config.h"
#include "js_bindings_core.h"
#include "js_manual_conversions.h"
#include "ScriptingCore.h"
#include "local-storage/LocalStorage.h"

USING_NS_CC;

// Arguments: char*
// Ret value: const char*
bool JSB_localStorageGetItem(JSContext *cx, uint32_t argc, jsval *vp) {
    JSB_PRECONDITION2( argc == 1, cx, false, "Invalid number of arguments" );
    jsval *argvp = JS_ARGV(cx,vp);
    bool ok = true;
    std::string arg0; 

    ok &= jsval_to_std_string( cx, *argvp++, &arg0 );
    JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
    std::string ret_val;

    ret_val = localStorageGetItem(arg0);

    jsval ret_jsval = std_string_to_jsval(cx, ret_val);
    JS_SET_RVAL(cx, vp, ret_jsval );

    return true;
}

// Arguments: char*
// Ret value: void
bool JSB_localStorageRemoveItem(JSContext *cx, uint32_t argc, jsval *vp) {
    JSB_PRECONDITION2( argc == 1, cx, false, "Invalid number of arguments" );
    jsval *argvp = JS_ARGV(cx,vp);
    bool ok = true;
    std::string arg0; 

    ok &= jsval_to_std_string( cx, *argvp++, &arg0 );
    JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

    localStorageRemoveItem(arg0);
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return true;
}

// Arguments: char*, char*
// Ret value: void
bool JSB_localStorageSetItem(JSContext *cx, uint32_t argc, jsval *vp) {
    JSB_PRECONDITION2( argc == 2, cx, false, "Invalid number of arguments" );
    jsval *argvp = JS_ARGV(cx,vp);
    bool ok = true;
    std::string arg0; std::string arg1; 

    ok &= jsval_to_std_string( cx, *argvp++, &arg0 );
    ok &= jsval_to_std_string( cx, *argvp++, &arg1 );
    JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

    localStorageSetItem(arg0 , arg1);
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return true;
}


//#endif // JSB_INCLUDE_SYSTEM