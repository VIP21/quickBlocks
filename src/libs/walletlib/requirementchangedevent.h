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
class QRequirementChangedEvent : public CLogEntry {
public:
    biguint_t newRequirement;

public:
    QRequirementChangedEvent(void);
    QRequirementChangedEvent(const QRequirementChangedEvent& re);
    virtual ~QRequirementChangedEvent(void);
    QRequirementChangedEvent& operator=(const QRequirementChangedEvent& re);

    DECLARE_NODE(QRequirementChangedEvent);

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const QRequirementChangedEvent& item) const;
    bool operator!=(const QRequirementChangedEvent& item) const { return !operator==(item); }
    friend bool operator<(const QRequirementChangedEvent& v1, const QRequirementChangedEvent& v2);
    friend ostream& operator<<(ostream& os, const QRequirementChangedEvent& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const QRequirementChangedEvent& re);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline QRequirementChangedEvent::QRequirementChangedEvent(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline QRequirementChangedEvent::QRequirementChangedEvent(const QRequirementChangedEvent& re) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(re);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline QRequirementChangedEvent::~QRequirementChangedEvent(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QRequirementChangedEvent::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QRequirementChangedEvent::initialize(void) {
    CLogEntry::initialize();

    newRequirement = 0;

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QRequirementChangedEvent::duplicate(const QRequirementChangedEvent& re) {
    clear();
    CLogEntry::duplicate(re);

    newRequirement = re.newRequirement;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline QRequirementChangedEvent& QRequirementChangedEvent::operator=(const QRequirementChangedEvent& re) {
    duplicate(re);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool QRequirementChangedEvent::operator==(const QRequirementChangedEvent& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const QRequirementChangedEvent& v1, const QRequirementChangedEvent& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<QRequirementChangedEvent> QRequirementChangedEventArray;
extern CArchive& operator>>(CArchive& archive, QRequirementChangedEventArray& array);
extern CArchive& operator<<(CArchive& archive, const QRequirementChangedEventArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

