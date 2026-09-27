#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DirectionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseManager)
namespace GlobalNamespace {
struct CinemachineImpulseManager_EnvelopeDefinition;
}
namespace GlobalNamespace {
struct ImpulseEvent_CinemachineImpulseManager_DirectionModes;
}
namespace GlobalNamespace {
struct ImpulseEvent_CinemachineImpulseManager_DissipationModes;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class CinemachineImpulseManager_ImpulseEvent;
}
namespace Unity::Cinemachine {
class ISignalSource6D;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineImpulseManager;
}
namespace Unity::Cinemachine {
class CinemachineImpulseManager_ImpulseEvent;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseManager*);
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseManager*, "Unity.Cinemachine", "CinemachineImpulseManager");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*, "Unity.Cinemachine", "CinemachineImpulseManager/ImpulseEvent");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseManager
class CORDL_TYPE CinemachineImpulseManager : public ::System::Object {
public:
// Declarations
using EnvelopeDefinition = ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition;

using ImpulseEvent = ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent;

 __declspec(property(get=get_CurrentTime)) float_t  CurrentTime;

/// @brief Field IgnoreTimeScale, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreTimeScale, put=__cordl_internal_set_IgnoreTimeScale)) bool  IgnoreTimeScale;

/// @brief Field m_ActiveEvents, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveEvents, put=__cordl_internal_set_m_ActiveEvents)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  m_ActiveEvents;

/// @brief Field m_ExpiredEvents, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExpiredEvents, put=__cordl_internal_set_m_ExpiredEvents)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  m_ExpiredEvents;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::Unity::Cinemachine::CinemachineImpulseManager*  s_Instance;

/// @brief Method AddImpulseEvent, addr 0xaee510c, size 0x134, virtual false, abstract: false, final false
inline void AddImpulseEvent(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*  e) ;

/// @brief Method Clear, addr 0xaee4218, size 0xc0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method EvaluateDissipationScale, addr 0xaee42d8, size 0xa4, virtual false, abstract: false, final false
static inline float_t EvaluateDissipationScale(float_t  spread, float_t  normalizedDistance) ;

/// @brief Method GetImpulseAt, addr 0xaee437c, size 0x3a0, virtual false, abstract: false, final false
inline bool GetImpulseAt(::UnityEngine::Vector3  listenerLocation, bool  distance2D, int32_t  channelMask, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method GetStrongestImpulseAt, addr 0xaee4ca8, size 0x314, virtual false, abstract: false, final false
inline bool GetStrongestImpulseAt(::UnityEngine::Vector3  listenerLocation, bool  distance2D, int32_t  channelMask, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method InitializeModule, addr 0xaee41c0, size 0x58, virtual false, abstract: false, final false
static inline void InitializeModule() ;

/// @brief Method NewImpulseEvent, addr 0xaee5028, size 0xdc, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* NewImpulseEvent() ;

static inline ::Unity::Cinemachine::CinemachineImpulseManager* New_ctor() ;

constexpr bool const& __cordl_internal_get_IgnoreTimeScale() const;

constexpr bool& __cordl_internal_get_IgnoreTimeScale() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* const& __cordl_internal_get_m_ActiveEvents() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*& __cordl_internal_get_m_ActiveEvents() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* const& __cordl_internal_get_m_ExpiredEvents() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*& __cordl_internal_get_m_ExpiredEvents() ;

constexpr void __cordl_internal_set_IgnoreTimeScale(bool  value) ;

constexpr void __cordl_internal_set_m_ActiveEvents(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  value) ;

constexpr void __cordl_internal_set_m_ExpiredEvents(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  value) ;

/// @brief Method .ctor, addr 0xaee4130, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineImpulseManager* getStaticF_s_Instance() ;

/// @brief Method get_CurrentTime, addr 0xaee4fbc, size 0x6c, virtual false, abstract: false, final false
inline float_t get_CurrentTime() ;

/// @brief Method get_Instance, addr 0xaee4138, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::CinemachineImpulseManager* get_Instance() ;

static inline void setStaticF_s_Instance(::Unity::Cinemachine::CinemachineImpulseManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseManager(CinemachineImpulseManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseManager(CinemachineImpulseManager const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22483};

/// @brief Field m_ExpiredEvents, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  ___m_ExpiredEvents;

/// @brief Field m_ActiveEvents, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  ___m_ActiveEvents;

/// @brief Field IgnoreTimeScale, offset: 0x20, size: 0x1, def value: None
 bool  ___IgnoreTimeScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager, ___m_ExpiredEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager, ___m_ActiveEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager, ___IgnoreTimeScale) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseManager) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.CinemachineImpulseManager::EnvelopeDefinition, Unity.Cinemachine.CinemachineImpulseManager::ImpulseEvent::DirectionModes, Unity.Cinemachine.CinemachineImpulseManager::ImpulseEvent::DissipationModes, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseManager/ImpulseEvent
class CORDL_TYPE CinemachineImpulseManager_ImpulseEvent : public ::System::Object {
public:
// Declarations
using DirectionModes = ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes;

using DissipationModes = ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes;

/// @brief Field Channel, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_Channel, put=__cordl_internal_set_Channel)) int32_t  Channel;

/// @brief Field CustomDissipation, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_CustomDissipation, put=__cordl_internal_set_CustomDissipation)) float_t  CustomDissipation;

/// @brief Field DirectionMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_DirectionMode, put=__cordl_internal_set_DirectionMode)) ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  DirectionMode;

/// @brief Field DissipationDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DissipationDistance, put=__cordl_internal_set_DissipationDistance)) float_t  DissipationDistance;

/// @brief Field DissipationMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_DissipationMode, put=__cordl_internal_set_DissipationMode)) ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  DissipationMode;

/// @brief Field Envelope, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_Envelope, put=__cordl_internal_set_Envelope)) ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  Envelope;

 __declspec(property(get=get_Expired)) bool  Expired;

/// @brief Field Position, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field PropagationSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_PropagationSpeed, put=__cordl_internal_set_PropagationSpeed)) float_t  PropagationSpeed;

/// @brief Field Radius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field SignalSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SignalSource, put=__cordl_internal_set_SignalSource)) ::Unity::Cinemachine::ISignalSource6D*  SignalSource;

/// @brief Field StartTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartTime, put=__cordl_internal_set_StartTime)) float_t  StartTime;

/// @brief Method Cancel, addr 0xaee5440, size 0x40, virtual false, abstract: false, final false
inline void Cancel(float_t  time, bool  forceNoDecay) ;

/// @brief Method Clear, addr 0xaee47ac, size 0xac, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DistanceDecay, addr 0xaee5480, size 0xd0, virtual false, abstract: false, final false
inline float_t DistanceDecay(float_t  distance) ;

/// @brief Method GetDecayedSignal, addr 0xaee4858, size 0x450, virtual false, abstract: false, final false
inline bool GetDecayedSignal(::UnityEngine::Vector3  listenerPosition, bool  use2D, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Channel() const;

constexpr int32_t& __cordl_internal_get_Channel() ;

constexpr float_t const& __cordl_internal_get_CustomDissipation() const;

constexpr float_t& __cordl_internal_get_CustomDissipation() ;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const& __cordl_internal_get_DirectionMode() const;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes& __cordl_internal_get_DirectionMode() ;

constexpr float_t const& __cordl_internal_get_DissipationDistance() const;

constexpr float_t& __cordl_internal_get_DissipationDistance() ;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const& __cordl_internal_get_DissipationMode() const;

constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes& __cordl_internal_get_DissipationMode() ;

constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition const& __cordl_internal_get_Envelope() const;

constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition& __cordl_internal_get_Envelope() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Position() ;

constexpr float_t const& __cordl_internal_get_PropagationSpeed() const;

constexpr float_t& __cordl_internal_get_PropagationSpeed() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr ::Unity::Cinemachine::ISignalSource6D* const& __cordl_internal_get_SignalSource() const;

constexpr ::Unity::Cinemachine::ISignalSource6D*& __cordl_internal_get_SignalSource() ;

constexpr float_t const& __cordl_internal_get_StartTime() const;

constexpr float_t& __cordl_internal_get_StartTime() ;

constexpr void __cordl_internal_set_Channel(int32_t  value) ;

constexpr void __cordl_internal_set_CustomDissipation(float_t  value) ;

constexpr void __cordl_internal_set_DirectionMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  value) ;

constexpr void __cordl_internal_set_DissipationDistance(float_t  value) ;

constexpr void __cordl_internal_set_DissipationMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  value) ;

constexpr void __cordl_internal_set_Envelope(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  value) ;

constexpr void __cordl_internal_set_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PropagationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_SignalSource(::Unity::Cinemachine::ISignalSource6D*  value) ;

constexpr void __cordl_internal_set_StartTime(float_t  value) ;

/// @brief Method .ctor, addr 0xaee5104, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Expired, addr 0xaee471c, size 0x90, virtual false, abstract: false, final false
inline bool get_Expired() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseManager_ImpulseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseManager_ImpulseEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseManager_ImpulseEvent(CinemachineImpulseManager_ImpulseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseManager_ImpulseEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseManager_ImpulseEvent(CinemachineImpulseManager_ImpulseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22482};

/// @brief Field StartTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___StartTime;

/// @brief Field Envelope, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  ___Envelope;

/// @brief Field SignalSource, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::ISignalSource6D*  ___SignalSource;

/// @brief Field Position, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Position;

/// @brief Field Radius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field DirectionMode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  ___DirectionMode;

/// @brief Field Channel, offset: 0x54, size: 0x4, def value: None
 int32_t  ___Channel;

/// @brief Field DissipationMode, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  ___DissipationMode;

/// @brief Field DissipationDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___DissipationDistance;

/// @brief Field CustomDissipation, offset: 0x60, size: 0x4, def value: None
 float_t  ___CustomDissipation;

/// @brief Field PropagationSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ___PropagationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___StartTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___Envelope) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___SignalSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___Position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___Radius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___DirectionMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___Channel) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___DissipationMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___DissipationDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___CustomDissipation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent, ___PropagationSpeed) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent) == 0x68, "Size mismatch!");

} // namespace end def Unity::Cinemachine
