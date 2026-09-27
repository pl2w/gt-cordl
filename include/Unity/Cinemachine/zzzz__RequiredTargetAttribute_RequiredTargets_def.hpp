#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RequiredTargetAttribute_RequiredTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequiredTargetAttribute_RequiredTargets)
// Forward declare root types
namespace GlobalNamespace {
struct RequiredTargetAttribute_RequiredTargets;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets, "Unity.Cinemachine", "RequiredTargetAttribute/RequiredTargets");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.RequiredTargetAttribute/RequiredTargets
struct CORDL_TYPE RequiredTargetAttribute_RequiredTargets {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RequiredTargetAttribute_RequiredTargets_Unwrapped
enum struct __RequiredTargetAttribute_RequiredTargets_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Tracking = static_cast<int32_t>(0x1),
__E_LookAt = static_cast<int32_t>(0x2),
__E_GroupLookAt = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RequiredTargetAttribute_RequiredTargets_Unwrapped () const noexcept {
return static_cast<__RequiredTargetAttribute_RequiredTargets_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RequiredTargetAttribute_RequiredTargets() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RequiredTargetAttribute_RequiredTargets(int32_t  value__) noexcept;

/// @brief Field GroupLookAt value: I32(3)
static ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const GroupLookAt;

/// @brief Field LookAt value: I32(2)
static ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const LookAt;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const None;

/// @brief Field Tracking value: I32(1)
static ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const Tracking;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
