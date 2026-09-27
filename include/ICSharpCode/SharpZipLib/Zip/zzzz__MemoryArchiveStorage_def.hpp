#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/MemoryArchiveStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__BaseArchiveStorage_def.hpp"
CORDL_MODULE_EXPORT(MemoryArchiveStorage)
namespace ICSharpCode::SharpZipLib::Zip {
struct FileUpdateMode;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class MemoryArchiveStorage;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*, "ICSharpCode.SharpZipLib.Zip", "MemoryArchiveStorage");
// Dependencies ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage
class CORDL_TYPE MemoryArchiveStorage : public ::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage {
public:
// Declarations
 __declspec(property(get=get_FinalStream)) ::System::IO::MemoryStream*  FinalStream;

/// @brief Field finalStream_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalStream_, put=__cordl_internal_set_finalStream_)) ::System::IO::MemoryStream*  finalStream_;

/// @brief Field temporaryStream_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporaryStream_, put=__cordl_internal_set_temporaryStream_)) ::System::IO::MemoryStream*  temporaryStream_;

/// @brief Method ConvertTemporaryToFinal, addr 0x9f8ef04, size 0xd0, virtual true, abstract: false, final false
inline ::System::IO::Stream* ConvertTemporaryToFinal() ;

/// @brief Method Dispose, addr 0x9f8f174, size 0x14, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetTemporaryOutput, addr 0x9f8ee9c, size 0x68, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetTemporaryOutput() ;

/// @brief Method MakeTemporaryCopy, addr 0x9f8efd4, size 0xcc, virtual true, abstract: false, final false
inline ::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage* New_ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

/// @brief Method OpenForDirectUpdate, addr 0x9f8f0a0, size 0xd4, virtual true, abstract: false, final false
inline ::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream*  stream) ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_finalStream_() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_finalStream_() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_temporaryStream_() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_temporaryStream_() ;

constexpr void __cordl_internal_set_finalStream_(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_temporaryStream_(::System::IO::MemoryStream*  value) ;

/// @brief Method .ctor, addr 0x9f87f38, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f8ee6c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

/// @brief Method get_FinalStream, addr 0x9f8ee94, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::MemoryStream* get_FinalStream() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryArchiveStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryArchiveStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryArchiveStorage(MemoryArchiveStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryArchiveStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryArchiveStorage(MemoryArchiveStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17360};

/// @brief Field temporaryStream_, offset: 0x18, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___temporaryStream_;

/// @brief Field finalStream_, offset: 0x20, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___finalStream_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage, ___temporaryStream_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage, ___finalStream_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
