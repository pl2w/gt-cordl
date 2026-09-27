#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__NoiseSettings_TransformNoiseParams_def.hpp"
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoiseSettings)
namespace GlobalNamespace {
struct NoiseSettings_NoiseParams;
}
namespace GlobalNamespace {
struct NoiseSettings_TransformNoiseParams;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class NoiseSettings;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::NoiseSettings*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::NoiseSettings*, "Unity.Cinemachine", "NoiseSettings");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineNoiseProfiles.html")]
// Dependencies Unity.Cinemachine.NoiseSettings::TransformNoiseParams, Unity.Cinemachine.SignalSourceAsset
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.NoiseSettings
class CORDL_TYPE NoiseSettings : public ::Unity::Cinemachine::SignalSourceAsset {
public:
// Declarations
using NoiseParams = ::GlobalNamespace::NoiseSettings_NoiseParams;

using TransformNoiseParams = ::GlobalNamespace::NoiseSettings_TransformNoiseParams;

/// @brief Field OrientationNoise, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrientationNoise, put=__cordl_internal_set_OrientationNoise)) ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  OrientationNoise;

/// @brief Field PositionNoise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PositionNoise, put=__cordl_internal_set_PositionNoise)) ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  PositionNoise;

 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Method GetCombinedFilterResults, addr 0xaeb8eb0, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCombinedFilterResults(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  noiseParams, float_t  time, ::UnityEngine::Vector3  timeOffsets) ;

/// @brief Method GetSignal, addr 0xaeb9008, size 0xec, virtual true, abstract: false, final false
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::NoiseSettings* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams> const& __cordl_internal_get_OrientationNoise() const;

constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>& __cordl_internal_get_OrientationNoise() ;

constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams> const& __cordl_internal_get_PositionNoise() const;

constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>& __cordl_internal_get_PositionNoise() ;

constexpr void __cordl_internal_set_OrientationNoise(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  value) ;

constexpr void __cordl_internal_set_PositionNoise(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  value) ;

/// @brief Method .ctor, addr 0xaeb90f4, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SignalDuration, addr 0xaeb9000, size 0x8, virtual true, abstract: false, final false
inline float_t get_SignalDuration() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoiseSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoiseSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NoiseSettings(NoiseSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoiseSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoiseSettings(NoiseSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22348};

/// [Tooltip("These are the noise channels for the virtual camera\'s position. Convincing noise setups typically mix low, medium and high frequencies together, so start with a size of 3")]
/// [FormerlySerializedAs("m_Position")]
/// @brief Field PositionNoise, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  ___PositionNoise;

/// [Tooltip("These are the noise channels for the virtual camera\'s orientation. Convincing noise setups typically mix low, medium and high frequencies together, so start with a size of 3")]
/// [FormerlySerializedAs("m_Orientation")]
/// @brief Field OrientationNoise, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  ___OrientationNoise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::NoiseSettings, ___PositionNoise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::NoiseSettings, ___OrientationNoise) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::NoiseSettings) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
