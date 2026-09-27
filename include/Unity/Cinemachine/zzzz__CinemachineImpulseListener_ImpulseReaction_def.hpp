#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseListener_ImpulseReaction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineImpulseListener_ImpulseReaction)
namespace Unity::Cinemachine {
class NoiseSettings;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineImpulseListener_ImpulseReaction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, "Unity.Cinemachine", "CinemachineImpulseListener/ImpulseReaction");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseListener/ImpulseReaction
struct CORDL_TYPE CinemachineImpulseListener_ImpulseReaction {
public:
// Declarations
/// @brief Method GetReaction, addr 0xaee3d18, size 0x390, virtual false, abstract: false, final false
inline bool GetReaction(float_t  deltaTime, ::UnityEngine::Vector3  impulsePos, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method ReSeed, addr 0xaee40b8, size 0x70, virtual false, abstract: false, final false
inline void ReSeed() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseListener_ImpulseReaction() ;

// Ctor Parameters [CppParam { name: "m_SecondaryNoise", ty: "::UnityW<::Unity::Cinemachine::NoiseSettings>", modifiers: "", def_value: None, comment: None }, CppParam { name: "AmplitudeGain", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FrequencyGain", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentAmount", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NoiseOffsets", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineImpulseListener_ImpulseReaction(::UnityW<::Unity::Cinemachine::NoiseSettings>  m_SecondaryNoise, float_t  AmplitudeGain, float_t  FrequencyGain, float_t  Duration, float_t  m_CurrentAmount, float_t  m_CurrentTime, float_t  m_CurrentDamping, bool  m_Initialized, ::UnityEngine::Vector3  m_NoiseOffsets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [Tooltip("Secondary shake that will be triggered by the primary impulse.")]
/// @brief Field m_SecondaryNoise, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::NoiseSettings>  m_SecondaryNoise;

/// [Tooltip("Gain to apply to the amplitudes defined in the signal source.  1 is normal.  Setting this to 0 completely mutes the signal.")]
/// [FormerlySerializedAs("m_AmplitudeGain")]
/// @brief Field AmplitudeGain, offset: 0x8, size: 0x4, def value: None
 float_t  AmplitudeGain;

/// [Tooltip("Scale factor to apply to the time axis.  1 is normal.  Larger magnitudes will make the signal progress more rapidly.")]
/// [FormerlySerializedAs("m_FrequencyGain")]
/// @brief Field FrequencyGain, offset: 0xc, size: 0x4, def value: None
 float_t  FrequencyGain;

/// [Tooltip("How long the secondary reaction lasts.")]
/// [FormerlySerializedAs("m_Duration")]
/// @brief Field Duration, offset: 0x10, size: 0x4, def value: None
 float_t  Duration;

/// @brief Field m_CurrentAmount, offset: 0x14, size: 0x4, def value: None
 float_t  m_CurrentAmount;

/// @brief Field m_CurrentTime, offset: 0x18, size: 0x4, def value: None
 float_t  m_CurrentTime;

/// @brief Field m_CurrentDamping, offset: 0x1c, size: 0x4, def value: None
 float_t  m_CurrentDamping;

/// @brief Field m_Initialized, offset: 0x20, size: 0x1, def value: None
 bool  m_Initialized;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// @brief Field m_NoiseOffsets, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_NoiseOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_SecondaryNoise) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, AmplitudeGain) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, FrequencyGain) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, Duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_CurrentAmount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_CurrentTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_CurrentDamping) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_Initialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction, m_NoiseOffsets) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
