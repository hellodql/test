typedef struct {
	int name;	// String table ofset
	int value;	//Section offset,or VM address
	int size;	// Object size in bytes
	char type:4,// Data,func, section,or src file name (4 bits)
		 binding:4;	// Local or global (4 bits) 
	char reserved;	// Unused;
	char section;	// Section header index, ABS,UNDEF, Or COMMON
} Elf_Symbol;

#if 0

name: 字符串表中的字节偏移，指向符号的以null结尾的字符串名字
value：符号的地址，可重定位模块来说，value是距离目标的节的起始位置的偏移
		对可执行目标文件，该值是绝对运行时地址。
size：	目标的大小（字节）
type：	数据/函数
binding:本地或全局
section：每个符号和目标文件关联。该值可能是与节关联的数字，也可能是三个特殊			的伪节:ABS(不该被重定位的符号）、UNDEF（未定义的符号）、COMMON（未分		配位置的未初始化数据) 

#endif

typedef struct {
	int offset;		// Offset of the reference to relocate
	int symbol:24,	// Symbol the reference should point to
		type:8;		// Relocation type
} Elf32_Rel;


#if 0

offset:	需要被修改的引用的节偏移
symbol: 标识被修改的引用应该指向的符号
type:	告知链接器如何修改新引用
		R_386_PC32:重定位一个使用32位PC相对地址的引用。
		R_386_32:重定位一个使用32位绝对地址的引用

#endif









