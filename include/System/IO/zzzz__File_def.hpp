#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Write type traits
MARK_REF_T(::System::IO::File*);
DEFINE_IL2CPP_CLASS(::System::IO::File*, "System.IO", "File");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.File
class CORDL_TYPE File : public ::System::Object {
public:
// Declarations
/// @brief Method AppendText, addr 0xa2986e8, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IO::StreamWriter* AppendText(::StringW  path) ;

/// @brief Method Copy, addr 0xa298790, size 0x8, virtual false, abstract: false, final false
static inline void Copy(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Copy, addr 0xa298798, size 0x198, virtual false, abstract: false, final false
static inline void Copy(::StringW  sourceFileName, ::StringW  destFileName, bool  overwrite) ;

/// @brief Method Create, addr 0xa298930, size 0x8, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path) ;

/// @brief Method Create, addr 0xa298938, size 0x78, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path, int32_t  bufferSize) ;

/// @brief Method CreateText, addr 0xa298640, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IO::StreamWriter* CreateText(::StringW  path) ;

/// @brief Method Delete, addr 0xa2989b0, size 0xac, virtual false, abstract: false, final false
static inline void Delete(::StringW  path) ;

/// @brief Method Exists, addr 0xa286980, size 0x1c0, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetAttributes, addr 0xa2990d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IO::FileAttributes GetAttributes(::StringW  path) ;

/// @brief Method GetCreationTime, addr 0xa298c40, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime GetCreationTime(::StringW  path) ;

/// @brief Method GetLastWriteTime, addr 0xa298f80, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime GetLastWriteTime(::StringW  path) ;

/// @brief Method GetLastWriteTimeUtc, addr 0xa299028, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime GetLastWriteTimeUtc(::StringW  path) ;

/// @brief Method GetUtcDateTimeOffset, addr 0xa29672c, size 0xdc, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset GetUtcDateTimeOffset(::System::DateTime  dateTime) ;

/// @brief Method InternalReadAllLines, addr 0xa29a1c4, size 0x260, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> InternalReadAllLines(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalReadAllText, addr 0xa2993dc, size 0x178, virtual false, abstract: false, final false
static inline ::StringW InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalWriteAllBytes, addr 0xa299f84, size 0x17c, virtual false, abstract: false, final false
static inline void InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method Move, addr 0xa29a424, size 0x234, virtual false, abstract: false, final false
static inline void Move(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Open, addr 0xa298a5c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode) ;

/// @brief Method Open, addr 0xa298a70, size 0x84, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share) ;

/// @brief Method OpenRead, addr 0xa299248, size 0x68, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenRead(::StringW  path) ;

/// @brief Method OpenText, addr 0xa298584, size 0xbc, virtual false, abstract: false, final false
static inline ::System::IO::StreamReader* OpenText(::StringW  path) ;

/// @brief Method OpenWrite, addr 0xa2992b0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenWrite(::StringW  path) ;

/// @brief Method ReadAllBytes, addr 0xa299748, size 0x280, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadAllBytes(::StringW  path) ;

/// @brief Method ReadAllBytesUnknownLength, addr 0xa2999c8, size 0x4c0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadAllBytesUnknownLength(::System::IO::FileStream*  fs) ;

/// @brief Method ReadAllLines, addr 0xa29a100, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> ReadAllLines(::StringW  path) ;

/// @brief Method ReadAllText, addr 0xa299318, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  path) ;

/// @brief Method SetAttributes, addr 0xa299130, size 0x118, virtual false, abstract: false, final false
static inline void SetAttributes(::StringW  path, ::System::IO::FileAttributes  fileAttributes) ;

/// @brief Method SetCreationTime, addr 0xa298af4, size 0xbc, virtual false, abstract: false, final false
static inline void SetCreationTime(::StringW  path, ::System::DateTime  creationTime) ;

/// @brief Method SetCreationTimeUtc, addr 0xa298bb0, size 0x90, virtual false, abstract: false, final false
static inline void SetCreationTimeUtc(::StringW  path, ::System::DateTime  creationTimeUtc) ;

/// @brief Method SetLastAccessTime, addr 0xa298ce8, size 0xbc, virtual false, abstract: false, final false
static inline void SetLastAccessTime(::StringW  path, ::System::DateTime  lastAccessTime) ;

/// @brief Method SetLastAccessTimeUtc, addr 0xa298da4, size 0x90, virtual false, abstract: false, final false
static inline void SetLastAccessTimeUtc(::StringW  path, ::System::DateTime  lastAccessTimeUtc) ;

/// @brief Method SetLastWriteTime, addr 0xa298e34, size 0xbc, virtual false, abstract: false, final false
static inline void SetLastWriteTime(::StringW  path, ::System::DateTime  lastWriteTime) ;

/// @brief Method SetLastWriteTimeUtc, addr 0xa298ef0, size 0x90, virtual false, abstract: false, final false
static inline void SetLastWriteTimeUtc(::StringW  path, ::System::DateTime  lastWriteTimeUtc) ;

/// @brief Method WriteAllBytes, addr 0xa299e88, size 0xfc, virtual false, abstract: false, final false
static inline void WriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method WriteAllText, addr 0xa299554, size 0x1f4, virtual false, abstract: false, final false
static inline void WriteAllText(::StringW  path, ::StringW  contents) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
File(File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
File(File const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::File) == 0x10, "Size mismatch!");

} // namespace end def System::IO
