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
#include <algorithm>
#include "addtopublicsalewhitelist.h"
#include "etherlib.h"

//---------------------------------------------------------------------------
IMPLEMENT_NODE(CAddToPublicSaleWhitelist, CTransaction);

//---------------------------------------------------------------------------
static string_q nextAddtopublicsalewhitelistChunk(const string_q& fieldIn, const void *dataPtr);
static string_q nextAddtopublicsalewhitelistChunk_custom(const string_q& fieldIn, const void *dataPtr);

//---------------------------------------------------------------------------
void CAddToPublicSaleWhitelist::Format(ostream& ctx, const string_q& fmtIn, void *dataPtr) const {
    if (!m_showing)
        return;

    if (fmtIn.empty()) {
        ctx << toJson();
        return;
    }

    string_q fmt = fmtIn;
    // EXISTING_CODE
    // EXISTING_CODE

    while (!fmt.empty())
        ctx << getNextChunk(fmt, nextAddtopublicsalewhitelistChunk, this);
}

//---------------------------------------------------------------------------
string_q nextAddtopublicsalewhitelistChunk(const string_q& fieldIn, const void *dataPtr) {
    if (dataPtr)
        return reinterpret_cast<const CAddToPublicSaleWhitelist *>(dataPtr)->getValueByName(fieldIn);

    // EXISTING_CODE
    // EXISTING_CODE

    return fldNotFound(fieldIn);
}

//---------------------------------------------------------------------------------------------------
bool CAddToPublicSaleWhitelist::setValueByName(const string_q& fieldName, const string_q& fieldValue) {
    // EXISTING_CODE
    // EXISTING_CODE

    if (CTransaction::setValueByName(fieldName, fieldValue))
        return true;

    switch (tolower(fieldName[0])) {
        case '_':
            if ( fieldName % "_bidder_addresses" ) {
                string_q str = fieldValue;
                while (!str.empty()) {
                    _bidder_addresses.push_back(str_2_Addr(nextTokenClear(str, ',')));
                }
                return true;
            }
            break;
        default:
            break;
    }
    return false;
}

//---------------------------------------------------------------------------------------------------
void CAddToPublicSaleWhitelist::finishParse() {
    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------------------------------
bool CAddToPublicSaleWhitelist::Serialize(CArchive& archive) {

    if (archive.isWriting())
        return SerializeC(archive);

    // Always read the base class (it will handle its own backLevels if any, then
    // read this object's back level (if any) or the current version.
    CTransaction::Serialize(archive);
    if (readBackLevel(archive))
        return true;

    // EXISTING_CODE
    // EXISTING_CODE
    archive >> _bidder_addresses;
    finishParse();
    return true;
}

//---------------------------------------------------------------------------------------------------
bool CAddToPublicSaleWhitelist::SerializeC(CArchive& archive) const {

    // Writing always write the latest version of the data
    CTransaction::SerializeC(archive);

    // EXISTING_CODE
    // EXISTING_CODE
    archive << _bidder_addresses;

    return true;
}

//---------------------------------------------------------------------------
CArchive& operator>>(CArchive& archive, CAddToPublicSaleWhitelistArray& array) {
    uint64_t count;
    archive >> count;
    array.resize(count);
    for (size_t i = 0 ; i < count ; i++) {
        ASSERT(i < array.capacity());
        array.at(i).Serialize(archive);
    }
    return archive;
}

//---------------------------------------------------------------------------
CArchive& operator<<(CArchive& archive, const CAddToPublicSaleWhitelistArray& array) {
    uint64_t count = array.size();
    archive << count;
    for (size_t i = 0 ; i < array.size() ; i++)
        array[i].SerializeC(archive);
    return archive;
}

//---------------------------------------------------------------------------
void CAddToPublicSaleWhitelist::registerClass(void) {
    static bool been_here = false;
    if (been_here) return;
    been_here = true;

    CTransaction::registerClass();

    size_t fieldNum = 1000;
    ADD_FIELD(CAddToPublicSaleWhitelist, "schema",  T_NUMBER, ++fieldNum);
    ADD_FIELD(CAddToPublicSaleWhitelist, "deleted", T_BOOL,  ++fieldNum);
    ADD_FIELD(CAddToPublicSaleWhitelist, "showing", T_BOOL,  ++fieldNum);
    ADD_FIELD(CAddToPublicSaleWhitelist, "cname", T_TEXT,  ++fieldNum);
    ADD_FIELD(CAddToPublicSaleWhitelist, "_bidder_addresses", T_ADDRESS|TS_ARRAY, ++fieldNum);

    // Hide our internal fields, user can turn them on if they like
    HIDE_FIELD(CAddToPublicSaleWhitelist, "schema");
    HIDE_FIELD(CAddToPublicSaleWhitelist, "deleted");
    HIDE_FIELD(CAddToPublicSaleWhitelist, "showing");
    HIDE_FIELD(CAddToPublicSaleWhitelist, "cname");

    builtIns.push_back(_biCAddToPublicSaleWhitelist);

    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------
string_q nextAddtopublicsalewhitelistChunk_custom(const string_q& fieldIn, const void *dataPtr) {
    const CAddToPublicSaleWhitelist *add = reinterpret_cast<const CAddToPublicSaleWhitelist *>(dataPtr);
    if (add) {
        switch (tolower(fieldIn[0])) {
            // EXISTING_CODE
            // EXISTING_CODE
            case 'p':
                // Display only the fields of this node, not it's parent type
                if ( fieldIn % "parsed" )
                    return nextBasenodeChunk(fieldIn, add);
                // EXISTING_CODE
                // EXISTING_CODE
                break;

            default:
                break;
        }
    }

    return "";
}

//---------------------------------------------------------------------------
bool CAddToPublicSaleWhitelist::readBackLevel(CArchive& archive) {

    bool done = false;
    // EXISTING_CODE
    // EXISTING_CODE
    return done;
}

//---------------------------------------------------------------------------
string_q CAddToPublicSaleWhitelist::getValueByName(const string_q& fieldName) const {

    // Give customized code a chance to override first
    string_q ret = nextAddtopublicsalewhitelistChunk_custom(fieldName, this);
    if (!ret.empty())
        return ret;

    // Return field values
    switch (tolower(fieldName[0])) {
        case '_':
            if ( fieldName % "_bidder_addresses" || fieldName % "_bidder_addressesCnt" ) {
                size_t cnt = _bidder_addresses.size();
                if (endsWith(fieldName, "Cnt"))
                    return uint_2_Str(cnt);
                if (!cnt) return "";
                string_q retS;
                for (size_t i = 0 ; i < cnt ; i++) {
                    retS += ("\"" + _bidder_addresses[i] + "\"");
                    retS += ((i < cnt - 1) ? ",\n" + indent() : "\n");
                }
                return retS;
            }
            break;
    }

    // EXISTING_CODE
    // EXISTING_CODE

    // Finally, give the parent class a chance
    return CTransaction::getValueByName(fieldName);
}

//-------------------------------------------------------------------------
ostream& operator<<(ostream& os, const CAddToPublicSaleWhitelist& item) {
    // EXISTING_CODE
    // EXISTING_CODE

    item.Format(os, "", nullptr);
    os << "\n";
    return os;
}

//---------------------------------------------------------------------------
const string_q CAddToPublicSaleWhitelist::getStringAt(const string_q& name, size_t i) const {
    if ( name % "_bidder_addresses" && i < _bidder_addresses.size() )
        return (_bidder_addresses[i]);
    return "";
}

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE

