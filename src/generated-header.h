typedef struct {
	int first_time_crank_torque;
	int first_time_crank_SRM;
	int first_time_wheel_torque;
	int first_time_standard_power;
	int first_time_torque_support;
	int first_time_calibration_pass;
	int first_time_calibration_fail;
	int first_time_heart_rate;
	int first_time_speed;
	int first_time_cadence;
	int first_time_speed_cadence;
	int first_time_manufacturer;
	int first_time_product;
	int first_time_battery_voltage;
} messages_initialization_t;

#define INITIALIZE_MESSAGES_INITIALIZATION(x) \
	x.first_time_crank_torque=1; \
	x.first_time_crank_SRM=1; \
	x.first_time_wheel_torque=1; \
	x.first_time_standard_power=1; \
	x.first_time_torque_support=1; \
	x.first_time_calibration_pass=1; \
	x.first_time_calibration_fail=1; \
	x.first_time_heart_rate=1; \
	x.first_time_speed=1; \
	x.first_time_cadence=1; \
	x.first_time_speed_cadence=1; \
	x.first_time_manufacturer=1; \
	x.first_time_product=1; \
	x.first_time_battery_voltage=1; \

