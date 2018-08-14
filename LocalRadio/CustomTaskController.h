//
//  CustomTaskController.h
//  LocalRadio
//
//  Created by Douglas Ward on 8/10/18.
//  Copyright © 2018 ArkPhone LLC. All rights reserved.
//

#import <AppKit/AppKit.h>

@class SQLiteController;
@class AppDelegate;

@interface CustomTaskController : NSObject <NSTableViewDelegate, NSTableViewDataSource>

@property (weak) IBOutlet NSWindow * customTaskWindow;

@property (weak) IBOutlet NSTableView * nameTableView;
@property (weak) IBOutlet NSTableView * pathTableView;
@property (weak) IBOutlet NSTableView * argumentTableView;

@property (weak) IBOutlet NSTextField * sampleRateTextField;
@property (weak) IBOutlet NSTextField * channelsTextField;

@property (weak) IBOutlet NSButton * addNameButton;
@property (weak) IBOutlet NSButton * deleteNameButton;
@property (weak) IBOutlet NSButton * addPathButton;
@property (weak) IBOutlet NSButton * deletePathButton;
@property (weak) IBOutlet NSButton * addArgumentButton;
@property (weak) IBOutlet NSButton * deleteArgumentButton;

@property (strong) NSMutableArray * allCustomTasksArray;
@property (strong) NSMutableArray * selectedTaskNameArray;  // array for a pipe of executable paths, containing arrays of arguments

@property (weak) IBOutlet SQLiteController * sqliteController;
@property (weak) IBOutlet AppDelegate * appDelegate;

- (void) updateTaskNamesArray;
- (IBAction)onEnterInTextField:(NSTextField *)sender;

@end
