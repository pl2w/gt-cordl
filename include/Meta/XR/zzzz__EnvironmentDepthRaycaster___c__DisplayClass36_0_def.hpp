#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthRaycaster___c__DisplayClass36_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EnvironmentDepthRaycaster___c__DisplayClass36_0)
namespace Meta::XR {
class EnvironmentDepthRaycaster;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentDepthRaycaster___c__DisplayClass36_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0, "Meta.XR", "EnvironmentDepthRaycaster/<>c__DisplayClass36_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector2Int, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.EnvironmentDepthRaycaster/<>c__DisplayClass36_0
struct CORDL_TYPE EnvironmentDepthRaycaster___c__DisplayClass36_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentDepthRaycaster___c__DisplayClass36_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::EnvironmentDepthRaycaster>", modifiers: "", def_value: None, comment: None }, CppParam { name: "texCoord", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "centerDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "centerWorldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr EnvironmentDepthRaycaster___c__DisplayClass36_0(::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  __4__this, ::UnityEngine::Vector2Int  texCoord, float_t  centerDepth, ::UnityEngine::Vector3  centerWorldPos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25750};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  __4__this;

/// @brief Field texCoord, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  texCoord;

/// @brief Field centerDepth, offset: 0x10, size: 0x4, def value: None
 float_t  centerDepth;

/// @brief Field centerWorldPos, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  centerWorldPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0, texCoord) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0, centerDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0, centerWorldPos) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
