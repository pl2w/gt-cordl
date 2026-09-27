#pragma once
// IWYU pragma private; include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemInfo)
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileStatus;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class FileSystemInfo;
}
// Write type traits
MARK_REF_T(::System::IO::FileSystemInfo*);
DEFINE_IL2CPP_CLASS(::System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
// Dependencies System.IO.FileStatus, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystemInfo
class CORDL_TYPE FileSystemInfo : public ::System::MarshalByRefObject {
public:
// Declarations
 __declspec(property(get=get_Attributes, put=set_Attributes)) ::System::IO::FileAttributes  Attributes;

 __declspec(property(get=get_CreationTime)) ::System::DateTime  CreationTime;

 __declspec(property(get=get_CreationTimeCore, put=set_CreationTimeCore)) ::System::DateTimeOffset  CreationTimeCore;

 __declspec(property(get=get_CreationTimeUtc)) ::System::DateTime  CreationTimeUtc;

 __declspec(property(get=get_Exists)) bool  Exists;

 __declspec(property(get=get_ExistsCore)) bool  ExistsCore;

 __declspec(property(get=get_Extension)) ::StringW  Extension;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

/// @brief Field FullPath, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_FullPath, put=__cordl_internal_set_FullPath)) ::StringW  FullPath;

 __declspec(property(get=get_LastAccessTime)) ::System::DateTime  LastAccessTime;

 __declspec(property(get=get_LastAccessTimeCore, put=set_LastAccessTimeCore)) ::System::DateTimeOffset  LastAccessTimeCore;

 __declspec(property(get=get_LastAccessTimeUtc)) ::System::DateTime  LastAccessTimeUtc;

 __declspec(property(get=get_LastWriteTime)) ::System::DateTime  LastWriteTime;

 __declspec(property(get=get_LastWriteTimeCore, put=set_LastWriteTimeCore)) ::System::DateTimeOffset  LastWriteTimeCore;

 __declspec(property(get=get_LastWriteTimeUtc)) ::System::DateTime  LastWriteTimeUtc;

 __declspec(property(get=get_LengthCore)) int64_t  LengthCore;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NormalizedPath)) ::StringW  NormalizedPath;

/// @brief Field OriginalPath, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginalPath, put=__cordl_internal_set_OriginalPath)) ::StringW  OriginalPath;

/// @brief Field _fileStatus, offset 0x18, size 0x78 
 __declspec(property(get=__cordl_internal_get__fileStatus, put=__cordl_internal_set__fileStatus)) ::System::IO::FileStatus  _fileStatus;

/// @brief Field _name, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Create, addr 0xa29b9c8, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IO::FileSystemInfo* Create(::StringW  fullPath, ::StringW  fileName, ::by_ref<::System::IO::FileStatus>  fileStatus) ;

/// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Delete() ;

/// [ComVisible(false)]
/// @brief Method GetObjectData, addr 0xa29bd44, size 0x12c, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Init, addr 0xa29ba98, size 0x78, virtual false, abstract: false, final false
inline void Init(::by_ref<::System::IO::FileStatus>  fileStatus) ;

/// @brief Method Invalidate, addr 0xa297d88, size 0xc, virtual false, abstract: false, final false
inline void Invalidate() ;

static inline ::System::IO::FileSystemInfo* New_ctor() ;

static inline ::System::IO::FileSystemInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ThrowNotFound, addr 0xa29b044, size 0x98, virtual false, abstract: false, final false
static inline void ThrowNotFound(::StringW  path) ;

/// @brief Method ToString, addr 0xa29c2f8, size 0x24, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_FullPath() const;

constexpr ::StringW& __cordl_internal_get_FullPath() ;

constexpr ::StringW const& __cordl_internal_get_OriginalPath() const;

constexpr ::StringW& __cordl_internal_get_OriginalPath() ;

constexpr ::System::IO::FileStatus const& __cordl_internal_get__fileStatus() const;

constexpr ::System::IO::FileStatus& __cordl_internal_get__fileStatus() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set_FullPath(::StringW  value) ;

constexpr void __cordl_internal_set_OriginalPath(::StringW  value) ;

constexpr void __cordl_internal_set__fileStatus(::System::IO::FileStatus  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa297a50, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa2981bc, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Attributes, addr 0xa29a830, size 0xcc, virtual false, abstract: false, final false
inline ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_CreationTime, addr 0xa29c028, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_CreationTime() ;

/// @brief Method get_CreationTimeCore, addr 0xa29bbbc, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTimeOffset get_CreationTimeCore() ;

/// @brief Method get_CreationTimeUtc, addr 0xa29c0a0, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_CreationTimeUtc() ;

/// @brief Method get_Exists, addr 0xa29bfa0, size 0x88, virtual true, abstract: false, final false
inline bool get_Exists() ;

/// @brief Method get_ExistsCore, addr 0xa29bb24, size 0x98, virtual false, abstract: false, final false
inline bool get_ExistsCore() ;

/// @brief Method get_Extension, addr 0xa29be78, size 0x120, virtual false, abstract: false, final false
inline ::StringW get_Extension() ;

/// @brief Method get_FullName, addr 0xa29be70, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_LastAccessTime, addr 0xa29c118, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_LastAccessTime() ;

/// @brief Method get_LastAccessTimeCore, addr 0xa29bc3c, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTimeOffset get_LastAccessTimeCore() ;

/// @brief Method get_LastAccessTimeUtc, addr 0xa29c190, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_LastAccessTimeUtc() ;

/// @brief Method get_LastWriteTime, addr 0xa29c208, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_LastWriteTime() ;

/// @brief Method get_LastWriteTimeCore, addr 0xa29bcbc, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTimeOffset get_LastWriteTimeCore() ;

/// @brief Method get_LastWriteTimeUtc, addr 0xa29c280, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_LastWriteTimeUtc() ;

/// @brief Method get_LengthCore, addr 0xa29a8fc, size 0x74, virtual false, abstract: false, final false
inline int64_t get_LengthCore() ;

/// @brief Method get_Name, addr 0xa29bf98, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NormalizedPath, addr 0xa29bd3c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NormalizedPath() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method set_Attributes, addr 0xa29bb10, size 0x14, virtual false, abstract: false, final false
inline void set_Attributes(::System::IO::FileAttributes  value) ;

/// @brief Method set_CreationTimeCore, addr 0xa29bc28, size 0x14, virtual false, abstract: false, final false
inline void set_CreationTimeCore(::System::DateTimeOffset  value) ;

/// @brief Method set_LastAccessTimeCore, addr 0xa29bca8, size 0x14, virtual false, abstract: false, final false
inline void set_LastAccessTimeCore(::System::DateTimeOffset  value) ;

/// @brief Method set_LastWriteTimeCore, addr 0xa29bd28, size 0x14, virtual false, abstract: false, final false
inline void set_LastWriteTimeCore(::System::DateTimeOffset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemInfo(FileSystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemInfo(FileSystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7030};

/// @brief Field _fileStatus, offset: 0x18, size: 0x78, def value: None
 ::System::IO::FileStatus  ____fileStatus;

/// @brief Field FullPath, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___FullPath;

/// @brief Field OriginalPath, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___OriginalPath;

/// @brief Field _name, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileSystemInfo, ____fileStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___FullPath) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___OriginalPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____name) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::System::IO::FileSystemInfo) == 0xa8, "Size mismatch!");

} // namespace end def System::IO
