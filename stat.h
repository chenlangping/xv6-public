#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device

// 定义文件的元信息
struct stat {
  short type;  // Type of file
  int dev;     // File system's disk device，属于哪个磁盘
  uint ino;    // Inode number
  short nlink; // Number of links to file
  uint size;   // Size of file in bytes
};
