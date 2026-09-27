#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ExtractExistingFileAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtractExistingFileAction)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ExtractExistingFileAction;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ExtractExistingFileAction);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ExtractExistingFileAction, "Pathfinding.Ionic.Zip", "ExtractExistingFileAction");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ExtractExistingFileAction
struct CORDL_TYPE ExtractExistingFileAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExtractExistingFileAction_Unwrapped
enum struct __ExtractExistingFileAction_Unwrapped : int32_t {
__E_Throw = static_cast<int32_t>(0x0),
__E_OverwriteSilently = static_cast<int32_t>(0x1),
__E_DoNotOverwrite = static_cast<int32_t>(0x2),
__E_InvokeExtractProgressEvent = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExtractExistingFileAction_Unwrapped () const noexcept {
return static_cast<__ExtractExistingFileAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExtractExistingFileAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExtractExistingFileAction(int32_t  value__) noexcept;

/// @brief Field DoNotOverwrite value: I32(2)
static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const DoNotOverwrite;

/// @brief Field InvokeExtractProgressEvent value: I32(3)
static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const InvokeExtractProgressEvent;

/// @brief Field OverwriteSilently value: I32(1)
static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const OverwriteSilently;

/// @brief Field Throw value: I32(0)
static ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const Throw;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ExtractExistingFileAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ExtractExistingFileAction) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
