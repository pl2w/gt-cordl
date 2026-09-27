#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/BasicGravityZoneSettings_GravityZoneRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGravityZoneSettings_GravityZoneRule)
// Forward declare root types
namespace GlobalNamespace {
struct BasicGravityZoneSettings_GravityZoneRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule, "GT_CustomMapSupportRuntime", "BasicGravityZoneSettings/GravityZoneRule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.BasicGravityZoneSettings/GravityZoneRule
struct CORDL_TYPE BasicGravityZoneSettings_GravityZoneRule {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BasicGravityZoneSettings_GravityZoneRule_Unwrapped
enum struct __BasicGravityZoneSettings_GravityZoneRule_Unwrapped : int32_t {
__E_Newest = static_cast<int32_t>(0x0),
__E_Closest = static_cast<int32_t>(0x1),
__E_Additive = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BasicGravityZoneSettings_GravityZoneRule_Unwrapped () const noexcept {
return static_cast<__BasicGravityZoneSettings_GravityZoneRule_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BasicGravityZoneSettings_GravityZoneRule() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BasicGravityZoneSettings_GravityZoneRule(int32_t  value__) noexcept;

/// @brief Field Additive value: I32(2)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule const Additive;

/// @brief Field Closest value: I32(1)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule const Closest;

/// @brief Field Newest value: I32(0)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule const Newest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
