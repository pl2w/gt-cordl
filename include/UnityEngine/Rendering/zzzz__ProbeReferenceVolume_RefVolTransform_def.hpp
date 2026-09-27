#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_RefVolTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_RefVolTransform)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeReferenceVolume_RefVolTransform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform, "UnityEngine.Rendering", "ProbeReferenceVolume/RefVolTransform");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/RefVolTransform
struct CORDL_TYPE ProbeReferenceVolume_RefVolTransform {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeReferenceVolume_RefVolTransform() ;

// Ctor Parameters [CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeReferenceVolume_RefVolTransform(::UnityEngine::Vector3  posWS, ::UnityEngine::Quaternion  rot, float_t  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field posWS, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  posWS;

/// @brief Field rot, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rot;

/// @brief Field scale, offset: 0x1c, size: 0x4, def value: None
 float_t  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform, posWS) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform, rot) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform, scale) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeReferenceVolume_RefVolTransform) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
