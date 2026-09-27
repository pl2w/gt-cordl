#pragma once
// IWYU pragma private; include "GlobalNamespace/EControllerInputPressFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EControllerInputPressFlags)
// Forward declare root types
namespace GlobalNamespace {
struct EControllerInputPressFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EControllerInputPressFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EControllerInputPressFlags, "", "EControllerInputPressFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EControllerInputPressFlags
struct CORDL_TYPE EControllerInputPressFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EControllerInputPressFlags_Unwrapped
enum struct __EControllerInputPressFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Index = static_cast<int32_t>(0x1),
__E_Grip = static_cast<int32_t>(0x2),
__E_Primary = static_cast<int32_t>(0x4),
__E_Secondary = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EControllerInputPressFlags_Unwrapped () const noexcept {
return static_cast<__EControllerInputPressFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EControllerInputPressFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EControllerInputPressFlags(int32_t  value__) noexcept;

/// @brief Field Grip value: I32(2)
static ::GlobalNamespace::EControllerInputPressFlags const Grip;

/// @brief Field Index value: I32(1)
static ::GlobalNamespace::EControllerInputPressFlags const Index;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EControllerInputPressFlags const None;

/// @brief Field Primary value: I32(4)
static ::GlobalNamespace::EControllerInputPressFlags const Primary;

/// @brief Field Secondary value: I32(8)
static ::GlobalNamespace::EControllerInputPressFlags const Secondary;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1682};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EControllerInputPressFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EControllerInputPressFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
