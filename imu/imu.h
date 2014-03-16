#ifndef IMU_IMU_H_
#define IMU_IMU_H_

#include <stdint.h>

struct imu_state {
  int16_t gyro_x, gyro_y, gyro_z;
  int16_t mag_x, mag_y, mag_z;
  int16_t accel_x, accel_y, accel_z;
};

int imu_init(int i2cfd);
int imu_read(int i2cfd, imu_state *state);

#endif  // IMU_IMU_H_
