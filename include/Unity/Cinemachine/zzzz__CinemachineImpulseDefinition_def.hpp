#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseShapes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseTypes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_RepeatModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DirectionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseDefinition)
namespace GlobalNamespace {
struct CinemachineImpulseDefinition_ImpulseShapes;
}
namespace GlobalNamespace {
struct CinemachineImpulseDefinition_ImpulseTypes;
}
namespace GlobalNamespace {
struct CinemachineImpulseDefinition_RepeatModes;
}
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition_LegacySignalSource;
}
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition_SignalSource;
}
namespace Unity::Cinemachine {
class CinemachineImpulseManager_ImpulseEvent;
}
namespace Unity::Cinemachine {
class ISignalSource6D;
}
namespace Unity::Cinemachine {
class SignalSourceAsset;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition;
}
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition_LegacySignalSource;
}
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition_SignalSource;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseDefinition*);
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*);
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseDefinition*, "Unity.Cinemachine", "CinemachineImpulseDefinition");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*, "Unity.Cinemachine", "CinemachineImpulseDefinition/LegacySignalSource");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*, "Unity.Cinemachine", "CinemachineImpulseDefinition/SignalSource");
// Dependencies System.Object, Unity.Cinemachine.CinemachineImpulseDefinition::ImpulseShapes, Unity.Cinemachine.CinemachineImpulseDefinition::ImpulseTypes, Unity.Cinemachine.CinemachineImpulseDefinition::RepeatModes, Unity.Cinemachine.CinemachineImpulseManager::EnvelopeDefinition, Unity.Cinemachine.CinemachineImpulseManager::ImpulseEvent::DirectionModes, Unity.Cinemachine.CinemachineImpulseManager::ImpulseEvent::DissipationModes, UnityEngine.AnimationCurve
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseDefinition
class CORDL_TYPE CinemachineImpulseDefinition : public ::System::Object {
public:
// Declarations
using ImpulseShapes = ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes;

using ImpulseTypes = ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes;

using RepeatModes = ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes;

using LegacySignalSource = ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource;

using SignalSource = ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource;

/// @brief Field AmplitudeGain, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_AmplitudeGain, put=__cordl_internal_set_AmplitudeGain)) float_t  AmplitudeGain;

/// @brief Field CustomImpulseShape, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomImpulseShape, put=__cordl_internal_set_CustomImpulseShape)) ::UnityEngine::AnimationCurve*  CustomImpulseShape;

/// @brief Field DirectionMode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DirectionMode, put=__cordl_internal_set_DirectionMode)) ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  DirectionMode;

/// @brief Field DissipationDistance, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_DissipationDistance, put=__cordl_internal_set_DissipationDistance)) float_t  DissipationDistance;

/// @brief Field DissipationMode, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_DissipationMode, put=__cordl_internal_set_DissipationMode)) ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  DissipationMode;

/// @brief Field DissipationRate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DissipationRate, put=__cordl_internal_set_DissipationRate)) float_t  DissipationRate;

/// @brief Field FrequencyGain, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrequencyGain, put=__cordl_internal_set_FrequencyGain)) float_t  FrequencyGain;

/// @brief Field ImpactRadius, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpactRadius, put=__cordl_internal_set_ImpactRadius)) float_t  ImpactRadius;

/// @brief Field ImpulseChannel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpulseChannel, put=__cordl_internal_set_ImpulseChannel)) int32_t  ImpulseChannel;

 __declspec(property(get=get_ImpulseCurve)) ::UnityEngine::AnimationCurve*  ImpulseCurve;

/// @brief Field ImpulseDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpulseDuration, put=__cordl_internal_set_ImpulseDuration)) float_t  ImpulseDuration;

/// @brief Field ImpulseShape, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpulseShape, put=__cordl_internal_set_ImpulseShape)) ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  ImpulseShape;

/// @brief Field ImpulseType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpulseType, put=__cordl_internal_set_ImpulseType)) ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes  ImpulseType;

/// @brief Field PropagationSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_PropagationSpeed, put=__cordl_internal_set_PropagationSpeed)) float_t  PropagationSpeed;

/// @brief Field Randomize, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_Randomize, put=__cordl_internal_set_Randomize)) bool  Randomize;

/// @brief Field RawSignal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RawSignal, put=__cordl_internal_set_RawSignal)) ::UnityW<::Unity::Cinemachine::SignalSourceAsset>  RawSignal;

/// @brief Field RepeatMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_RepeatMode, put=__cordl_internal_set_RepeatMode)) ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes  RepeatMode;

/// @brief Field TimeEnvelope, offset 0x48, size 0x20 
 __declspec(property(get=__cordl_internal_get_TimeEnvelope, put=__cordl_internal_set_TimeEnvelope)) ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  TimeEnvelope;

/// @brief Field s_StandardShapes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StandardShapes, put=setStaticF_s_StandardShapes)) ::ArrayW<::UnityEngine::AnimationCurve*>  s_StandardShapes;

/// @brief Method CreateAndReturnEvent, addr 0xaee3004, size 0x1ec, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* CreateAndReturnEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity) ;

/// @brief Method CreateEvent, addr 0xaee3000, size 0x4, virtual false, abstract: false, final false
inline void CreateEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity) ;

