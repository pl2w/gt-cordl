#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRSystem___c__DisplayClass50_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRSystem___c__DisplayClass50_0)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRSystem___c__DisplayClass50_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRSystem___c__DisplayClass50_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRSystem___c__DisplayClass50_0, "UnityEngine.Experimental.Rendering", "XRSystem/<>c__DisplayClass50_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.XRSystem/<>c__DisplayClass50_0
struct CORDL_TYPE XRSystem___c__DisplayClass50_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XRSystem___c__DisplayClass50_0() ;

// Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None, comment: None }]
constexpr XRSystem___c__DisplayClass50_0(::UnityW<::UnityEngine::Camera>  camera) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field camera, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRSystem___c__DisplayClass50_0, camera) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRSystem___c__DisplayClass50_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
