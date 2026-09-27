#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldItemButtonConsumeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeldItemButtonConsumeMode)
// Forward declare root types
namespace GlobalNamespace {
struct HeldItemButtonConsumeMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HeldItemButtonConsumeMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeldItemButtonConsumeMode, "", "HeldItemButtonConsumeMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HeldItemButtonConsumeMode
struct CORDL_TYPE HeldItemButtonConsumeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeldItemButtonConsumeMode_Unwrapped
enum struct __HeldItemButtonConsumeMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Destroy = static_cast<int32_t>(0x1),
__E_Disable = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeldItemButtonConsumeMode_Unwrapped () const noexcept {
return static_cast<__HeldItemButtonConsumeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeldItemButtonConsumeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HeldItemButtonConsumeMode(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(1)
static ::GlobalNamespace::HeldItemButtonConsumeMode const Destroy;

/// @brief Field Disable value: I32(2)
static ::GlobalNamespace::HeldItemButtonConsumeMode const Disable;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HeldItemButtonConsumeMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeldItemButtonConsumeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeldItemButtonConsumeMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