/// @brief Method CreateStandardShapes, addr 0xaee23c8, size 0xb68, virtual false, abstract: false, final false
static inline void CreateStandardShapes() ;

/// @brief Method GetStandardCurve, addr 0xaee2f30, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetStandardCurve(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  shape) ;

/// @brief Method LegacyCreateAndReturnEvent, addr 0xaee31f0, size 0x224, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* LegacyCreateAndReturnEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity) ;

static inline ::Unity::Cinemachine::CinemachineImpulseDefinition* New_ctor() ;

/// @brief Method OnValidate, addr 0xaee22dc, size 0xec, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get_AmplitudeGain() const;

constexpr float_t& __cordl_internal_get_AmplitudeGain() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_CustomImpulseShape() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_CustomImpulseShape() ;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const& __cordl_internal_get_DirectionMode() const;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes& __cordl_internal_get_DirectionMode() ;

constexpr float_t const& __cordl_internal_get_DissipationDistance() const;

constexpr float_t& __cordl_internal_get_DissipationDistance() ;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const& __cordl_internal_get_DissipationMode() const;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes& __cordl_internal_get_DissipationMode() ;

constexpr float_t const& __cordl_internal_get_DissipationRate() const;

constexpr float_t& __cordl_internal_get_DissipationRate() ;

constexpr float_t const& __cordl_internal_get_FrequencyGain() const;

constexpr float_t& __cordl_internal_get_FrequencyGain() ;

constexpr float_t const& __cordl_internal_get_ImpactRadius() const;

constexpr float_t& __cordl_internal_get_ImpactRadius() ;

constexpr int32_t const& __cordl_internal_get_ImpulseChannel() const;

constexpr int32_t& __cordl_internal_get_ImpulseChannel() ;

constexpr float_t const& __cordl_internal_get_ImpulseDuration() const;

constexpr float_t& __cordl_internal_get_ImpulseDuration() ;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const& __cordl_internal_get_ImpulseShape() const;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes& __cordl_internal_get_ImpulseShape() ;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes const& __cordl_internal_get_ImpulseType() const;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes& __cordl_internal_get_ImpulseType() ;

constexpr float_t const& __cordl_internal_get_PropagationSpeed() const;

constexpr float_t& __cordl_internal_get_PropagationSpeed() ;

constexpr bool const& __cordl_internal_get_Randomize() const;

constexpr bool& __cordl_internal_get_Randomize() ;

constexpr ::UnityW<::Unity::Cinemachine::SignalSourceAsset> const& __cordl_internal_get_RawSignal() const;

constexpr ::UnityW<::Unity::Cinemachine::SignalSourceAsset>& __cordl_internal_get_RawSignal() ;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes const& __cordl_internal_get_RepeatMode() const;

constexpr ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes& __cordl_internal_get_RepeatMode() ;

constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition const& __cordl_internal_get_TimeEnvelope() const;

constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition& __cordl_internal_get_TimeEnvelope() ;

constexpr void __cordl_internal_set_AmplitudeGain(float_t  value) ;

constexpr void __cordl_internal_set_CustomImpulseShape(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_DirectionMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  value) ;

constexpr void __cordl_internal_set_DissipationDistance(float_t  value) ;

constexpr void __cordl_internal_set_DissipationMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  value) ;

constexpr void __cordl_internal_set_DissipationRate(float_t  value) ;

constexpr void __cordl_internal_set_FrequencyGain(float_t  value) ;

constexpr void __cordl_internal_set_ImpactRadius(float_t  value) ;

constexpr void __cordl_internal_set_ImpulseChannel(int32_t  value) ;

constexpr void __cordl_internal_set_ImpulseDuration(float_t  value) ;

constexpr void __cordl_internal_set_ImpulseShape(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  value) ;

constexpr void __cordl_internal_set_ImpulseType(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes  value) ;

constexpr void __cordl_internal_set_PropagationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_Randomize(bool  value) ;

constexpr void __cordl_internal_set_RawSignal(::UnityW<::Unity::Cinemachine::SignalSourceAsset>  value) ;

constexpr void __cordl_internal_set_RepeatMode(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes  value) ;

