#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionGate)
namespace GlobalNamespace {
struct LocomotionGate_LocomotionModeEventArgs;
}
namespace GlobalNamespace {
struct LocomotionGate_LocomotionMode;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionGate_GateSection;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionGate___c;
}
namespace Oculus::Interaction::Locomotion {
class VirtualActiveState;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionGate;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionGate_GateSection;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionGate___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionGate*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionGate___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionGate*, "Oculus.Interaction.Locomotion", "LocomotionGate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*, "Oculus.Interaction.Locomotion", "LocomotionGate/GateSection");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionGate___c*, "Oculus.Interaction.Locomotion", "LocomotionGate/<>c");
// Dependencies Oculus.Interaction.Locomotion.LocomotionGate::GateSection, Oculus.Interaction.Locomotion.LocomotionGate::LocomotionMode, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionGate
class CORDL_TYPE LocomotionGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LocomotionMode = ::GlobalNamespace::LocomotionGate_LocomotionMode;

using LocomotionModeEventArgs = ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs;

using GateSection = ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection;

using __c = ::Oculus::Interaction::Locomotion::LocomotionGate___c;

 __declspec(property(get=get_ActiveMode, put=set_ActiveMode)) ::GlobalNamespace::LocomotionGate_LocomotionMode  ActiveMode;

 __declspec(property(get=get_CurrentAngle, put=set_CurrentAngle)) float_t  CurrentAngle;

/// @brief Field DefaultSection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultSection, put=setStaticF_DefaultSection)) ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*  DefaultSection;

 __declspec(property(get=get_DisableShape, put=set_DisableShape)) ::Oculus::Interaction::IActiveState*  DisableShape;

 __declspec(property(get=get_EnableShape, put=set_EnableShape)) ::Oculus::Interaction::IActiveState*  EnableShape;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_StabilizationPose, put=set_StabilizationPose)) ::UnityEngine::Pose  StabilizationPose;

 __declspec(property(get=get_WristDirection, put=set_WristDirection)) ::UnityEngine::Vector3  WristDirection;

/// @brief Field <CurrentAngle>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentAngle_k__BackingField, put=__cordl_internal_set__CurrentAngle_k__BackingField)) float_t  _CurrentAngle_k__BackingField;

/// @brief Field <DisableShape>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisableShape_k__BackingField, put=__cordl_internal_set__DisableShape_k__BackingField)) ::Oculus::Interaction::IActiveState*  _DisableShape_k__BackingField;

/// @brief Field <EnableShape>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnableShape_k__BackingField, put=__cordl_internal_set__EnableShape_k__BackingField)) ::Oculus::Interaction::IActiveState*  _EnableShape_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <StabilizationPose>k__BackingField, offset 0x8c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__StabilizationPose_k__BackingField, put=__cordl_internal_set__StabilizationPose_k__BackingField)) ::UnityEngine::Pose  _StabilizationPose_k__BackingField;

/// @brief Field <WristDirection>k__BackingField, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__WristDirection_k__BackingField, put=__cordl_internal_set__WristDirection_k__BackingField)) ::UnityEngine::Vector3  _WristDirection_k__BackingField;

/// @brief Field _activeMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeMode, put=__cordl_internal_set__activeMode)) ::GlobalNamespace::LocomotionGate_LocomotionMode  _activeMode;

/// @brief Field _cancelled, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__cancelled, put=__cordl_internal_set__cancelled)) bool  _cancelled;

/// @brief Field _currentGateIndex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentGateIndex, put=__cordl_internal_set__currentGateIndex)) int32_t  _currentGateIndex;

/// @brief Field _disableShape, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableShape, put=__cordl_internal_set__disableShape)) ::UnityW<::UnityEngine::Object>  _disableShape;

/// @brief Field _enableShape, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__enableShape, put=__cordl_internal_set__enableShape)) ::UnityW<::UnityEngine::Object>  _enableShape;

/// @brief Field _gateSections, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__gateSections, put=__cordl_internal_set__gateSections)) ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  _gateSections;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _previousShapeEnabled, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__previousShapeEnabled, put=__cordl_internal_set__previousShapeEnabled)) bool  _previousShapeEnabled;

