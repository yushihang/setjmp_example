//
//  ViewController.m
//  malloctest
//
//  Created by yushihang on 2017/4/15.
//  Copyright © 2017年 test. All rights reserved.
//

#import "ViewController.h"
#import "setjmp_test.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    try{
        setjmp_test();
    }
    catch (...){
        NSLog(@"catched");
    }
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
