#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarArchive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarArchive)
namespace ICSharpCode::SharpZipLib::Tar {
class ProgressMessageHandler;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarEntry;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarOutputStream;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarArchive;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarArchive*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarArchive*, "ICSharpCode.SharpZipLib.Tar", "TarArchive");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarArchive
class CORDL_TYPE TarArchive : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ApplyUserInfoOverrides, put=set_ApplyUserInfoOverrides)) bool  ApplyUserInfoOverrides;

 __declspec(property(get=get_AsciiTranslate, put=set_AsciiTranslate)) bool  AsciiTranslate;

 __declspec(property(get=get_GroupId)) int32_t  GroupId;

 __declspec(property(get=get_GroupName)) ::StringW  GroupName;

 __declspec(property(put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_PathPrefix, put=set_PathPrefix)) ::StringW  PathPrefix;

/// @brief Field ProgressMessageEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProgressMessageEvent, put=__cordl_internal_set_ProgressMessageEvent)) ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  ProgressMessageEvent;

 __declspec(property(get=get_RecordSize)) int32_t  RecordSize;

 __declspec(property(get=get_RootPath, put=set_RootPath)) ::StringW  RootPath;

 __declspec(property(get=get_UserId)) int32_t  UserId;

 __declspec(property(get=get_UserName)) ::StringW  UserName;

/// @brief Field applyUserInfoOverrides, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyUserInfoOverrides, put=__cordl_internal_set_applyUserInfoOverrides)) bool  applyUserInfoOverrides;

/// @brief Field asciiTranslate, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_asciiTranslate, put=__cordl_internal_set_asciiTranslate)) bool  asciiTranslate;

/// @brief Field groupId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupId, put=__cordl_internal_set_groupId)) int32_t  groupId;

/// @brief Field groupName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupName, put=__cordl_internal_set_groupName)) ::StringW  groupName;

/// @brief Field isDisposed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field keepOldFiles, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepOldFiles, put=__cordl_internal_set_keepOldFiles)) bool  keepOldFiles;

/// @brief Field pathPrefix, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathPrefix, put=__cordl_internal_set_pathPrefix)) ::StringW  pathPrefix;

/// @brief Field rootPath, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootPath, put=__cordl_internal_set_rootPath)) ::StringW  rootPath;

/// @brief Field tarIn, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tarIn, put=__cordl_internal_set_tarIn)) ::ICSharpCode::SharpZipLib::Tar::TarInputStream*  tarIn;

/// @brief Field tarOut, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tarOut, put=__cordl_internal_set_tarOut)) ::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  tarOut;

/// @brief Field userId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) int32_t  userId;

/// @brief Field userName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0x9fdcd6c, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// [Obsolete("Use Close instead")]
/// @brief Method CloseArchive, addr 0x9fdb744, size 0xc, virtual false, abstract: false, final false
inline void CloseArchive() ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method CreateInputTarArchive, addr 0x9fdabf8, size 0x8, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive(::System::IO::Stream*  inputStream) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method CreateInputTarArchive, addr 0x9fdae44, size 0x8, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive(::System::IO::Stream*  inputStream, int32_t  blockFactor) ;

/// @brief Method CreateInputTarArchive, addr 0x9fdad00, size 0x144, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method CreateInputTarArchive, addr 0x9fdac00, size 0x100, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateInputTarArchive(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method CreateOutputTarArchive, addr 0x9fdb090, size 0x8, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive(::System::IO::Stream*  outputStream) ;

/// @brief Method CreateOutputTarArchive, addr 0x9fdb098, size 0x8, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive(::System::IO::Stream*  outputStream, int32_t  blockFactor) ;

/// @brief Method CreateOutputTarArchive, addr 0x9fdaf4c, size 0x144, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method CreateOutputTarArchive, addr 0x9fdae4c, size 0x100, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* CreateOutputTarArchive(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method Dispose, addr 0x9fdcc9c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9fdcd08, size 0x64, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnsureDirectoryExists, addr 0x9fdbccc, size 0x138, virtual false, abstract: false, final false
static inline void EnsureDirectoryExists(::StringW  directoryName) ;

