//
//  HeaderTool.h
//  testPhotoEditor
//
//  Created by XuShiyou on 2020/8/13.
//  Copyright © 2020 com.uneed.yuni. All rights reserved.
//

#ifndef HeaderTool_h
#define HeaderTool_h
#define SL_TopSafeAreaHeight (SL_SafeAreaEnable ? 44.f : 20.f)
#define SL_TopNavigationBarHeight (SL_SafeAreaEnable ? 88.f : 64.f)
#define SL_BottomTabbarHeight (SL_SafeAreaEnable ? (49.f + 34.f) : (49.f))
#define SL_BottomSafeAreaHeight (SL_SafeAreaEnable ? (34.f) : (0.f))

/// 屏幕宽高
#define SL_kScreenWidth [UIScreen mainScreen].bounds.size.width
#define SL_kScreenHeight [UIScreen mainScreen].bounds.size.height

//---------------------- About Helper 辅助方法 ----------------------------
/// 弱引用对象
#define SL_WeakSelf __weak typeof(self) weakSelf = self;

///主线程操作
#define SL_DISPATCH_ON_MAIN_THREAD(mainQueueBlock) dispatch_async(dispatch_get_main_queue(),mainQueueBlock);
#define SL_GCDWithGlobal(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define sl_GCDWithMain(block) dispatch_async(dispatch_get_main_queue(),block)

#import "UIView+SLFrame.h"
#import "SLDelayPerform.h"
#endif /* HeaderTool_h */
