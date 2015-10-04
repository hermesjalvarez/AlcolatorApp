//
//  ViewController.h
//  Alcolator
//
//  Created by Hermes on 10/4/15.
//  Copyright (c) 2015 Hermes Alvarez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@end

