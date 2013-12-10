
int setup_cgroup_mounts(void);
bool compute_pid_cgroup(pid_t pid, const char *controller, const char *cgroup, char *path);
bool may_access(pid_t pid, uid_t uid, gid_t gid, const char *path, int mode);
void get_pid_creds(pid_t pid, uid_t *uid, gid_t *gid);
char *file_read_string(void *parent, const char *path);
void get_pid_creds(pid_t pid, uid_t *uid, gid_t *gid);
const char *get_controller_path(const char *controller);
uid_t hostuid_to_ns(uid_t uid, pid_t pid);
bool chown_cgroup_path(const char *path, uid_t uid, gid_t gid, bool all_children);