constexpr void __cordl_internal_set_TimeEnvelope(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  value) ;

/// @brief Method .ctor, addr 0xaee3514, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::AnimationCurve*> getStaticF_s_StandardShapes() ;

/// @brief Method get_ImpulseCurve, addr 0xaee2fb0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_ImpulseCurve() ;

static inline void setStaticF_s_StandardShapes(::ArrayW<::UnityEngine::AnimationCurve*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseDefinition(CinemachineImpulseDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseDefinition(CinemachineImpulseDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22474};

/// [CinemachineImpulseChannelProperty]
/// [Tooltip("Impulse events generated here will appear on the channels included in the mask.")]
/// [FormerlySerializedAs("m_ImpulseChannel")]
/// @brief Field ImpulseChannel, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ImpulseChannel;

/// [Tooltip("Shape of the impact signal")]
/// [FormerlySerializedAs("m_ImpulseShape")]
/// @brief Field ImpulseShape, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  ___ImpulseShape;

/// [Tooltip("Defines the custom shape of the impact signal that will be generated.")]
/// [FormerlySerializedAs("m_CustomImpulseShape")]
/// @brief Field CustomImpulseShape, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___CustomImpulseShape;

/// [Tooltip("The time during which the impact signal will occur.  The signal shape will be stretched to fill that time.")]
/// [FormerlySerializedAs("m_ImpulseDuration")]
/// @brief Field ImpulseDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___ImpulseDuration;

/// [Tooltip("How the impulse travels through space and time.")]
/// [FormerlySerializedAs("m_ImpulseType")]
/// @brief Field ImpulseType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes  ___ImpulseType;

/// [Tooltip("This defines how the widely signal will spread within the effect radius before dissipating with distance from the impact point")]
/// [Range(0, 1)]
/// [FormerlySerializedAs("m_DissipationRate")]
/// @brief Field DissipationRate, offset: 0x28, size: 0x4, def value: None
 float_t  ___DissipationRate;

/// [Header("Signal Shape")]
/// [Tooltip("Legacy mode only: Defines the signal that will be generated.")]
/// [CinemachineEmbeddedAssetProperty(true)]
/// [FormerlySerializedAs("m_RawSignal")]
/// @brief Field RawSignal, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::SignalSourceAsset>  ___RawSignal;

/// [Tooltip("Legacy mode only: Gain to apply to the amplitudes defined in the signal source.  1 is normal.  Setting this to 0 completely mutes the signal.")]
/// [FormerlySerializedAs("m_AmplitudeGain")]
/// @brief Field AmplitudeGain, offset: 0x38, size: 0x4, def value: None
 float_t  ___AmplitudeGain;

/// [Tooltip("Legacy mode only: Scale factor to apply to the time axis.  1 is normal.  Larger magnitudes will make the signal progress more rapidly.")]
/// [FormerlySerializedAs("m_FrequencyGain")]
/// @brief Field FrequencyGain, offset: 0x3c, size: 0x4, def value: None
 float_t  ___FrequencyGain;

/// [Tooltip("Legacy mode only: How to fit the signal into the envelope time")]
/// [FormerlySerializedAs("m_RepeatMode")]
/// @brief Field RepeatMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes  ___RepeatMode;

/// [Tooltip("Legacy mode only: Randomize the signal start time")]
/// [FormerlySerializedAs("m_Randomize")]
/// @brief Field Randomize, offset: 0x44, size: 0x1, def value: None
 bool  ___Randomize;

/// [Tooltip("Legacy mode only: This defines the time-envelope of the signal.  The raw signal will be time-scaled to fit in the envelope.")]
/// [FormerlySerializedAs("m_TimeEnvelope")]
/// @brief Field TimeEnvelope, offset: 0x48, size: 0x20, def value: None
 ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  ___TimeEnvelope;

/// [Header("Spatial Range")]
/// [Tooltip("Legacy mode only: The signal will have full amplitude in this radius surrounding the impact point.  Beyond that it will dissipate with distance.")]
/// [FormerlySerializedAs("m_ImpactRadius")]
/// @brief Field ImpactRadius, offset: 0x68, size: 0x4, def value: None
 float_t  ___ImpactRadius;

/// [Tooltip("Legacy mode only: How the signal direction behaves as the listener moves away from the origin.")]
/// [FormerlySerializedAs("m_DirectionMode")]
/// @brief Field DirectionMode, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  ___DirectionMode;

/// [Tooltip("Legacy mode only: This defines how the signal will dissipate with distance beyond the impact radius.")]
/// [FormerlySerializedAs("m_DissipationMode")]
/// @brief Field DissipationMode, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  ___DissipationMode;

/// [Tooltip("The signal will have no effect outside this radius surrounding the impact point.")]
/// [FormerlySerializedAs("m_DissipationDistance")]
/// @brief Field DissipationDistance, offset: 0x74, size: 0x4, def value: None
 float_t  ___DissipationDistance;

/// [Tooltip("The speed (m/s) at which the impulse propagates through space.  High speeds allow listeners to react instantaneously, while slower speeds allow listeners in the scene to react as if to a wave spreading from the source.")]
/// [FormerlySerializedAs("m_PropagationSpeed")]
/// @brief Field PropagationSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___PropagationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___ImpulseChannel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___ImpulseShape) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___CustomImpulseShape) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___ImpulseDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___ImpulseType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___DissipationRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___RawSignal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___AmplitudeGain) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___FrequencyGain) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___RepeatMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___Randomize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___TimeEnvelope) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___ImpactRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___DirectionMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___DissipationMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___DissipationDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition, ___PropagationSpeed) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseDefinition) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseDefinition/LegacySignalSource
class CORDL_TYPE CinemachineImpulseDefinition_LegacySignalSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Field m_Def, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Def, put=__cordl_internal_set_m_Def)) ::Unity::Cinemachine::CinemachineImpulseDefinition*  m_Def;

