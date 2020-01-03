//
//  ViewController.swift
//  GeekSDKDemo
//
//  Created by Roking xie on 2019/12/13.
//  Copyright © 2019 Roking xie. All rights reserved.
//

import UIKit
import GeekSDK

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        self.view.backgroundColor = UIColor.white
        
        GeekSDK.connectDevice(startConnect: {
            print("startConnect")
        }) { (geekSDK_DeviceInfoModel) in
            //判断是否是iOS模式
            //判断版本号是否是最新版本
            let new_version: String = GeekSDK.getUpdateOTAVersionWithDeviceInfoMode(deviceInfoMode: geekSDK_DeviceInfoModel.deviceInfoMode!)
            print(new_version)
        }
        let btn: UIButton = UIButton.init(type: UIButton.ButtonType.roundedRect)
        btn.frame = CGRect.init(x: 0, y: 0, width: 100, height: 100)
        btn.backgroundColor = UIColor.red
        btn.addTarget(self, action: #selector(btnAction), for: UIControl.Event.touchUpInside)
        self.view.addSubview(btn)
    }

    @objc func btnAction() -> Void {
        print("hehe")
//        GeekSDK.getDeviceOTAUpdateType { (inte) in
//            GeekSDK.new_updateDeviceMCUWithDeviceInfoMode(deviceInfoMode: "ZW-JYMIX", progress: { (progress) in
//                print(progress)
//            }, updateFailed: {
//                print("updateFailed")
//            }) {
//                print("updateSuccess")
//            }
//        }
//        GeekSDK.old_updateDeviceMCUWithDeviceInfoMode(deviceInfoMode: "ZW-ZG5P", updateFailed: {
//            print("升级失败")
//        }) {
//            print("升级成功")
//        }
        GeekSDK.updateDeviceOTAWithDeviceInfoMode(deviceInfoMode: "ZW-ZG5P", progress: { (progressFloat) in
            print(progressFloat)
        }, updateFailed: {
            print("更新失败")
        }) {
            print("更新成功")
        }
    }
    
}

