#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/MonkeGravityController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__RotationDirection_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeGravityController)
namespace GT_CustomMapSupportRuntime {
class MonkeGravityControllerSettings;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class ICallbackUnique;
}
namespace GlobalNamespace {
struct MonkeGravityController___c__DisplayClass61_0;
}
namespace GorillaTag::Gravity {
class BasicGravityZone;
}
namespace GorillaTag::Gravity {
struct RotationDirection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::MonkeGravityController*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::MonkeGravityController*, "GorillaTag.Gravity", "MonkeGravityController");
// Dependencies GorillaTag.Gravity.RotationDirection, UnityEngine.ForceMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.MonkeGravityController
class CORDL_TYPE MonkeGravityController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass61_0 = ::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0;

 __declspec(property(get=get_ActivatorCollider)) ::UnityW<::UnityEngine::Collider>  ActivatorCollider;

 __declspec(property(get=get_GlobalGravityIntent, put=set_GlobalGravityIntent)) bool  GlobalGravityIntent;

 __declspec(property(get=get_GravityDown, put=set_GravityDown)) ::UnityEngine::Vector3  GravityDown;

 __declspec(property(get=get_GravityMultiplier, put=set_GravityMultiplier)) float_t  GravityMultiplier;

 __declspec(property(get=get_GravityUp, put=set_GravityUp)) ::UnityEngine::Vector3  GravityUp;

 __declspec(property(get=get_GravityZonesCount)) int32_t  GravityZonesCount;

 __declspec(property(get=ICallbackUnique_get_Registered, put=ICallbackUnique_set_Registered)) bool  ICallbackUnique_Registered;

 __declspec(property(get=get_InstantRotation)) bool  InstantRotation;

 __declspec(property(get=get_OverrideForceMode)) bool  OverrideForceMode;

 __declspec(property(get=get_PersonalGravityDirection, put=set_PersonalGravityDirection)) ::UnityEngine::Vector3  PersonalGravityDirection;

 __declspec(property(get=get_PreferredRotationDirection, put=set_PreferredRotationDirection)) ::GorillaTag::Gravity::RotationDirection  PreferredRotationDirection;

 __declspec(property(get=get_Register)) bool  Register;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_TargetRigidBody)) ::UnityW<::UnityEngine::Rigidbody>  TargetRigidBody;

 __declspec(property(get=get_TargetTransform)) ::UnityW<::UnityEngine::Transform>  TargetTransform;

/// @brief Field <GravityDown>k__BackingField, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__GravityDown_k__BackingField, put=__cordl_internal_set__GravityDown_k__BackingField)) ::UnityEngine::Vector3  _GravityDown_k__BackingField;

/// @brief Field <GravityMultiplier>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__GravityMultiplier_k__BackingField, put=__cordl_internal_set__GravityMultiplier_k__BackingField)) float_t  _GravityMultiplier_k__BackingField;

/// @brief Field <GravityUp>k__BackingField, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__GravityUp_k__BackingField, put=__cordl_internal_set__GravityUp_k__BackingField)) ::UnityEngine::Vector3  _GravityUp_k__BackingField;

/// @brief Field <ICallbackUnique.Registered>k__BackingField, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ICallbackUnique_Registered_k__BackingField, put=__cordl_internal_set__ICallbackUnique_Registered_k__BackingField)) bool  _ICallbackUnique_Registered_k__BackingField;

/// @brief Field <PersonalGravityDirection>k__BackingField, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__PersonalGravityDirection_k__BackingField, put=__cordl_internal_set__PersonalGravityDirection_k__BackingField)) ::UnityEngine::Vector3  _PersonalGravityDirection_k__BackingField;

/// @brief Field m_activatorCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_activatorCollider, put=__cordl_internal_set_m_activatorCollider)) ::UnityW<::UnityEngine::Collider>  m_activatorCollider;

/// @brief Field m_alwaysInZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_alwaysInZone, put=__cordl_internal_set_m_alwaysInZone)) ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  m_alwaysInZone;

/// @brief Field m_forceModeOverride, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_forceModeOverride, put=__cordl_internal_set_m_forceModeOverride)) ::UnityEngine::ForceMode  m_forceModeOverride;

/// @brief Field m_globalGravityIntent, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_globalGravityIntent, put=__cordl_internal_set_m_globalGravityIntent)) bool  m_globalGravityIntent;

/// @brief Field m_gravityZones, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gravityZones, put=__cordl_internal_set_m_gravityZones)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  m_gravityZones;

/// @brief Field m_highestAuthorityLevel, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_highestAuthorityLevel, put=__cordl_internal_set_m_highestAuthorityLevel)) int32_t  m_highestAuthorityLevel;

