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
class CChangeFeeMake : public CTransaction {
public:
    biguint_t feeMake_;

public:
    CChangeFeeMake(void);
    CChangeFeeMake(const CChangeFeeMake& ch);
    virtual ~CChangeFeeMake(void);
    CChangeFeeMake& operator=(const CChangeFeeMake& ch);

    DECLARE_NODE(CChangeFeeMake);

    // EXISTING_CODE
    // EXISTING_CODE
    bool operator==(const CChangeFeeMake& item) const;
    bool operator!=(const CChangeFeeMake& item) const { return !operator==(item); }
    friend bool operator<(const CChangeFeeMake& v1, const CChangeFeeMake& v2);
    friend ostream& operator<<(ostream& os, const CChangeFeeMake& item);

protected:
    void clear(void);
    void initialize(void);
    void duplicate(const CChangeFeeMake& ch);
    bool readBackLevel(CArchive& archive) override;

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline CChangeFeeMake::CChangeFeeMake(void) {
    initialize();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline CChangeFeeMake::CChangeFeeMake(const CChangeFeeMake& ch) {
    // EXISTING_CODE
    // EXISTING_CODE
    duplicate(ch);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline CChangeFeeMake::~CChangeFeeMake(void) {
    clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CChangeFeeMake::clear(void) {
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CChangeFeeMake::initialize(void) {
    CTransaction::initialize();

    feeMake_ = 0;

    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CChangeFeeMake::duplicate(const CChangeFeeMake& ch) {
    clear();
    CTransaction::duplicate(ch);

    feeMake_ = ch.feeMake_;

    // EXISTING_CODE
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline CChangeFeeMake& CChangeFeeMake::operator=(const CChangeFeeMake& ch) {
    duplicate(ch);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//-------------------------------------------------------------------------
inline bool CChangeFeeMake::operator==(const CChangeFeeMake& item) const {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default equal operator in class definition, assume none are equal (so find fails)
    return false;
}

//-------------------------------------------------------------------------
inline bool operator<(const CChangeFeeMake& v1, const CChangeFeeMake& v2) {
    // EXISTING_CODE
    // EXISTING_CODE
    // No default sort defined in class definition, assume already sorted, preserve ordering
    return true;
}

//---------------------------------------------------------------------------
typedef vector<CChangeFeeMake> CChangeFeeMakeArray;
extern CArchive& operator>>(CArchive& archive, CChangeFeeMakeArray& array);
extern CArchive& operator<<(CArchive& archive, const CChangeFeeMakeArray& array);

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

