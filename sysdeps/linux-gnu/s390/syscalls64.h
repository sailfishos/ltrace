/*
 * This file is part of ltrace.
 * Copyright (C) 2006 Heiko Carstens, IBM Corporation
 * Copyright (C) 2006 Ian Wienand
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

    "0",       			 /* 0 */
    "exit",    			 /* 1 */
    "fork",    			 /* 2 */
    "read",    			 /* 3 */
    "write",   			 /* 4 */
    "open",    			 /* 5 */
    "close",   			 /* 6 */
    "restart_syscall", 		 /* 7 */
    "creat",   			 /* 8 */
    "link",    			 /* 9 */
    "unlink",  			 /* 10 */
    "execve",  			 /* 11 */
    "chdir",   			 /* 12 */
    "13",      			 /* 13 */
    "mknod",   			 /* 14 */
    "chmod",   			 /* 15 */
    "16",      			 /* 16 */
    "17",      			 /* 17 */
    "18",      			 /* 18 */
    "lseek",   			 /* 19 */
    "getpid",  			 /* 20 */
    "mount",   			 /* 21 */
    "umount",       		 /* 22 */
    "23",      			 /* 23 */
    "24",      			 /* 24 */
    "25",      			 /* 25 */
    "ptrace",  			 /* 26 */
    "alarm",   			 /* 27 */
    "28",      			 /* 28 */
    "pause",   			 /* 29 */
    "utime",   			 /* 30 */
    "31",      			 /* 31 */
    "32",      			 /* 32 */
    "access",  			 /* 33 */
    "nice",    			 /* 34 */
    "35",      			 /* 35 */
    "sync",    			 /* 36 */
    "kill",    			 /* 37 */
    "rename",  			 /* 38 */
    "mkdir",   			 /* 39 */
    "rmdir",   			 /* 40 */
    "dup",     			 /* 41 */
    "pipe",    			 /* 42 */
    "times",   			 /* 43 */
    "44",      			 /* 44 */
    "brk",     			 /* 45 */
    "46",      			 /* 46 */
    "47",      			 /* 47 */
    "signal",  			 /* 48 */
    "49",      			 /* 49 */
    "50",      			 /* 50 */
    "acct",    			 /* 51 */
    "umount",  			 /* 52 */
    "53",      			 /* 53 */
    "ioctl",   			 /* 54 */
    "fcntl",   			 /* 55 */
    "56",      			 /* 56 */
    "setpgid", 			 /* 57 */
    "58",      			 /* 58 */
    "59",      			 /* 59 */
    "umask",   			 /* 60 */
    "chroot",  			 /* 61 */
    "ustat",   			 /* 62 */
    "dup2",    			 /* 63 */
    "getppid", 			 /* 64 */
    "getpgrp", 			 /* 65 */
    "setsid",  			 /* 66 */
    "sigaction",       		 /* 67 */
    "68",      			 /* 68 */
    "69",      			 /* 69 */
    "70",      			 /* 70 */
    "71",      			 /* 71 */
    "sigsuspend",      		 /* 72 */
    "sigpending",      		 /* 73 */
    "sethostname",     		 /* 74 */
    "setrlimit",       		 /* 75 */
    "getrlimit",       		 /* 76 */
    "getrusage",       		 /* 77 */
    "gettimeofday",    		 /* 78 */
    "settimeofday",    		 /* 79 */
    "80",      			 /* 80 */
    "81",      			 /* 81 */
    "82",      			 /* 82 */
    "symlink", 			 /* 83 */
    "84",      			 /* 84 */
    "readlink",			 /* 85 */
    "uselib",  			 /* 86 */
    "swapon",  			 /* 87 */
    "reboot",  			 /* 88 */
    "89",      			 /* 89 */
    "mmap",			 /* 90 */
    "munmap",  			 /* 91 */
    "truncate",			 /* 92 */
    "ftruncate",       		 /* 93 */
    "fchmod",  			 /* 94 */
    "95",      			 /* 95 */
    "getpriority",     		 /* 96 */
    "setpriority",     		 /* 97 */
    "98",      			 /* 98 */
    "statfs",  			 /* 99 */
    "fstatfs", 			 /* 100 */
    "101",     			 /* 101 */
    "socketcall",      		 /* 102 */
    "syslog",  			 /* 103 */
    "setitimer",       		 /* 104 */
    "getitimer",       		 /* 105 */
    "newstat", 			 /* 106 */
    "newlstat",			 /* 107 */
    "newfstat",			 /* 108 */
    "109",     			 /* 109 */
    "lookup_dcookie",  		 /* 110 */
    "vhangup", 			 /* 111 */
    "112",     			 /* 112 */
    "113",     			 /* 113 */
    "wait4",   			 /* 114 */
    "swapoff", 			 /* 115 */
    "sysinfo", 			 /* 116 */
    "ipc",     			 /* 117 */
    "fsync",   			 /* 118 */
    "sigreturn",       		 /* 119 */
    "clone",   			 /* 120 */
    "setdomainname",   		 /* 121 */
    "newuname",			 /* 122 */
    "123",     			 /* 123 */
    "adjtimex",			 /* 124 */
    "mprotect",			 /* 125 */
    "sigprocmask",     		 /* 126 */
    "127",     			 /* 127 */
    "init_module",     		 /* 128 */
    "delete_module",   		 /* 129 */
    "130",     			 /* 130 */
    "quotactl",			 /* 131 */
    "getpgid", 			 /* 132 */
    "fchdir",  			 /* 133 */
    "bdflush", 			 /* 134 */
    "sysfs",   			 /* 135 */
    "personality",     		 /* 136 */
    "137",     			 /* 137 */
    "138",     			 /* 138 */
    "139",     			 /* 139 */
    "llseek",  			 /* 140 */
    "getdents",			 /* 141 */
    "select",  			 /* 142 */
    "flock",   			 /* 143 */
    "msync",   			 /* 144 */
    "readv",   			 /* 145 */
    "writev",  			 /* 146 */
    "getsid",  			 /* 147 */
    "fdatasync",       		 /* 148 */
    "sysctl",  			 /* 149 */
    "mlock",   			 /* 150 */
    "munlock", 			 /* 151 */
    "mlockall",			 /* 152 */
    "munlockall",      		 /* 153 */
    "sched_setparam",  		 /* 154 */
    "sched_getparam",  		 /* 155 */
    "sched_setscheduler",      	 /* 156 */
    "sched_getscheduler",      	 /* 157 */
    "sched_yield",     		 /* 158 */
    "sched_get_priority_max",  	 /* 159 */
    "sched_get_priority_min",  	 /* 160 */
    "sched_rr_get_interval",   	 /* 161 */
    "nanosleep",       		 /* 162 */
    "mremap",  			 /* 163 */
    "164",     			 /* 164 */
    "165",     			 /* 165 */
    "166",     			 /* 166 */
    "167",     			 /* 167 */
    "poll",    			 /* 168 */
    "169",     			 /* 169 */
    "170",     			 /* 170 */
    "171",     			 /* 171 */
    "prctl",   			 /* 172 */
    "rt_sigreturn",    		 /* 173 */
    "rt_sigaction",    		 /* 174 */
    "rt_sigprocmask",  		 /* 175 */
    "rt_sigpending",   		 /* 176 */
    "rt_sigtimedwait", 		 /* 177 */
    "rt_sigqueueinfo", 		 /* 178 */
    "rt_sigsuspend",   		 /* 179 */
    "pread64", 			 /* 180 */
    "pwrite64",			 /* 181 */
    "182",     			 /* 182 */
    "getcwd",  			 /* 183 */
    "capget",  			 /* 184 */
    "capset",  			 /* 185 */
    "sigaltstack",     		 /* 186 */
    "sendfile64",      		 /* 187 */
    "188",     			 /* 188 */
    "189",     			 /* 189 */
    "vfork",   			 /* 190 */
    "getrlimit",       		 /* 191 */
    "mmap2",   			 /* 192 */
    "193",     			 /* 193 */
    "194",     			 /* 194 */
    "195",     			 /* 195 */
    "196",     			 /* 196 */
    "197",     			 /* 197 */
    "lchown",  			 /* 198 */
    "getuid",  			 /* 199 */
    "getgid",  			 /* 200 */
    "geteuid", 			 /* 201 */
    "getegid", 			 /* 202 */
    "setreuid",			 /* 203 */
    "setregid",			 /* 204 */
    "getgroups",       		 /* 205 */
    "setgroups",       		 /* 206 */
    "fchown",  			 /* 207 */
    "setresuid",       		 /* 208 */
    "getresuid",       		 /* 209 */
    "setresgid",       		 /* 210 */
    "getresgid",       		 /* 211 */
    "chown",   			 /* 212 */
    "setuid",  			 /* 213 */
    "setgid",  			 /* 214 */
    "setfsuid",			 /* 215 */
    "setfsgid",			 /* 216 */
    "pivot_root",      		 /* 217 */
    "mincore", 			 /* 218 */
    "madvise", 			 /* 219 */
    "getdents64",      		 /* 220 */
    "221",     			 /* 221 */
    "readahead",       		 /* 222 */
    "223",     			 /* 223 */
    "setxattr",			 /* 224 */
    "lsetxattr",       		 /* 225 */
    "fsetxattr",       		 /* 226 */
    "getxattr",			 /* 227 */
    "lgetxattr",       		 /* 228 */
    "fgetxattr",       		 /* 229 */
    "listxattr",       		 /* 230 */
    "llistxattr",      		 /* 231 */
    "flistxattr",      		 /* 232 */
    "removexattr",     		 /* 233 */
    "lremovexattr",    		 /* 234 */
    "fremovexattr",    		 /* 235 */
    "gettid",  			 /* 236 */
    "tkill",   			 /* 237 */
    "futex",   			 /* 238 */
    "sched_setaffinity",       	 /* 239 */
    "sched_getaffinity",       	 /* 240 */
    "tgkill",  			 /* 241 */
    "242",     			 /* 242 */
    "io_setup",			 /* 243 */
    "io_destroy",      		 /* 244 */
    "io_getevents",    		 /* 245 */
    "io_submit",       		 /* 246 */
    "io_cancel",       		 /* 247 */
    "exit_group",      		 /* 248 */
    "epoll_create",    		 /* 249 */
    "epoll_ctl",       		 /* 250 */
    "epoll_wait",      		 /* 251 */
    "set_tid_address", 		 /* 252 */
    "fadvise64_64",    		 /* 253 */
    "timer_create",    		 /* 254 */
    "timer_settime",   		 /* 255 */
    "timer_gettime",   		 /* 256 */
    "timer_getoverrun",		 /* 257 */
    "timer_delete",    		 /* 258 */
    "clock_settime",   		 /* 259 */
    "clock_gettime",   		 /* 260 */
    "clock_getres",    		 /* 261 */
    "clock_nanosleep", 		 /* 262 */
    "263",     			 /* 263 */
    "264",     			 /* 264 */
    "statfs64",			 /* 265 */
    "fstatfs64",       		 /* 266 */
    "remap_file_pages",		 /* 267 */
    "mbind",   			 /* 268 */
    "get_mempolicy",   		 /* 269 */
    "set_mempolicy",   		 /* 270 */
    "mq_open", 			 /* 271 */
    "mq_unlink",       		 /* 272 */
    "mq_timedsend",    		 /* 273 */
    "mq_timedreceive", 		 /* 274 */
    "mq_notify",       		 /* 275 */
    "mq_getsetattr",   		 /* 276 */
    "kexec_load",      		 /* 277 */
    "add_key", 			 /* 278 */
    "request_key",     		 /* 279 */
    "keyctl",  			 /* 280 */
    "waitid",  			 /* 281 */
    "ioprio_set",      		 /* 282 */
    "ioprio_get",      		 /* 283 */
    "inotify_init",    		 /* 284 */
    "inotify_add_watch",       	 /* 285 */
    "inotify_rm_watch",		 /* 286 */
    "migrate_pages",   		 /* 287 */
    "openat",  			 /* 288 */
    "mkdirat", 			 /* 289 */
    "mknodat", 			 /* 290 */
    "fchownat",			 /* 291 */
    "futimesat",       		 /* 292 */
    "newfstatat",      		 /* 293 */
    "unlinkat",			 /* 294 */
    "renameat",			 /* 295 */
    "linkat",  			 /* 296 */
    "symlinkat",       		 /* 297 */
    "readlinkat",      		 /* 298 */
    "fchmodat",			 /* 299 */
    "faccessat",       		 /* 300 */
    "pselect6",			 /* 301 */
    "ppoll",   			 /* 302 */
    "unshare", 			 /* 303 */
    "set_robust_list", 		 /* 304 */
    "get_robust_list", 		 /* 305 */
    "splice",  			 /* 306 */
    "sync_file_range", 		 /* 307 */
    "tee",     			 /* 308 */
    "vmsplice",			 /* 309 */
    "move_pages",      		 /* 310 */
    "getcpu",  			 /* 311 */
    "epoll_pwait",     		 /* 312 */
    "utimes",  			 /* 313 */
    "fallocate",       		 /* 314 */
    "utimensat",       		 /* 315 */
    "signalfd",			 /* 316 */
    "317",     			 /* 317 */
    "eventfd", 			 /* 318 */
    "timerfd_create",  		 /* 319 */
    "timerfd_settime", 		 /* 320 */
    "timerfd_gettime", 		 /* 321 */
    "signalfd4",       		 /* 322 */
    "eventfd2",			 /* 323 */
    "inotify_init1",   		 /* 324 */
    "pipe2",   			 /* 325 */
    "dup3",    			 /* 326 */
    "epoll_create1",   		 /* 327 */
    "preadv",  			 /* 328 */
    "pwritev", 			 /* 329 */
    "rt_tgsigqueueinfo",       	 /* 330 */
    "perf_event_open", 		 /* 331 */
    "fanotify_init",   		 /* 332 */
    "fanotify_mark",   		 /* 333 */
    "prlimit64",       		 /* 334 */
    "name_to_handle_at",       	 /* 335 */
    "open_by_handle_at",       	 /* 336 */
    "clock_adjtime",   		 /* 337 */
    "syncfs",  			 /* 338 */
    "setns",   			 /* 339 */
    "process_vm_readv",		 /* 340 */
    "process_vm_writev",       	 /* 341 */
    "s390_runtime_instr", 	 /* 342 */
    "kcmp",    			 /* 343 */
    "finit_module",    		 /* 344 */
    "sched_setattr",   		 /* 345 */
    "sched_getattr",   		 /* 346 */
    "renameat2",       		 /* 347 */
    "seccomp", 			 /* 348 */
    "getrandom",       		 /* 349 */
    "memfd_create",    		 /* 350 */
    "bpf",     			 /* 351 */
    "s390_pci_mmio_write", 	 /* 352 */
    "s390_pci_mmio_read",  	 /* 353 */
    "execveat",			 /* 354 */
    "userfaultfd",     		 /* 355 */
    "membarrier",      		 /* 356 */
    "recvmmsg",			 /* 357 */
    "sendmmsg",			 /* 358 */
    "socket",  			 /* 359 */
    "socketpair",      		 /* 360 */
    "bind",    			 /* 361 */
    "connect", 			 /* 362 */
    "listen",  			 /* 363 */
    "accept4", 			 /* 364 */
    "getsockopt",      		 /* 365 */
    "setsockopt",      		 /* 366 */
    "getsockname",     		 /* 367 */
    "getpeername",     		 /* 368 */
    "sendto",  			 /* 369 */
    "sendmsg", 			 /* 370 */
    "recvfrom",			 /* 371 */
    "recvmsg", 			 /* 372 */
    "shutdown",			 /* 373 */
