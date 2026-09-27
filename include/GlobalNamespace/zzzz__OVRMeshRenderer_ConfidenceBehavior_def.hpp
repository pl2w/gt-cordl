#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshRenderer_ConfidenceBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshRenderer_ConfidenceBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshRenderer_ConfidenceBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/ConfidenceBehavior
struct CORDL_TYPE OVRMeshRenderer_ConfidenceBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRMeshRenderer_ConfidenceBehavior_Unwrapped
enum struct __OVRMeshRenderer_ConfidenceBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ToggleRenderer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRMeshRenderer_ConfidenceBehavior_Unwrapped () const noexcept {
return static_cast<__OVRMeshRenderer_ConfidenceBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshRenderer_ConfidenceBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshRenderer_ConfidenceBehavior(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior const None;

/// @brief Field ToggleRenderer value: I32(1)
static ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior const ToggleRenderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
