#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarEntry)
namespace ICSharpCode::SharpZipLib::Tar {
class TarHeader;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarEntry;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarEntry*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarEntry*, "ICSharpCode.SharpZipLib.Tar", "TarEntry");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarEntry
class CORDL_TYPE TarEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_File)) ::StringW  File;

 __declspec(property(get=get_GroupId, put=set_GroupId)) int32_t  GroupId;

 __declspec(property(get=get_GroupName, put=set_GroupName)) ::StringW  GroupName;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

 __declspec(property(get=get_ModTime, put=set_ModTime)) ::System::DateTime  ModTime;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Size, put=set_Size)) int64_t  Size;

 __declspec(property(get=get_TarHeader)) ::ICSharpCode::SharpZipLib::Tar::TarHeader*  TarHeader;

 __declspec(property(get=get_UserId, put=set_UserId)) int32_t  UserId;

 __declspec(property(get=get_UserName, put=set_UserName)) ::StringW  UserName;

/// @brief Field file, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_file, put=__cordl_internal_set_file)) ::StringW  file;

/// @brief Field header, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_header, put=__cordl_internal_set_header)) ::ICSharpCode::SharpZipLib::Tar::TarHeader*  header;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method AdjustEntryName, addr 0x9ff0f90, size 0x8, virtual false, abstract: false, final false
static inline void AdjustEntryName(::ArrayW<uint8_t>  buffer, ::StringW  newName) ;

/// @brief Method AdjustEntryName, addr 0x9ff0f98, size 0x74, virtual false, abstract: false, final false
static inline void AdjustEntryName(::ArrayW<uint8_t>  buffer, ::StringW  newName, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method Clone, addr 0x9fefc98, size 0x124, virtual false, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method CreateEntryFromFile, addr 0x9feffe0, size 0x6c, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntryFromFile(::StringW  fileName) ;

/// @brief Method CreateTarEntry, addr 0x9fefde8, size 0x68, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateTarEntry(::StringW  name) ;

/// @brief Method Equals, addr 0x9ff0388, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetDirectoryEntries, addr 0x9ff0ae8, size 0x138, virtual false, abstract: false, final false
inline ::ArrayW<::ICSharpCode::SharpZipLib::Tar::TarEntry*> GetDirectoryEntries() ;

/// @brief Method GetFileTarHeader, addr 0x9ff004c, size 0x33c, virtual false, abstract: false, final false
inline void GetFileTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header, ::StringW  file) ;

/// @brief Method GetHashCode, addr 0x9ff0430, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDescendent, addr 0x9ff0458, size 0x80, virtual false, abstract: false, final false
inline bool IsDescendent(::ICSharpCode::SharpZipLib::Tar::TarEntry*  toTest) ;

/// @brief Method NameTarHeader, addr 0x9fefe50, size 0x190, virtual false, abstract: false, final false
static inline void NameTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header, ::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* New_ctor(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header) ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* New_ctor(::ArrayW<uint8_t>  headerBuffer) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* New_ctor(::ArrayW<uint8_t>  headerBuffer, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method SetIds, addr 0x9ff072c, size 0x18, virtual false, abstract: false, final false
inline void SetIds(int32_t  userId, int32_t  groupId) ;

/// @brief Method SetNames, addr 0x9ff0744, size 0x38, virtual false, abstract: false, final false
inline void SetNames(::StringW  userName, ::StringW  groupName) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method WriteEntryHeader, addr 0x9ff0c20, size 0x18, virtual false, abstract: false, final false
inline void WriteEntryHeader(::ArrayW<uint8_t>  outBuffer) ;

/// @brief Method WriteEntryHeader, addr 0x9ff0c38, size 0x14, virtual false, abstract: false, final false
inline void WriteEntryHeader(::ArrayW<uint8_t>  outBuffer, ::System::Text::Encoding*  nameEncoding) ;

constexpr ::StringW const& __cordl_internal_get_file() const;

constexpr ::StringW& __cordl_internal_get_file() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarHeader* const& __cordl_internal_get_header() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarHeader*& __cordl_internal_get_header() ;

constexpr void __cordl_internal_set_file(::StringW  value) ;

constexpr void __cordl_internal_set_header(::ICSharpCode::SharpZipLib::Tar::TarHeader*  value) ;

/// @brief Method .ctor, addr 0x9fef604, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fefb78, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9fef778, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  headerBuffer) ;

/// @brief Method .ctor, addr 0x9fef780, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  headerBuffer, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method get_File, addr 0x9ff0954, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_File() ;

/// @brief Method get_GroupId, addr 0x9ff0568, size 0x18, virtual false, abstract: false, final false
inline int32_t get_GroupId() ;

/// @brief Method get_GroupName, addr 0x9ff069c, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_GroupName() ;

/// @brief Method get_IsDirectory, addr 0x9ff09f8, size 0x98, virtual false, abstract: false, final false
inline bool get_IsDirectory() ;

/// @brief Method get_ModTime, addr 0x9ff077c, size 0x18, virtual false, abstract: false, final false
inline ::System::DateTime get_ModTime() ;

/// @brief Method get_Name, addr 0x9fefdbc, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Size, addr 0x9ff095c, size 0x18, virtual false, abstract: false, final false
inline int64_t get_Size() ;

/// @brief Method get_TarHeader, addr 0x9ff04d8, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Tar::TarHeader* get_TarHeader() ;

/// @brief Method get_UserId, addr 0x9ff0538, size 0x18, virtual false, abstract: false, final false
inline int32_t get_UserId() ;

/// @brief Method get_UserName, addr 0x9ff0598, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// @brief Method set_GroupId, addr 0x9ff0580, size 0x18, virtual false, abstract: false, final false
inline void set_GroupId(int32_t  value) ;

/// @brief Method set_GroupName, addr 0x9ff06b4, size 0x14, virtual false, abstract: false, final false
inline void set_GroupName(::StringW  value) ;

/// @brief Method set_ModTime, addr 0x9ff0794, size 0x14, virtual false, abstract: false, final false
inline void set_ModTime(::System::DateTime  value) ;

/// @brief Method set_Name, addr 0x9fefdd4, size 0x14, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_Size, addr 0x9ff0974, size 0x14, virtual false, abstract: false, final false
inline void set_Size(int64_t  value) ;

/// @brief Method set_UserId, addr 0x9ff0550, size 0x18, virtual false, abstract: false, final false
inline void set_UserId(int32_t  value) ;

/// @brief Method set_UserName, addr 0x9ff05b0, size 0x14, virtual false, abstract: false, final false
inline void set_UserName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarEntry(TarEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarEntry(TarEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17392};

/// @brief Field file, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___file;

/// @brief Field header, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarHeader*  ___header;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarEntry, ___file) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarEntry, ___header) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarEntry) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
