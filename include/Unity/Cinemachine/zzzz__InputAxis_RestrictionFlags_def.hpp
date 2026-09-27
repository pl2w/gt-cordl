#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RestrictionFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAxis_RestrictionFlags)
// Forward declare root types
namespace GlobalNamespace {
struct InputAxis_RestrictionFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputAxis_RestrictionFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputAxis_RestrictionFlags, "Unity.Cinemachine", "InputAxis/RestrictionFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.InputAxis/RestrictionFlags
struct CORDL_TYPE InputAxis_RestrictionFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputAxis_RestrictionFlags_Unwrapped
enum struct __InputAxis_RestrictionFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RangeIsDriven = static_cast<int32_t>(0x1),
__E_NoRecentering = static_cast<int32_t>(0x2),
__E_Momentary = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputAxis_RestrictionFlags_Unwrapped () const noexcept {
return static_cast<__InputAxis_RestrictionFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputAxis_RestrictionFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputAxis_RestrictionFlags(int32_t  value__) noexcept;

/// @brief Field Momentary value: I32(4)
static ::GlobalNamespace::InputAxis_RestrictionFlags const Momentary;

/// @brief Field NoRecentering value: I32(2)
static ::GlobalNamespace::InputAxis_RestrictionFlags const NoRecentering;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InputAxis_RestrictionFlags const None;

/// @brief Field RangeIsDriven value: I32(1)
static ::GlobalNamespace::InputAxis_RestrictionFlags const RangeIsDriven;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputAxis_RestrictionFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputAxis_RestrictionFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
