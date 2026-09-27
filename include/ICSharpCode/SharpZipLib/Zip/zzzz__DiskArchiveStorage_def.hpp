#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/DiskArchiveStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__BaseArchiveStorage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DiskArchiveStorage)
namespace ICSharpCode::SharpZipLib::Zip {
struct FileUpdateMode;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class DiskArchiveStorage;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*, "ICSharpCode.SharpZipLib.Zip", "DiskArchiveStorage");
// Dependencies ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage
class CORDL_TYPE DiskArchiveStorage : public ::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage {
public:
// Declarations
/// @brief Field fileName_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName_, put=__cordl_internal_set_fileName_)) ::StringW  fileName_;

/// @brief Field temporaryName_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporaryName_, put=__cordl_internal_set_temporaryName_)) ::StringW  temporaryName_;

/// @brief Field temporaryStream_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporaryStream_, put=__cordl_internal_set_temporaryStream_)) ::System::IO::Stream*  temporaryStream_;

/// @brief Method ConvertTemporaryToFinal, addr 0x9f8eb7c, size 0x188, virtual true, abstract: false, final false
inline ::System::IO::Stream* ConvertTemporaryToFinal() ;

/// @brief Method Dispose, addr 0x9f8ee58, size 0x14, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetTemporaryOutput, addr 0x9f8eb18, size 0x64, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetTemporaryOutput() ;

/// @brief Method MakeTemporaryCopy, addr 0x9f8ed04, size 0xc4, virtual true, abstract: false, final false
inline ::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file) ;

static inline ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

/// @brief Method OpenForDirectUpdate, addr 0x9f8edc8, size 0x90, virtual true, abstract: false, final false
inline ::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream*  stream) ;

constexpr ::StringW const& __cordl_internal_get_fileName_() const;

constexpr ::StringW& __cordl_internal_get_fileName_() ;

constexpr ::StringW const& __cordl_internal_get_temporaryName_() const;

constexpr ::StringW& __cordl_internal_get_temporaryName_() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_temporaryStream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_temporaryStream_() ;

constexpr void __cordl_internal_set_fileName_(::StringW  value) ;

constexpr void __cordl_internal_set_temporaryName_(::StringW  value) ;

constexpr void __cordl_internal_set_temporaryStream_(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x9f87f58, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file) ;

/// @brief Method .ctor, addr 0x9f8ea90, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiskArchiveStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiskArchiveStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DiskArchiveStorage(DiskArchiveStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiskArchiveStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiskArchiveStorage(DiskArchiveStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17359};

/// @brief Field temporaryStream_, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___temporaryStream_;

/// @brief Field fileName_, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___fileName_;

/// @brief Field temporaryName_, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___temporaryName_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage, ___temporaryStream_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage, ___fileName_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage, ___temporaryName_) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
