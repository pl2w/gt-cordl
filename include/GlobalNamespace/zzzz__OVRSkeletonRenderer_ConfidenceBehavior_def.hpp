#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeletonRenderer_ConfidenceBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeletonRenderer_ConfidenceBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeletonRenderer_ConfidenceBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/ConfidenceBehavior
struct CORDL_TYPE OVRSkeletonRenderer_ConfidenceBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped
enum struct __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ToggleRenderer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped () const noexcept {
return static_cast<__OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonRenderer_ConfidenceBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSkeletonRenderer_ConfidenceBehavior(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const None;

/// @brief Field ToggleRenderer value: I32(1)
static ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const ToggleRenderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
