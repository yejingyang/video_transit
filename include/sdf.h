#ifndef SDF_H
#define SDF_H\

typedef char                int8_t;
typedef short int           int16_t;
typedef int                 int32_t;
typedef long long           int64_t;
typedef unsigned char       uint8_t;
typedef unsigned short int  uint16_t;
typedef unsigned int        uint32_t;
typedef unsigned long long  uint64_t;


//define the frame type
#define FRAME_TYPE_BASE         0x00000001
#define FRAME_TYPE_I_FRAME      (FRAME_TYPE_BASE << 1)
#define FRAME_TYPE_P_FRAME      (FRAME_TYPE_BASE << 2)


//define broadcast type
#define BROADCAST_TYPE_BASE     0x00000001
#define BROADCAST_TYPE_SINGLE   (BROADCAST_TYPE_BASE << 1)
#define BROADCAST_TYPE_MULTI    (BROADCAST_TYPE_BASE << 2)


typedef struct
{
    int32_t     serialId;
    int8_t      sn[16];
    int8_t      ip[16];
    int16_t     port;
    int32_t     channel_count;
}VTS_SN_Info;


typedef struct
{
    int32_t     broadcast_type;
    int8_t      ip[16];
    int16_t     port;
}VTS_Data_Recever;


typedef struct
{
    int32_t     serialId;
    int32_t     channel_id;
    int32_t     buffer_size;
    uint8_t     *buffer_addr;
}VTS_Frame_Buffer;


typedef struct
{
    int32_t     serialId;
    int32_t     channel_id;
    int32_t     frame_type;
    int32_t     frame_size;
    uint8_t     *frame_addr;
    int16_t     width;
    int16_t     height;
    int32_t     frame_count;
}VTS_Frame_Info;





#endif // SDF_H