/// @brief Field m_instantRotation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_instantRotation, put=__cordl_internal_set_m_instantRotation)) bool  m_instantRotation;

/// @brief Field m_needsRotationRecovery, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_needsRotationRecovery, put=__cordl_internal_set_m_needsRotationRecovery)) bool  m_needsRotationRecovery;

/// @brief Field m_overrideForceMode, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_overrideForceMode, put=__cordl_internal_set_m_overrideForceMode)) bool  m_overrideForceMode;

/// @brief Field m_preferredRotationDirection, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_preferredRotationDirection, put=__cordl_internal_set_m_preferredRotationDirection)) ::GorillaTag::Gravity::RotationDirection  m_preferredRotationDirection;

/// @brief Field m_register, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_register, put=__cordl_internal_set_m_register)) bool  m_register;

/// @brief Field m_targetRigidBody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_targetRigidBody, put=__cordl_internal_set_m_targetRigidBody)) ::UnityW<::UnityEngine::Rigidbody>  m_targetRigidBody;

/// @brief Field m_targetTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_targetTransform, put=__cordl_internal_set_m_targetTransform)) ::UnityW<::UnityEngine::Transform>  m_targetTransform;

/// @brief Field m_useRotation, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useRotation, put=__cordl_internal_set_m_useRotation)) bool  m_useRotation;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ICallbackUnique"
constexpr operator  ::GlobalNamespace::ICallbackUnique*() noexcept;

/// @brief Method ApplyGravityForce, addr 0x5d3a6a0, size 0x78, virtual true, abstract: false, final false
inline void ApplyGravityForce(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  forceType) ;

/// @brief Method ApplyGravityUpRotation, addr 0x5d3a720, size 0x268, virtual true, abstract: false, final false
inline void ApplyGravityUpRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  upDir, float_t  speed) ;

/// @brief Method AssignReferencesIfMissing, addr 0x5d3ad5c, size 0x80, virtual false, abstract: false, final false
inline void AssignReferencesIfMissing(::UnityEngine::Rigidbody*  rb, ::UnityEngine::Collider*  col, ::UnityEngine::Transform*  tr) ;

/// @brief Method Awake, addr 0x5d395cc, size 0x1cc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CallBack, addr 0x5d3a0e8, size 0x2e0, virtual true, abstract: false, final false
inline void CallBack() ;

/// @brief Method ClearAllGravityZones, addr 0x5d39aec, size 0xc4, virtual false, abstract: false, final false
inline void ClearAllGravityZones() ;

/// @brief Method ClearRotationRecovery, addr 0x5d3a718, size 0x8, virtual false, abstract: false, final false
inline void ClearRotationRecovery() ;

/// @brief Method CopyProperties, addr 0x5d3a988, size 0x3d4, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*  settings, ::GorillaTag::Gravity::BasicGravityZone*  alwaysInZone) ;

/// @brief Method GetWorldPoint, addr 0x5d3a3c8, size 0x18, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldPoint() ;

/// [CompilerGenerated]
/// @brief Method ICallbackUnique.get_Registered, addr 0x5d395bc, size 0x8, virtual true, abstract: false, final true
inline bool ICallbackUnique_get_Registered() ;

/// [CompilerGenerated]
/// @brief Method ICallbackUnique.set_Registered, addr 0x5d395c4, size 0x8, virtual true, abstract: false, final true
inline void ICallbackUnique_set_Registered(bool  value) ;

static inline ::GorillaTag::Gravity::MonkeGravityController* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d39964, size 0x88, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d39798, size 0xc8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnteredGravityZone, addr 0x5d3a3e0, size 0x118, virtual true, abstract: false, final false
inline void OnEnteredGravityZone(::GorillaTag::Gravity::BasicGravityZone*  zone) ;

/// @brief Method OnLeftGravityZone, addr 0x5d3a4f8, size 0x1a8, virtual true, abstract: false, final false
inline void OnLeftGravityZone(::GorillaTag::Gravity::BasicGravityZone*  zone) ;

