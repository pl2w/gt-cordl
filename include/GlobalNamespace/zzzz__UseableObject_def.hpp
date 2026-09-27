#pragma once
// IWYU pragma private; include "GlobalNamespace/UseableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UseableObject)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class UseableObjectEvents;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class UseableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UseableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UseableObject*, "", "UseableObject");
// [RequireComponent(typeof(UseableObjectEvents))]
// Dependencies System.DateTime, TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: UseableObject
class CORDL_TYPE UseableObject : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _events, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::UseableObjectEvents>  _events;

/// @brief Field _isMidUse, offset 0x358, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMidUse, put=__cordl_internal_set__isMidUse)) bool  _isMidUse;

/// @brief Field _justUsed, offset 0x360, size 0x1 
 __declspec(property(get=__cordl_internal_get__justUsed, put=__cordl_internal_set__justUsed)) bool  _justUsed;

/// @brief Field _lastActivate, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastActivate, put=__cordl_internal_set__lastActivate)) ::System::DateTime  _lastActivate;

/// @brief Field _lastDeactivate, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastDeactivate, put=__cordl_internal_set__lastDeactivate)) ::System::DateTime  _lastDeactivate;

/// @brief Field _raiseActivate, offset 0x340, size 0x1 
 __declspec(property(get=__cordl_internal_get__raiseActivate, put=__cordl_internal_set__raiseActivate)) bool  _raiseActivate;

/// @brief Field _raiseDeactivate, offset 0x341, size 0x1 
 __declspec(property(get=__cordl_internal_get__raiseDeactivate, put=__cordl_internal_set__raiseDeactivate)) bool  _raiseDeactivate;

/// @brief Field _useTimeElapsed, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get__useTimeElapsed, put=__cordl_internal_set__useTimeElapsed)) float_t  _useTimeElapsed;

/// @brief Field disableActivation, offset 0x331, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableActivation, put=__cordl_internal_set_disableActivation)) bool  disableActivation;

/// @brief Field disableDeactivation, offset 0x332, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableDeactivation, put=__cordl_internal_set_disableDeactivation)) bool  disableDeactivation;

 __declspec(property(get=get_isMidUse)) bool  isMidUse;

 __declspec(property(get=get_justUsed)) bool  justUsed;

/// @brief Field onActivateLocal, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_onActivateLocal, put=__cordl_internal_set_onActivateLocal)) ::UnityEngine::Events::UnityEvent*  onActivateLocal;

/// @brief Field onDeactivateLocal, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDeactivateLocal, put=__cordl_internal_set_onDeactivateLocal)) ::UnityEngine::Events::UnityEvent*  onDeactivateLocal;

/// @brief Field tempHandPos, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempHandPos, put=__cordl_internal_set_tempHandPos)) int32_t  tempHandPos;

 __declspec(property(get=get_useTimeElapsed)) float_t  useTimeElapsed;

/// @brief Method Awake, addr 0x5795508, size 0x9c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanActivate, addr 0x5795bf4, size 0x10, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x5795c04, size 0x10, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

static inline ::GlobalNamespace::UseableObject* New_ctor() ;

/// @brief Method OnActivate, addr 0x57959ec, size 0x104, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x5795af0, size 0x104, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x5795940, size 0x68, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57955a4, size 0x168, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnObjectActivated, addr 0x57959a8, size 0x4, virtual false, abstract: false, final false
inline void OnObjectActivated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnObjectDeactivated, addr 0x57959ac, size 0x4, virtual false, abstract: false, final false
inline void OnObjectDeactivated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method TriggeredLateUpdate, addr 0x57959b0, size 0x3c, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr ::UnityW<::GlobalNamespace::UseableObjectEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::UseableObjectEvents>& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__isMidUse() const;

constexpr bool& __cordl_internal_get__isMidUse() ;

constexpr bool const& __cordl_internal_get__justUsed() const;

constexpr bool& __cordl_internal_get__justUsed() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastActivate() const;

constexpr ::System::DateTime& __cordl_internal_get__lastActivate() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastDeactivate() const;

constexpr ::System::DateTime& __cordl_internal_get__lastDeactivate() ;

constexpr bool const& __cordl_internal_get__raiseActivate() const;

constexpr bool& __cordl_internal_get__raiseActivate() ;