/// @brief Field _shoulder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__shoulder, put=__cordl_internal_set__shoulder)) ::UnityW<::UnityEngine::Transform>  _shoulder;

/// @brief Field _started, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _teleportState, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__teleportState, put=__cordl_internal_set__teleportState)) ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  _teleportState;

/// @brief Field _turningState, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__turningState, put=__cordl_internal_set__turningState)) ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  _turningState;

/// @brief Field _whenActiveModeChanged, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenActiveModeChanged, put=__cordl_internal_set__whenActiveModeChanged)) ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  _whenActiveModeChanged;

/// @brief Method Awake, addr 0xa4c7f40, size 0xac, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Cancel, addr 0xa4c825c, size 0x28, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Disable, addr 0xa4c8128, size 0x24, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method GetBestGateSection, addr 0xa4c8d1c, size 0x114, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* GetBestGateSection(float_t  angle, ::by_ref<int32_t>  index) ;

/// @brief Method HandleHandupdated, addr 0xa4c8284, size 0xa98, virtual false, abstract: false, final false
inline void HandleHandupdated() ;

/// @brief Method InjectAllLocomotionGate, addr 0xa4c8f04, size 0x98, virtual false, abstract: false, final false
inline void InjectAllLocomotionGate(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Transform*  shoulder, ::Oculus::Interaction::IActiveState*  enableShape, ::Oculus::Interaction::IActiveState*  disableShape, ::Oculus::Interaction::Locomotion::VirtualActiveState*  turningState, ::Oculus::Interaction::Locomotion::VirtualActiveState*  teleportState, ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  gateSections) ;

/// @brief Method InjectDisableShape, addr 0xa4c913c, size 0xd0, virtual false, abstract: false, final false
inline void InjectDisableShape(::Oculus::Interaction::IActiveState*  disableShape) ;

/// @brief Method InjectEnableShape, addr 0xa4c906c, size 0xd0, virtual false, abstract: false, final false
inline void InjectEnableShape(::Oculus::Interaction::IActiveState*  enableShape) ;

/// @brief Method InjectGateSections, addr 0xa4c9224, size 0x8, virtual false, abstract: false, final false
inline void InjectGateSections(::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  gateSections) ;

/// @brief Method InjectHand, addr 0xa4c8f9c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectShoulder, addr 0xa4c920c, size 0x8, virtual false, abstract: false, final false
inline void InjectShoulder(::UnityEngine::Transform*  shoulder) ;

/// @brief Method InjectTeleportState, addr 0xa4c921c, size 0x8, virtual false, abstract: false, final false
inline void InjectTeleportState(::Oculus::Interaction::Locomotion::VirtualActiveState*  teleportState) ;

/// @brief Method InjectTurningState, addr 0xa4c9214, size 0x8, virtual false, abstract: false, final false
inline void InjectTurningState(::Oculus::Interaction::Locomotion::VirtualActiveState*  turningState) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionGate* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c814c, size 0x110, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c8018, size 0x110, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4c7fec, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__CurrentAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CurrentAngle_k__BackingField() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__DisableShape_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__DisableShape_k__BackingField() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__EnableShape_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__EnableShape_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__StabilizationPose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__StabilizationPose_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__WristDirection_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__WristDirection_k__BackingField() ;

constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode const& __cordl_internal_get__activeMode() const;

constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode& __cordl_internal_get__activeMode() ;

constexpr bool const& __cordl_internal_get__cancelled() const;

constexpr bool& __cordl_internal_get__cancelled() ;

constexpr int32_t const& __cordl_internal_get__currentGateIndex() const;

constexpr int32_t& __cordl_internal_get__currentGateIndex() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__disableShape() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__disableShape() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__enableShape() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__enableShape() ;

constexpr ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*> const& __cordl_internal_get__gateSections() const;

constexpr ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>& __cordl_internal_get__gateSections() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__previousShapeEnabled() const;

constexpr bool& __cordl_internal_get__previousShapeEnabled() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__shoulder() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__shoulder() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState> const& __cordl_internal_get__teleportState() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>& __cordl_internal_get__teleportState() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState> const& __cordl_internal_get__turningState() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>& __cordl_internal_get__turningState() ;

