/*******************************************************************
 *
 *    DESCRIPTION:Copyright(c) Xiamen Dnake electronic technology co., LTD
 *
 *    AUTHOR:DGW
 *
 *    HISTORY:协议共有头文件
 *
 *    DATE:2017-10-11
 *
 *******************************************************************/
#ifndef SDKINTERFACE_H_
#define SDKINTERFACE_H_

/************************************************************************/
/*TODO:宏定义                                                                */
/************************************************************************/


/************************************************************************/
/**TODO:JNI接收到GUI消息                                                    */
/************************************************************************/
#define JNI_EVENT_SDK_INIT                            0x00//sdk初始化
#define JNI_EVENT_SDK_EXIT                            0x01//sdk退出
#define JNI_EVENT_SET_IOT_ACCOUNT                    0x02//设置本地IOT帐号
#define JNI_EVENT_ADD_REMOTE_DEV                    0x03//添加远程IOT帐号
#define JNI_EVENT_DEL_REMOTE_DEV                    0x04//删除远程IOT帐号
#define JNI_EVENT_SEND_IMSG_2_DEV                    0x05//SDK发送IMSG到远程IOT
#define JNI_EVENT_SEND_IMSG_2_SERVER                0x06//SDK发送IMSG到服务器
#define JNI_EVENT_GW_SEND_IMSG_2_DEV                0x07//网关SDK直接发送IMSG到终端
#define JNI_EVENT_SEND_LAN_MSG                        0x08//SDK发送局域网消息
#define JNI_EVENT_ENTER_MATCH                        0x09//进入对码绑定模式
#define JNI_EVENT_EXIT_MATCH                        0x10//退出对码绑定模式
#define JNI_EVENT_CONFIG_NET                        0x11//配置sdk网络
#define JNI_EVENT_SEND_IMSG_2_V485                    0x12//SDK发送Imsg到485
#define JNI_EVENT_MAX                                0x13

#define JNI_EVENT_ERROR_DEFAULT_ERR                    -1
#define JNI_EVENT_ERROR_VALUE_ERR                    -2
#define JNI_EVENT_ERROR_INIT_REPEAT_RECV            -3
#define JNI_EVENT_ERROR_INIT_NOT_RECV                -4


#define PARM_IOT_SET_URL                            @"iotUrl"
#define PARM_IOT_SET_PRODUCT_KEY                    @"productKey"
#define PARM_IOT_SET_LOCAL_DEV_NAME                    @"localDevName"
#define PARM_IOT_SET_LOCAL_DEV_SECRET                @"localDevSecret"

#define PARM_IOT_SET_SDK_TYPE                        @"sdkType"
#define PARM_IOT_SET_APP_PATH                        @"appPath"

#define PARM_IOT_ADD_REMOTE_DEV                        @"addRemoteDev"
#define PARM_IOT_DEL_REMOTE_DEV                        @"delRemoteDev"

#define PARM_IOT_LOCAL_IP                            @"localIp"
#define PARM_IOT_BROADCAST_IP                        @"broadcastIp"
#define PARM_IOT_NW_NAME                            @"nwName"

#define VALUE_SDK_TYPE_MOBILE                        @"mobile"        //使用远程iot控制移动终端，如android及ios手机app
#define VALUE_SDK_TYPE_GW_NORMAL                    @"gwNormal"    //通常分机网关，带有远程iot控制及gui界面控制的分机网关，如902分机
#define VALUE_SDK_TYPE_GW_NOT_GUI                    @"gwNotGui"    //使用远程iot控制的独立网关，如32926方案
#define VALUE_SDK_TYPE_GW_NOT_IOT                    @"gwNotIot"    //本地控制的分机网关【不使用远程iot】，如902-S4方案
#define VALUE_SDK_TYPE_GW_SHARE_485                    @"gwShare485"    //本地控制的分机网关【不使用远程iot】，485数据传输与JAVA层共用
#define VALUE_SDK_TYPE_GW_485                        @"gw485"        //使用485与分机通信方案的独立网关
#define VALUE_SDK_TYPE_GUI_485                        @"gui485"        //使用485与分机通信方案的非网关分机

