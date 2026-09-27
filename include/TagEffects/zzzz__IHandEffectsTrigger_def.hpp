#pragma once
// IWYU pragma private; include "TagEffects/IHandEffectsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHandEffectsTrigger)
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
class IHandEffectsTrigger;
}
// Write type traits
MARK_REF_T(::TagEffects::IHandEffectsTrigger*);
DEFINE_IL2CPP_CLASS(::TagEffects::IHandEffectsTrigger*, "TagEffects", "IHandEffectsTrigger");
// Dependencies 
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.IHandEffectsTrigger
class CORDL_TYPE IHandEffectsTrigger {
public:
// Declarations
using Mode = ::GlobalNamespace::IHandEffectsTrigger_Mode;

 __declspec(property(get=get_CosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  CosmeticEffectPack;

 __declspec(property(get=get_EffectMode)) ::GlobalNamespace::IHandEffectsTrigger_Mode  EffectMode;

 __declspec(property(get=get_FingersDown)) bool  FingersDown;

 __declspec(property(get=get_FingersUp)) bool  FingersUp;

 __declspec(property(get=get_OnTrigger, put=set_OnTrigger)) ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  OnTrigger;

 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

 __declspec(property(get=get_RightHand)) bool  RightHand;

 __declspec(property(get=get_Static)) bool  Static;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Method InTriggerZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool InTriggerZone(::TagEffects::IHandEffectsTrigger*  t) ;

/// @brief Method OnTriggerEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other) ;

/// @brief Method get_CosmeticEffectPack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::TagEffects::TagEffectPack> get_CosmeticEffectPack() ;

/// @brief Method get_EffectMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::IHandEffectsTrigger_Mode get_EffectMode() ;

/// @brief Method get_FingersDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_FingersDown() ;

/// @brief Method get_FingersUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_FingersUp() ;

/// @brief Method get_OnTrigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* get_OnTrigger() ;

/// @brief Method get_Rig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

/// @brief Method get_RightHand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_RightHand() ;

/// @brief Method get_Static, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Static() ;

/// @brief Method get_Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_Velocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Method set_OnTrigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHandEffectsTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandEffectsTrigger(IHandEffectsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TagEffects