constexpr ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>* const& __cordl_internal_get__whenActiveModeChanged() const;

constexpr ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*& __cordl_internal_get__whenActiveModeChanged() ;

constexpr void __cordl_internal_set__CurrentAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DisableShape_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__EnableShape_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__StabilizationPose_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__WristDirection_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__activeMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value) ;

constexpr void __cordl_internal_set__cancelled(bool  value) ;

constexpr void __cordl_internal_set__currentGateIndex(int32_t  value) ;

constexpr void __cordl_internal_set__disableShape(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__enableShape(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__gateSections(::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__previousShapeEnabled(bool  value) ;

constexpr void __cordl_internal_set__shoulder(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__teleportState(::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  value) ;

constexpr void __cordl_internal_set__turningState(::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  value) ;

constexpr void __cordl_internal_set__whenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value) ;

/// @brief Method .ctor, addr 0xa4c922c, size 0x2d8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenActiveModeChanged, addr 0xa4c7df0, size 0xa8, virtual false, abstract: false, final false
inline void add_WhenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* getStaticF_DefaultSection() ;

/// @brief Method get_ActiveMode, addr 0xa4c7d20, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LocomotionGate_LocomotionMode get_ActiveMode() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentAngle, addr 0xa4c7d98, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentAngle() ;

/// [CompilerGenerated]
/// @brief Method get_DisableShape, addr 0xa4c7d10, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_DisableShape() ;

/// [CompilerGenerated]
/// @brief Method get_EnableShape, addr 0xa4c7d00, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_EnableShape() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4c7cf0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_StabilizationPose, addr 0xa4c7dc0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_StabilizationPose() ;

/// [CompilerGenerated]
/// @brief Method get_WristDirection, addr 0xa4c7da8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_WristDirection() ;

/// @brief Method remove_WhenActiveModeChanged, addr 0xa4c7e98, size 0xa8, virtual false, abstract: false, final false
inline void remove_WhenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value) ;

static inline void setStaticF_DefaultSection(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*  value) ;

/// @brief Method set_ActiveMode, addr 0xa4c7d28, size 0x68, virtual false, abstract: false, final false
inline void set_ActiveMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentAngle, addr 0xa4c7da0, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentAngle(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisableShape, addr 0xa4c7d18, size 0x8, virtual false, abstract: false, final false
inline void set_DisableShape(::Oculus::Interaction::IActiveState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnableShape, addr 0xa4c7d08, size 0x8, virtual false, abstract: false, final false
inline void set_EnableShape(::Oculus::Interaction::IActiveState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4c7cf8, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_StabilizationPose, addr 0xa4c7dd4, size 0x1c, virtual false, abstract: false, final false
inline void set_StabilizationPose(::UnityEngine::Pose  value) ;

/// [CompilerGenerated]
/// @brief Method set_WristDirection, addr 0xa4c7db4, size 0xc, virtual false, abstract: false, final false
inline void set_WristDirection(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionGate(LocomotionGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionGate(LocomotionGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16270};

/// @brief Field _enterPoseThreshold offset 0xffffffff size 0x4
static constexpr float_t  _enterPoseThreshold{static_cast<float_t>(0.5f)};

/// @brief Field _wristLimit offset 0xffffffff size 0x4
static constexpr float_t  _wristLimit{static_cast<float_t>(-70.0f)};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _shoulder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____shoulder;

/// [SerializeField]
/// @brief Field _gateSections, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  ____gateSections;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _enableShape, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____enableShape;

/// [CompilerGenerated]
/// @brief Field <EnableShape>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____EnableShape_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _disableShape, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____disableShape;

/// [CompilerGenerated]
/// @brief Field <DisableShape>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____DisableShape_k__BackingField;

/// [SerializeField]
/// @brief Field _turningState, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  ____turningState;

/// [SerializeField]
/// @brief Field _teleportState, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  ____teleportState;

/// @brief Field _started, offset: 0x70, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _previousShapeEnabled, offset: 0x71, size: 0x1, def value: None
 bool  ____previousShapeEnabled;

/// @brief Field _currentGateIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  ____currentGateIndex;

/// @brief Field _activeMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionGate_LocomotionMode  ____activeMode;

/// [CompilerGenerated]
/// @brief Field <CurrentAngle>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 float_t  ____CurrentAngle_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WristDirection>k__BackingField, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____WristDirection_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StabilizationPose>k__BackingField, offset: 0x8c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____StabilizationPose_k__BackingField;

/// @brief Field _whenActiveModeChanged, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  ____whenActiveModeChanged;

/// @brief Field _cancelled, offset: 0xb0, size: 0x1, def value: None
 bool  ____cancelled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____shoulder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____gateSections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____enableShape) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____EnableShape_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____disableShape) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____DisableShape_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____turningState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____teleportState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____started) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____previousShapeEnabled) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____currentGateIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____activeMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____CurrentAngle_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____WristDirection_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____StabilizationPose_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____whenActiveModeChanged) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate, ____cancelled) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionGate) == 0xb8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionGate/<>c
