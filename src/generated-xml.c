#ifndef GENERATED_XML_C
#define GENERATED_XML_C
#include "ant_channel.c"

/* Generated messages for XML generation.
  These functions return 1 if they print a message, 0 if they do not find a match. */


int xml_message_interpret_power_broadcast(ant_channel_t *self, unsigned char *message) {
if ( MESSAGE_IS_CALIBRATION_PASS(message) ) {
    XmlPrintf("<CalibrationPass id='%s' timestamp='%.2f' data='%d' />\n",
        self->id,
        timestamp,
        CALIBRATION_PASS_CALIBRATION_DATA(message));

} else if ( MESSAGE_IS_CALIBRATION_FAIL(message) ) {
    XmlPrintf("<CalibrationFail id='%s' timestamp='%.2f' data='%d' />\n",
        self->id,
        timestamp,
        CALIBRATION_FAIL_CALIBRATION_DATA(message));

} else if ( MESSAGE_IS_TORQUE_SUPPORT(message) ) {
    set_srm_offset(self->device_id, TORQUE_SUPPORT_OFFSET_TORQUE(message));
    XmlPrintf("<RawTorque id='%s' timestamp='%.2f' Nm='%d' />\n",
        self->id,
        timestamp,
        TORQUE_SUPPORT_RAW_TORQUE(message));
    XmlPrintf("<OffsetTorque id='%s' timestamp='%.2f' Nm='%d' />\n",
        self->id,
        timestamp,
        TORQUE_SUPPORT_OFFSET_TORQUE(message));
    XmlPrintf("<SensorConfiguration id='%s' timestamp='%.2f' config='%d' />\n",
        self->id,
        timestamp,
        TORQUE_SUPPORT_SENSOR_CONFIGURATION(message));

} else if ( MESSAGE_IS_STANDARD_POWER(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_STANDARD_POWER];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_standard_power)) {
        if ((message[6] != last_message[6] /* sum_power */) ||
        	(message[7] != last_message[7] /* sum_power */)) {
            XmlPrintf("<Power id='%s' timestamp='%.2f' watts='%d' />\n",
                self->id,
                timestamp,
                STANDARD_POWER_SUM_POWER(message));
        }
        XmlPrintf("<Cadence id='%s' timestamp='%.2f' RPM='%d' />\n",
            self->id,
            timestamp,
            STANDARD_POWER_INSTANT_CADENCE(message));
    } else {
        self->mi.first_time_standard_power=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_STANDARD_POWER);

} else if ( MESSAGE_IS_WHEEL_TORQUE(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_WHEEL_TORQUE];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_wheel_torque)) {
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[6] != last_message[6] /* wheel_period */) ||
        	(message[7] != last_message[7] /* wheel_period */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Power id='%s' timestamp='%.2f' watts='%.2f' />\n",
                self->id,
                timestamp,
                WHEEL_TORQUE_POWER(message));
        }
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Torque id='%s' timestamp='%.2f' Nm='%.2f' />\n",
                self->id,
                timestamp,
                WHEEL_TORQUE_NM_TORQUE(message));
        }
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[6] != last_message[6] /* wheel_period */) ||
        	(message[7] != last_message[7] /* wheel_period */)) {
            XmlPrintf("<Speed id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                WHEEL_TORQUE_WHEEL_RPM(message));
        }
    } else {
        self->mi.first_time_wheel_torque=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_WHEEL_TORQUE);

} else if ( MESSAGE_IS_CRANK_TORQUE(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_CRANK_TORQUE];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_crank_torque)) {
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[6] != last_message[6] /* crank_period */) ||
        	(message[7] != last_message[7] /* crank_period */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Power id='%s' timestamp='%.2f' watts='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_TORQUE_POWER(message));
        }
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Torque id='%s' timestamp='%.2f' Nm='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_TORQUE_NM_TORQUE(message));
        }
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[6] != last_message[6] /* crank_period */) ||
        	(message[7] != last_message[7] /* crank_period */)) {
            XmlPrintf("<Cadence id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_TORQUE_CADENCE(message));
        }
    } else {
        self->mi.first_time_crank_torque=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_CRANK_TORQUE);

} else if ( MESSAGE_IS_CRANK_SRM(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_CRANK_SRM];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_crank_SRM)) {
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[4] != last_message[4] /* slope */) ||
        	(message[5] != last_message[5] /* slope */) ||
        	(message[6] != last_message[6] /* crank_period */) ||
        	(message[7] != last_message[7] /* crank_period */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Power id='%s' timestamp='%.2f' watts='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_SRM_POWER(message));
        }
        if ((message[4] != last_message[4] /* slope */) ||
        	(message[5] != last_message[5] /* slope */) ||
        	(message[6] != last_message[6] /* crank_period */) ||
        	(message[7] != last_message[7] /* crank_period */) ||
        	(message[8] != last_message[8] /* torque */) ||
        	(message[9] != last_message[9] /* torque */)) {
            XmlPrintf("<Torque id='%s' timestamp='%.2f' Nm='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_SRM_NM_TORQUE(message));
        }
        if ((message[3] != last_message[3] /* event_count */) ||
        	(message[6] != last_message[6] /* crank_period */) ||
        	(message[7] != last_message[7] /* crank_period */)) {
            XmlPrintf("<Cadence id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                CRANK_SRM_CADENCE(message));
        }
    } else {
        self->mi.first_time_crank_SRM=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_CRANK_SRM);

} else if ( MESSAGE_IS_MANUFACTURER(message) ) {
    XmlPrintf("<HardwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_HW_REV(message));
    XmlPrintf("<Manufacturer id='%s' timestamp='%.2f' mfg_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MANUFACTURER_ID(message));
    XmlPrintf("<ModelNumber id='%s' timestamp='%.2f' model_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MODEL_NUMBER_ID(message));

} else if ( MESSAGE_IS_PRODUCT(message) ) {
    XmlPrintf("<SoftwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        PRODUCT_SW_REV(message));
    XmlPrintf("<SerialNumber id='%s' timestamp='%.2f' number='%u' />\n",
        self->id,
        timestamp,
        PRODUCT_SERIAL_NUMBER(message));

} else if ( MESSAGE_IS_BATTERY_VOLTAGE(message) ) {
    XmlPrintf("<BatteryVoltage id='%s' timestamp='%.2f' voltage='%.2f' />\n",
        self->id,
        timestamp,
        BATTERY_VOLTAGE_VOLTAGE(message));

} else { return 0; }
	return 1;
}

int xml_message_interpret_heartrate_broadcast(ant_channel_t *self, unsigned char *message) {
if ( MESSAGE_IS_HEART_RATE(message) ) {
    XmlPrintf("<HeartRate id='%s' timestamp='%.2f' BPM='%d' />\n",
        self->id,
        timestamp,
        HEART_RATE_INSTANT_HEART_RATE(message));

} else { return 0; }
	return 1;
}

int xml_message_interpret_speed_broadcast(ant_channel_t *self, unsigned char *message) {
if ( MESSAGE_IS_MANUFACTURER(message) ) {
    XmlPrintf("<HardwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_HW_REV(message));
    XmlPrintf("<Manufacturer id='%s' timestamp='%.2f' mfg_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MANUFACTURER_ID(message));
    XmlPrintf("<ModelNumber id='%s' timestamp='%.2f' model_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MODEL_NUMBER_ID(message));

} else if ( MESSAGE_IS_PRODUCT(message) ) {
    XmlPrintf("<SoftwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        PRODUCT_SW_REV(message));
    XmlPrintf("<SerialNumber id='%s' timestamp='%.2f' number='%u' />\n",
        self->id,
        timestamp,
        PRODUCT_SERIAL_NUMBER(message));

} else if ( MESSAGE_IS_BATTERY_VOLTAGE(message) ) {
    XmlPrintf("<BatteryVoltage id='%s' timestamp='%.2f' voltage='%.2f' />\n",
        self->id,
        timestamp,
        BATTERY_VOLTAGE_VOLTAGE(message));

} else if ( MESSAGE_IS_SPEED(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_SPEED];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_speed)) {
        if ((message[6] != last_message[6] /* measurement_time */) ||
        	(message[7] != last_message[7] /* measurement_time */) ||
        	(message[8] != last_message[8] /* wheel_revs */) ||
        	(message[9] != last_message[9] /* wheel_revs */)) {
            XmlPrintf("<Speed id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                SPEED_RPM(message));
        }
    } else {
        self->mi.first_time_speed=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_SPEED);

} else { return 0; }
	return 1;
}

int xml_message_interpret_cadence_broadcast(ant_channel_t *self, unsigned char *message) {
if ( MESSAGE_IS_MANUFACTURER(message) ) {
    XmlPrintf("<HardwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_HW_REV(message));
    XmlPrintf("<Manufacturer id='%s' timestamp='%.2f' mfg_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MANUFACTURER_ID(message));
    XmlPrintf("<ModelNumber id='%s' timestamp='%.2f' model_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MODEL_NUMBER_ID(message));

} else if ( MESSAGE_IS_PRODUCT(message) ) {
    XmlPrintf("<SoftwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        PRODUCT_SW_REV(message));
    XmlPrintf("<SerialNumber id='%s' timestamp='%.2f' number='%u' />\n",
        self->id,
        timestamp,
        PRODUCT_SERIAL_NUMBER(message));

} else if ( MESSAGE_IS_BATTERY_VOLTAGE(message) ) {
    XmlPrintf("<BatteryVoltage id='%s' timestamp='%.2f' voltage='%.2f' />\n",
        self->id,
        timestamp,
        BATTERY_VOLTAGE_VOLTAGE(message));

} else if ( MESSAGE_IS_CADENCE(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_CADENCE];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_cadence)) {
        if ((message[6] != last_message[6] /* measurement_time */) ||
        	(message[7] != last_message[7] /* measurement_time */) ||
        	(message[8] != last_message[8] /* crank_revs */) ||
        	(message[9] != last_message[9] /* crank_revs */)) {
            XmlPrintf("<Cadence id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                CADENCE_RPM(message));
        }
    } else {
        self->mi.first_time_cadence=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_CADENCE);

} else { return 0; }
	return 1;
}

int xml_message_interpret_speed_cadence_broadcast(ant_channel_t *self, unsigned char *message) {
if ( MESSAGE_IS_MANUFACTURER(message) ) {
    XmlPrintf("<HardwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_HW_REV(message));
    XmlPrintf("<Manufacturer id='%s' timestamp='%.2f' mfg_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MANUFACTURER_ID(message));
    XmlPrintf("<ModelNumber id='%s' timestamp='%.2f' model_id='%d' />\n",
        self->id,
        timestamp,
        MANUFACTURER_MODEL_NUMBER_ID(message));

} else if ( MESSAGE_IS_PRODUCT(message) ) {
    XmlPrintf("<SoftwareRevision id='%s' timestamp='%.2f' version='%d' />\n",
        self->id,
        timestamp,
        PRODUCT_SW_REV(message));
    XmlPrintf("<SerialNumber id='%s' timestamp='%.2f' number='%u' />\n",
        self->id,
        timestamp,
        PRODUCT_SERIAL_NUMBER(message));

} else if ( MESSAGE_IS_BATTERY_VOLTAGE(message) ) {
    XmlPrintf("<BatteryVoltage id='%s' timestamp='%.2f' voltage='%.2f' />\n",
        self->id,
        timestamp,
        BATTERY_VOLTAGE_VOLTAGE(message));

} else if ( MESSAGE_IS_SPEED_CADENCE(message) ) {
    static unsigned char last_messages[ANT_CHANNEL_COUNT][MESSAGE_LEN_SPEED_CADENCE];
    unsigned char * last_message=last_messages[self->number];
    if (!(self->mi.first_time_speed_cadence)) {
        if ((message[6] != last_message[6] /* speed_measurement_time */) ||
        	(message[7] != last_message[7] /* speed_measurement_time */) ||
        	(message[8] != last_message[8] /* wheel_revs */) ||
        	(message[9] != last_message[9] /* wheel_revs */)) {
            XmlPrintf("<Speed id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                SPEED_CADENCE_WHEEL_RPM(message));
        }
        if ((message[2] != last_message[2] /* cadence_measurement_time */) ||
        	(message[3] != last_message[3] /* cadence_measurement_time */) ||
        	(message[4] != last_message[4] /* crank_revs */) ||
        	(message[5] != last_message[5] /* crank_revs */)) {
            XmlPrintf("<Cadence id='%s' timestamp='%.2f' RPM='%.2f' />\n",
                self->id,
                timestamp,
                SPEED_CADENCE_CRANK_RPM(message));
        }
    } else {
        self->mi.first_time_speed_cadence=0;
    }
    memcpy(last_message,message,MESSAGE_LEN_SPEED_CADENCE);

} else { return 0; }
	return 1;
}

#endif
