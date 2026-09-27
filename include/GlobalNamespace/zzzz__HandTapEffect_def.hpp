#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandTapBehaviour_def.hpp"
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandTapEffect)
namespace GlobalNamespace {
class HandEffectContext;
}
namespace GlobalNamespace {
class HandTapEffect_HandTapEffectDownUp;
}
namespace GlobalNamespace {
class HandTapEffect_HandTapEffectLeftRight;
}
namespace GlobalNamespace {
class HandTapOverrides;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTapEffect;
}
namespace GlobalNamespace {
class HandTapEffect_HandTapEffectDownUp;
}
namespace GlobalNamespace {
class HandTapEffect_HandTapEffectLeftRight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTapEffect*);
MARK_REF_T(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*);
MARK_REF_T(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapEffect*, "", "HandTapEffect");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*, "", "HandTapEffect/HandTapEffectDownUp");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*, "", "HandTapEffect/HandTapEffectLeftRight");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapEffect
class CORDL_TYPE HandTapEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandTapEffectDownUp = ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp;

using HandTapEffectLeftRight = ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight;

/// @brief Field leftHandEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandEffect, put=__cordl_internal_set_leftHandEffect)) ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  leftHandEffect;

/// @brief Field rightHandEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandEffect, put=__cordl_internal_set_rightHandEffect)) ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  rightHandEffect;

/// @brief Method Awake, addr 0x565321c, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HandTapEffect* New_ctor() ;

/// @brief Method OnDisable, addr 0x5653440, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5653298, size 0x28, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* const& __cordl_internal_get_leftHandEffect() const;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*& __cordl_internal_get_leftHandEffect() ;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* const& __cordl_internal_get_rightHandEffect() const;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*& __cordl_internal_get_rightHandEffect() ;

constexpr void __cordl_internal_set_leftHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  value) ;

constexpr void __cordl_internal_set_rightHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  value) ;

/// @brief Method .ctor, addr 0x5653638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapEffect(HandTapEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapEffect(HandTapEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{739};

/// @brief Field leftHandEffect, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  ___leftHandEffect;

/// @brief Field rightHandEffect, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*  ___rightHandEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapEffect, ___leftHandEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect, ___rightHandEffect) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapEffect) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapEffect/HandTapEffectLeftRight
class CORDL_TYPE HandTapEffect_HandTapEffectLeftRight : public ::System::Object {
public:
// Declarations
/// @brief Field downTapEffect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_downTapEffect, put=__cordl_internal_set_downTapEffect)) ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  downTapEffect;

/// @brief Field handContext, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_handContext, put=__cordl_internal_set_handContext)) ::GlobalNamespace::HandEffectContext*  handContext;

/// @brief Field separateUpTapCooldown, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_separateUpTapCooldown, put=__cordl_internal_set_separateUpTapCooldown)) bool  separateUpTapCooldown;

/// @brief Field upTapEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_upTapEffect, put=__cordl_internal_set_upTapEffect)) ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  upTapEffect;

static inline ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* New_ctor() ;

/// @brief Method OnDisable, addr 0x5653468, size 0x1d0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56532c0, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* const& __cordl_internal_get_downTapEffect() const;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*& __cordl_internal_get_downTapEffect() ;

constexpr ::GlobalNamespace::HandEffectContext* const& __cordl_internal_get_handContext() const;

constexpr ::GlobalNamespace::HandEffectContext*& __cordl_internal_get_handContext() ;

constexpr bool const& __cordl_internal_get_separateUpTapCooldown() const;

constexpr bool& __cordl_internal_get_separateUpTapCooldown() ;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* const& __cordl_internal_get_upTapEffect() const;

constexpr ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*& __cordl_internal_get_upTapEffect() ;

constexpr void __cordl_internal_set_downTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  value) ;

constexpr void __cordl_internal_set_handContext(::GlobalNamespace::HandEffectContext*  value) ;

constexpr void __cordl_internal_set_separateUpTapCooldown(bool  value) ;

