#pragma once
/*-------------------------------------------------------------------------------------------
 * qblocks - fast, easily-accessible, fully-decentralized data from blockchains
 * copyright (c) 2018 Great Hill Corporation (http://greathill.com)
 *
 * This program is free software: you may redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version. This program is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details. You should have received a copy of the GNU General
 * Public License along with this program. If not, see http://www.gnu.org/licenses/.
 *-------------------------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include <vector>
#include <map>
#include "logentry.h"

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
class CControllerChangedEvent : public CLogEntry {
public:
    address_t _newController;

public:
    CControllerChangedEvent(void);
    CControllerChangedEvent(const CControllerChangedEvent& co);
    virtual ~CControllerChangedEvent(void);
    CControllerChangedEvent& operator=(const CControllerChangedEvent& co);

    DECLARE_NODE(CControllerChangedEvent);

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const CControllerChangedEvent& item) const;
    bool operator!=(const CControllerChangedEvent& item) const { return !operator==(item); }
    friend bool operator<(const CControllerChangedEvent& v1, const CControllerChangedEvent& v2);
    friend ostream& operator<<(ostream& os, const CControllerChangedEvent& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const CControllerChangedEvent& co);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline CControllerChangedEvent::CControllerChangedEvent(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline CControllerChangedEvent::CControllerChangedEvent(const CControllerChangedEvent& co) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(co);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline CControllerChangedEvent::~CControllerChangedEvent(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CControllerChangedEvent::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CControllerChangedEvent::initialize(void) {
    CLogEntry::initialize();

    _newController = "";

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CControllerChangedEvent::duplicate(const CControllerChangedEvent& co) {
    clear();
    CLogEntry::duplicate(co);

    _newController = co._newController;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline CControllerChangedEvent& CControllerChangedEvent::operator=(const CControllerChangedEvent& co) {
    duplicate(co);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool CControllerChangedEvent::operator==(const CControllerChangedEvent& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const CControllerChangedEvent& v1, const CControllerChangedEvent& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<CControllerChangedEvent> CControllerChangedEventArray;
extern CArchive& operator>>(CArchive& archive, CControllerChangedEventArray& array);
extern CArchive& operator<<(CArchive& archive, const CControllerChangedEventArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

