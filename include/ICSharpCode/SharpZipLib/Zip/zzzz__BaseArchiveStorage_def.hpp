#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/BaseArchiveStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FileUpdateMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseArchiveStorage)
namespace ICSharpCode::SharpZipLib::Zip {
struct FileUpdateMode;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IArchiveStorage;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class BaseArchiveStorage;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage*, "ICSharpCode.SharpZipLib.Zip", "BaseArchiveStorage");
// Dependencies ICSharpCode.SharpZipLib.Zip.FileUpdateMode, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage
class CORDL_TYPE BaseArchiveStorage : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UpdateMode)) ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  UpdateMode;

/// @brief Field updateMode_, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateMode_, put=__cordl_internal_set_updateMode_)) ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IArchiveStorage"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*() noexcept;

/// @brief Method ConvertTemporaryToFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* ConvertTemporaryToFinal() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

/// @brief Method GetTemporaryOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetTemporaryOutput() ;

/// @brief Method MakeTemporaryCopy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage* New_ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

/// @brief Method OpenForDirectUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream*  stream) ;

constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode const& __cordl_internal_get_updateMode_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode& __cordl_internal_get_updateMode_() ;

constexpr void __cordl_internal_set_updateMode_(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  value) ;

/// @brief Method .ctor, addr 0x9f8ea60, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode) ;

/// @brief Method get_UpdateMode, addr 0x9f8ea88, size 0x8, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode get_UpdateMode() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IArchiveStorage"
constexpr ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* i___ICSharpCode__SharpZipLib__Zip__IArchiveStorage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseArchiveStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseArchiveStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseArchiveStorage(BaseArchiveStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseArchiveStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseArchiveStorage(BaseArchiveStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17358};

/// @brief Field updateMode_, offset: 0x10, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  ___updateMode_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage, ___updateMode_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