/************************************************************************/
/**TODO://JNI发送消息到GUI                                                    */
/************************************************************************/
#define TO_GUI_EVENT_NONE                            0x00
#define TO_GUI_EVENT_IMSG                            0x01 //提交设备即时消息
#define TO_GUI_EVENT_IOT_INFO                        0x02 //当iot出现问题时,会发送iot相关消息


#define CLIENT_TYPE_GW                                0//0-智能网关
#define CLIENT_TYPE_APP                                1//1-手机应用程序
/************************************************************************/
/**TODO:JNI发送iotEvent到GUI层                                                */
/************************************************************************/
#define KEY_IOT_EVENT                                @"iotEvent"

#define IOTX_MQTT_EVENT_UNDEF                        0
#define IOTX_MQTT_EVENT_DISCONNECT                    1
#define IOTX_MQTT_EVENT_RECONNECT                    2
#define IOTX_MQTT_EVENT_SUBCRIBE_SUCCESS            3
#define IOTX_MQTT_EVENT_SUBCRIBE_TIMEOUT            4
#define IOTX_MQTT_EVENT_SUBCRIBE_NACK                5
#define IOTX_MQTT_EVENT_UNSUBCRIBE_SUCCESS            6
#define IOTX_MQTT_EVENT_UNSUBCRIBE_TIMEOUT            7
#define IOTX_MQTT_EVENT_UNSUBCRIBE_NACK                8
#define IOTX_MQTT_EVENT_PUBLISH_SUCCESS                9
#define IOTX_MQTT_EVENT_PUBLISH_TIMEOUT                10
#define IOTX_MQTT_EVENT_PUBLISH_NACK                11
#define IOTX_MQTT_EVENT_PUBLISH_RECVEIVED            12
#define IOTX_MQTT_EVENT_BUFFER_OVERFLOW                13


