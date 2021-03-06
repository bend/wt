// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2010 Emweb bvba, Kessel-Lo, Belgium.
 *
 * See the LICENSE file for terms of use.
 */
#ifndef ALL_ENTRIES_DIALOG_H_
#define ALL_ENTRIES_DIALOG_H_

#include <Wt/WDialog>
#include <Wt/WString>

#include "CalendarCell.h"

class AllEntriesDialog : public Wt::WDialog
{
public:
  AllEntriesDialog(const Wt::WString& title, CalendarCell* cell);

private:
  void closeDialog();
};

#endif // ALL_ENTRIES_DIALOG_H_
