#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IArchiveStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IArchiveStorage)
namespace ICSharpCode::SharpZipLib::Zip {
struct FileUpdateMode;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class IArchiveStorage;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*, "ICSharpCode.SharpZipLib.Zip", "IArchiveStorage");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.IArchiveStorage
class CORDL_TYPE IArchiveStorage {
public:
// Declarations
 __declspec(property(get=get_UpdateMode)) ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  UpdateMode;

/// @brief Method ConvertTemporaryToFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* ConvertTemporaryToFinal() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

/// @brief Method GetTemporaryOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetTemporaryOutput() ;

/// @brief Method MakeTemporaryCopy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream*  stream) ;

/// @brief Method OpenForDirectUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream*  stream) ;

/// @brief Method get_UpdateMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode get_UpdateMode() ;

// Ctor Parameters [CppParam { name: "", ty: "IArchiveStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IArchiveStorage(IArchiveStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Zip