/************************************************************************/
/* IOT健值                                                                */
/************************************************************************/
#define KEY_DATA                            @"data"
#define KEY_TO_DEV                            @"toDev"
#define KEY_FROM_DEV                        @"fromDev"
#define KEY_ACTION                            @"action"
#define KEY_UUID                            @"uuid"
#define KEY_RESULT                            @"result"
#define KEY_DEVTYPE                            @"devType"
#define KEY_DEVNO                            @"devNo"
#define KEY_CMD                                @"cmd"
#define KEY_DEVCHNUM                        @"devChNum"
#define KEY_DEVLIST                            @"devList"
#define KEY_DEVCOUNT                        @"devCount"
#define KEY_CHLIST                            @"chList"
#define KEY_DEVCH                            @"devCh"
#define KEY_ERRNO                            @"errno"
#define KEY_SCENENO                            @"sceneNo"
#define KEY_ENABLE                            @"enable"
#define KEY_LINKAGE                            @"linkage"
#define KEY_SN                                @"sn"
#define KEY_TIMER                            @"timer"
#define KEY_TIMERNO                            @"timerNo"
#define KEY_CYCLE                            @"cycle"
#define KEY_TIMEPERIO                        @"timePerio"
#define KEY_VALUE                            @"value"
#define KEY_LEVEL                            @"level"
#define KEY_COLORX                            @"colorx"
#define KEY_COLORY                            @"colory"
#define KEY_COLORTEMP                        @"colorTemp"
#define KEY_SAT                                @"sat"
#define KEY_HUE                                @"hue"
#define KEY_STATE                            @"state"
#define KEY_BINDTYPE                        @"bindType"
#define KEY_SDEVTYPE                        @"sdevType"
#define KEY_SDEVNO                            @"sdevNo"
#define KEY_SDEVCH                            @"sdevCh"
#define KEY_DDEVTYPE                        @"ddevType"
#define KEY_DDEVNO                            @"ddevNo"
#define KEY_DDEVCH                            @"ddevCh"
#define KEY_IRDEVTYPE                        @"irDevType"
#define KEY_IRKEYVALUE                        @"irKeyValue"
#define KEY_VENDORID                        @"vendorId"
#define KEY_PRODUCTID                        @"productId"
#define KEY_PACKNUMS                        @"packNums"
#define KEY_PACKSEQS                        @"packSeqs"
#define KEY_PACKLEN                            @"packLen"
#define KEY_PACKDATA                        @"packData"
#define KEY_PACKSUMS                        @"packSums"
#define KEY_TRANSTIME                        @"transTime"
#define KEY_ALARMTYPE                        @"alarmType"
#define kEY_TEMP                            @"temp"
#define KEY_HUMI                            @"humi"
#define KEY_BAT                                @"bat"
#define KEY_MSGTYPE                            @"msgType"
#define KEY_MSG                                @"msg"
#define KEY_TOTALNUM                        @"totalNum"
#define KEY_OPENNUM                            @"openNum"
#define KEY_WARNINGMODE                        @"warningMode"
#define KEY_SIRENLEVEL                        @"sirenLevel"
#define KEY_STROBE                            @"strobe"
#define KEY_STROBELEVEL                        @"strobeLevel"
#define KEY_STROBEDUTYCYCLE                    @"strobeDutyCycle"
#define KEY_WARNINGDURATION                    @"warningDuration"
#define KEY_UPGRADEPROCESS                    @"process"
//******新增******//
#define KEY_ATTRTYPE                    @"attrtype"
#define KEY_CLUSTERID                    @"clusterId"
#define KEY_ATTRID                    @"attrId"
#define KEY_ATTRDTYPE                    @"attrDType"
#define KEY_ATTRVALUE                    @"attrValue"
#define KEY_BUSDEVNO                    @"busDevNo"
#define KEY_BAUDRATE                    @"baudrate"
#define KEY_DAtABITS                    @"databits"
#define KEY_PARITY                    @"parity"
#define KEY_STOPBITS                   @"stopbits"
#define KEY_ADDR                   @"addr"
#define KEY_OPER                   @"oper"
#define KEY_PARAM                   @"param"
#define KEY_CODE                   @"code"
#define KEY_STEPMODE                   @"stepMode"
#define KEY_STEPSIZE                   @"stepSize"
#define KEY_PACKAGESEQ                   @"packageSeq"
#define KEY_FWNAME                   @"fwName"
#define KEY_ATTRS                   @"attrs"
#define KEY_FWSIZE                   @"fwSize"
#define KEY_PKGNO                  @"pkgNo"
#define KEY_PERCENT                  @"percent"
#define KEY_DEVMODE                  @"devMode"
//***************//
#define KEY_CLIENTTYPE                        @"clientType"
#define KEY_LOCALIP                         @"localIP"
#define KEY_LOCALPORT                           @"localPort"
#define KEY_SPEED                               @"speed"

#define KEY_SYSTIME                               @"sysTime"
#define KEY_SYSYEAR                               @"sysYear"

//match
#define KEY_UDID                            @"udid"
#define KEY_IOT_URL                            @"iotUrl"
#define KEY_IOT_PORT                        @"iotPort"
#define KEY_IOTPRODUCTKEY                    @"iotProductkey"
#define KEY_IOTDEVICENAME                    @"iotDeviceName"
#define KEY_GW_IOTNAME                        @"gwIotName"
#define KEY_GW_IOTSECRET                    @"gwIotSecret"

#define KEY_ACCOUNTLIST                        @"accountList"

#define KEY_USERID                            @"userID"
#define KEY_SCHEDULEID                        @"schdID"
#define KEY_USERSTATUS                        @"userStatus"
#define KEY_USERINFO                        @"userInfo"
#define KEY_USERTYPE                        @"userType"
#define KEY_USEROPERATIONMASK                @"userOp"
#define KEY_PSWD                            @"pswd"
#define KEY_TIMEOUT                            @"timeOut"
#define KEY_AUTO_LOCK_TIME                    @"autoLockTime"
#define KEY_EVTSRC                            @"evtSrc"
#define KEY_EVTCODE                            @"evtCode"
#define KEY_PIN                                @"pin"
#define KEY_ZIGBEELOCALTIME                    @"time"
#define KEY_DATA                            @"data"
#define KEY_ALARMCODE                        @"alarmCode"
#define KEY_DAYSMASK                        @"daysMask"
#define KEY_STARTHOUR                        @"stHour"
#define KEY_STARTMINUTE                        @"stMin"
#define KEY_ENDHOUR                            @"endHour"
#define KEY_ENDMINUTE                        @"endMin"
#define KEY_STARTTIME                        @"startTime"
#define KEY_ENDTIME                            @"endTime"
#define KEY_STATUS                            @"status"
#define KEY_TOTALUSERNO                        @"totalUserNo"
#define KEY_USERNOST                        @"userNoSt"
#define KEY_USERNO                            @"userNo"

