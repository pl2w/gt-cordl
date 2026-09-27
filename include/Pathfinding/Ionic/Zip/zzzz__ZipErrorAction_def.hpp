#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipErrorAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipErrorAction)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ZipErrorAction;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ZipErrorAction);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipErrorAction, "Pathfinding.Ionic.Zip", "ZipErrorAction");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipErrorAction
struct CORDL_TYPE ZipErrorAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipErrorAction_Unwrapped
enum struct __ZipErrorAction_Unwrapped : int32_t {
__E_Throw = static_cast<int32_t>(0x0),
__E_Skip = static_cast<int32_t>(0x1),
__E_Retry = static_cast<int32_t>(0x2),
__E_InvokeErrorEvent = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipErrorAction_Unwrapped () const noexcept {
return static_cast<__ZipErrorAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipErrorAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipErrorAction(int32_t  value__) noexcept;

/// @brief Field InvokeErrorEvent value: I32(3)
static ::Pathfinding::Ionic::Zip::ZipErrorAction const InvokeErrorEvent;

/// @brief Field Retry value: I32(2)
static ::Pathfinding::Ionic::Zip::ZipErrorAction const Retry;

/// @brief Field Skip value: I32(1)
static ::Pathfinding::Ionic::Zip::ZipErrorAction const Skip;

/// @brief Field Throw value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipErrorAction const Throw;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28165};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipErrorAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipErrorAction) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
