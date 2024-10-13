#include  "ds2482_ds18b20.h"

/*getting i2c adapter*/

/*create i2c info*/

/*crate i2c device id*/

/*create i2c driver*/

/*holding all info about i2c*/

struct i2c_board_info{
    I2C_BOARD_INFO()
} my_i2c_board;
struct i2c_driver_info{
    struct i2c_adapter * my_adapter;
} my_i2c;


static int ds2482_probe(struct i2c_client *client)
{
    /*getting i2c adapter*/
    my_i2c.my_adapter = i2c_get_adapter(DS2482_i2c_BUS);
    return 0;
}