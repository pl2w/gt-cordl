#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchOption;
}
namespace System::IO {
struct SearchTarget;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Write type traits
MARK_REF_T(::System::IO::Directory*);
DEFINE_IL2CPP_CLASS(::System::IO::Directory*, "System.IO", "Directory");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Directory
class CORDL_TYPE Directory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDirectory, addr 0xa2962e0, size 0x144, virtual false, abstract: false, final false
static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW  path) ;

/// @brief Method Delete, addr 0xa297944, size 0x70, virtual false, abstract: false, final false
static inline void Delete(::StringW  path, bool  recursive) ;

/// @brief Method EnumerateDirectories, addr 0xa297030, size 0xac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW  path) ;

/// @brief Method EnumerateDirectories, addr 0xa2970dc, size 0xc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method EnumerateDirectories, addr 0xa2970e8, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption) ;

/// @brief Method EnumerateFileSystemEntries, addr 0xa297330, size 0xac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path) ;

/// @brief Method EnumerateFileSystemEntries, addr 0xa2973e8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern) ;

/// @brief Method EnumerateFileSystemEntries, addr 0xa2973dc, size 0xc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method EnumerateFiles, addr 0xa297324, size 0xc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method EnumerateFiles, addr 0xa2972ac, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption) ;

/// @brief Method Exists, addr 0xa29646c, size 0x174, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetCurrentDirectory, addr 0xa297544, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetCurrentDirectory() ;

/// @brief Method GetDirectories, addr 0xa296e10, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetDirectories(::StringW  path) ;

/// @brief Method GetDirectories, addr 0xa296eb8, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetFileSystemEntries, addr 0xa296f20, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFileSystemEntries(::StringW  path) ;

/// @brief Method GetFileSystemEntries, addr 0xa296fc8, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetFiles, addr 0xa296aa0, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path) ;

/// @brief Method GetFiles, addr 0xa296bb0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path, ::StringW  searchPattern) ;

/// @brief Method GetFiles, addr 0xa296b48, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetParent, addr 0xa296120, size 0x13c, virtual false, abstract: false, final false
static inline ::System::IO::DirectoryInfo* GetParent(::StringW  path) ;

/// @brief Method InsecureGetCurrentDirectory, addr 0xa2979b4, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW InsecureGetCurrentDirectory() ;

/// @brief Method InternalEnumeratePaths, addr 0xa296c50, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method InternalGetDirectoryRoot, addr 0xa29748c, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW InternalGetDirectoryRoot(::StringW  path) ;

/// @brief Method Move, addr 0xa29754c, size 0x3f8, virtual false, abstract: false, final false
static inline void Move(::StringW  sourceDirName, ::StringW  destDirName) ;

/// @brief Method SetCreationTime, addr 0xa2965e0, size 0xbc, virtual false, abstract: false, final false
static inline void SetCreationTime(::StringW  path, ::System::DateTime  creationTime) ;

/// @brief Method SetCreationTimeUtc, addr 0xa29669c, size 0x90, virtual false, abstract: false, final false
static inline void SetCreationTimeUtc(::StringW  path, ::System::DateTime  creationTimeUtc) ;

/// @brief Method SetLastAccessTime, addr 0xa296954, size 0xbc, virtual false, abstract: false, final false
static inline void SetLastAccessTime(::StringW  path, ::System::DateTime  lastAccessTime) ;

/// @brief Method SetLastAccessTimeUtc, addr 0xa296a10, size 0x90, virtual false, abstract: false, final false
static inline void SetLastAccessTimeUtc(::StringW  path, ::System::DateTime  lastAccessTimeUtc) ;

/// @brief Method SetLastWriteTime, addr 0xa296808, size 0xbc, virtual false, abstract: false, final false
static inline void SetLastWriteTime(::StringW  path, ::System::DateTime  lastWriteTime) ;

/// @brief Method SetLastWriteTimeUtc, addr 0xa2968c4, size 0x90, virtual false, abstract: false, final false
static inline void SetLastWriteTimeUtc(::StringW  path, ::System::DateTime  lastWriteTimeUtc) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Directory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Directory(Directory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Directory(Directory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::Directory) == 0x10, "Size mismatch!");

} // namespace end def System::IO
