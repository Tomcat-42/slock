/* user and group to drop privileges to */
static const char *user  = "pablo951_br";
static const char *group = "pablo951_br";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",     /* after initialization */
	// [INPUT] =  "#551A8B",   /* during input */
	[INPUT] =  "#2e3440",   /* during input */
	//[FAILED] = "#772b24",   /* wrong password */
 	// [FAILED] = "#5e302d",   /* wrong password */
	[FAILED] = "#bf616a",   /* wrong password */
	// [CAPS] = "#382247"      /* CapsLock on */     
	[CAPS] = "#3b4252",      /* CapsLock on */     
	[PAM] =    "#2e3440",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
