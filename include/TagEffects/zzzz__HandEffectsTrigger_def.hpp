#pragma once
// IWYU pragma private; include "TagEffects/HandEffectsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandEffectsTrigger)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
struct HandEffectsOverrideCosmetic_HandEffectType;
}
namespace GlobalNamespace {
struct IHandEffectsTrigger_Mode;
}
namespace GlobalNamespace {
struct TagEffectsLibrary_EffectType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TagEffects {
class IHandEffectsTrigger;
}
namespace TagEffects {
class TagEffectPack;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TagEffects {
class HandEffectsTrigger;
}
// Write type traits
MARK_REF_T(::TagEffects::HandEffectsTrigger*);
DEFINE_IL2CPP_CLASS(::TagEffects::HandEffectsTrigger*, "TagEffects", "HandEffectsTrigger");
// Dependencies HandEffectsOverrideCosmetic::HandEffectType, TagEffects.IHandEffectsTrigger::Mode, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.HandEffectsTrigger
class CORDL_TYPE HandEffectsTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  CosmeticEffectPack;

 __declspec(property(get=get_EffectMode)) ::GlobalNamespace::IHandEffectsTrigger_Mode  EffectMode;

 __declspec(property(get=get_FingersDown)) bool  FingersDown;

 __declspec(property(get=get_FingersUp)) bool  FingersUp;

 __declspec(property(get=get_OnTrigger, put=set_OnTrigger)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  OnTrigger;

 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

 __declspec(property(get=get_Static)) bool  Static;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_RightHand)) bool  TagEffects_IHandEffectsTrigger_RightHand;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field <EffectMode>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__EffectMode_k__BackingField, put=__cordl_internal_set__EffectMode_k__BackingField)) ::GlobalNamespace::IHandEffectsTrigger_Mode  _EffectMode_k__BackingField;

/// @brief Field <OnTrigger>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnTrigger_k__BackingField, put=__cordl_internal_set__OnTrigger_k__BackingField)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  _OnTrigger_k__BackingField;

/// @brief Field debugVisuals, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugVisuals, put=__cordl_internal_set_debugVisuals)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  debugVisuals;

/// @brief Field isStatic, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Field mappingArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mappingArray, put=setStaticF_mappingArray)) ::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>  mappingArray;

/// @brief Field rig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rightHand, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) bool  rightHand;

/// @brief Field triggerRadius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerRadius, put=__cordl_internal_set_triggerRadius)) float_t  triggerRadius;

/// @brief Field velocityEstimator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Convert operator to "::TagEffects::IHandEffectsTrigger"
constexpr operator  ::TagEffects::IHandEffectsTrigger*() noexcept;

/// @brief Method Awake, addr 0x5cd5f50, size 0x128, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InTriggerZone, addr 0x5cd8284, size 0x154, virtual true, abstract: false, final true
inline bool InTriggerZone(::TagEffects::IHandEffectsTrigger*  t) ;

/// @brief Method MapEnum, addr 0x5cd7830, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType MapEnum(::GlobalNamespace::TagEffectsLibrary_EffectType  oldEnum) ;

static inline ::TagEffects::HandEffectsTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x5cd6160, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5cd60cc, size 0x94, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEntered, addr 0x5cd61bc, size 0x914, virtual true, abstract: false, final true
inline void OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other) ;

/// @brief Method PlayHandEffects, addr 0x5cd6b24, size 0xcb8, virtual false, abstract: false, final false
inline void PlayHandEffects(::GlobalNamespace::TagEffectsLibrary_EffectType  effectType, ::TagEffects::IHandEffectsTrigger*  other) ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_RightHand, addr 0x5cd5ea0, size 0x8, virtual true, abstract: false, final true
inline bool TagEffects_IHandEffectsTrigger_get_RightHand() ;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode const& __cordl_internal_get__EffectMode_k__BackingField() const;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode& __cordl_internal_get__EffectMode_k__BackingField() ;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* const& __cordl_internal_get__OnTrigger_k__BackingField() const;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*& __cordl_internal_get__OnTrigger_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_debugVisuals() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_debugVisuals() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr bool const& __cordl_internal_get_rightHand() const;

constexpr bool& __cordl_internal_get_rightHand() ;

constexpr float_t const& __cordl_internal_get_triggerRadius() const;

constexpr float_t& __cordl_internal_get_triggerRadius() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set__EffectMode_k__BackingField(::GlobalNamespace::IHandEffectsTrigger_Mode  value) ;

constexpr void __cordl_internal_set__OnTrigger_k__BackingField(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

constexpr void __cordl_internal_set_debugVisuals(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightHand(bool  value) ;

constexpr void __cordl_internal_set_triggerRadius(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5cd83d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType> getStaticF_mappingArray() ;

/// @brief Method get_CosmeticEffectPack, addr 0x5cd5ed0, size 0x80, virtual true, abstract: false, final true
inline ::UnityW<::TagEffects::TagEffectPack> get_CosmeticEffectPack() ;

/// [CompilerGenerated]
/// @brief Method get_EffectMode, addr 0x5cd5eb8, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IHandEffectsTrigger_Mode get_EffectMode() ;

/// @brief Method get_FingersDown, addr 0x5cd5c14, size 0xb0, virtual true, abstract: false, final true
inline bool get_FingersDown() ;

/// @brief Method get_FingersUp, addr 0x5cd5cc4, size 0xb0, virtual true, abstract: false, final true
inline bool get_FingersUp() ;

/// [CompilerGenerated]
/// @brief Method get_OnTrigger, addr 0x5cd5ea8, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* get_OnTrigger() ;

/// @brief Method get_Rig, addr 0x5cd5ec8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

/// @brief Method get_Static, addr 0x5cd5c0c, size 0x8, virtual true, abstract: false, final true
inline bool get_Static() ;

/// @brief Method get_Transform, addr 0x5cd5ec0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_Velocity, addr 0x5cd5d74, size 0x12c, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Convert to "::TagEffects::IHandEffectsTrigger"
constexpr ::TagEffects::IHandEffectsTrigger* i___TagEffects__IHandEffectsTrigger() noexcept;

static inline void setStaticF_mappingArray(::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnTrigger, addr 0x5cd5eb0, size 0x8, virtual true, abstract: false, final true
inline void set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectsTrigger(HandEffectsTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectsTrigger(HandEffectsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4482};

/// [SerializeField]
/// @brief Field triggerRadius, offset: 0x20, size: 0x4, def value: None
 float_t  ___triggerRadius;

/// [SerializeField]
/// @brief Field rightHand, offset: 0x24, size: 0x1, def value: None
 bool  ___rightHand;

/// [SerializeField]
/// @brief Field isStatic, offset: 0x25, size: 0x1, def value: None
 bool  ___isStatic;

/// @brief Field rig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field velocityEstimator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// [SerializeField]
/// @brief Field debugVisuals, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___debugVisuals;

/// [CompilerGenerated]
/// @brief Field <OnTrigger>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  ____OnTrigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EffectMode>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::IHandEffectsTrigger_Mode  ____EffectMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___triggerRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___rightHand) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___isStatic) == 0x25, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___rig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___velocityEstimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ___debugVisuals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ____OnTrigger_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TagEffects::HandEffectsTrigger, ____EffectMode_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::TagEffects::HandEffectsTrigger) == 0x50, "Size mismatch!");

} // namespace end def TagEffects
