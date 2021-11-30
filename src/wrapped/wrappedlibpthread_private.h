#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif
// General note: pthread_t is unsigned long int
// cpu_set_t is a struct with an array, default size is fixed for all architecture

// __errno_location
// fork
// __fork
// __h_errno_location
// _IO_flockfile
// _IO_ftrylockfile
// _IO_funlockfile
// __libc_allocate_rtsig
// __libc_current_sigrtmax
// __libc_current_sigrtmin
GOM(pthread_atfork, iFEppp)
GOM(__pthread_atfork, iFEppp)
GOM(pthread_attr_destroy, iFEp)
// pthread_attr_getaffinity_np
GO(pthread_attr_getdetachstate, iFpp)
GO(pthread_attr_getguardsize, iFpp)
GO(pthread_attr_getinheritsched, iFpp)
GO(pthread_attr_getschedparam, iFpp)
GO(pthread_attr_getschedpolicy, iFpp)
GO(pthread_attr_getscope, iFpp)
GOM(pthread_attr_getstack, iFEppp)
GO(pthread_attr_getstackaddr, iFpp)
GO(pthread_attr_getstacksize, iFpp)
GO(pthread_attr_init, iFp)
GOM(pthread_attr_setaffinity_np, iFEpup)
GO(pthread_attr_setdetachstate, iFpi)
GO(pthread_attr_setguardsize, iFpL)
GO(pthread_attr_setinheritsched, iFpi)
#ifdef NOALIGN
GO(pthread_attr_setschedparam, iFpp)
#else
GOM(pthread_attr_setschedparam, iFEpp)
#endif
GO(pthread_attr_setschedpolicy, iFpi)
#ifdef NOALIGN
GO(pthread_attr_setscope, iFpi)
#else
GOM(pthread_attr_setscope, iFEpi)
#endif
GOM(pthread_attr_setstack, iFEppL)
GO(pthread_attr_setstackaddr, iFpp)
GO(pthread_attr_setstacksize, iFpL)
GO(pthread_barrierattr_destroy, iFp)
GO(pthread_barrierattr_getpshared, iFpp)
GO(pthread_barrierattr_init, iFp)
GO(pthread_barrierattr_setpshared, iFpi)
GO(pthread_barrier_destroy, iFp)
GO(pthread_barrier_init, iFppu)
GO(pthread_barrier_wait, iFp)
GO(pthread_cancel, iFi)
GOM(_pthread_cleanup_pop, vFEpi)
GOM(_pthread_cleanup_pop_restore, vFEpi)
GOM(_pthread_cleanup_push, vFEppp)
GOM(_pthread_cleanup_push_defer, vFEppp)
// __pthread_cleanup_routine
GO(pthread_condattr_destroy, iFp)
GO(pthread_condattr_getclock, iFpp)
GO(pthread_condattr_getpshared, iFpp)
GO(pthread_condattr_init, iFp)
GO(pthread_condattr_setclock, iFpp)
GO(pthread_condattr_setpshared, iFpi)
GO2(pthread_cond_broadcast@GLIBC_2.0, iFEp, my_pthread_cond_broadcast_old)
GO2(pthread_cond_destroy@GLIBC_2.0, iFEp, my_pthread_cond_destroy_old)
GO2(pthread_cond_init@GLIBC_2.0, iFEpp, my_pthread_cond_init_old)
GO2(pthread_cond_signal@GLIBC_2.0, iFEp, my_pthread_cond_signal_old)
GO2(pthread_cond_timedwait@GLIBC_2.0, iFEppp, my_pthread_cond_timedwait_old)
GO2(pthread_cond_wait@GLIBC_2.0, iFEpp, my_pthread_cond_wait_old)
GO(pthread_cond_broadcast, iFp)
GO(pthread_cond_destroy, iFp)
GO(pthread_cond_init, iFpp)
GO(pthread_cond_signal, iFp)
GOM(pthread_cond_timedwait, iFEppp)
GOM(pthread_cond_wait, iFEpp)
GOM(pthread_create, iFEpppp)
GO(pthread_detach, iFu)
GO(pthread_equal, iFuu)
GO(pthread_exit, vFp)
GOM(pthread_getaffinity_np, iFEpup)
GO(pthread_getattr_np, iFup)
GO(pthread_getconcurrency, iFv)
GO(pthread_getcpuclockid, iFup)
GO(pthread_getschedparam, iFupp)
GO(__pthread_getspecific, pFu)
GO(pthread_getspecific, pFu)
GOM(pthread_getname_np, iFEppu)  //not present on Pandora
GOM(__pthread_initialize, vFv)  //%noE doesn't exist anymore...
// __pthread_initialize_minimal
GO(pthread_join, iFup)
GOM(__pthread_key_create, iFEpp)
GOM(pthread_key_create, iFEpp)
GO(pthread_key_delete, iFu)
GOM(pthread_kill, iFEpi)
// pthread_kill_other_threads_np
GO(__pthread_mutexattr_destroy, iFp)
GO(pthread_mutexattr_destroy, iFp)
GO(pthread_mutexattr_getprioceiling, iFpp)
GO(pthread_mutexattr_getprotocol, iFpp)
// pthread_mutexattr_getpshared
// pthread_mutexattr_getrobust_np
GO(pthread_mutexattr_gettype, iFpp)
GO(__pthread_mutexattr_init, iFp)
GO(pthread_mutexattr_init, iFp)
GO(pthread_mutexattr_setprioceiling, iFpi)
GO(pthread_mutexattr_setprotocol, iFpp)
GO(pthread_mutexattr_setpshared, iFpi)
// pthread_mutexattr_setrobust_np
GO(__pthread_mutexattr_settype, iFpi)
GO(pthread_mutexattr_settype, iFpi)
#ifdef NOALIGN
// pthread_mutex_consistent_np
GO(__pthread_mutex_destroy, iFp)
GO(pthread_mutex_destroy, iFp)
// pthread_mutex_getprioceiling
GO(__pthread_mutex_init, iFpp)
GO(pthread_mutex_init, iFpp)
GO(__pthread_mutex_lock, iFp)
GO(pthread_mutex_lock, iFp)
// pthread_mutex_setprioceiling
GO(pthread_mutex_timedlock, iFpp)
GO(__pthread_mutex_trylock, iFp)
GO(pthread_mutex_trylock, iFp)
GO(__pthread_mutex_unlock, iFp)
GO(pthread_mutex_unlock, iFp)
#else
// pthread_mutex_consistent_np
GOM(__pthread_mutex_destroy, iFp)  //%noE
GOM(pthread_mutex_destroy, iFp)    //%noE
// pthread_mutex_getprioceiling
GOM(__pthread_mutex_init, iFpp)    //%noE
GOM(pthread_mutex_init, iFpp)      //%noE
GOM(__pthread_mutex_lock, iFp)     //%noE
GOM(pthread_mutex_lock, iFp)       //%noE
// pthread_mutex_setprioceiling
GOM(pthread_mutex_timedlock, iFpp) //%noE
GOM(__pthread_mutex_trylock, iFp)  //%noE
GOM(pthread_mutex_trylock, iFp)    //%noE
GOM(__pthread_mutex_unlock, iFp)   //%noE
GOM(pthread_mutex_unlock, iFp)     //%noE
#endif
GOM(pthread_once, iFEpp)
GOM(__pthread_once, iFEpp)
GOM(__pthread_register_cancel, vFEp)
// __pthread_register_cancel_defer
GO(pthread_rwlockattr_destroy, vFp)
GO(pthread_rwlockattr_getkind_np, iFpp)
// pthread_rwlockattr_getpshared
GO(pthread_rwlockattr_init, iFp)
GO(pthread_rwlockattr_setkind_np, iFpi)
// pthread_rwlockattr_setpshared
// __pthread_rwlock_destroy
GO(pthread_rwlock_destroy, iFp)
GO(__pthread_rwlock_init, iFpp)
GO(pthread_rwlock_init, iFpp)
GO(__pthread_rwlock_rdlock, iFp)
GOM(pthread_rwlock_rdlock, iFp) //%noE
// pthread_rwlock_timedrdlock
// pthread_rwlock_timedwrlock
// __pthread_rwlock_tryrdlock
GO(pthread_rwlock_tryrdlock, iFp)
// __pthread_rwlock_trywrlock
GO(pthread_rwlock_trywrlock, iFp)
GO(__pthread_rwlock_unlock, iFp)
GOM(pthread_rwlock_unlock, iFp) //%noE
GO(__pthread_rwlock_wrlock, iFp)
GOM(pthread_rwlock_wrlock, iFp) //%noE
GO(pthread_self, uFv)
GOM(pthread_setaffinity_np, iFELup)
GO(pthread_setcancelstate, iFip)
GO(pthread_setcanceltype, iFip)
GO(pthread_setconcurrency, iFi)
GOM(pthread_setname_np, iFEpp)   // not present on the Pandora
GO(pthread_setschedparam, iFuip)
GO(pthread_setschedprio, iFpi)
GO(__pthread_setspecific, iFup)
GO(pthread_setspecific, iFup)
GO(pthread_sigmask, iFipp)
GO(pthread_spin_destroy, iFp)
GO(pthread_spin_init, iFpi)
GO(pthread_spin_lock, iFp)
GO(pthread_spin_trylock, iFp)
GO(pthread_spin_unlock, iFp)
GO(pthread_testcancel, vFv)
GO(pthread_timedjoin_np, iFppp)
GO(pthread_tryjoin_np, iFpp)
GOM(__pthread_unregister_cancel, vFEp)
// __pthread_unregister_cancel_restore
// __pthread_unwind
GOM(__pthread_unwind_next, vFEp)
GO(pthread_yield, iFv)
// raise
// __res_state
GO(sem_close, iFp)
GO(sem_destroy, iFp)
GO(sem_getvalue, iFpp)
GO(sem_init, iFpiu)
GO(sem_open, pFpOM)
GO(sem_post, iFp)
GO(sem_timedwait, iFpp)
GO(sem_trywait, iFp)
GO(sem_unlink, iFp)
GO(sem_wait, iFp)
// __sigaction
// system
// __vfork

GOM(pthread_mutexattr_setkind_np, iFEpi)    // deprecated
