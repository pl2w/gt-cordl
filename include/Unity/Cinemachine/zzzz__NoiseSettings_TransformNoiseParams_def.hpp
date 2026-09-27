#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings_TransformNoiseParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__NoiseSettings_NoiseParams_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NoiseSettings_TransformNoiseParams)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct NoiseSettings_TransformNoiseParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoiseSettings_TransformNoiseParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoiseSettings_TransformNoiseParams, "Unity.Cinemachine", "NoiseSettings/TransformNoiseParams");
// Dependencies Unity.Cinemachine.NoiseSettings::NoiseParams
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.NoiseSettings/TransformNoiseParams
struct CORDL_TYPE NoiseSettings_TransformNoiseParams {
public:
// Declarations
/// @brief Method GetValueAt, addr 0xaeb8f9c, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetValueAt(float_t  time, ::UnityEngine::Vector3  timeOffsets) ;

// Ctor Parameters []
// @brief default ctor
constexpr NoiseSettings_TransformNoiseParams() ;

// Ctor Parameters [CppParam { name: "X", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Z", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: None, comment: None }]
constexpr NoiseSettings_TransformNoiseParams(::GlobalNamespace::NoiseSettings_NoiseParams  X, ::GlobalNamespace::NoiseSettings_NoiseParams  Y, ::GlobalNamespace::NoiseSettings_NoiseParams  Z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// [Tooltip("Noise definition for X-axis")]
/// @brief Field X, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::NoiseSettings_NoiseParams  X;

/// [Tooltip("Noise definition for Y-axis")]
/// @brief Field Y, offset: 0xc, size: 0xc, def value: None
 ::GlobalNamespace::NoiseSettings_NoiseParams  Y;

/// [Tooltip("Noise definition for Z-axis")]
/// @brief Field Z, offset: 0x18, size: 0xc, def value: None
 ::GlobalNamespace::NoiseSettings_NoiseParams  Z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoiseSettings_TransformNoiseParams, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoiseSettings_TransformNoiseParams, Y) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoiseSettings_TransformNoiseParams, Z) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoiseSettings_TransformNoiseParams) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