/// @brief Method ProcessGravityZones, addr 0x5d39bb0, size 0x538, virtual false, abstract: false, final false
inline ::System::ValueTuple_4<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t,bool> ProcessGravityZones(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method SetPersonalGravityDirection, addr 0x5d39448, size 0xf0, virtual false, abstract: false, final false
inline void SetPersonalGravityDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method SetPersonalGravityDirection, addr 0x5d39538, size 0x2c, virtual false, abstract: false, final false
inline void SetPersonalGravityDirection(::UnityEngine::Transform*  reference) ;

/// [CompilerGenerated]
/// @brief Method <ProcessGravityZones>g___ProcessGravityInfo|61_0, addr 0x5d3af34, size 0xc8, virtual false, abstract: false, final false
inline void _ProcessGravityZones_g___ProcessGravityInfo_61_0(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::BasicGravityZone*>  gZone, ::by_ref<::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__GravityDown_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__GravityDown_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__GravityMultiplier_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GravityMultiplier_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__GravityUp_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__GravityUp_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ICallbackUnique_Registered_k__BackingField() const;

constexpr bool& __cordl_internal_get__ICallbackUnique_Registered_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__PersonalGravityDirection_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__PersonalGravityDirection_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_activatorCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_activatorCollider() ;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& __cordl_internal_get_m_alwaysInZone() const;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& __cordl_internal_get_m_alwaysInZone() ;

constexpr ::UnityEngine::ForceMode const& __cordl_internal_get_m_forceModeOverride() const;

constexpr ::UnityEngine::ForceMode& __cordl_internal_get_m_forceModeOverride() ;

constexpr bool const& __cordl_internal_get_m_globalGravityIntent() const;

constexpr bool& __cordl_internal_get_m_globalGravityIntent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* const& __cordl_internal_get_m_gravityZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*& __cordl_internal_get_m_gravityZones() ;

constexpr int32_t const& __cordl_internal_get_m_highestAuthorityLevel() const;

constexpr int32_t& __cordl_internal_get_m_highestAuthorityLevel() ;

constexpr bool const& __cordl_internal_get_m_instantRotation() const;

constexpr bool& __cordl_internal_get_m_instantRotation() ;

constexpr bool const& __cordl_internal_get_m_needsRotationRecovery() const;

constexpr bool& __cordl_internal_get_m_needsRotationRecovery() ;

constexpr bool const& __cordl_internal_get_m_overrideForceMode() const;

constexpr bool& __cordl_internal_get_m_overrideForceMode() ;

constexpr ::GorillaTag::Gravity::RotationDirection const& __cordl_internal_get_m_preferredRotationDirection() const;

constexpr ::GorillaTag::Gravity::RotationDirection& __cordl_internal_get_m_preferredRotationDirection() ;

constexpr bool const& __cordl_internal_get_m_register() const;

constexpr bool& __cordl_internal_get_m_register() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_targetRigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_targetRigidBody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_targetTransform() ;

constexpr bool const& __cordl_internal_get_m_useRotation() const;

constexpr bool& __cordl_internal_get_m_useRotation() ;

constexpr void __cordl_internal_set__GravityDown_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__GravityMultiplier_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__GravityUp_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ICallbackUnique_Registered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PersonalGravityDirection_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_activatorCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_alwaysInZone(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value) ;

constexpr void __cordl_internal_set_m_forceModeOverride(::UnityEngine::ForceMode  value) ;

constexpr void __cordl_internal_set_m_globalGravityIntent(bool  value) ;

constexpr void __cordl_internal_set_m_gravityZones(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value) ;

constexpr void __cordl_internal_set_m_highestAuthorityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_instantRotation(bool  value) ;

constexpr void __cordl_internal_set_m_needsRotationRecovery(bool  value) ;

constexpr void __cordl_internal_set_m_overrideForceMode(bool  value) ;

constexpr void __cordl_internal_set_m_preferredRotationDirection(::GorillaTag::Gravity::RotationDirection  value) ;

constexpr void __cordl_internal_set_m_register(bool  value) ;

constexpr void __cordl_internal_set_m_targetRigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_useRotation(bool  value) ;

/// @brief Method .ctor, addr 0x5d3addc, size 0x158, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivatorCollider, addr 0x5d39398, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_ActivatorCollider() ;

/// @brief Method get_GlobalGravityIntent, addr 0x5d395ac, size 0x8, virtual false, abstract: false, final false
inline bool get_GlobalGravityIntent() ;

/// [CompilerGenerated]
/// @brief Method get_GravityDown, addr 0x5d39408, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GravityDown() ;

/// [CompilerGenerated]
/// @brief Method get_GravityMultiplier, addr 0x5d39420, size 0x8, virtual false, abstract: false, final false
inline float_t get_GravityMultiplier() ;

/// [CompilerGenerated]
/// @brief Method get_GravityUp, addr 0x5d393f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GravityUp() ;

/// @brief Method get_GravityZonesCount, addr 0x5d39564, size 0x48, virtual false, abstract: false, final false
inline int32_t get_GravityZonesCount() ;

/// @brief Method get_InstantRotation, addr 0x5d393c8, size 0x8, virtual false, abstract: false, final false
inline bool get_InstantRotation() ;

/// @brief Method get_OverrideForceMode, addr 0x5d393d0, size 0x8, virtual false, abstract: false, final false
inline bool get_OverrideForceMode() ;

/// [CompilerGenerated]
/// @brief Method get_PersonalGravityDirection, addr 0x5d39430, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_PersonalGravityDirection() ;

/// @brief Method get_PreferredRotationDirection, addr 0x5d393d8, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::Gravity::RotationDirection get_PreferredRotationDirection() ;

/// @brief Method get_Register, addr 0x5d393e8, size 0x8, virtual false, abstract: false, final false
inline bool get_Register() ;

/// @brief Method get_Scale, addr 0x5d393b0, size 0x18, virtual true, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method get_TargetRigidBody, addr 0x5d393a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_TargetRigidBody() ;

/// @brief Method get_TargetTransform, addr 0x5d393a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TargetTransform() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// @brief Convert to "::GlobalNamespace::ICallbackUnique"
constexpr ::GlobalNamespace::ICallbackUnique* i___GlobalNamespace__ICallbackUnique() noexcept;

/// @brief Method set_GlobalGravityIntent, addr 0x5d395b4, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalGravityIntent(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_GravityDown, addr 0x5d39414, size 0xc, virtual false, abstract: false, final false
inline void set_GravityDown(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_GravityMultiplier, addr 0x5d39428, size 0x8, virtual false, abstract: false, final false
inline void set_GravityMultiplier(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_GravityUp, addr 0x5d393fc, size 0xc, virtual false, abstract: false, final false
inline void set_GravityUp(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_PersonalGravityDirection, addr 0x5d3943c, size 0xc, virtual false, abstract: false, final false
inline void set_PersonalGravityDirection(::UnityEngine::Vector3  value) ;

/// @brief Method set_PreferredRotationDirection, addr 0x5d393e0, size 0x8, virtual false, abstract: false, final false
inline void set_PreferredRotationDirection(::GorillaTag::Gravity::RotationDirection  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeGravityController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeGravityController(MonkeGravityController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeGravityController(MonkeGravityController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4684};

/// [SerializeField]
/// @brief Field m_activatorCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_activatorCollider;

/// [SerializeField]
/// @brief Field m_targetRigidBody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_targetRigidBody;

/// [SerializeField]
/// @brief Field m_targetTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_targetTransform;

/// [SerializeField]
/// @brief Field m_instantRotation, offset: 0x38, size: 0x1, def value: None
 bool  ___m_instantRotation;

/// [SerializeField]
/// @brief Field m_useRotation, offset: 0x39, size: 0x1, def value: None
 bool  ___m_useRotation;

/// [SerializeField]
/// @brief Field m_overrideForceMode, offset: 0x3a, size: 0x1, def value: None
 bool  ___m_overrideForceMode;

/// [SerializeField]
/// @brief Field m_forceModeOverride, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::ForceMode  ___m_forceModeOverride;

/// [SerializeField]
/// @brief Field m_alwaysInZone, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  ___m_alwaysInZone;

/// [Tooltip("The direction we wish to rotate if the target is 180 degrees off.")]
/// [SerializeField]
/// @brief Field m_preferredRotationDirection, offset: 0x48, size: 0x4, def value: None
 ::GorillaTag::Gravity::RotationDirection  ___m_preferredRotationDirection;

/// @brief Field m_register, offset: 0x4c, size: 0x1, def value: None
 bool  ___m_register;

/// @brief Field m_gravityZones, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  ___m_gravityZones;

/// @brief Field m_needsRotationRecovery, offset: 0x58, size: 0x1, def value: None
 bool  ___m_needsRotationRecovery;

/// [CompilerGenerated]
/// @brief Field <GravityUp>k__BackingField, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____GravityUp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GravityDown>k__BackingField, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____GravityDown_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GravityMultiplier>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____GravityMultiplier_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PersonalGravityDirection>k__BackingField, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____PersonalGravityDirection_k__BackingField;

/// @brief Field m_globalGravityIntent, offset: 0x84, size: 0x1, def value: None
 bool  ___m_globalGravityIntent;

/// @brief Field m_highestAuthorityLevel, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_highestAuthorityLevel;

/// [CompilerGenerated]
/// @brief Field <ICallbackUnique.Registered>k__BackingField, offset: 0x8c, size: 0x1, def value: None
 bool  ____ICallbackUnique_Registered_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_activatorCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_targetRigidBody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_targetTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_instantRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_useRotation) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_overrideForceMode) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_forceModeOverride) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_alwaysInZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_preferredRotationDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_register) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_gravityZones) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_needsRotationRecovery) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ____GravityUp_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ____GravityDown_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ____GravityMultiplier_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ____PersonalGravityDirection_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_globalGravityIntent) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ___m_highestAuthorityLevel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityController, ____ICallbackUnique_Registered_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::MonkeGravityController) == 0x90, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