/// @brief Field m_StartTimeOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartTimeOffset, put=__cordl_internal_set_m_StartTimeOffset)) float_t  m_StartTimeOffset;

/// @brief Field m_Velocity, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Velocity, put=__cordl_internal_set_m_Velocity)) ::UnityEngine::Vector3  m_Velocity;

/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr operator  ::Unity::Cinemachine::ISignalSource6D*() noexcept;

/// @brief Method GetSignal, addr 0xaee36e0, size 0x228, virtual true, abstract: false, final true
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource* New_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity) ;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& __cordl_internal_get_m_Def() const;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& __cordl_internal_get_m_Def() ;

constexpr float_t const& __cordl_internal_get_m_StartTimeOffset() const;

constexpr float_t& __cordl_internal_get_m_StartTimeOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Velocity() ;

constexpr void __cordl_internal_set_m_Def(::Unity::Cinemachine::CinemachineImpulseDefinition*  value) ;

constexpr void __cordl_internal_set_m_StartTimeOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xaee346c, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity) ;

/// @brief Method get_SignalDuration, addr 0xaee36b8, size 0x28, virtual true, abstract: false, final true
inline float_t get_SignalDuration() ;

/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* i___Unity__Cinemachine__ISignalSource6D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseDefinition_LegacySignalSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition_LegacySignalSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseDefinition_LegacySignalSource(CinemachineImpulseDefinition_LegacySignalSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition_LegacySignalSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseDefinition_LegacySignalSource(CinemachineImpulseDefinition_LegacySignalSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22473};

/// @brief Field m_Def, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineImpulseDefinition*  ___m_Def;

/// @brief Field m_Velocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Velocity;

/// @brief Field m_StartTimeOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_StartTimeOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource, ___m_Def) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource, ___m_Velocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource, ___m_StartTimeOffset) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseDefinition/SignalSource
class CORDL_TYPE CinemachineImpulseDefinition_SignalSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Field m_Def, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Def, put=__cordl_internal_set_m_Def)) ::Unity::Cinemachine::CinemachineImpulseDefinition*  m_Def;

/// @brief Field m_Velocity, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Velocity, put=__cordl_internal_set_m_Velocity)) ::UnityEngine::Vector3  m_Velocity;

/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr operator  ::Unity::Cinemachine::ISignalSource6D*() noexcept;

/// @brief Method GetSignal, addr 0xaee3608, size 0xb0, virtual true, abstract: false, final true
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource* New_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity) ;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& __cordl_internal_get_m_Def() const;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& __cordl_internal_get_m_Def() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Velocity() ;

constexpr void __cordl_internal_set_m_Def(::Unity::Cinemachine::CinemachineImpulseDefinition*  value) ;

constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xaee3414, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity) ;

/// @brief Method get_SignalDuration, addr 0xaee35f0, size 0x18, virtual true, abstract: false, final true
inline float_t get_SignalDuration() ;

/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* i___Unity__Cinemachine__ISignalSource6D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseDefinition_SignalSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition_SignalSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseDefinition_SignalSource(CinemachineImpulseDefinition_SignalSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseDefinition_SignalSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseDefinition_SignalSource(CinemachineImpulseDefinition_SignalSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22472};

/// @brief Field m_Def, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineImpulseDefinition*  ___m_Def;

/// @brief Field m_Velocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource, ___m_Def) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource, ___m_Velocity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
