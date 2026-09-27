#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldItemButtonMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeldItemButtonMode)
// Forward declare root types
namespace GlobalNamespace {
struct HeldItemButtonMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HeldItemButtonMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeldItemButtonMode, "", "HeldItemButtonMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HeldItemButtonMode
struct CORDL_TYPE HeldItemButtonMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeldItemButtonMode_Unwrapped
enum struct __HeldItemButtonMode_Unwrapped : int32_t {
__E_OneShot = static_cast<int32_t>(0x0),
__E_ResetAfterDelay = static_cast<int32_t>(0x1),
__E_Toggle = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeldItemButtonMode_Unwrapped () const noexcept {
return static_cast<__HeldItemButtonMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeldItemButtonMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HeldItemButtonMode(int32_t  value__) noexcept;

/// @brief Field OneShot value: I32(0)
static ::GlobalNamespace::HeldItemButtonMode const OneShot;

/// @brief Field ResetAfterDelay value: I32(1)
static ::GlobalNamespace::HeldItemButtonMode const ResetAfterDelay;

/// @brief Field Toggle value: I32(2)
static ::GlobalNamespace::HeldItemButtonMode const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeldItemButtonMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeldItemButtonMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