constexpr bool const& __cordl_internal_get__raiseDeactivate() const;

constexpr bool& __cordl_internal_get__raiseDeactivate() ;

constexpr float_t const& __cordl_internal_get__useTimeElapsed() const;

constexpr float_t& __cordl_internal_get__useTimeElapsed() ;

constexpr bool const& __cordl_internal_get_disableActivation() const;

constexpr bool& __cordl_internal_get_disableActivation() ;

constexpr bool const& __cordl_internal_get_disableDeactivation() const;

constexpr bool& __cordl_internal_get_disableDeactivation() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onActivateLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onActivateLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDeactivateLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDeactivateLocal() ;

constexpr int32_t const& __cordl_internal_get_tempHandPos() const;

constexpr int32_t& __cordl_internal_get_tempHandPos() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::UseableObjectEvents>  value) ;

constexpr void __cordl_internal_set__isMidUse(bool  value) ;

constexpr void __cordl_internal_set__justUsed(bool  value) ;

constexpr void __cordl_internal_set__lastActivate(::System::DateTime  value) ;

constexpr void __cordl_internal_set__lastDeactivate(::System::DateTime  value) ;

constexpr void __cordl_internal_set__raiseActivate(bool  value) ;

constexpr void __cordl_internal_set__raiseDeactivate(bool  value) ;

constexpr void __cordl_internal_set__useTimeElapsed(float_t  value) ;

constexpr void __cordl_internal_set_disableActivation(bool  value) ;

constexpr void __cordl_internal_set_disableDeactivation(bool  value) ;

constexpr void __cordl_internal_set_onActivateLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onDeactivateLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_tempHandPos(int32_t  value) ;

/// @brief Method .ctor, addr 0x5795c14, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isMidUse, addr 0x57954e0, size 0x8, virtual false, abstract: false, final false
inline bool get_isMidUse() ;

/// @brief Method get_justUsed, addr 0x57954f0, size 0x18, virtual false, abstract: false, final false
inline bool get_justUsed() ;

/// @brief Method get_useTimeElapsed, addr 0x57954e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_useTimeElapsed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UseableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UseableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UseableObject(UseableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UseableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UseableObject(UseableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1457};

/// [DebugOption]
/// @brief Field disableActivation, offset: 0x331, size: 0x1, def value: None
 bool  ___disableActivation;

/// [DebugOption]
/// @brief Field disableDeactivation, offset: 0x332, size: 0x1, def value: None
 bool  ___disableDeactivation;

/// [SerializeField]
/// @brief Field _events, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UseableObjectEvents>  ____events;

/// [SerializeField]
/// @brief Field _raiseActivate, offset: 0x340, size: 0x1, def value: None
 bool  ____raiseActivate;

/// [SerializeField]
/// @brief Field _raiseDeactivate, offset: 0x341, size: 0x1, def value: None
 bool  ____raiseDeactivate;

/// @brief Field _lastActivate, offset: 0x348, size: 0x8, def value: None
 ::System::DateTime  ____lastActivate;

/// @brief Field _lastDeactivate, offset: 0x350, size: 0x8, def value: None
 ::System::DateTime  ____lastDeactivate;

/// @brief Field _isMidUse, offset: 0x358, size: 0x1, def value: None
 bool  ____isMidUse;

/// @brief Field _useTimeElapsed, offset: 0x35c, size: 0x4, def value: None
 float_t  ____useTimeElapsed;

/// @brief Field _justUsed, offset: 0x360, size: 0x1, def value: None
 bool  ____justUsed;

/// @brief Field tempHandPos, offset: 0x364, size: 0x4, def value: None
 int32_t  ___tempHandPos;

/// @brief Field onActivateLocal, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onActivateLocal;

/// @brief Field onDeactivateLocal, offset: 0x370, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDeactivateLocal;

/// @brief Size padding 0x3a8 - 0x378 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UseableObject, ___disableActivation) == 0x331, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ___disableDeactivation) == 0x332, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____events) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____raiseActivate) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____raiseDeactivate) == 0x341, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____lastActivate) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____lastDeactivate) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____isMidUse) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____useTimeElapsed) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ____justUsed) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ___tempHandPos) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ___onActivateLocal) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObject, ___onDeactivateLocal) == 0x370, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UseableObject) == 0x3a8, "Size mismatch!");

} // namespace end def GlobalNamespace
