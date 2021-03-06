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
#include "transaction.h"

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
class QApproveAndCall : public CTransaction {
public:
    address_t _spender;
    biguint_t _value;
    string_q _extraData;

public:
    QApproveAndCall(void);
    QApproveAndCall(const QApproveAndCall& ap);
    virtual ~QApproveAndCall(void);
    QApproveAndCall& operator=(const QApproveAndCall& ap);

    DECLARE_NODE(QApproveAndCall);

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const QApproveAndCall& item) const;
    bool operator!=(const QApproveAndCall& item) const { return !operator==(item); }
    friend bool operator<(const QApproveAndCall& v1, const QApproveAndCall& v2);
    friend ostream& operator<<(ostream& os, const QApproveAndCall& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const QApproveAndCall& ap);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline QApproveAndCall::QApproveAndCall(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline QApproveAndCall::QApproveAndCall(const QApproveAndCall& ap) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(ap);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline QApproveAndCall::~QApproveAndCall(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QApproveAndCall::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QApproveAndCall::initialize(void) {
    CTransaction::initialize();

    _spender = "";
    _value = 0;
    _extraData = "";

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void QApproveAndCall::duplicate(const QApproveAndCall& ap) {
    clear();
    CTransaction::duplicate(ap);

    _spender = ap._spender;
    _value = ap._value;
    _extraData = ap._extraData;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline QApproveAndCall& QApproveAndCall::operator=(const QApproveAndCall& ap) {
    duplicate(ap);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool QApproveAndCall::operator==(const QApproveAndCall& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const QApproveAndCall& v1, const QApproveAndCall& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<QApproveAndCall> QApproveAndCallArray;
extern CArchive& operator>>(CArchive& archive, QApproveAndCallArray& array);
extern CArchive& operator<<(CArchive& archive, const QApproveAndCallArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

