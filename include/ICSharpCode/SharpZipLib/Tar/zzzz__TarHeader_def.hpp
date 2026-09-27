#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarHeader)
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarHeader;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarHeader*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarHeader*, "ICSharpCode.SharpZipLib.Tar", "TarHeader");
// Dependencies System.DateTime, System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarHeader
class CORDL_TYPE TarHeader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Checksum)) int32_t  Checksum;

 __declspec(property(get=get_DevMajor, put=set_DevMajor)) int32_t  DevMajor;

 __declspec(property(get=get_DevMinor, put=set_DevMinor)) int32_t  DevMinor;

 __declspec(property(get=get_GroupId, put=set_GroupId)) int32_t  GroupId;

 __declspec(property(get=get_GroupName, put=set_GroupName)) ::StringW  GroupName;

 __declspec(property(get=get_IsChecksumValid)) bool  IsChecksumValid;

 __declspec(property(get=get_LinkName, put=set_LinkName)) ::StringW  LinkName;

 __declspec(property(get=get_Magic, put=set_Magic)) ::StringW  Magic;

 __declspec(property(get=get_ModTime, put=set_ModTime)) ::System::DateTime  ModTime;

 __declspec(property(get=get_Mode, put=set_Mode)) int32_t  Mode;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Size, put=set_Size)) int64_t  Size;

 __declspec(property(get=get_TypeFlag, put=set_TypeFlag)) uint8_t  TypeFlag;

 __declspec(property(get=get_UserId, put=set_UserId)) int32_t  UserId;

 __declspec(property(get=get_UserName, put=set_UserName)) ::StringW  UserName;

 __declspec(property(get=get_Version, put=set_Version)) ::StringW  Version;

/// @brief Field checksum, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_checksum, put=__cordl_internal_set_checksum)) int32_t  checksum;

/// @brief Field dateTime1970, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dateTime1970, put=setStaticF_dateTime1970)) ::System::DateTime  dateTime1970;

/// @brief Field defaultGroupId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultGroupId, put=setStaticF_defaultGroupId)) int32_t  defaultGroupId;

/// @brief Field defaultGroupName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultGroupName, put=setStaticF_defaultGroupName)) ::StringW  defaultGroupName;

/// @brief Field defaultUser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultUser, put=setStaticF_defaultUser)) ::StringW  defaultUser;

/// @brief Field defaultUserId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultUserId, put=setStaticF_defaultUserId)) int32_t  defaultUserId;

/// @brief Field devMajor, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_devMajor, put=__cordl_internal_set_devMajor)) int32_t  devMajor;

/// @brief Field devMinor, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_devMinor, put=__cordl_internal_set_devMinor)) int32_t  devMinor;

/// @brief Field groupId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupId, put=__cordl_internal_set_groupId)) int32_t  groupId;

/// @brief Field groupIdAsSet, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groupIdAsSet, put=setStaticF_groupIdAsSet)) int32_t  groupIdAsSet;

/// @brief Field groupName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupName, put=__cordl_internal_set_groupName)) ::StringW  groupName;

/// @brief Field groupNameAsSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_groupNameAsSet, put=setStaticF_groupNameAsSet)) ::StringW  groupNameAsSet;

/// @brief Field isChecksumValid, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isChecksumValid, put=__cordl_internal_set_isChecksumValid)) bool  isChecksumValid;

/// @brief Field linkName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkName, put=__cordl_internal_set_linkName)) ::StringW  linkName;

/// @brief Field magic, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_magic, put=__cordl_internal_set_magic)) ::StringW  magic;

/// @brief Field modTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_modTime, put=__cordl_internal_set_modTime)) ::System::DateTime  modTime;

/// @brief Field mode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) int32_t  mode;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field size, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int64_t  size;

/// @brief Field typeFlag, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_typeFlag, put=__cordl_internal_set_typeFlag)) uint8_t  typeFlag;

/// @brief Field userId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) int32_t  userId;

