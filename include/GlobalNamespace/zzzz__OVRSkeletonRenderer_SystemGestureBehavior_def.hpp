#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeletonRenderer_SystemGestureBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeletonRenderer_SystemGestureBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SystemGestureBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/SystemGestureBehavior
struct CORDL_TYPE OVRSkeletonRenderer_SystemGestureBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped
enum struct __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SwapMaterial = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped () const noexcept {
return static_cast<__OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonRenderer_SystemGestureBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSkeletonRenderer_SystemGestureBehavior(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const None;

/// @brief Field SwapMaterial value: I32(1)
static ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const SwapMaterial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
