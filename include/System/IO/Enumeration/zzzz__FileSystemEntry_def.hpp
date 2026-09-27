#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_Sys_DirectoryEntry_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry___fileNameBuffer_e__FixedBuffer_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FileSystemEntry)
namespace GlobalNamespace {
struct FileSystemEntry___fileNameBuffer_e__FixedBuffer;
}
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
// Write type traits
MARK_VAL_T(::System::IO::Enumeration::FileSystemEntry);
DEFINE_IL2CPP_CLASS(::System::IO::Enumeration::FileSystemEntry, "System.IO.Enumeration", "FileSystemEntry");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies Interop::Sys::DirectoryEntry, System.IO.Enumeration.FileSystemEntry::<_fileNameBuffer>e__FixedBuffer, System.IO.FileAttributes, System.IO.FileStatus, System.ReadOnlySpan`1<T>, System.Span`1<T>
namespace System::IO::Enumeration {
// Is value type: true
// CS Name: System.IO.Enumeration.FileSystemEntry
struct CORDL_TYPE FileSystemEntry {
public:
// Declarations
using __fileNameBuffer_e__FixedBuffer = ::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer;

 __declspec(property(get=get_Attributes)) ::System::IO::FileAttributes  Attributes;

 __declspec(property(get=get_Directory, put=set_Directory)) ::System::ReadOnlySpan_1<char16_t>  Directory;

 __declspec(property(get=get_FileName)) ::System::ReadOnlySpan_1<char16_t>  FileName;

 __declspec(property(get=get_FullPath)) ::System::ReadOnlySpan_1<char16_t>  FullPath;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

 __declspec(property(get=get_OriginalRootDirectory, put=set_OriginalRootDirectory)) ::System::ReadOnlySpan_1<char16_t>  OriginalRootDirectory;

 __declspec(property(get=get_RootDirectory, put=set_RootDirectory)) ::System::ReadOnlySpan_1<char16_t>  RootDirectory;

/// @brief Method Initialize, addr 0xa2b66c8, size 0x2fc, virtual false, abstract: false, final false
static inline ::System::IO::FileAttributes Initialize(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry, ::GlobalNamespace::Sys_Interop_DirectoryEntry  directoryEntry, ::System::ReadOnlySpan_1<char16_t>  directory, ::System::ReadOnlySpan_1<char16_t>  rootDirectory, ::System::ReadOnlySpan_1<char16_t>  originalRootDirectory, ::System::Span_1<char16_t>  pathBuffer) ;

/// @brief Method ToFileSystemInfo, addr 0xa2b6c0c, size 0x70, virtual false, abstract: false, final false
inline ::System::IO::FileSystemInfo* ToFileSystemInfo() ;

/// @brief Method ToFullPath, addr 0xa2b6c7c, size 0x28, virtual false, abstract: false, final false
inline ::StringW ToFullPath() ;

/// @brief Method ToSpecifiedFullPath, addr 0xa2b6ca4, size 0x18c, virtual false, abstract: false, final false
inline ::StringW ToSpecifiedFullPath() ;

/// @brief Method get_Attributes, addr 0xa2b6bbc, size 0x48, virtual false, abstract: false, final false
inline ::System::IO::FileAttributes get_Attributes() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_Directory, addr 0xa2b6b68, size 0x10, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_Directory() ;

/// @brief Method get_FileName, addr 0xa2b6af8, size 0x70, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_FileName() ;

/// @brief Method get_FullPath, addr 0xa2b69c4, size 0x134, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_FullPath() ;

/// @brief Method get_IsDirectory, addr 0xa2b6c04, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirectory() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_OriginalRootDirectory, addr 0xa2b6ba0, size 0x10, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_OriginalRootDirectory() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_RootDirectory, addr 0xa2b6b84, size 0x10, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_RootDirectory() ;

/// [CompilerGenerated]
/// @brief Method set_Directory, addr 0xa2b6b78, size 0xc, virtual false, abstract: false, final false
inline void set_Directory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_OriginalRootDirectory, addr 0xa2b6bb0, size 0xc, virtual false, abstract: false, final false
inline void set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_RootDirectory, addr 0xa2b6b94, size 0xc, virtual false, abstract: false, final false
inline void set_RootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemEntry() ;

// Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::Sys_Interop_DirectoryEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "_status", ty: "::System::IO::FileStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fullPath", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fileNameBuffer", ty: "::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_initialAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }]
constexpr FileSystemEntry(::GlobalNamespace::Sys_Interop_DirectoryEntry  _directoryEntry, ::System::IO::FileStatus  _status, ::System::Span_1<char16_t>  _pathBuffer, ::System::ReadOnlySpan_1<char16_t>  _fullPath, ::System::ReadOnlySpan_1<char16_t>  _fileName, ::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer  _fileNameBuffer, ::System::IO::FileAttributes  _initialAttributes, ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2f0};

/// @brief Field _directoryEntry, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::Sys_Interop_DirectoryEntry  _directoryEntry;

/// @brief Field _status, offset: 0x10, size: 0x78, def value: None
 ::System::IO::FileStatus  _status;

/// @brief Field _pathBuffer, offset: 0x88, size: 0x10, def value: None
 ::System::Span_1<char16_t>  _pathBuffer;

/// @brief Field _fullPath, offset: 0x98, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _fullPath;

/// @brief Field _fileName, offset: 0xa8, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _fileName;

/// [FixedBuffer(typeof(System.Char), 256)]
/// @brief Field _fileNameBuffer, offset: 0xb8, size: 0x200, def value: None
 ::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer  _fileNameBuffer;

/// @brief Field _initialAttributes, offset: 0x2b8, size: 0x4, def value: None
 ::System::IO::FileAttributes  _initialAttributes;

/// [CompilerGenerated]
/// @brief Field <Directory>k__BackingField, offset: 0x2c0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RootDirectory>k__BackingField, offset: 0x2d0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OriginalRootDirectory>k__BackingField, offset: 0x2e0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _directoryEntry) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _pathBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fullPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fileName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fileNameBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _initialAttributes) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _Directory_k__BackingField) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _RootDirectory_k__BackingField) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _OriginalRootDirectory_k__BackingField) == 0x2e0, "Offset mismatch!");

static_assert(sizeof(::System::IO::Enumeration::FileSystemEntry) == 0x2f0, "Size mismatch!");

} // namespace end def System::IO::Enumeration