#define KEY_HOUR                            @"hour"
#define KEY_MINUTE                            @"minute"
#define KEY_SECOND                            @"second"
#define KEY_MONTH                            @"month"
#define KEY_DTAE                            @"date"
#define KEY_YEAR                            @"year"
#define KEY_UTC                                @"utc"

#define KEY_DEV_LINKAGE_NO                    @"devLinkageNo"
#define KEY_TRIGGER_EVT                     @"triggerEvt"
#define KEY_TIME_TYPE                        @"timeType"

#define KEY_VERSION                            @"version"
#define KEY_OTA_PATH                        @"otaPath"



#define KEY_SDK_VERSION                        @"sdkVersion"


#define KEY_TOPIC                            @"rspTopic"    //由内部构建,用于响应保存发送者的topic
#define KEY_TYPE                            @"tp"
#define VALUE_GUI                            @"gui"
#define VALUE_JNI                            @"jni"
#define VALUE_485_TYPE                        @"485"
#define VALUE_SERVER                        @"server"
#define VALUE_RESULT_OK                        @"ok"
#define VALUE_RESULT_NO                        @"no"
#define VALUE_RESULT_ACK                    @"ack"




/************************************************************************/
/* set Wireless                                                            */
/************************************************************************/
#define KEY_SSID                            @"essid"
#define KEY_PSK                                @"psk"
#define KEY_EN                                @"en"
/************************************************************************/
/* report upgrade                                                        */
/************************************************************************/
#define KEY_HTTPUSER                        @"httpuser"
#define KEY_HTTPPWD                            @"httppwd"
#define KEY_ERSION                            @"version"
#define KEY_URL                                @"url"
#define KEY_MD5                                @"md5"
#define KEY_SIZE                            @"size"


/************************************************************************/
/* action取值                                                                */
/************************************************************************/
#define ACTION_PERMIT_JOIN                    @"permitJoin"        //允许入网
#define ACTION_ZW_PERMIT_JOIN                @"zwPermitJoin"        //允许入网
#define ACTION_READ_DEV                        @"readDev"            //读取设备状态
#define ACTION_READ_ALLDEVSTATE                @"readAllDevState"    //读取所有设备状态
#define ACTION_READ_ALLDEVLIST                @"readAllDevList"    //读取所有设备列表
#define ACTION_READ_DEVCNT                    @"readDevCnt"        //批量读取设备数量
#define ACTION_CTRL_DEV                        @"ctrlDev"            //设备控制
#define ACTION_DEL_DEV                        @"delDev"            //删除设备信息
#define ACTION_DEL_DEVLIST                    @"delDevList"        //删除网关中的设备列表

#define ACTION_SET_BIND                        @"setBind"            //APP设置两个设备互相绑定
#define ACTION_SET_UNBIND                    @"setUnBind"            //APP将两个绑定的设备解除绑定

#define ACTION_CTRL_DEF                        @"ctrlDef"            //防区布撤防控制，单独防区布撤防控制，一键全部防区布撤防控制
#define ACTION_READ_DEF                        @"readDef"            //读防区布撤防状态

