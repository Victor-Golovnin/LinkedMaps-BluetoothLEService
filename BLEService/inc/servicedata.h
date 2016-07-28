#define SERVICE_UUID "1819" // "2A37"

typedef struct {
	unsigned short command;
	float coords[3][2];
	unsigned int stamp;
} _sdata;