/// @brief Method ExtractAndTranslateEntry, addr 0x9fdbe04, size 0x2c4, virtual false, abstract: false, final false
inline void ExtractAndTranslateEntry(::StringW  destFile, ::System::IO::Stream*  outputStream) ;

/// @brief Method ExtractContents, addr 0x9fdb7e4, size 0x8, virtual false, abstract: false, final false
inline void ExtractContents(::StringW  destinationDirectory) ;

/// @brief Method ExtractContents, addr 0x9fdb7ec, size 0x110, virtual false, abstract: false, final false
inline void ExtractContents(::StringW  destinationDirectory, bool  allowParentTraversal) ;

/// @brief Method ExtractEntry, addr 0x9fdb8fc, size 0x3d0, virtual false, abstract: false, final false
inline void ExtractEntry(::StringW  destDir, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, bool  allowParentTraversal) ;

/// @brief Method Finalize, addr 0x9fdcd7c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method IsBinary, addr 0x9fdc0c8, size 0x24c, virtual false, abstract: false, final false
static inline bool IsBinary(::StringW  filename) ;

/// @brief Method ListContents, addr 0x9fdb750, size 0x94, virtual false, abstract: false, final false
inline void ListContents() ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* New_ctor(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarArchive* New_ctor(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  stream) ;

/// @brief Method OnProgressMessageEvent, addr 0x9fdaa10, size 0x2c, virtual true, abstract: false, final false
inline void OnProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message) ;

/// [Obsolete("Use the AsciiTranslate property")]
/// @brief Method SetAsciiTranslation, addr 0x9fdb1bc, size 0x60, virtual false, abstract: false, final false
inline void SetAsciiTranslation(bool  translateAsciiFiles) ;

/// @brief Method SetKeepOldFiles, addr 0x9fdb0a0, size 0x60, virtual false, abstract: false, final false
inline void SetKeepOldFiles(bool  keepExistingFiles) ;

/// @brief Method SetUserInfo, addr 0x9fdb3c8, size 0x9c, virtual false, abstract: false, final false
inline void SetUserInfo(int32_t  userId, ::StringW  userName, int32_t  groupId, ::StringW  groupName) ;

/// @brief Method WriteEntry, addr 0x9fdc314, size 0x204, virtual false, abstract: false, final false
inline void WriteEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  sourceEntry, bool  recurse) ;

/// @brief Method WriteEntryCore, addr 0x9fdc518, size 0x784, virtual false, abstract: false, final false
inline void WriteEntryCore(::ICSharpCode::SharpZipLib::Tar::TarEntry*  sourceEntry, bool  recurse) ;

constexpr ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* const& __cordl_internal_get_ProgressMessageEvent() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*& __cordl_internal_get_ProgressMessageEvent() ;

constexpr bool const& __cordl_internal_get_applyUserInfoOverrides() const;

constexpr bool& __cordl_internal_get_applyUserInfoOverrides() ;

constexpr bool const& __cordl_internal_get_asciiTranslate() const;

constexpr bool& __cordl_internal_get_asciiTranslate() ;

constexpr int32_t const& __cordl_internal_get_groupId() const;

constexpr int32_t& __cordl_internal_get_groupId() ;

constexpr ::StringW const& __cordl_internal_get_groupName() const;

constexpr ::StringW& __cordl_internal_get_groupName() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr bool const& __cordl_internal_get_keepOldFiles() const;

constexpr bool& __cordl_internal_get_keepOldFiles() ;

constexpr ::StringW const& __cordl_internal_get_pathPrefix() const;

constexpr ::StringW& __cordl_internal_get_pathPrefix() ;

constexpr ::StringW const& __cordl_internal_get_rootPath() const;

constexpr ::StringW& __cordl_internal_get_rootPath() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream* const& __cordl_internal_get_tarIn() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream*& __cordl_internal_get_tarIn() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* const& __cordl_internal_get_tarOut() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarOutputStream*& __cordl_internal_get_tarOut() ;

constexpr int32_t const& __cordl_internal_get_userId() const;

constexpr int32_t& __cordl_internal_get_userId() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr void __cordl_internal_set_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value) ;

constexpr void __cordl_internal_set_applyUserInfoOverrides(bool  value) ;

constexpr void __cordl_internal_set_asciiTranslate(bool  value) ;

