#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandEffectsTester)
namespace GlobalNamespace {
struct IHandEffectsTrigger_Mode;
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
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HandEffectsTester;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandEffectsTester*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsTester*, "", "HandEffectsTester");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies TagEffects.IHandEffectsTrigger::Mode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandEffectsTester
class CORDL_TYPE HandEffectsTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnTrigger, put=set_OnTrigger)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  OnTrigger;

 __declspec(property(get=get_RightHand)) bool  RightHand;

 __declspec(property(get=get_Static)) bool  Static;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_CosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  TagEffects_IHandEffectsTrigger_CosmeticEffectPack;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_EffectMode)) ::GlobalNamespace::IHandEffectsTrigger_Mode  TagEffects_IHandEffectsTrigger_EffectMode;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_FingersDown)) bool  TagEffects_IHandEffectsTrigger_FingersDown;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_FingersUp)) bool  TagEffects_IHandEffectsTrigger_FingersUp;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  TagEffects_IHandEffectsTrigger_Rig;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_Transform)) ::UnityW<::UnityEngine::Transform>  TagEffects_IHandEffectsTrigger_Transform;

 __declspec(property(get=TagEffects_IHandEffectsTrigger_get_Velocity)) ::UnityEngine::Vector3  TagEffects_IHandEffectsTrigger_Velocity;

/// @brief Field <OnTrigger>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnTrigger_k__BackingField, put=__cordl_internal_set__OnTrigger_k__BackingField)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  _OnTrigger_k__BackingField;

/// @brief Field <RightHand>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__RightHand_k__BackingField, put=__cordl_internal_set__RightHand_k__BackingField)) bool  _RightHand_k__BackingField;

/// @brief Field cosmeticEffectPack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticEffectPack, put=__cordl_internal_set_cosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  cosmeticEffectPack;

/// @brief Field isStatic, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Field mode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::IHandEffectsTrigger_Mode  mode;

/// @brief Field triggerRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerRadius, put=__cordl_internal_set_triggerRadius)) float_t  triggerRadius;

/// @brief Field triggerZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerZone, put=__cordl_internal_set_triggerZone)) ::UnityW<::UnityEngine::Collider>  triggerZone;

/// @brief Convert operator to "::TagEffects::IHandEffectsTrigger"
constexpr operator  ::TagEffects::IHandEffectsTrigger*() noexcept;

/// @brief Method Awake, addr 0x56bd990, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InTriggerZone, addr 0x56bdd70, size 0xc34, virtual true, abstract: false, final true
inline bool InTriggerZone(::TagEffects::IHandEffectsTrigger*  t) ;

static inline ::GlobalNamespace::HandEffectsTester* New_ctor() ;

/// @brief Method OnDisable, addr 0x56bdc2c, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56bd9e8, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEntered, addr 0x56bdd6c, size 0x4, virtual true, abstract: false, final true
inline void OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other) ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_CosmeticEffectPack, addr 0x56bdd64, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::TagEffects::TagEffectPack> TagEffects_IHandEffectsTrigger_get_CosmeticEffectPack() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_EffectMode, addr 0x56bd94c, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IHandEffectsTrigger_Mode TagEffects_IHandEffectsTrigger_get_EffectMode() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_FingersDown, addr 0x56bd954, size 0x14, virtual true, abstract: false, final true
inline bool TagEffects_IHandEffectsTrigger_get_FingersDown() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_FingersUp, addr 0x56bd968, size 0x10, virtual true, abstract: false, final true
inline bool TagEffects_IHandEffectsTrigger_get_FingersUp() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_Rig, addr 0x56bd944, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::VRRig> TagEffects_IHandEffectsTrigger_get_Rig() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_Transform, addr 0x56bd93c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> TagEffects_IHandEffectsTrigger_get_Transform() ;

/// @brief Method TagEffects.IHandEffectsTrigger.get_Velocity, addr 0x56bdd20, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 TagEffects_IHandEffectsTrigger_get_Velocity() ;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* const& __cordl_internal_get__OnTrigger_k__BackingField() const;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*& __cordl_internal_get__OnTrigger_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RightHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__RightHand_k__BackingField() ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get_cosmeticEffectPack() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get_cosmeticEffectPack() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_triggerRadius() const;

constexpr float_t& __cordl_internal_get_triggerRadius() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_triggerZone() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_triggerZone() ;

constexpr void __cordl_internal_set__OnTrigger_k__BackingField(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

constexpr void __cordl_internal_set__RightHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_cosmeticEffectPack(::UnityW<::TagEffects::TagEffectPack>  value) ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::IHandEffectsTrigger_Mode  value) ;

constexpr void __cordl_internal_set_triggerRadius(float_t  value) ;

constexpr void __cordl_internal_set_triggerZone(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x56be9a4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_OnTrigger, addr 0x56bd978, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* get_OnTrigger() ;

/// [CompilerGenerated]
/// @brief Method get_RightHand, addr 0x56bd988, size 0x8, virtual true, abstract: false, final true
inline bool get_RightHand() ;

/// @brief Method get_Static, addr 0x56bd934, size 0x8, virtual true, abstract: false, final true
inline bool get_Static() ;

/// @brief Convert to "::TagEffects::IHandEffectsTrigger"
constexpr ::TagEffects::IHandEffectsTrigger* i___TagEffects__IHandEffectsTrigger() noexcept;

/// [CompilerGenerated]
/// @brief Method set_OnTrigger, addr 0x56bd980, size 0x8, virtual true, abstract: false, final true
inline void set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTester", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectsTester(HandEffectsTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTester", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectsTester(HandEffectsTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{991};

/// [SerializeField]
/// @brief Field cosmeticEffectPack, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ___cosmeticEffectPack;

/// @brief Field triggerZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___triggerZone;

/// @brief Field mode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::IHandEffectsTrigger_Mode  ___mode;

/// [SerializeField]
/// @brief Field triggerRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ___triggerRadius;

/// [SerializeField]
/// @brief Field isStatic, offset: 0x38, size: 0x1, def value: None
 bool  ___isStatic;

/// [CompilerGenerated]
/// @brief Field <OnTrigger>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  ____OnTrigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RightHand>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____RightHand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ___cosmeticEffectPack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ___triggerZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ___triggerRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ___isStatic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ____OnTrigger_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTester, ____RightHand_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsTester) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