class CORDL_TYPE LocomotionGate___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionGate___c*  __9;

/// @brief Field <>9__65_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__65_0, put=setStaticF___9__65_0)) ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  __9__65_0;

static inline ::Oculus::Interaction::Locomotion::LocomotionGate___c* New_ctor() ;

/// @brief Method <.ctor>b__65_0, addr 0xa4c9634, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__65_0(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs  _p0_) ;

/// @brief Method .ctor, addr 0xa4c962c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionGate___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>* getStaticF___9__65_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionGate___c*  value) ;

static inline void setStaticF___9__65_0(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGate___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionGate___c(LocomotionGate___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionGate___c(LocomotionGate___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16269};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionGate___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// Dependencies Oculus.Interaction.Locomotion.LocomotionGate::LocomotionMode, System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionGate/GateSection
class CORDL_TYPE LocomotionGate_GateSection : public ::System::Object {
public:
// Declarations
/// @brief Field canEnterDirectly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_canEnterDirectly, put=__cordl_internal_set_canEnterDirectly)) bool  canEnterDirectly;

/// @brief Field locomotionMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_locomotionMode, put=__cordl_internal_set_locomotionMode)) ::GlobalNamespace::LocomotionGate_LocomotionMode  locomotionMode;

/// @brief Field maxAngle, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAngle, put=__cordl_internal_set_maxAngle)) float_t  maxAngle;

/// @brief Field minAngle, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAngle, put=__cordl_internal_set_minAngle)) float_t  minAngle;

static inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* New_ctor() ;

/// @brief Method ScoreToAngle, addr 0xa4c8e30, size 0xd4, virtual false, abstract: false, final false
inline float_t ScoreToAngle(float_t  angle) ;

constexpr bool const& __cordl_internal_get_canEnterDirectly() const;

constexpr bool& __cordl_internal_get_canEnterDirectly() ;

constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode const& __cordl_internal_get_locomotionMode() const;

constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode& __cordl_internal_get_locomotionMode() ;

constexpr float_t const& __cordl_internal_get_maxAngle() const;

constexpr float_t& __cordl_internal_get_maxAngle() ;

constexpr float_t const& __cordl_internal_get_minAngle() const;

constexpr float_t& __cordl_internal_get_minAngle() ;

constexpr void __cordl_internal_set_canEnterDirectly(bool  value) ;

constexpr void __cordl_internal_set_locomotionMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value) ;

constexpr void __cordl_internal_set_maxAngle(float_t  value) ;

constexpr void __cordl_internal_set_minAngle(float_t  value) ;

/// @brief Method .ctor, addr 0xa4c9504, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGate_GateSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate_GateSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionGate_GateSection(LocomotionGate_GateSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGate_GateSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionGate_GateSection(LocomotionGate_GateSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16267};

/// @brief Field minAngle, offset: 0x10, size: 0x4, def value: None
 float_t  ___minAngle;

/// @brief Field maxAngle, offset: 0x14, size: 0x4, def value: None
 float_t  ___maxAngle;

/// @brief Field canEnterDirectly, offset: 0x18, size: 0x1, def value: None
 bool  ___canEnterDirectly;

/// @brief Field locomotionMode, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionGate_LocomotionMode  ___locomotionMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection, ___minAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection, ___maxAngle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection, ___canEnterDirectly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection, ___locomotionMode) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