constexpr void __cordl_internal_set_groupId(int32_t  value) ;

constexpr void __cordl_internal_set_groupName(::StringW  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_keepOldFiles(bool  value) ;

constexpr void __cordl_internal_set_pathPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_rootPath(::StringW  value) ;

constexpr void __cordl_internal_set_tarIn(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  value) ;

constexpr void __cordl_internal_set_tarOut(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  value) ;

constexpr void __cordl_internal_set_userId(int32_t  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fdaa3c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fdaa90, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Tar::TarInputStream*  stream) ;

/// @brief Method .ctor, addr 0x9fdab44, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  stream) ;

/// [CompilerGenerated]
/// @brief Method add_ProgressMessageEvent, addr 0x9fda8d8, size 0x9c, virtual false, abstract: false, final false
inline void add_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value) ;

/// @brief Method get_ApplyUserInfoOverrides, addr 0x9fdb464, size 0x5c, virtual false, abstract: false, final false
inline bool get_ApplyUserInfoOverrides() ;

/// @brief Method get_AsciiTranslate, addr 0x9fdb100, size 0x5c, virtual false, abstract: false, final false
inline bool get_AsciiTranslate() ;

/// @brief Method get_GroupId, addr 0x9fdb5d8, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_GroupId() ;

/// @brief Method get_GroupName, addr 0x9fdb634, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_GroupName() ;

/// @brief Method get_PathPrefix, addr 0x9fdb21c, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_PathPrefix() ;

/// @brief Method get_RecordSize, addr 0x9fdb690, size 0x80, virtual false, abstract: false, final false
inline int32_t get_RecordSize() ;

/// @brief Method get_RootPath, addr 0x9fdb2d4, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_RootPath() ;

/// @brief Method get_UserId, addr 0x9fdb520, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_UserId() ;

/// @brief Method get_UserName, addr 0x9fdb57c, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ProgressMessageEvent, addr 0x9fda974, size 0x9c, virtual false, abstract: false, final false
inline void remove_ProgressMessageEvent(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  value) ;

/// @brief Method set_ApplyUserInfoOverrides, addr 0x9fdb4c0, size 0x60, virtual false, abstract: false, final false
inline void set_ApplyUserInfoOverrides(bool  value) ;

/// @brief Method set_AsciiTranslate, addr 0x9fdb15c, size 0x60, virtual false, abstract: false, final false
inline void set_AsciiTranslate(bool  value) ;

/// @brief Method set_IsStreamOwner, addr 0x9fdb710, size 0x34, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_PathPrefix, addr 0x9fdb278, size 0x5c, virtual false, abstract: false, final false
inline void set_PathPrefix(::StringW  value) ;

/// @brief Method set_RootPath, addr 0x9fdb330, size 0x98, virtual false, abstract: false, final false
inline void set_RootPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarArchive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarArchive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarArchive(TarArchive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarArchive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarArchive(TarArchive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17390};

/// [CompilerGenerated]
/// @brief Field ProgressMessageEvent, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*  ___ProgressMessageEvent;

/// @brief Field keepOldFiles, offset: 0x18, size: 0x1, def value: None
 bool  ___keepOldFiles;

/// @brief Field asciiTranslate, offset: 0x19, size: 0x1, def value: None
 bool  ___asciiTranslate;

/// @brief Field userId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___userId;

/// @brief Field userName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field groupId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___groupId;

/// @brief Field groupName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___groupName;

/// @brief Field rootPath, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___rootPath;

/// @brief Field pathPrefix, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___pathPrefix;

/// @brief Field applyUserInfoOverrides, offset: 0x48, size: 0x1, def value: None
 bool  ___applyUserInfoOverrides;

/// @brief Field tarIn, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarInputStream*  ___tarIn;

/// @brief Field tarOut, offset: 0x58, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarOutputStream*  ___tarOut;

/// @brief Field isDisposed, offset: 0x60, size: 0x1, def value: None
 bool  ___isDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___ProgressMessageEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___keepOldFiles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___asciiTranslate) == 0x19, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___userId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___groupId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___groupName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___rootPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___pathPrefix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___applyUserInfoOverrides) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___tarIn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___tarOut) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarArchive, ___isDisposed) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarArchive) == 0x68, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
