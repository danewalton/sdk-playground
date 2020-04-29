
#include "stdio.h"
#include <az_iot_core.h>

int main()
{
  az_iot_status status;
  az_result result = az_iot_get_status_from_uint32(200, &status);
  printf("Status was %i\n", status);

  return 0;
}