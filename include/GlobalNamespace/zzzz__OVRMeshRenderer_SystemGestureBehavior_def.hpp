#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshRenderer_SystemGestureBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshRenderer_SystemGestureBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshRenderer_SystemGestureBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/SystemGestureBehavior
struct CORDL_TYPE OVRMeshRenderer_SystemGestureBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRMeshRenderer_SystemGestureBehavior_Unwrapped
enum struct __OVRMeshRenderer_SystemGestureBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SwapMaterial = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRMeshRenderer_SystemGestureBehavior_Unwrapped () const noexcept {
return static_cast<__OVRMeshRenderer_SystemGestureBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshRenderer_SystemGestureBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshRenderer_SystemGestureBehavior(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior const None;

/// @brief Field SwapMaterial value: I32(1)
static ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior const SwapMaterial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12664};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