#define ACTION_CTRL_SCENE                    @"ctrlScene"            //场景控制
#define ACTION_SET_SCENE                    @"setScene"            //场景设置，添加和编辑场景，实现场景联动配置
#define ACTION_DEL_SCENE                    @"delScene"            //删除场景，包括场景联动信息
#define ACTION_DEL_ALLSCENE                    @"delAllScene"        //删除全部场景
#define ACTION_SET_TIMERSCENE                @"setTimerScene"        //设置定时器，添加和编辑定时器功能，实现定时联动配置
#define ACTION_DEL_TIMERSCENE                @"delTimerScene"        //删除定时器，包括定时联动信息
#define ACTION_DEL_ALLTIMERSCENE            @"delAllTimerScene"    //删除全部定时器，包括定时联动信息

#define ACTION_SET_ALARMLINKAGE                @"setArmLinkage"        //配置防区报警联动，即设置防区报警触发后关联的动作
#define ACTION_DEL_ALARMLINKAGE                @"delArmLinkage"        //删除防区报警联动，包括防区绑定关系以及防区报警联动关系

#define ACTION_CMT_ALARM                    @"cmtAlarm"            //报警信息推送，即产生报警时主动将报警信息发送给云服务器
#define ACTION_CMT_DEVINFO                    @"cmtDevInfo"        //添加设备UDP主动推送设备信息
#define ACTION_CMT_SCENE_NO                    @"cmtSceneNo"        //当按下场景面板时，网关主动向手机APP推送场景号
#define ACTION_CMT_LOCKLOG                    @"cmtLockLog"        //锁的操作日志推送
#define ACTION_CMT_LOCK_ALARM                @"cmtLockAlarm"        //锁推送报警事件
#define ACTION_CMT_LK_UPDATE_USER            @"cmtUpdateUser"        //锁用户信息变化推送
#define ACTION_CMT_LOCK_EVENT                @"cmtLockEvt"        //锁状态变化消息推送

#define ACTION_SET_NET                        @"setNet"            //配置网关的网络参数
#define ACTION_DISCOVER                        @"discover"            //局域网内查询网关或手机APP的UDP端口及ip地址
#define ACTION_MATCH                        @"match"                //手机APP与智能网关对码绑定
#define ACTION_ADDACCOUNTLIST                @"addAcntLst"        //下发关联IOT帐号列表
#define ACTION_DELACCOUNTLIST                @"delAcntLst"        //删除关联IOT帐号列表
#define ACTION_GETACCOUNTLIST                @"getAcntLst"        //获取关联IOT帐号列表
#define ACTION_READ_GWINFO                    @"readGwInfo"        //读取网关信息
#define ACTION_RESTART_GATEWAY                @"restartGw"            //重启网关，用于现场施工配置时，区分不同设备
#define ACTION_GET_VERSION                    @"getVersion"        //智能网关获取服务器上最新软件版本信息
#define ACTION_SET_ORDER                    @"setOrder"            //排班设置，添加和编辑地暖、新风排班控制
#define ACTION_SET_COOR_FACTORY                @"setCoorFct"        //网关的协调器恢复出厂设置
#define ACTION_SET_FACTORY                    @"setFactory"        //网关恢复出厂设置
#define ACTION_RPT_RPTHTTPVERSION            @"rptHttpVersion"    //下发网关升级通知
#define ACTION_RPT_RPTHTTPFINISH            @"rptHttpFinish"        //网关升级进度通知

#define ACTION_SET_LOCKUSER                    @"setLkUser"            //锁用户配置（包括用户密码）
#define ACTION_GET_LOCK_USER                @"getLkUser"            //请求读取锁用户信息
#define ACTION_CLEAR_LOCK_USER                @"clLkUser"            //删除锁用户信息
#define ACTION_SET_USER_STATUS                @"setLkUserSt"        //设置锁用户状态 enable/disable
#define ACTION_SET_WEEKDAY_SCHD                @"setWeekDay"        //设置时效用户
#define ACTION_SET_YEARDAY_SCHD                @"setYearDay"        //设置时效用户
#define ACTION_GET_WEEKDAY_SCHD                @"getLkWeek"            //读取WeekDay时效信息
#define ACTION_CLR_WEEKDAY_SCHD                @"clrLkWeek"            //清除WeekDay时效信息
#define ACTION_SET_SYS_TIME                    @"setTime"            //设置系统时间


