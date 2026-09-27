#pragma once
// IWYU pragma private; include "GlobalNamespace/HandRayController_HandSide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRayController_HandSide)
// Forward declare root types
namespace GlobalNamespace {
struct HandRayController_HandSide;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandRayController_HandSide);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandRayController_HandSide, "", "HandRayController/HandSide");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandRayController/HandSide
struct CORDL_TYPE HandRayController_HandSide {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandRayController_HandSide_Unwrapped
enum struct __HandRayController_HandSide_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandRayController_HandSide_Unwrapped () const noexcept {
return static_cast<__HandRayController_HandSide_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandRayController_HandSide() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandRayController_HandSide(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::HandRayController_HandSide const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::HandRayController_HandSide const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandRayController_HandSide, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandRayController_HandSide) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