constexpr void __cordl_internal_set_upTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  value) ;

/// @brief Method .ctor, addr 0x56536fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapEffect_HandTapEffectLeftRight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect_HandTapEffectLeftRight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapEffect_HandTapEffectLeftRight(HandTapEffect_HandTapEffectLeftRight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect_HandTapEffectLeftRight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapEffect_HandTapEffectLeftRight(HandTapEffect_HandTapEffectLeftRight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{738};

/// @brief Field separateUpTapCooldown, offset: 0x10, size: 0x1, def value: None
 bool  ___separateUpTapCooldown;

/// @brief Field downTapEffect, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  ___downTapEffect;

/// @brief Field upTapEffect, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*  ___upTapEffect;

/// @brief Field handContext, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectContext*  ___handContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight, ___separateUpTapCooldown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight, ___downTapEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight, ___upTapEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight, ___handContext) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTag.HashWrapper, HandTapBehaviour, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapEffect/HandTapEffectDownUp
class CORDL_TYPE HandTapEffect_HandTapEffectDownUp : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasOverrides)) bool  HasOverrides;

/// @brief Field onTapBehaviours, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTapBehaviours, put=__cordl_internal_set_onTapBehaviours)) ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>  onTapBehaviours;

/// @brief Field onTapPrefabToSpawn, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_onTapPrefabToSpawn, put=__cordl_internal_set_onTapPrefabToSpawn)) ::GorillaTag::HashWrapper  onTapPrefabToSpawn;

/// @brief Field onTapUnityEvents, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTapUnityEvents, put=__cordl_internal_set_onTapUnityEvents)) ::UnityEngine::Events::UnityEvent*  onTapUnityEvents;

/// @brief Field overrides, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrides, put=__cordl_internal_set_overrides)) ::GlobalNamespace::HandTapOverrides*  overrides;

static inline ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* New_ctor() ;

/// @brief Method OnTap, addr 0x5653678, size 0x7c, virtual false, abstract: false, final false
inline void OnTap(::GlobalNamespace::HandEffectContext*  handContext) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>> const& __cordl_internal_get_onTapBehaviours() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>& __cordl_internal_get_onTapBehaviours() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_onTapPrefabToSpawn() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_onTapPrefabToSpawn() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTapUnityEvents() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTapUnityEvents() ;

constexpr ::GlobalNamespace::HandTapOverrides* const& __cordl_internal_get_overrides() const;

constexpr ::GlobalNamespace::HandTapOverrides*& __cordl_internal_get_overrides() ;

constexpr void __cordl_internal_set_onTapBehaviours(::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>  value) ;

constexpr void __cordl_internal_set_onTapPrefabToSpawn(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_onTapUnityEvents(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_overrides(::GlobalNamespace::HandTapOverrides*  value) ;

/// @brief Method .ctor, addr 0x56536f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasOverrides, addr 0x5653640, size 0x38, virtual false, abstract: false, final false
inline bool get_HasOverrides() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapEffect_HandTapEffectDownUp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect_HandTapEffectDownUp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapEffect_HandTapEffectDownUp(HandTapEffect_HandTapEffectDownUp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapEffect_HandTapEffectDownUp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapEffect_HandTapEffectDownUp(HandTapEffect_HandTapEffectDownUp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{737};

/// @brief Field onTapBehaviours, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::HandTapBehaviour>>  ___onTapBehaviours;

/// @brief Field onTapUnityEvents, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTapUnityEvents;

/// [Tooltip("Must be in the global object pool and have a tag.\n\nPrefabs can have an FXModifier component to be adjusted after creation.")]
/// @brief Field onTapPrefabToSpawn, offset: 0x20, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___onTapPrefabToSpawn;

/// @brief Field overrides, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HandTapOverrides*  ___overrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp, ___onTapBehaviours) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp, ___onTapUnityEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp, ___onTapPrefabToSpawn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp, ___overrides) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