#define ACTION_SET_DEV_LINKAGE                @"setDevLinkage"        //设置设备联动
#define ACTION_ENABLE_DEV_LINKAGE            @"enDevLinkage"        //使能或失能设备联动
#define ACTION_DEL_DEV_LINKAGE                @"delDevLinkage"        //删除设备联动
#define ACTION_DEL_ALL_DEV_LINKAGE            @"delAllDevLinkage"    //删除所有设备联动

#define ACTION_RPT_VERSION                    @"rptVersion"        //报告SDK固件版本信息
#define ACTION_RPT_OTA_FINISH                @"rptOtaFinish"        //报告ota下载完成

#define ACTION_SET_UDID                        @"setUdid"            //局域网设置设备SN号
#define ACTION_GET_SDK_INFO                    @"getSdkInfo"        //上层APP获取网关SDK包信息
#define ACTION_SET_BAUDRATE                    @"setBaudrate"        //gui设置coor波特率
#define ACTION_SET_WIFI                        @"setWifi"            //设置网关无线wifi用户名及密码
#define ACTION_GET_WIFI                        @"getWifi"            //读取网关无线wifi用户名及密码
//******新增*****//
#define ACTION_WRITE_ATTR                    @"writeAttr"           //设置设备属性
#define ACTION_UPGRADENOTIF                    @"upgradeNotif"      //通知升级固件包
#define ACTION_UPGRADECANCEL                   @"upgradeCancel"     //取消升级固件包
#define ACTION_UPGRADEFW                   @"upgradeFw"             //升级固件包
#define ACTION_CMTPERCENT                   @"cmtPercent"
#define ACTION_RTUSEND                   @"RtuSend"
#define ACTION_SET_WIREDEVICEMODE                  @"setWireDeviceMode"
//**************//
#define ACTION_STR_LEN_MAX                    32

#define DEV_ACTION_NONE                        0
#define DEV_ACTION_CTRL_DEV                    1
#define DEV_ACTION_CTRL_DEF                    2
#define DEV_ACTION_CTRL_SCENE                3


/************************************************************************/
/*     cmd取值                                                                */
/************************************************************************/
#define CMD_ON                                @"on"            //设备开
#define CMD_OFF                                @"off"            //设备关
#define CMD_TOGGLE                            @"toggle"        //设备开关取反
#define CMD_LEVEL                            @"level"            //调光或调窗帘的拉开程度
#define CMD_COLORXY                            @"colorxy"        //色坐标
#define CMD_SAT                                @"sat"            //饱和度
#define CMD_COLORTEMP                        @"colorTemp"        //色温值
#define CMD_MULATTRIBUTE                    @"mulAttribute"    //多属性控制
#define CMD_STOP                            @"stop"            //停止
#define CMD_SIRENSET                        @"sirenSet"        //声光报警器参数设置
#define CMD_IRSEND                            @"irSend"        //红外设备控制
#define CMD_IRMATCH                            @"irMatch"        //红外匹配
#define CMD_IRSET                            @"irCfg"            //红外进入学习状态
#define CMD_IRCANCEL                        @"irCancel"        //红外退出学习状态
#define CMD_IRDEL                            @"irDel"            //单个红外键值删除
#define CMD_IRDELALL                        @"irDelAll"        //全部红外键值删除
#define CMD_IRDOWNLOAD                        @"irDownLoad"    //红外码库导入命令
#define CMD_STR_LEN_MAX                        32
#define CMD_LEVEL_STEP                       @"levelStep"    //调光灯控制
#define CMD_IRSAVE                       @"irSave"        //红外码库保存

