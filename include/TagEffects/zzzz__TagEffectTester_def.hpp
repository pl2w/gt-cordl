#pragma once
// IWYU pragma private; include "TagEffects/TagEffectTester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TagEffectTester)
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TagEffects {
class TagEffectTester;
}
// Write type traits
MARK_REF_T(::TagEffects::TagEffectTester*);
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectTester*, "TagEffects", "TagEffectTester");
// Dependencies TagEffects.IHandEffectsTrigger::Mode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectTester
class CORDL_TYPE TagEffectTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  CosmeticEffectPack;

 __declspec(property(get=get_EffectMode)) ::GlobalNamespace::IHandEffectsTrigger_Mode  EffectMode;

 __declspec(property(get=get_FingersDown)) bool  FingersDown;

 __declspec(property(get=get_FingersUp)) bool  FingersUp;

 __declspec(property(get=get_Magnitude)) float_t  Magnitude;

 __declspec(property(get=get_OnTrigger, put=set_OnTrigger)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  OnTrigger;

 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

 __declspec(property(get=get_RightHand)) bool  RightHand;

 __declspec(property(get=get_Static)) bool  Static;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field <CosmeticEffectPack>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__CosmeticEffectPack_k__BackingField, put=__cordl_internal_set__CosmeticEffectPack_k__BackingField)) ::UnityW<::TagEffects::TagEffectPack>  _CosmeticEffectPack_k__BackingField;

/// @brief Field <EffectMode>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__EffectMode_k__BackingField, put=__cordl_internal_set__EffectMode_k__BackingField)) ::GlobalNamespace::IHandEffectsTrigger_Mode  _EffectMode_k__BackingField;

/// @brief Field <FingersDown>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__FingersDown_k__BackingField, put=__cordl_internal_set__FingersDown_k__BackingField)) bool  _FingersDown_k__BackingField;

/// @brief Field <FingersUp>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__FingersUp_k__BackingField, put=__cordl_internal_set__FingersUp_k__BackingField)) bool  _FingersUp_k__BackingField;

/// @brief Field <Magnitude>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Magnitude_k__BackingField, put=__cordl_internal_set__Magnitude_k__BackingField)) float_t  _Magnitude_k__BackingField;

/// @brief Field <OnTrigger>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnTrigger_k__BackingField, put=__cordl_internal_set__OnTrigger_k__BackingField)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  _OnTrigger_k__BackingField;

/// @brief Field <RightHand>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__RightHand_k__BackingField, put=__cordl_internal_set__RightHand_k__BackingField)) bool  _RightHand_k__BackingField;

/// @brief Field <Transform>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transform_k__BackingField, put=__cordl_internal_set__Transform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _Transform_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__Velocity_k__BackingField, put=__cordl_internal_set__Velocity_k__BackingField)) ::UnityEngine::Vector3  _Velocity_k__BackingField;

/// @brief Field isStatic, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Convert operator to "::TagEffects::IHandEffectsTrigger"
constexpr operator  ::TagEffects::IHandEffectsTrigger*() noexcept;

/// @brief Method InTriggerZone, addr 0x5cd9464, size 0x8, virtual true, abstract: false, final true
inline bool InTriggerZone(::TagEffects::IHandEffectsTrigger*  t) ;

static inline ::TagEffects::TagEffectTester* New_ctor() ;

/// @brief Method OnTriggerEntered, addr 0x5cd9460, size 0x4, virtual true, abstract: false, final true
inline void OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other) ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get__CosmeticEffectPack_k__BackingField() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get__CosmeticEffectPack_k__BackingField() ;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode const& __cordl_internal_get__EffectMode_k__BackingField() const;

constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode& __cordl_internal_get__EffectMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FingersDown_k__BackingField() const;

constexpr bool& __cordl_internal_get__FingersDown_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FingersUp_k__BackingField() const;

constexpr bool& __cordl_internal_get__FingersUp_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Magnitude_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Magnitude_k__BackingField() ;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* const& __cordl_internal_get__OnTrigger_k__BackingField() const;

constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*& __cordl_internal_get__OnTrigger_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RightHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__RightHand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Velocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Velocity_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr void __cordl_internal_set__CosmeticEffectPack_k__BackingField(::UnityW<::TagEffects::TagEffectPack>  value) ;

constexpr void __cordl_internal_set__EffectMode_k__BackingField(::GlobalNamespace::IHandEffectsTrigger_Mode  value) ;

constexpr void __cordl_internal_set__FingersDown_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__FingersUp_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Magnitude_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__OnTrigger_k__BackingField(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

constexpr void __cordl_internal_set__RightHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Velocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

/// @brief Method .ctor, addr 0x5cd946c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticEffectPack, addr 0x5cd9458, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::TagEffects::TagEffectPack> get_CosmeticEffectPack() ;

/// [CompilerGenerated]
/// @brief Method get_EffectMode, addr 0x5cd9404, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IHandEffectsTrigger_Mode get_EffectMode() ;

/// [CompilerGenerated]
/// @brief Method get_FingersDown, addr 0x5cd941c, size 0x8, virtual true, abstract: false, final true
inline bool get_FingersDown() ;

/// [CompilerGenerated]
/// @brief Method get_FingersUp, addr 0x5cd9424, size 0x8, virtual true, abstract: false, final true
inline bool get_FingersUp() ;

/// [CompilerGenerated]
/// @brief Method get_Magnitude, addr 0x5cd9450, size 0x8, virtual false, abstract: false, final false
inline float_t get_Magnitude() ;

/// [CompilerGenerated]
/// @brief Method get_OnTrigger, addr 0x5cd9438, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* get_OnTrigger() ;

/// @brief Method get_Rig, addr 0x5cd9414, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

/// [CompilerGenerated]
/// @brief Method get_RightHand, addr 0x5cd9448, size 0x8, virtual true, abstract: false, final true
inline bool get_RightHand() ;

/// @brief Method get_Static, addr 0x5cd93fc, size 0x8, virtual true, abstract: false, final true
inline bool get_Static() ;

/// [CompilerGenerated]
/// @brief Method get_Transform, addr 0x5cd940c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// [CompilerGenerated]
/// @brief Method get_Velocity, addr 0x5cd942c, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Convert to "::TagEffects::IHandEffectsTrigger"
constexpr ::TagEffects::IHandEffectsTrigger* i___TagEffects__IHandEffectsTrigger() noexcept;

/// [CompilerGenerated]
/// @brief Method set_OnTrigger, addr 0x5cd9440, size 0x8, virtual true, abstract: false, final true
inline void set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagEffectTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectTester", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectTester(TagEffectTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectTester", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectTester(TagEffectTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4495};

/// [SerializeField]
/// @brief Field isStatic, offset: 0x20, size: 0x1, def value: None
 bool  ___isStatic;

/// [CompilerGenerated]
/// @brief Field <EffectMode>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::IHandEffectsTrigger_Mode  ____EffectMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Transform>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Transform_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FingersDown>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____FingersDown_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FingersUp>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____FingersUp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Velocity>k__BackingField, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Velocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnTrigger>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  ____OnTrigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RightHand>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____RightHand_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Magnitude>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 float_t  ____Magnitude_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticEffectPack>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ____CosmeticEffectPack_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectTester, ___isStatic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____EffectMode_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____Transform_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____FingersDown_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____FingersUp_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____Velocity_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____OnTrigger_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____RightHand_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____Magnitude_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectTester, ____CosmeticEffectPack_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectTester) == 0x58, "Size mismatch!");

} // namespace end def TagEffects
