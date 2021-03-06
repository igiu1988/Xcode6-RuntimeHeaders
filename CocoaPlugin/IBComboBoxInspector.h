//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBComboBoxInspector : IBBoundInspector
{
    NSButton *borderedButtonButton;
    NSButton *autocompletesButton;
    NSButton *usesDatasourceButton;
    NSTableView *itemsTableView;
    NSTextField *visibleItemsTextField;
    NSStepper *visibleItemsStepper;
    NSButton *removeRowButton;
    NSButton *addRowButton;
}

- (id)documentationInfoForView:(id)arg1;
- (void)removeRow:(id)arg1;
- (void)addRow:(id)arg1;
- (void)ok:(id)arg1;
- (void)refresh;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)refreshButtonStates;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)comboBoxCell;
- (BOOL)itemsAreEditable;
- (void)awakeFromNib;

@end