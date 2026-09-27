#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage___c__DisplayClass34_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BaseDataStorage___c__DisplayClass34_0)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio {
class Error;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage___c__DisplayClass34_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0, "Modio.FileIO", "BaseDataStorage/<>c__DisplayClass34_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<>c__DisplayClass34_0
struct CORDL_TYPE BaseDataStorage___c__DisplayClass34_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage___c__DisplayClass34_0() ;

// Ctor Parameters [CppParam { name: "error", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "installDirectoryPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "temporaryDirectoryPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage___c__DisplayClass34_0(::Modio::Error*  error, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  installDirectoryPath, ::StringW  temporaryDirectoryPath) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field error, offset: 0x0, size: 0x8, def value: None
 ::Modio::Error*  error;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field installDirectoryPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  installDirectoryPath;

/// @brief Field temporaryDirectoryPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  temporaryDirectoryPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0, error) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0, installDirectoryPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0, temporaryDirectoryPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
