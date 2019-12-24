//
//  GeekSDKHeader.h
//  GeekSDK
//
//  Created by Roking xie on 2019/12/12.
//  Copyright © 2019 Roking xie. All rights reserved.
//

#ifndef GeekSDKHeader_h
#define GeekSDKHeader_h

public class GeekSDK_DeviceInfoModel: NSObject {
    public var deviceInfoName: String?      //设备名称
    public var deviceInfoVersion : String?  //设备版本号
    public var deviceInfoMode : String?     //设备mode（设备的唯一标识）
    public var deviceInfoType: Int?         //设备类型 0:键鼠类型 1：单边手柄 2: 双边手柄 3: 两点手柄 7： 游戏手机壳 16: 主机设备
    public var deviceInfoModel : Int?       //设备模式 0:安卓模式 1:直玩模式 2: 有线模式（直玩模式跟有线模式都属于iOS模式）
    public var deviceConfigMaxLength: String?   //设备最大允许添加的配置按键的长度
}

//蓝牙连接状态
public class func bluetoothConnectState() -> Bool

//蓝牙开关状态
public class func bluetoothState() -> Bool

//未连接设备的时候，调用此方法开始扫描已经连接的设备
//扫描到符合要求的设备的时候，走第一个闭包
//当获取到必要的设备信息的时候，走第二个闭包
public class func connectDevice(startConnect: @escaping () -> Void, connectComplated: @escaping (_ geekSDK_DeviceInfoModel: GeekSDK_DeviceInfoModel) -> Void)
    
    //获取已连接设备的基本信息
public class func getDeviceInfo() -> GeekSDK_DeviceInfoModel
    
    //获取已连接设备的所支持的模式
    public class func getDeviceSupportModel() -> NSArray
    
    //切换设备模式：直玩，有线， 主机模式
    public class func changeDeviceModel(device_Model: String) -> Void
    
    //修改蓝牙名称
    public class func changeDeviceName(deviceName: String) -> Void
    
    //打开数据接收
    public class func writeToDeviceOpen() -> Void
    
    //关闭数据接收
    public class func writeToDeviceClose() -> Void
    
    //旋转屏幕
    //param: 0: home键在下面 1: home键在右边 2:home键在上面 3:home键在左边
    public class func setScreenMode(direction: Int) -> Void
    
    //接收单个按键数据
    
    
//    //如果使用ZIKWAY阿里云的话，就可以使用以下接口
//    //分配游戏ID
//    public class func getCoustomGameID() -> Int {
//        return -1
//    }
//
//    //分配配置ID
//    public class func getCoustomConfigID() -> Int {
//        return -1
//    }
//
//    //获取游戏列表
//    public class func getGameList() -> NSArray {
//        return NSArray.init()
//    }
//
//    //获取配置列表
//    public class func getConfigList() -> NSArray {
//        return NSArray.init()
//    }
//
//    //获取配置数据
//    public class func getKeyList() -> NSArray {
//        return NSArray.init()
//    }
    
    //打包配置数据
    public class func turnKeyListToData() -> Data
    
    //写入配置到设备
    public class func writeDataToDevice(keyInfoList: NSArray) -> Void

//写入配置到主机设备
public class func applyData(data : NSMutableData ,length : UInt8) -> Void
    
    //按键属性修改
    
    //蓝牙ota升级
    //mcu升级


#endif /* GeekSDKHeader_h */


