// This framework originaly based on JeeUI2 lib used under MIT License Copyright (c) 2019 Marsel Akhkamov
// then re-written and named by (c) 2020 Anton Zolotarev (obliterator) (https://github.com/anton-zolotarev)
// also many thanks to Vortigont (https://github.com/vortigont), kDn (https://github.com/DmytroKorniienko)
// and others people

// Interface
static const char P_block[] PROGMEM = "block";
static const char P_button[] PROGMEM = "button";
static const char P_color[] PROGMEM = "color";
static const char P_date[] PROGMEM = "date";
static const char P_directly[] PROGMEM = "directly";
static const char P_false[] PROGMEM = "false";
static const char P_file[] PROGMEM = "file";
static const char P_final[] PROGMEM = "final";
static const char P_hidden[] PROGMEM = "hidden";
static const char P_html[] PROGMEM = "html";
static const char P_id[] PROGMEM = "id";
static const char P_input[] PROGMEM = "input";
static const char P_label[] PROGMEM = "label";
static const char P_max[] PROGMEM = "max";
static const char P_menu[] PROGMEM = "menu";
static const char P_min[] PROGMEM = "min";
static const char P_null[] PROGMEM = "null";
static const char P_number[] PROGMEM = "number";
static const char P_options[] PROGMEM = "options";
static const char P_password[] PROGMEM = "password";
static const char P_section[] PROGMEM = "section";
static const char P_step[] PROGMEM = "step";
static const char P_submit[] PROGMEM = "submit";
static const char P_time[] PROGMEM = "time";
static const char P_true[] PROGMEM = "true";
static const char P_type[] PROGMEM = "type";
static const char P_value[] PROGMEM = "value";
static const char P_wifi[] PROGMEM = "wifi";

// System config variables
static const char P_cfgfile[] PROGMEM = "/config.json";

static const char P_APonly[] PROGMEM = "APonly";
static const char P_APpwd[] PROGMEM = "APpwd";
static const char P_hostname[] PROGMEM = "hostname";
static const char P_m_host[] PROGMEM = "m_host";
static const char P_m_pass[] PROGMEM = "m_pass";
static const char P_m_port[] PROGMEM = "m_port";
static const char P_m_pref[] PROGMEM = "m_pref";
static const char P_m_user[] PROGMEM = "m_user";
static const char P_TZSET[] PROGMEM = "TZSET";
static const char P_userntp[] PROGMEM = "userntp";

// http-related
static const char PGgzip[] PROGMEM = "gzip";
static const char PGhdrcachec[] PROGMEM = "Cache-Control";
static const char PGhdrcontentenc[] PROGMEM = "Content-Encoding";
static const char PGmimecss[] PROGMEM  = "text/css";
static const char PGmimehtml[] PROGMEM = "text/html; charset=utf-8";
static const char PGmimejson[] PROGMEM = "application/json";
static const char PGmimetxt[] PROGMEM  = "text/plain";
static const char PGmimexml[] PROGMEM  = "text/xml";
static const char PGnocache[] PROGMEM = "no-cache, no-store, must-revalidate";
static const char PG404[] PROGMEM  = "Not found";
