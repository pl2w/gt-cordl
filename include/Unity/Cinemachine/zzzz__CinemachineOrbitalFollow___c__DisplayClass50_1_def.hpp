#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow___c__DisplayClass50_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow___c__DisplayClass50_1)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalFollow___c__DisplayClass50_1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1, "Unity.Cinemachine", "CinemachineOrbitalFollow/<>c__DisplayClass50_1");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow/<>c__DisplayClass50_1
struct CORDL_TYPE CinemachineOrbitalFollow___c__DisplayClass50_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow___c__DisplayClass50_1() ;

// Ctor Parameters [CppParam { name: "cameraOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalFollow___c__DisplayClass50_1(::UnityEngine::Vector3  cameraOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field cameraOffset, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  cameraOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1, cameraOffset) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