/// @brief Field userIdAsSet, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_userIdAsSet, put=setStaticF_userIdAsSet)) int32_t  userIdAsSet;

/// @brief Field userName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

/// @brief Field userNameAsSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userNameAsSet, put=setStaticF_userNameAsSet)) ::StringW  userNameAsSet;

/// @brief Field version, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

/// @brief Method Clone, addr 0x9fefc90, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method ComputeCheckSum, addr 0x9ff2274, size 0x58, virtual false, abstract: false, final false
static inline int32_t ComputeCheckSum(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Equals, addr 0x9ff2364, size 0x1bc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method GetAsciiBytes, addr 0x9ff2c44, size 0x88, virtual false, abstract: false, final false
static inline int32_t GetAsciiBytes(::StringW  toAdd, int32_t  nameOffset, ::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  length) ;

/// @brief Method GetAsciiBytes, addr 0x9ff204c, size 0x228, virtual false, abstract: false, final false
static inline int32_t GetAsciiBytes(::StringW  toAdd, int32_t  nameOffset, ::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  length, ::System::Text::Encoding*  encoding) ;

/// @brief Method GetBinaryOrOctalBytes, addr 0x9ff1e98, size 0xf4, virtual false, abstract: false, final false
static inline int32_t GetBinaryOrOctalBytes(int64_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetCTime, addr 0x9ff1f8c, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetCTime(::System::DateTime  dateTime) ;

/// @brief Method GetCheckSumOctalBytes, addr 0x9ff22cc, size 0x7c, virtual false, abstract: false, final false
static inline void GetCheckSumOctalBytes(int64_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetDateTimeFromCTime, addr 0x9ff1bb0, size 0x170, virtual false, abstract: false, final false
static inline ::System::DateTime GetDateTimeFromCTime(int64_t  ticks) ;

/// @brief Method GetHashCode, addr 0x9ff2348, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [Obsolete("Use the Name property instead", true)]
/// @brief Method GetName, addr 0x9ff16d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method GetNameBytes, addr 0x9ff2bc4, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::StringW  name, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetNameBytes, addr 0x9ff100c, size 0xf8, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::StringW  name, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length, ::System::Text::Encoding*  encoding) ;

/// @brief Method GetNameBytes, addr 0x9ff29ac, size 0x88, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::StringW  name, int32_t  nameOffset, ::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  length) ;

/// @brief Method GetNameBytes, addr 0x9ff2780, size 0x22c, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::StringW  name, int32_t  nameOffset, ::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  length, ::System::Text::Encoding*  encoding) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method GetNameBytes, addr 0x9ff2a34, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::System::Text::StringBuilder*  name, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetNameBytes, addr 0x9ff2ab4, size 0x110, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::System::Text::StringBuilder*  name, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length, ::System::Text::Encoding*  encoding) ;

/// @brief Method GetNameBytes, addr 0x9ff26d8, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetNameBytes(::System::Text::StringBuilder*  name, int32_t  nameOffset, ::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  length) ;

/// @brief Method GetOctalBytes, addr 0x9ff1d9c, size 0xfc, virtual false, abstract: false, final false
static inline int32_t GetOctalBytes(int64_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method MakeCheckSum, addr 0x9ff1d20, size 0x6c, virtual false, abstract: false, final false
static inline int32_t MakeCheckSum(::ArrayW<uint8_t>  buffer) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarHeader* New_ctor() ;

/// @brief Method ParseBinaryOrOctal, addr 0x9ff1ab0, size 0x100, virtual false, abstract: false, final false
static inline int64_t ParseBinaryOrOctal(::ArrayW<uint8_t>  header, int32_t  offset, int32_t  length) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method ParseBuffer, addr 0x9ff1d8c, size 0x8, virtual false, abstract: false, final false
inline void ParseBuffer(::ArrayW<uint8_t>  header) ;

/// @brief Method ParseBuffer, addr 0x9fef810, size 0x368, virtual false, abstract: false, final false
inline void ParseBuffer(::ArrayW<uint8_t>  header, ::System::Text::Encoding*  nameEncoding) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method ParseName, addr 0x9ff2668, size 0x70, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* ParseName(::ArrayW<uint8_t>  header, int32_t  offset, int32_t  length) ;

/// @brief Method ParseName, addr 0x9ff1780, size 0x258, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* ParseName(::ArrayW<uint8_t>  header, int32_t  offset, int32_t  length, ::System::Text::Encoding*  encoding) ;

/// @brief Method ParseOctal, addr 0x9ff19d8, size 0xd8, virtual false, abstract: false, final false
static inline int64_t ParseOctal(::ArrayW<uint8_t>  header, int32_t  offset, int32_t  length) ;

/// @brief Method RestoreSetValues, addr 0x9ff25e8, size 0x80, virtual false, abstract: false, final false
static inline void RestoreSetValues() ;

/// @brief Method SetValueDefaults, addr 0x9ff2520, size 0xc8, virtual false, abstract: false, final false
static inline void SetValueDefaults(int32_t  userId, ::StringW  userName, int32_t  groupId, ::StringW  groupName) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method WriteHeader, addr 0x9ff1d94, size 0x8, virtual false, abstract: false, final false
inline void WriteHeader(::ArrayW<uint8_t>  outBuffer) ;

/// @brief Method WriteHeader, addr 0x9ff0c4c, size 0x344, virtual false, abstract: false, final false
inline void WriteHeader(::ArrayW<uint8_t>  outBuffer, ::System::Text::Encoding*  nameEncoding) ;

constexpr int32_t const& __cordl_internal_get_checksum() const;

constexpr int32_t& __cordl_internal_get_checksum() ;

constexpr int32_t const& __cordl_internal_get_devMajor() const;

constexpr int32_t& __cordl_internal_get_devMajor() ;

constexpr int32_t const& __cordl_internal_get_devMinor() const;

constexpr int32_t& __cordl_internal_get_devMinor() ;

constexpr int32_t const& __cordl_internal_get_groupId() const;

constexpr int32_t& __cordl_internal_get_groupId() ;

constexpr ::StringW const& __cordl_internal_get_groupName() const;

constexpr ::StringW& __cordl_internal_get_groupName() ;

constexpr bool const& __cordl_internal_get_isChecksumValid() const;

constexpr bool& __cordl_internal_get_isChecksumValid() ;

constexpr ::StringW const& __cordl_internal_get_linkName() const;

constexpr ::StringW& __cordl_internal_get_linkName() ;

constexpr ::StringW const& __cordl_internal_get_magic() const;

constexpr ::StringW& __cordl_internal_get_magic() ;

constexpr ::System::DateTime const& __cordl_internal_get_modTime() const;

constexpr ::System::DateTime& __cordl_internal_get_modTime() ;

constexpr int32_t const& __cordl_internal_get_mode() const;

constexpr int32_t& __cordl_internal_get_mode() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int64_t const& __cordl_internal_get_size() const;

constexpr int64_t& __cordl_internal_get_size() ;

constexpr uint8_t const& __cordl_internal_get_typeFlag() const;

constexpr uint8_t& __cordl_internal_get_typeFlag() ;

constexpr int32_t const& __cordl_internal_get_userId() const;

constexpr int32_t& __cordl_internal_get_userId() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_checksum(int32_t  value) ;

constexpr void __cordl_internal_set_devMajor(int32_t  value) ;

constexpr void __cordl_internal_set_devMinor(int32_t  value) ;

constexpr void __cordl_internal_set_groupId(int32_t  value) ;

constexpr void __cordl_internal_set_groupName(::StringW  value) ;

constexpr void __cordl_internal_set_isChecksumValid(bool  value) ;

constexpr void __cordl_internal_set_linkName(::StringW  value) ;

constexpr void __cordl_internal_set_magic(::StringW  value) ;

constexpr void __cordl_internal_set_modTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_mode(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_size(int64_t  value) ;

constexpr void __cordl_internal_set_typeFlag(uint8_t  value) ;

constexpr void __cordl_internal_set_userId(int32_t  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fef66c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTime getStaticF_dateTime1970() ;

static inline int32_t getStaticF_defaultGroupId() ;

static inline ::StringW getStaticF_defaultGroupName() ;

static inline ::StringW getStaticF_defaultUser() ;

static inline int32_t getStaticF_defaultUserId() ;

static inline int32_t getStaticF_groupIdAsSet() ;

static inline ::StringW getStaticF_groupNameAsSet() ;

static inline int32_t getStaticF_userIdAsSet() ;

static inline ::StringW getStaticF_userNameAsSet() ;

/// @brief Method get_Checksum, addr 0x9ff1718, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Checksum() ;

/// @brief Method get_DevMajor, addr 0x9ff1760, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DevMajor() ;

/// @brief Method get_DevMinor, addr 0x9ff1770, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DevMinor() ;

/// @brief Method get_GroupId, addr 0x9ff16f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GroupId() ;

/// @brief Method get_GroupName, addr 0x9ff1758, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GroupName() ;

/// @brief Method get_IsChecksumValid, addr 0x9ff1720, size 0x8, virtual false, abstract: false, final false
inline bool get_IsChecksumValid() ;

/// @brief Method get_LinkName, addr 0x9ff1738, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LinkName() ;

/// @brief Method get_Magic, addr 0x9ff1740, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Magic() ;

/// @brief Method get_ModTime, addr 0x9ff1710, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ModTime() ;

/// @brief Method get_Mode, addr 0x9ff16d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Mode() ;

/// @brief Method get_Name, addr 0x9ff16c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Size, addr 0x9ff1708, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Size() ;

/// @brief Method get_TypeFlag, addr 0x9ff1728, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_TypeFlag() ;

/// @brief Method get_UserId, addr 0x9ff16e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_UserId() ;

/// @brief Method get_UserName, addr 0x9ff1750, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// @brief Method get_Version, addr 0x9ff1748, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Version() ;

static inline void setStaticF_dateTime1970(::System::DateTime  value) ;

static inline void setStaticF_defaultGroupId(int32_t  value) ;

static inline void setStaticF_defaultGroupName(::StringW  value) ;

static inline void setStaticF_defaultUser(::StringW  value) ;

static inline void setStaticF_defaultUserId(int32_t  value) ;

static inline void setStaticF_groupIdAsSet(int32_t  value) ;

static inline void setStaticF_groupNameAsSet(::StringW  value) ;

static inline void setStaticF_userIdAsSet(int32_t  value) ;

static inline void setStaticF_userNameAsSet(::StringW  value) ;

/// @brief Method set_DevMajor, addr 0x9ff1768, size 0x8, virtual false, abstract: false, final false
inline void set_DevMajor(int32_t  value) ;

/// @brief Method set_DevMinor, addr 0x9ff1778, size 0x8, virtual false, abstract: false, final false
inline void set_DevMinor(int32_t  value) ;

/// @brief Method set_GroupId, addr 0x9ff1700, size 0x8, virtual false, abstract: false, final false
inline void set_GroupId(int32_t  value) ;

/// @brief Method set_GroupName, addr 0x9ff06c8, size 0x64, virtual false, abstract: false, final false
inline void set_GroupName(::StringW  value) ;

/// @brief Method set_LinkName, addr 0x9ff0a90, size 0x58, virtual false, abstract: false, final false
inline void set_LinkName(::StringW  value) ;

/// @brief Method set_Magic, addr 0x9ff1618, size 0x58, virtual false, abstract: false, final false
inline void set_Magic(::StringW  value) ;

/// @brief Method set_ModTime, addr 0x9ff07a8, size 0x1ac, virtual false, abstract: false, final false
inline void set_ModTime(::System::DateTime  value) ;

/// @brief Method set_Mode, addr 0x9ff16e0, size 0x8, virtual false, abstract: false, final false
inline void set_Mode(int32_t  value) ;

/// @brief Method set_Name, addr 0x9ff04e0, size 0x58, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_Size, addr 0x9ff0988, size 0x70, virtual false, abstract: false, final false
inline void set_Size(int64_t  value) ;

/// @brief Method set_TypeFlag, addr 0x9ff1730, size 0x8, virtual false, abstract: false, final false
inline void set_TypeFlag(uint8_t  value) ;

/// @brief Method set_UserId, addr 0x9ff16f0, size 0x8, virtual false, abstract: false, final false
inline void set_UserId(int32_t  value) ;

/// @brief Method set_UserName, addr 0x9ff05c4, size 0xd8, virtual false, abstract: false, final false
inline void set_UserName(::StringW  value) ;

/// @brief Method set_Version, addr 0x9ff1670, size 0x58, virtual false, abstract: false, final false
inline void set_Version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarHeader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarHeader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarHeader(TarHeader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarHeader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarHeader(TarHeader const& ) = delete;

/// @brief Field CHKSUMLEN offset 0xffffffff size 0x4
static constexpr int32_t  CHKSUMLEN{static_cast<int32_t>(0x8)};

/// @brief Field CHKSUMOFS offset 0xffffffff size 0x4
static constexpr int32_t  CHKSUMOFS{static_cast<int32_t>(0x94)};

/// @brief Field DEVLEN offset 0xffffffff size 0x4
static constexpr int32_t  DEVLEN{static_cast<int32_t>(0x8)};

/// @brief Field GIDLEN offset 0xffffffff size 0x4
static constexpr int32_t  GIDLEN{static_cast<int32_t>(0x8)};

/// @brief Field GNAMELEN offset 0xffffffff size 0x4
static constexpr int32_t  GNAMELEN{static_cast<int32_t>(0x20)};

/// @brief Field GNU_TMAGIC offset 0xffffffff size 0x8
static constexpr ::ConstString  GNU_TMAGIC{u"ustar  "};

/// @brief Field LF_ACL offset 0xffffffff size 0x1
static constexpr uint8_t  LF_ACL{static_cast<uint8_t>(0x41u)};

/// @brief Field LF_BLK offset 0xffffffff size 0x1
static constexpr uint8_t  LF_BLK{static_cast<uint8_t>(0x34u)};

/// @brief Field LF_CHR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_CHR{static_cast<uint8_t>(0x33u)};

/// @brief Field LF_CONTIG offset 0xffffffff size 0x1
static constexpr uint8_t  LF_CONTIG{static_cast<uint8_t>(0x37u)};

/// @brief Field LF_DIR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_DIR{static_cast<uint8_t>(0x35u)};

/// @brief Field LF_EXTATTR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_EXTATTR{static_cast<uint8_t>(0x45u)};

/// @brief Field LF_FIFO offset 0xffffffff size 0x1
static constexpr uint8_t  LF_FIFO{static_cast<uint8_t>(0x36u)};

/// @brief Field LF_GHDR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GHDR{static_cast<uint8_t>(0x67u)};

/// @brief Field LF_GNU_DUMPDIR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_DUMPDIR{static_cast<uint8_t>(0x44u)};

/// @brief Field LF_GNU_LONGLINK offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_LONGLINK{static_cast<uint8_t>(0x4bu)};

/// @brief Field LF_GNU_LONGNAME offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_LONGNAME{static_cast<uint8_t>(0x4cu)};

/// @brief Field LF_GNU_MULTIVOL offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_MULTIVOL{static_cast<uint8_t>(0x4du)};

/// @brief Field LF_GNU_NAMES offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_NAMES{static_cast<uint8_t>(0x4eu)};

/// @brief Field LF_GNU_SPARSE offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_SPARSE{static_cast<uint8_t>(0x53u)};

/// @brief Field LF_GNU_VOLHDR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_GNU_VOLHDR{static_cast<uint8_t>(0x56u)};

/// @brief Field LF_LINK offset 0xffffffff size 0x1
static constexpr uint8_t  LF_LINK{static_cast<uint8_t>(0x31u)};

/// @brief Field LF_META offset 0xffffffff size 0x1
static constexpr uint8_t  LF_META{static_cast<uint8_t>(0x49u)};

/// @brief Field LF_NORMAL offset 0xffffffff size 0x1
static constexpr uint8_t  LF_NORMAL{static_cast<uint8_t>(0x30u)};

/// @brief Field LF_OLDNORM offset 0xffffffff size 0x1
static constexpr uint8_t  LF_OLDNORM{static_cast<uint8_t>(0x0u)};

/// @brief Field LF_SYMLINK offset 0xffffffff size 0x1
static constexpr uint8_t  LF_SYMLINK{static_cast<uint8_t>(0x32u)};

/// @brief Field LF_XHDR offset 0xffffffff size 0x1
static constexpr uint8_t  LF_XHDR{static_cast<uint8_t>(0x78u)};

/// @brief Field MAGICLEN offset 0xffffffff size 0x4
static constexpr int32_t  MAGICLEN{static_cast<int32_t>(0x6)};

/// @brief Field MODELEN offset 0xffffffff size 0x4
static constexpr int32_t  MODELEN{static_cast<int32_t>(0x8)};

/// @brief Field MODTIMELEN offset 0xffffffff size 0x4
static constexpr int32_t  MODTIMELEN{static_cast<int32_t>(0xc)};

/// @brief Field NAMELEN offset 0xffffffff size 0x4
static constexpr int32_t  NAMELEN{static_cast<int32_t>(0x64)};

/// @brief Field PREFIXLEN offset 0xffffffff size 0x4
static constexpr int32_t  PREFIXLEN{static_cast<int32_t>(0x9b)};

/// @brief Field SIZELEN offset 0xffffffff size 0x4
static constexpr int32_t  SIZELEN{static_cast<int32_t>(0xc)};

/// @brief Field TMAGIC offset 0xffffffff size 0x8
static constexpr ::ConstString  TMAGIC{u"ustar"};

/// @brief Field UIDLEN offset 0xffffffff size 0x4
static constexpr int32_t  UIDLEN{static_cast<int32_t>(0x8)};

/// @brief Field UNAMELEN offset 0xffffffff size 0x4
static constexpr int32_t  UNAMELEN{static_cast<int32_t>(0x20)};

/// @brief Field VERSIONLEN offset 0xffffffff size 0x4
static constexpr int32_t  VERSIONLEN{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17395};

/// @brief Field timeConversionFactor offset 0xffffffff size 0x8
static constexpr int64_t  timeConversionFactor{static_cast<int64_t>(0x989680)};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field mode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mode;

/// @brief Field userId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___userId;

/// @brief Field groupId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___groupId;

/// @brief Field size, offset: 0x28, size: 0x8, def value: None
 int64_t  ___size;

/// @brief Field modTime, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___modTime;

/// @brief Field checksum, offset: 0x38, size: 0x4, def value: None
 int32_t  ___checksum;

/// @brief Field isChecksumValid, offset: 0x3c, size: 0x1, def value: None
 bool  ___isChecksumValid;

/// @brief Field typeFlag, offset: 0x3d, size: 0x1, def value: None
 uint8_t  ___typeFlag;

/// @brief Field linkName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___linkName;

/// @brief Field magic, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___magic;

/// @brief Field version, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___version;

/// @brief Field userName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field groupName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___groupName;

/// @brief Field devMajor, offset: 0x68, size: 0x4, def value: None
 int32_t  ___devMajor;

/// @brief Field devMinor, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___devMinor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___mode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___userId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___groupId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___modTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___checksum) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___isChecksumValid) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___typeFlag) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___linkName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___magic) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___version) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___userName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___groupName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___devMajor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarHeader, ___devMinor) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarHeader) == 0x70, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