#define DEV_CMD_NONE                            0    //设备开
#define DEV_CMD_ON                                1    //设备开
#define DEV_CMD_OFF                                2    //设备关
#define DEV_CMD_TOGGLE                            3    //设备开关取反
#define DEV_CMD_LEVEL                            4    //调光或调窗帘的拉开程度
#define DEV_CMD_COLORXY                            5    //色坐标
#define DEV_CMD_SAT                                6    //饱和度
#define DEV_CMD_COLORTEMP                        7    //色温值
#define DEV_CMD_MULATTRIBUTE                    8    //多属性控制
#define DEV_CMD_STOP                            9    //停止
#define DEV_CMD_SIRENSET                        10    //声光报警器参数设置
#define DEV_CMD_IRSEND                            11    //红外设备控制
#define DEV_CMD_IRMATCH                            12    //红外匹配
#define DEV_CMD_IRSET                            13    //红外进入学习状态
#define DEV_CMD_IRCANCEL                        14    //红外退出学习状态
#define DEV_CMD_IRDEL                            15    //单个红外键值删除
#define DEV_CMD_IRDELALL                        16    //全部红外键值删除
#define DEV_CMD_IRDOWNLOAD                        17    //红外码库导入命令

#define DEV_TYPE_8WIRE_ALARM 0x0D0B    //有线8路报警

#define DEV_ID_UNDEFINED                    0xFFFF    //未知设备
#define DEV_NO_UNDEFINED                    0xFFFF    //未知设备
#define DEV_CH_UNDEFINED                    0xFF    //未知设备通道
#define ARRT_UNDEFINED                        0xFF    //未知属性值
/************************************************************************/
/*     devType取值                                                            */
/************************************************************************/
#define DEV_TYPE_UNDEFINED                    0xFFFF    //未定义设备
#define DEV_TYPE_MIN                        0x0100
#define DEV_TYPE_LIGHT                        0x0100    //灯光设备
#define DEV_TYPE_ONOFFLIGHT                    0x0101    //开关灯
#define DEV_TYPE_DIMMERLIGHT                0x0102    //调光灯
#define DEV_TYPE_COLORLIGHT                    0x0103    //彩色灯
#define DEV_TYPE_LINKPANEL                    0x0104    //联控面板
#define DEV_TYPE_CURTAIN                    0x0202    //窗帘设备
#define DEV_TYPE_AIR                        0x0300    //中央空调
#define DEV_TYPE_SWITCH                        0x0400    //电器开关
#define DEV_TYPE_IR                            0x0500    //红外设备，包括：电视、空调、机顶盒等红外设备
#define DEV_TYPE_FRESH                        0x0700    //新风系统
#define DEV_TYPE_FHEAT                        0x0800    //地暖系统
#define DEV_TYPE_MUSIC                        0x0900    //背景音乐
#define DEV_TYPE_WATERDETE                    0x0A00    //水精灵，用于检测水质量
#define DEV_TYPE_AIRDETE                    0x0B00    //空气检测仪，用于检测空气质量
#define DEV_TYPE_TEMPHUMSEN                    0x0C00    //温湿度检测传感器，用于检测室内温湿度
#define DEV_TYPE_TEMP                        0x0C01    //温度检测传感器，用于检测室内温湿度
#define DEV_TYPE_HUMSEN                        0x0C02    //湿度检测传感器，用于检测室内温湿度
#define DEV_TYPE_ALLSEN                        0x0D00    //所有安防设备
#define DEV_TYPE_GASSEN                        0x0D01    //燃气探测器
#define DEV_TYPE_BODYSEN                    0x0D02    //人体红外探测器
#define DEV_TYPE_DOORSEN                    0x0D03    //门磁
#define DEV_TYPE_IRSEN                        0x0D04    //红外幕帘
#define DEV_TYPE_WATERSEN                    0x0D05    //水浸探测器
#define DEV_TYPE_SMOKESEN                    0x0D06    //烟感
#define DEV_TYPE_KEYSEN                        0x0D07    //紧急按钮
#define DEV_TYPE_DOORLOCK                    0x0E02    //门锁
#define DEV_TYPE_DOORLOCK_SHS_H505            0x0E01    //三星智能锁 型号:shs-h505，Z-WAVE协议
#define DEV_TYPE_PLUG                        0x0F00    //插座
#define DEV_TYPE_SMARTSIREN                    0x1000    //智能报警器，声光报警器
#define DEV_TYPE_SCENESELECTOR                0x1100    //场景面板
#define DEV_TYPE_MAX                        0x0F00

/************************************************************************/
/*     alarmType取值                                                        */
/************************************************************************/
#define DEV_ALARM_TYPE_DEFENCE                0        //安防报警
#define DEV_ALARM_TYPE_TEMP                    1        //温度值
#define DEV_ALARM_TYPE_HUM                    2        //湿度值
#define DEV_ALARM_TYPE_LOWBAT                3        //电量值
#define DEV_ALARM_TYPE_LOCK                    4        //锁的状态
#define DEV_ALARM_TYPE_DOOR                    5        //门的状态
#define DEV_ALARM_TYPE_LKALARM_TAIXI        6        //太犀锁报警
#define DEV_ALARM_TYPE_LKST_TAIXI            7        //太犀锁状态
#define DEV_ALARM_TYPE_MAX                    8

/************************************************************************/
/*     errno取值                                                            */
/************************************************************************/
#define ERRNO_CORRECT                        0        //正确
#define ERRNO_UNKNOWN_ERROR                    101        //未知错误
#define ERRNO_PROTOCOL_FORMAT_ERROR            102        //协议格式错误
#define ERRNO_PASSING_PARAM_ERROR            103        //传递参数错误
#define ERRNO_DOES_NOT_EXIST                104        //操作对象不存在
#define ERRNO_EXISTING                        105        //操作对象已存在
#define ERRNO_NOT_READY                        106        //未准备就绪
#define ERRNO_NO_PERMISSIONS                107        //无操作权限
#define ERRNO_OFFLINE_STATE                    108        //设备处于离线状态
#define ERRNO_TIMED_OUT                        109        //操作超时
#define ERRNO_DEVICE_TYPE_ERROR                110        //设备类型错误
#define ERRNO_DEVICE_EXIST                    111        //设备已存在
#define ERRNO_ZIGBEE_COORD_OFFLINE            112        //网关的zigbee协调器不在线
#define ERRNO_ZIGBEE_NO_EP_RSP                113        //入网的zigbee设备无端点响应
#define ERRNO_ZIGBEE_NO_EP_DESC_RSP            114        //入网的zigbee设备无端点描述符响应
#define ERRNO_ZIGBEE_NO_TEMP_CFG_RSP        115        //入网时配置温湿度传感器的温度属性无响应
#define ERRNO_ZIGBEE_NO_HUMI_CFG_RSP        116        //入网时配置温湿度传感器的湿度属性无响应
#define ERRNO_ZIGBEE_NO_POWER_CFG_RSP        117        //入网时配置温湿度传感器的电量属性无响应
#define ERRNO_REPET_OPERATION                118        //重复操作，如当前是回家场景，但是再次收到回家场景时会提示重复操作

#define DEV_STATUS_OFF                        0    //设备关
#define DEV_STATUS_ON                        1    //设备开
#define DEV_STATUS_LEAVE                    2    //设备离线

/************************************************************************/
/*     设备信息推送msgType取值                                                    */
/************************************************************************/
#define MSG_TYPE_NONE                        0xFF
#define MSG_TYPE_STATE                        0
#define MSG_TYPE_LEVEL                        1
#define MSG_TYPE_COLORX                        2
#define MSG_TYPE_COLORY                        3
#define MSG_TYPE_SAT                        4
#define MSG_TYPE_HUE                        5
#define MSG_TYPE_COLORTEMP                    6
#define MSG_TYPE_BATTERY_VOLTAGE            7

/************************************************************************/
/*     Undefine String                                                   */
/************************************************************************/
#define KEY_APP_PATH @"DNKSmartHomeSDK"
#define KEY_EXIT @"exit"
#define KEY_TRIGGER @"trigger"
#define KEY_LINKAGE_NO @"linkageNo"
#define KEY_BUS_NO @"busNo"
#define KEY_CLIENT @"client"

#define VALUE_GATEWAYIOT @"255.255.255.255"

/************************************************************************/
/*     外部调用API                                                    */
/************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
    typedef int (*sdkCallback)(int event, const char *msgBody);
    int SDKSetCallback(sdkCallback cb);
    int SDKRecvGuiMsg(int event, const char *msgBody);
#ifdef __cplusplus
}
#endif

#endif /* PROTO_COMMON_H_ */
