void ant_message_print_debug(unsigned char * message) {
// assign_channel
if (( message[0]==0x42 )) {
	unsigned char channel = message[0];
	unsigned char channel_type = message[0];
	unsigned char network_number = message[0];

	fprintf(stderr,"assign_channel:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tchannel_type: %d (0x%02X)\n",channel_type,channel_type);
	fprintf(stderr,"\tnetwork_number: %d (0x%02X)\n",network_number,network_number);
} else
// unassign_channel
if (( message[0]==0x41 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"unassign_channel:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// open_channel
if (( message[0]==0x4b )) {
	unsigned char channel = message[0];

	fprintf(stderr,"open_channel:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// channel_id
if (( message[0]==0x51 )) {
	unsigned char channel = message[0];
	unsigned short device_number = (message[1]<<8)+(message[0]);
	unsigned char device_type_id = message[0];
	unsigned char transmission_type = message[0];

	fprintf(stderr,"channel_id:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tdevice_number: %d\n",device_number);
	fprintf(stderr,"\tdevice_type_id: %d (0x%02X)\n",device_type_id,device_type_id);
	fprintf(stderr,"\ttransmission_type: %d (0x%02X)\n",transmission_type,transmission_type);
} else
// burst_message
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];

	fprintf(stderr,"burst_message:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
} else
// burst_message7
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];

	fprintf(stderr,"burst_message7:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
} else
// burst_message6
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];

	fprintf(stderr,"burst_message6:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
} else
// burst_message5
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];

	fprintf(stderr,"burst_message5:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
} else
// burst_message4
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];

	fprintf(stderr,"burst_message4:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
} else
// burst_message3
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];

	fprintf(stderr,"burst_message3:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
} else
// burst_message2
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];

	fprintf(stderr,"burst_message2:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
} else
// burst_message1
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];
	unsigned char data0 = message[0];

	fprintf(stderr,"burst_message1:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
} else
// burst_message0
if (( message[0]==0x50 )) {
	unsigned char chan_seq = message[0];

	fprintf(stderr,"burst_message0:\n");
	fprintf(stderr,"\tchan_seq: %d (0x%02X)\n",chan_seq,chan_seq);
} else
// channel_period
if (( message[0]==0x43 )) {
	unsigned char channel = message[0];
	unsigned short period = (message[1]<<8)+(message[0]);

	fprintf(stderr,"channel_period:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tperiod: %d\n",period);
} else
// search_timeout
if (( message[0]==0x44 )) {
	unsigned char channel = message[0];
	unsigned char search_timeout = message[0];

	fprintf(stderr,"search_timeout:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tsearch_timeout: %d (0x%02X)\n",search_timeout,search_timeout);
} else
// channel_frequency
if (( message[0]==0x45 )) {
	unsigned char channel = message[0];
	unsigned char rf_frequency = message[0];

	fprintf(stderr,"channel_frequency:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\trf_frequency: %d (0x%02X)\n",rf_frequency,rf_frequency);
} else
// set_network
if (( message[0]==0x46 )) {
	unsigned char channel = message[0];
	unsigned char key0 = message[0];
	unsigned char key1 = message[0];
	unsigned char key2 = message[0];
	unsigned char key3 = message[0];
	unsigned char key4 = message[0];
	unsigned char key5 = message[0];
	unsigned char key6 = message[0];
	unsigned char key7 = message[0];

	fprintf(stderr,"set_network:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tkey0: %d (0x%02X)\n",key0,key0);
	fprintf(stderr,"\tkey1: %d (0x%02X)\n",key1,key1);
	fprintf(stderr,"\tkey2: %d (0x%02X)\n",key2,key2);
	fprintf(stderr,"\tkey3: %d (0x%02X)\n",key3,key3);
	fprintf(stderr,"\tkey4: %d (0x%02X)\n",key4,key4);
	fprintf(stderr,"\tkey5: %d (0x%02X)\n",key5,key5);
	fprintf(stderr,"\tkey6: %d (0x%02X)\n",key6,key6);
	fprintf(stderr,"\tkey7: %d (0x%02X)\n",key7,key7);
} else
// transmit_power
if (( message[0]==0x47 ) && ( message[0]==0x00 )) {
	unsigned char tx_power = message[0];

	fprintf(stderr,"transmit_power:\n");
	fprintf(stderr,"\ttx_power: %d (0x%02X)\n",tx_power,tx_power);
} else
// reset_system
if (( message[0]==0x4a )) {


	fprintf(stderr,"reset_system:\n");
} else
// request_message
if (( message[0]==0x4d )) {
	unsigned char channel = message[0];
	unsigned char message_requested = message[0];

	fprintf(stderr,"request_message:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_requested: %d (0x%02X)\n",message_requested,message_requested);
} else
// close_channel
if (( message[0]==0x4c )) {
	unsigned char channel = message[0];

	fprintf(stderr,"close_channel:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_no_error
if (( message[0]==0x40 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"response_no_error:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// response_assign_channel_ok
if (( message[0]==0x40 ) && ( message[0]==0x42 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_assign_channel_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_channel_unassign_ok
if (( message[0]==0x40 ) && ( message[0]==0x41 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_channel_unassign_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_open_channel_ok
if (( message[0]==0x40 ) && ( message[0]==0x4b ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_open_channel_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_channel_id_ok
if (( message[0]==0x40 ) && ( message[0]==0x51 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_channel_id_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_channel_period_ok
if (( message[0]==0x40 ) && ( message[0]==0x43 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_channel_period_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_channel_frequency_ok
if (( message[0]==0x40 ) && ( message[0]==0x45 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_channel_frequency_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_set_network_ok
if (( message[0]==0x40 ) && ( message[0]==0x46 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_set_network_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_transmit_power_ok
if (( message[0]==0x40 ) && ( message[0]==0x47 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_transmit_power_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_close_channel_ok
if (( message[0]==0x40 ) && ( message[0]==0x4c ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_close_channel_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// response_search_timeout_ok
if (( message[0]==0x40 ) && ( message[0]==0x44 ) && ( message[0]==0x00 )) {
	unsigned char channel = message[0];

	fprintf(stderr,"response_search_timeout_ok:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// event_rx_search_timeout
if (( message[0]==0x40 ) && ( message[0]==0x01 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_rx_search_timeout:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_rx_fail
if (( message[0]==0x40 ) && ( message[0]==0x02 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_rx_fail:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_tx
if (( message[0]==0x40 ) && ( message[0]==0x03 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_tx:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_transfer_rx_failed
if (( message[0]==0x40 ) && ( message[0]==0x04 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_transfer_rx_failed:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_transfer_tx_completed
if (( message[0]==0x40 ) && ( message[0]==0x05 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_transfer_tx_completed:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_transfer_tx_failed
if (( message[0]==0x40 ) && ( message[0]==0x06 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_transfer_tx_failed:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_channel_closed
if (( message[0]==0x40 ) && ( message[0]==0x07 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_channel_closed:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_rx_fail_go_to_search
if (( message[0]==0x40 ) && ( message[0]==0x08 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_rx_fail_go_to_search:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_channel_collision
if (( message[0]==0x40 ) && ( message[0]==0x09 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_channel_collision:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_transfer_tx_start
if (( message[0]==0x40 ) && ( message[0]==0x0a )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_transfer_tx_start:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_rx_acknowledged
if (( message[0]==0x40 ) && ( message[0]==0x0b )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_rx_acknowledged:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// event_rx_burst_packet
if (( message[0]==0x40 ) && ( message[0]==0x0c )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"event_rx_burst_packet:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// channel_in_wrong_state
if (( message[0]==0x40 ) && ( message[0]==0x15 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"channel_in_wrong_state:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// channel_not_opened
if (( message[0]==0x40 ) && ( message[0]==0x16 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"channel_not_opened:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// channel_id_not_set
if (( message[0]==0x40 ) && ( message[0]==0x18 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"channel_id_not_set:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// transfer_in_progress
if (( message[0]==0x40 ) && ( message[0]==0x1f )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"transfer_in_progress:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// channel_status
if (( message[0]==0x52 )) {
	unsigned char channel = message[0];
	unsigned char status = message[0];

	fprintf(stderr,"channel_status:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tstatus: %d (0x%02X)\n",status,status);
} else
// cw_init
if (( message[0]==0x53 )) {


	fprintf(stderr,"cw_init:\n");
} else
// cw_test
if (( message[0]==0x48 )) {
	unsigned char power = message[0];
	unsigned char freq = message[0];

	fprintf(stderr,"cw_test:\n");
	fprintf(stderr,"\tpower: %d (0x%02X)\n",power,power);
	fprintf(stderr,"\tfreq: %d (0x%02X)\n",freq,freq);
} else
// capabilities
if (( message[0]==0x54 )) {
	unsigned char max_channels = message[0];
	unsigned char max_networks = message[0];
	unsigned char standard_options = message[0];
	unsigned char advanced_options = message[0];

	fprintf(stderr,"capabilities:\n");
	fprintf(stderr,"\tmax_channels: %d (0x%02X)\n",max_channels,max_channels);
	fprintf(stderr,"\tmax_networks: %d (0x%02X)\n",max_networks,max_networks);
	fprintf(stderr,"\tstandard_options: %d (0x%02X)\n",standard_options,standard_options);
	fprintf(stderr,"\tadvanced_options: %d (0x%02X)\n",advanced_options,advanced_options);
} else
// capabilities_extended
if (( message[0]==0x54 )) {
	unsigned char max_channels = message[0];
	unsigned char max_networks = message[0];
	unsigned char standard_options = message[0];
	unsigned char advanced_options = message[0];
	unsigned char advanced_options_2 = message[0];
	unsigned char max_data_channels = message[0];

	fprintf(stderr,"capabilities_extended:\n");
	fprintf(stderr,"\tmax_channels: %d (0x%02X)\n",max_channels,max_channels);
	fprintf(stderr,"\tmax_networks: %d (0x%02X)\n",max_networks,max_networks);
	fprintf(stderr,"\tstandard_options: %d (0x%02X)\n",standard_options,standard_options);
	fprintf(stderr,"\tadvanced_options: %d (0x%02X)\n",advanced_options,advanced_options);
	fprintf(stderr,"\tadvanced_options_2: %d (0x%02X)\n",advanced_options_2,advanced_options_2);
	fprintf(stderr,"\tmax_data_channels: %d (0x%02X)\n",max_data_channels,max_data_channels);
} else
// ant_version
if (( message[0]==0x3e )) {
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];
	unsigned char data8 = message[0];

	fprintf(stderr,"ant_version:\n");
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
	fprintf(stderr,"\tdata8: %d (0x%02X)\n",data8,data8);
} else
// ant_version_long
if (( message[0]==0x3e )) {
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];
	unsigned char data8 = message[0];
	unsigned char data9 = message[0];
	unsigned char data10 = message[0];
	unsigned char data11 = message[0];
	unsigned char data12 = message[0];

	fprintf(stderr,"ant_version_long:\n");
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
	fprintf(stderr,"\tdata8: %d (0x%02X)\n",data8,data8);
	fprintf(stderr,"\tdata9: %d (0x%02X)\n",data9,data9);
	fprintf(stderr,"\tdata10: %d (0x%02X)\n",data10,data10);
	fprintf(stderr,"\tdata11: %d (0x%02X)\n",data11,data11);
	fprintf(stderr,"\tdata12: %d (0x%02X)\n",data12,data12);
} else
// transfer_seq_number_error
if (( message[0]==0x40 ) && ( message[0]==0x20 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"transfer_seq_number_error:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// invalid_message
if (( message[0]==0x40 ) && ( message[0]==0x28 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"invalid_message:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// invalid_network_number
if (( message[0]==0x40 ) && ( message[0]==0x29 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];

	fprintf(stderr,"invalid_network_number:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
} else
// channel_response
if (( message[0]==0x40 )) {
	unsigned char channel = message[0];
	unsigned char message_id = message[0];
	unsigned char message_code = message[0];

	fprintf(stderr,"channel_response:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmessage_id: %d (0x%02X)\n",message_id,message_id);
	fprintf(stderr,"\tmessage_code: %d (0x%02X)\n",message_code,message_code);
} else
// extended_broadcast_data
if (( message[0]==0x5d )) {
	unsigned char channel = message[0];
	unsigned short device_number = (message[1]<<8)+(message[0]);
	unsigned char device_type = message[0];
	unsigned char transmission_type = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];

	fprintf(stderr,"extended_broadcast_data:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tdevice_number: %d\n",device_number);
	fprintf(stderr,"\tdevice_type: %d (0x%02X)\n",device_type,device_type);
	fprintf(stderr,"\ttransmission_type: %d (0x%02X)\n",transmission_type,transmission_type);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
} else
// extended_ack_data
if (( message[0]==0x5e )) {
	unsigned char channel = message[0];
	unsigned short device_number = (message[1]<<8)+(message[0]);
	unsigned char device_type = message[0];
	unsigned char transmission_type = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];

	fprintf(stderr,"extended_ack_data:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tdevice_number: %d\n",device_number);
	fprintf(stderr,"\tdevice_type: %d (0x%02X)\n",device_type,device_type);
	fprintf(stderr,"\ttransmission_type: %d (0x%02X)\n",transmission_type,transmission_type);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
} else
// extended_burst_data
if (( message[0]==0x5f )) {
	unsigned char channel = message[0];
	unsigned short device_number = (message[1]<<8)+(message[0]);
	unsigned char device_type = message[0];
	unsigned char transmission_type = message[0];
	unsigned char data0 = message[0];
	unsigned char data1 = message[0];
	unsigned char data2 = message[0];
	unsigned char data3 = message[0];
	unsigned char data4 = message[0];
	unsigned char data5 = message[0];
	unsigned char data6 = message[0];
	unsigned char data7 = message[0];

	fprintf(stderr,"extended_burst_data:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tdevice_number: %d\n",device_number);
	fprintf(stderr,"\tdevice_type: %d (0x%02X)\n",device_type,device_type);
	fprintf(stderr,"\ttransmission_type: %d (0x%02X)\n",transmission_type,transmission_type);
	fprintf(stderr,"\tdata0: %d (0x%02X)\n",data0,data0);
	fprintf(stderr,"\tdata1: %d (0x%02X)\n",data1,data1);
	fprintf(stderr,"\tdata2: %d (0x%02X)\n",data2,data2);
	fprintf(stderr,"\tdata3: %d (0x%02X)\n",data3,data3);
	fprintf(stderr,"\tdata4: %d (0x%02X)\n",data4,data4);
	fprintf(stderr,"\tdata5: %d (0x%02X)\n",data5,data5);
	fprintf(stderr,"\tdata6: %d (0x%02X)\n",data6,data6);
	fprintf(stderr,"\tdata7: %d (0x%02X)\n",data7,data7);
} else
// startup_message
if (( message[0]==0x6f )) {
	unsigned char start_message = message[0];

	fprintf(stderr,"startup_message:\n");
	fprintf(stderr,"\tstart_message: %d (0x%02X)\n",start_message,start_message);
} else
// calibration_request
if (( message[0]==0x01 ) && ( message[0]==0xaa )) {
	unsigned char channel = message[0];

	fprintf(stderr,"calibration_request:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
} else
// srm_zero_response
if (( message[0]==0x01 ) && ( message[0]==0x10 ) && ( message[0]==0x01 )) {
	unsigned char channel = message[0];
	unsigned short offset = (message[0]<<8)+(message[1]);

	fprintf(stderr,"srm_zero_response:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\toffset: %d\n",offset);
} else
// calibration_pass
if (( message[0]==0x01 ) && ( message[0]==0xac )) {
	unsigned char channel = message[0];
	unsigned char autozero_status = message[0];
	unsigned short calibration_data = (message[1]<<8)+(message[0]);

	fprintf(stderr,"calibration_pass:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tautozero_status: %d (0x%02X)\n",autozero_status,autozero_status);
	fprintf(stderr,"\tcalibration_data: %d\n",calibration_data);
} else
// calibration_fail
if (( message[0]==0x01 ) && ( message[0]==0xaf )) {
	unsigned char channel = message[0];
	unsigned char autozero_status = message[0];
	unsigned short calibration_data = (message[1]<<8)+(message[0]);

	fprintf(stderr,"calibration_fail:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tautozero_status: %d (0x%02X)\n",autozero_status,autozero_status);
	fprintf(stderr,"\tcalibration_data: %d\n",calibration_data);
} else
// torque_support
if (( message[0]==0x01 ) && ( message[0]==0x12 )) {
	unsigned char channel = message[0];
	unsigned char sensor_configuration = message[0];
	signed short raw_torque = (message[1]<<8)+(message[0]);
	signed short offset_torque = (message[1]<<8)+(message[0]);

	fprintf(stderr,"torque_support:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tsensor_configuration: %d (0x%02X)\n",sensor_configuration,sensor_configuration);
	fprintf(stderr,"\traw_torque: %d\n",raw_torque);
	fprintf(stderr,"\toffset_torque: %d\n",offset_torque);
} else
// standard_power
if (( message[0]==0x4e ) && ( message[0]==0x10 )) {
	unsigned char channel = message[0];
	unsigned char event_count = message[0];
	unsigned char instant_cadence = message[0];
	unsigned short sum_power = (message[1]<<8)+(message[0]);
	unsigned short instant_power = (message[1]<<8)+(message[0]);

	fprintf(stderr,"standard_power:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tevent_count: %d (0x%02X)\n",event_count,event_count);
	fprintf(stderr,"\tinstant_cadence: %d (0x%02X)\n",instant_cadence,instant_cadence);
	fprintf(stderr,"\tsum_power: %d\n",sum_power);
	fprintf(stderr,"\tinstant_power: %d\n",instant_power);
} else
// wheel_torque
if (( message[0]==0x4e ) && ( message[0]==0x11 )) {
	unsigned char channel = message[0];
	unsigned char event_count = message[0];
	unsigned char wheel_rev = message[0];
	unsigned char instant_cadence = message[0];
	unsigned short wheel_period = (message[1]<<8)+(message[0]);
	unsigned short torque = (message[1]<<8)+(message[0]);

	fprintf(stderr,"wheel_torque:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tevent_count: %d (0x%02X)\n",event_count,event_count);
	fprintf(stderr,"\twheel_rev: %d (0x%02X)\n",wheel_rev,wheel_rev);
	fprintf(stderr,"\tinstant_cadence: %d (0x%02X)\n",instant_cadence,instant_cadence);
	fprintf(stderr,"\twheel_period: %d\n",wheel_period);
	fprintf(stderr,"\ttorque: %d\n",torque);
} else
// crank_torque
if (( message[0]==0x4e ) && ( message[0]==0x12 )) {
	unsigned char channel = message[0];
	unsigned char event_count = message[0];
	unsigned char crank_rev = message[0];
	unsigned char instant_cadence = message[0];
	unsigned short crank_period = (message[1]<<8)+(message[0]);
	unsigned short torque = (message[1]<<8)+(message[0]);

	fprintf(stderr,"crank_torque:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tevent_count: %d (0x%02X)\n",event_count,event_count);
	fprintf(stderr,"\tcrank_rev: %d (0x%02X)\n",crank_rev,crank_rev);
	fprintf(stderr,"\tinstant_cadence: %d (0x%02X)\n",instant_cadence,instant_cadence);
	fprintf(stderr,"\tcrank_period: %d\n",crank_period);
	fprintf(stderr,"\ttorque: %d\n",torque);
} else
// crank_SRM
if (( message[0]==0x4e ) && ( message[0]==0x20 )) {
	unsigned char channel = message[0];
	unsigned char event_count = message[0];
	unsigned short slope = (message[0]<<8)+(message[1]);
	unsigned short crank_period = (message[0]<<8)+(message[1]);
	unsigned short torque = (message[0]<<8)+(message[1]);

	fprintf(stderr,"crank_SRM:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tevent_count: %d (0x%02X)\n",event_count,event_count);
	fprintf(stderr,"\tslope: %d\n",slope);
	fprintf(stderr,"\tcrank_period: %d\n",crank_period);
	fprintf(stderr,"\ttorque: %d\n",torque);
} else
// manufacturer
if (( message[0]==0x4e ) && ( message[0]==0x50 )) {
	unsigned char channel = message[0];
	unsigned char hw_rev = message[0];
	unsigned short manufacturer_id = (message[1]<<8)+(message[0]);
	unsigned short model_number_id = (message[1]<<8)+(message[0]);

	fprintf(stderr,"manufacturer:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\thw_rev: %d (0x%02X)\n",hw_rev,hw_rev);
	fprintf(stderr,"\tmanufacturer_id: %d\n",manufacturer_id);
	fprintf(stderr,"\tmodel_number_id: %d\n",model_number_id);
} else
// product
if (( message[0]==0x4e ) && ( message[0]==0x51 )) {
	unsigned char channel = message[0];
	unsigned char sw_rev = message[0];
	unsigned short serial_number_qpod = (message[1]<<8)+(message[0]);
	unsigned short serial_number_spider = (message[1]<<8)+(message[0]);

	fprintf(stderr,"product:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tsw_rev: %d (0x%02X)\n",sw_rev,sw_rev);
	fprintf(stderr,"\tserial_number_qpod: %d\n",serial_number_qpod);
	fprintf(stderr,"\tserial_number_spider: %d\n",serial_number_spider);
} else
// battery_voltage
if (( message[0]==0x4e ) && ( message[0]==0x52 )) {
	unsigned char channel = message[0];
	unsigned char operating_time_lsb = message[0];
	unsigned char operating_time_1sb = message[0];
	unsigned char operating_time_msb = message[0];
	unsigned char voltage_lsb = message[0];
	unsigned char descriptive_bits = message[0];

	fprintf(stderr,"battery_voltage:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\toperating_time_lsb: %d (0x%02X)\n",operating_time_lsb,operating_time_lsb);
	fprintf(stderr,"\toperating_time_1sb: %d (0x%02X)\n",operating_time_1sb,operating_time_1sb);
	fprintf(stderr,"\toperating_time_msb: %d (0x%02X)\n",operating_time_msb,operating_time_msb);
	fprintf(stderr,"\tvoltage_lsb: %d (0x%02X)\n",voltage_lsb,voltage_lsb);
	fprintf(stderr,"\tdescriptive_bits: %d (0x%02X)\n",descriptive_bits,descriptive_bits);
} else
// heart_rate
if (( message[0]==0x4e )) {
	unsigned char channel = message[0];
	unsigned short measurement_time = (message[1]<<8)+(message[0]);
	unsigned char beats = message[0];
	unsigned char instant_heart_rate = message[0];

	fprintf(stderr,"heart_rate:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmeasurement_time: %d\n",measurement_time);
	fprintf(stderr,"\tbeats: %d (0x%02X)\n",beats,beats);
	fprintf(stderr,"\tinstant_heart_rate: %d (0x%02X)\n",instant_heart_rate,instant_heart_rate);
} else
// speed
if (( message[0]==0x4e )) {
	unsigned char channel = message[0];
	unsigned short measurement_time = (message[1]<<8)+(message[0]);
	unsigned short wheel_revs = (message[1]<<8)+(message[0]);

	fprintf(stderr,"speed:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmeasurement_time: %d\n",measurement_time);
	fprintf(stderr,"\twheel_revs: %d\n",wheel_revs);
} else
// cadence
if (( message[0]==0x4e )) {
	unsigned char channel = message[0];
	unsigned short measurement_time = (message[1]<<8)+(message[0]);
	unsigned short crank_revs = (message[1]<<8)+(message[0]);

	fprintf(stderr,"cadence:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tmeasurement_time: %d\n",measurement_time);
	fprintf(stderr,"\tcrank_revs: %d\n",crank_revs);
} else
// speed_cadence
if (( message[0]==0x4e )) {
	unsigned char channel = message[0];
	unsigned short cadence_measurement_time = (message[1]<<8)+(message[0]);
	unsigned short crank_revs = (message[1]<<8)+(message[0]);
	unsigned short speed_measurement_time = (message[1]<<8)+(message[0]);
	unsigned short wheel_revs = (message[1]<<8)+(message[0]);

	fprintf(stderr,"speed_cadence:\n");
	fprintf(stderr,"\tchannel: %d (0x%02X)\n",channel,channel);
	fprintf(stderr,"\tcadence_measurement_time: %d\n",cadence_measurement_time);
	fprintf(stderr,"\tcrank_revs: %d\n",crank_revs);
	fprintf(stderr,"\tspeed_measurement_time: %d\n",speed_measurement_time);
	fprintf(stderr,"\twheel_revs: %d\n",wheel_revs);
} else
 { ; } 
 } 
