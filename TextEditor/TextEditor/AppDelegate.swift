//
//  AppDelegate.swift
//  TextEditor
//
//  Created by XuShiyou on 2020/8/13.
//  Copyright © 2020 com.uneed.yuni. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {


var window: UIWindow?
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        self.window = UIWindow(frame: UIScreen.main.bounds)
        self.window?.backgroundColor = .white
        let imageEdit = SLShotViewController()
//        imageEdit.image = UIImage(named: "1234")!
        imageEdit.modalPresentationStyle = .fullScreen
        self.window?.rootViewController = imageEdit
        self.window?.makeKeyAndVisible()
        return true
    }

    // MARK: UISceneSession Lifecycle

   
}

