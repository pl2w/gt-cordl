#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow___c__DisplayClass50_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow___c__DisplayClass50_0)
namespace Unity::Cinemachine {
class CinemachineOrbitalFollow;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, "Unity.Cinemachine", "CinemachineOrbitalFollow/<>c__DisplayClass50_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow/<>c__DisplayClass50_0
struct CORDL_TYPE CinemachineOrbitalFollow___c__DisplayClass50_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow___c__DisplayClass50_0() ;

// Ctor Parameters [CppParam { name: "orient", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "dir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Unity::Cinemachine::CinemachineOrbitalFollow>", modifiers: "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalFollow___c__DisplayClass50_0(::UnityEngine::Quaternion  orient, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  dir, ::UnityW<::Unity::Cinemachine::CinemachineOrbitalFollow>  __4__this, float_t  distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field orient, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  orient;

/// @brief Field up, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  up;

/// @brief Field dir, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  dir;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineOrbitalFollow>  __4__this;

/// @brief Field distance, offset: 0x30, size: 0x4, def value: None
 float_t  distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, orient) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, up) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, dir) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0, distance) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
