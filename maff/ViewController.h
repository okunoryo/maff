//
//  ViewController.h
//  maff
//
//  Created by 奥野遼 on 2015/03/06.
//  Copyright (c) 2015年 奥野遼. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>


//@interface ViewController : UIViewController

@interface ViewController : UIViewController <UIAccelerometerDelegate>
@property (strong, nonatomic) IBOutlet UILabel *xLabel;
@property (strong, nonatomic) IBOutlet UILabel *yLabel;
@property (strong, nonatomic) IBOutlet UILabel *zLabel;

@property(readwrite)CFURLRef soundURL;
@property(readonly)SystemSoundID soundID;

@end



