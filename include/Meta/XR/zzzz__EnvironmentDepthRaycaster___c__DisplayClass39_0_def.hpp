#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthRaycaster___c__DisplayClass39_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Ray_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EnvironmentDepthRaycaster___c__DisplayClass39_0)
namespace Meta::XR {
class EnvironmentDepthRaycaster;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentDepthRaycaster___c__DisplayClass39_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0, "Meta.XR", "EnvironmentDepthRaycaster/<>c__DisplayClass39_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Ray
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.EnvironmentDepthRaycaster/<>c__DisplayClass39_0
struct CORDL_TYPE EnvironmentDepthRaycaster___c__DisplayClass39_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentDepthRaycaster___c__DisplayClass39_0() ;

// Ctor Parameters [CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::EnvironmentDepthRaycaster>", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allowOccludedRayOrigin", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EnvironmentDepthRaycaster___c__DisplayClass39_0(::UnityEngine::Ray  ray, ::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  __4__this, float_t  maxDistance, bool  allowOccludedRayOrigin) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field ray, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::Ray  ray;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  __4__this;

/// @brief Field maxDistance, offset: 0x20, size: 0x4, def value: None
 float_t  maxDistance;

/// @brief Field allowOccludedRayOrigin, offset: 0x24, size: 0x1, def value: None
 bool  allowOccludedRayOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0, ray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0, maxDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0, allowOccludedRayOrigin) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
