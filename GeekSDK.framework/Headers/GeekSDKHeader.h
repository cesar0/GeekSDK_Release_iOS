//
//  GeekSDKHeader.h
//  GeekSDK
//
//  Created by Roking xie on 2019/12/12.
//  Copyright © 2019 Roking xie. All rights reserved.
//

#ifndef GeekSDKHeader_h
#define GeekSDKHeader_h

//未连接设备的时候，调用此方法开始扫描已经连接的设备
    public class func connectDevice()
    
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
    //param: 0: 默认方向 1: 旋转180度方向
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
    public class func writeDataToDevice() -> Void 
    
    //按键属性修改
    
    //蓝牙ota升级
    //mcu升级


#endif /* GeekSDKHeader_h */


