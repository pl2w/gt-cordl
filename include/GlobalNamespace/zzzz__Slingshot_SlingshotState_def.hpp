#pragma once
// IWYU pragma private; include "GlobalNamespace/Slingshot_SlingshotState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Slingshot_SlingshotState)
// Forward declare root types
namespace GlobalNamespace {
struct Slingshot_SlingshotState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Slingshot_SlingshotState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Slingshot_SlingshotState, "", "Slingshot/SlingshotState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Slingshot/SlingshotState
struct CORDL_TYPE Slingshot_SlingshotState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Slingshot_SlingshotState_Unwrapped
enum struct __Slingshot_SlingshotState_Unwrapped : int32_t {
__E_NoState = static_cast<int32_t>(0x1),
__E_OnChest = static_cast<int32_t>(0x2),
__E_LeftHandDrawing = static_cast<int32_t>(0x4),
__E_RightHandDrawing = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Slingshot_SlingshotState_Unwrapped () const noexcept {
return static_cast<__Slingshot_SlingshotState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Slingshot_SlingshotState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Slingshot_SlingshotState(int32_t  value__) noexcept;

/// @brief Field LeftHandDrawing value: I32(4)
static ::GlobalNamespace::Slingshot_SlingshotState const LeftHandDrawing;

/// @brief Field NoState value: I32(1)
static ::GlobalNamespace::Slingshot_SlingshotState const NoState;

/// @brief Field OnChest value: I32(2)
static ::GlobalNamespace::Slingshot_SlingshotState const OnChest;

/// @brief Field RightHandDrawing value: I32(8)
static ::GlobalNamespace::Slingshot_SlingshotState const RightHandDrawing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Slingshot_SlingshotState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Slingshot_SlingshotState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
