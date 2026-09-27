#pragma once
// IWYU pragma private; include "System/IO/DirectoryInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DirectoryInfo)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::IO {
struct SearchOption;
}
namespace System::IO {
struct SearchTarget;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DirectoryInfo;
}
// Write type traits
MARK_REF_T(::System::IO::DirectoryInfo*);
DEFINE_IL2CPP_CLASS(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
// Dependencies System.IO.FileSystemInfo
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DirectoryInfo
class CORDL_TYPE DirectoryInfo : public ::System::IO::FileSystemInfo {
public:
// Declarations
/// @brief Method Create, addr 0xa297d64, size 0x24, virtual false, abstract: false, final false
inline void Create() ;

/// @brief Method Delete, addr 0xa2981a8, size 0x10, virtual true, abstract: false, final false
inline void Delete() ;

/// @brief Method GetFiles, addr 0xa297d94, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<::System::IO::FileInfo*> GetFiles() ;

/// @brief Method GetFiles, addr 0xa297edc, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::System::IO::FileInfo*> GetFiles(::StringW  searchPattern) ;

/// @brief Method GetFiles, addr 0xa297e3c, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::System::IO::FileInfo*> GetFiles(::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetFiles, addr 0xa297f7c, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<::System::IO::FileInfo*> GetFiles(::StringW  searchPattern, ::System::IO::SearchOption  searchOption) ;

/// @brief Method Init, addr 0xa297ac4, size 0x2a0, virtual false, abstract: false, final false
inline void Init(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method InternalEnumerateInfos, addr 0xa297ff0, size 0x1b8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* InternalEnumerateInfos(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options) ;

static inline ::System::IO::DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::IO::DirectoryInfo* New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

static inline ::System::IO::DirectoryInfo* New_ctor(::StringW  path) ;

/// @brief Method .ctor, addr 0xa2981b8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xa296424, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method .ctor, addr 0xa29625c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectoryInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryInfo(DirectoryInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryInfo(DirectoryInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::DirectoryInfo) == 0xa8, "Size mismatch!");

} // namespace end def System::IO
