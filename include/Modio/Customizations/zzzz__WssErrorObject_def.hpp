#pragma once
// IWYU pragma private; include "Modio/Customizations/WssErrorObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__WssError_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WssErrorObject)
// Forward declare root types
namespace Modio::Customizations {
struct WssErrorObject;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssErrorObject);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssErrorObject, "Modio.Customizations", "WssErrorObject");
// Dependencies Modio.Customizations.WssError
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssErrorObject
struct CORDL_TYPE WssErrorObject {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WssErrorObject() ;

// Ctor Parameters [CppParam { name: "error", ty: "::Modio::Customizations::WssError", modifiers: "", def_value: None, comment: None }, CppParam { name: "operation", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr WssErrorObject(::Modio::Customizations::WssError  error, ::StringW  operation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field error, offset: 0x0, size: 0x20, def value: None
 ::Modio::Customizations::WssError  error;

/// @brief Field operation, offset: 0x20, size: 0x8, def value: None
 ::StringW  operation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssErrorObject, error) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssErrorObject, operation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssErrorObject) == 0x28, "Size mismatch!");

} // namespace end def Modio::Customizations
