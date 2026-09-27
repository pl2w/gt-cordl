#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtColliderTriggerProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GtColliderTriggerProcessor)
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessor__AllowTap_d__28;
}
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessorsGroup;
}
namespace Liv::Lck::GorillaTag {
class GtTag;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessor;
}
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessor__AllowTap_d__28;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*);
MARK_REF_T(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*, "Liv.Lck.GorillaTag", "GtColliderTriggerProcessor");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*, "Liv.Lck.GorillaTag", "GtColliderTriggerProcessor/<AllowTap>d__28");
// [RequireComponent(typeof(UnityEngine.BoxCollider))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.XRNode
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtColliderTriggerProcessor
class CORDL_TYPE GtColliderTriggerProcessor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AllowTap_d__28 = ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28;

/// @brief Field CurrentGrabbedHand, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CurrentGrabbedHand, put=setStaticF_CurrentGrabbedHand)) ::UnityEngine::XR::XRNode  CurrentGrabbedHand;

/// @brief Field IsGrabbingTablet, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsGrabbingTablet, put=setStaticF_IsGrabbingTablet)) bool  IsGrabbingTablet;

 __declspec(property(get=get_LastTapPosition, put=set_LastTapPosition)) ::UnityEngine::Vector3  LastTapPosition;

/// @brief Field <LastTapPosition>k__BackingField, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__LastTapPosition_k__BackingField, put=__cordl_internal_set__LastTapPosition_k__BackingField)) ::UnityEngine::Vector3  _LastTapPosition_k__BackingField;

/// @brief Field _boxCollider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__boxCollider, put=__cordl_internal_set__boxCollider)) ::UnityW<::UnityEngine::BoxCollider>  _boxCollider;

/// @brief Field _canTap, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__canTap, put=__cordl_internal_set__canTap)) bool  _canTap;

/// @brief Field _checkTriggerFromAbove, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__checkTriggerFromAbove, put=__cordl_internal_set__checkTriggerFromAbove)) bool  _checkTriggerFromAbove;

/// @brief Field _group, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__group, put=__cordl_internal_set__group)) ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  _group;

/// @brief Field _gtTag, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtTag, put=__cordl_internal_set__gtTag)) ::UnityW<::Liv::Lck::GorillaTag::GtTag>  _gtTag;

/// @brief Field _isTapped, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTapped, put=__cordl_internal_set__isTapped)) bool  _isTapped;

/// @brief Field _onTriggeredEnded, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTriggeredEnded, put=__cordl_internal_set__onTriggeredEnded)) ::UnityEngine::Events::UnityEvent*  _onTriggeredEnded;

/// @brief Field _onTriggeredStarted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTriggeredStarted, put=__cordl_internal_set__onTriggeredStarted)) ::UnityEngine::Events::UnityEvent*  _onTriggeredStarted;

/// @brief Field _settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _tapCooldownTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapCooldownTime, put=__cordl_internal_set__tapCooldownTime)) float_t  _tapCooldownTime;

/// [IteratorStateMachine(typeof(Liv.Lck.GorillaTag.GtColliderTriggerProcessor::<AllowTap>d__28))]
/// @brief Method AllowTap, addr 0x9d223f0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AllowTap() ;

/// @brief Method BlockTapping, addr 0x9d224d8, size 0x10, virtual false, abstract: false, final false
inline void BlockTapping() ;

/// @brief Method GetGTag, addr 0x9d21da0, size 0xb8, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::GorillaTag::GtTag> GetGTag(::UnityEngine::Collider*  other) ;

/// @brief Method IsColliderGrabbingTablet, addr 0x9d21ff4, size 0x90, virtual false, abstract: false, final false
inline bool IsColliderGrabbingTablet(::Liv::Lck::GorillaTag::GtTag*  tag) ;

/// @brief Method IsTapValid, addr 0x9d22084, size 0x218, virtual false, abstract: false, final false
inline bool IsTapValid(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor* New_ctor() ;

/// @brief Method OnEnable, addr 0x9d22568, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x9d21e58, size 0x19c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d2229c, size 0x154, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ResetToDefault, addr 0x9d224e8, size 0x28, virtual false, abstract: false, final false
inline void ResetToDefault() ;

/// @brief Method ResetToDefaultAfterTap, addr 0x9d2245c, size 0x7c, virtual false, abstract: false, final false
inline void ResetToDefaultAfterTap() ;

/// @brief Method ResetToDefaultAndTriggerButton, addr 0x9d2252c, size 0x3c, virtual false, abstract: false, final false
inline void ResetToDefaultAndTriggerButton() ;

/// @brief Method SetTriggerNull, addr 0x9d22510, size 0x1c, virtual false, abstract: false, final false
inline void SetTriggerNull() ;

/// @brief Method Start, addr 0x9d21d48, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastTapPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastTapPosition_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__boxCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__boxCollider() ;

constexpr bool const& __cordl_internal_get__canTap() const;

constexpr bool& __cordl_internal_get__canTap() ;

constexpr bool const& __cordl_internal_get__checkTriggerFromAbove() const;

constexpr bool& __cordl_internal_get__checkTriggerFromAbove() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup> const& __cordl_internal_get__group() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>& __cordl_internal_get__group() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTag> const& __cordl_internal_get__gtTag() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTag>& __cordl_internal_get__gtTag() ;

constexpr bool const& __cordl_internal_get__isTapped() const;

constexpr bool& __cordl_internal_get__isTapped() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onTriggeredEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onTriggeredEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onTriggeredStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onTriggeredStarted() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr float_t const& __cordl_internal_get__tapCooldownTime() const;

constexpr float_t& __cordl_internal_get__tapCooldownTime() ;

constexpr void __cordl_internal_set__LastTapPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__boxCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set__canTap(bool  value) ;

constexpr void __cordl_internal_set__checkTriggerFromAbove(bool  value) ;

constexpr void __cordl_internal_set__group(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  value) ;

constexpr void __cordl_internal_set__gtTag(::UnityW<::Liv::Lck::GorillaTag::GtTag>  value) ;

constexpr void __cordl_internal_set__isTapped(bool  value) ;

constexpr void __cordl_internal_set__onTriggeredEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onTriggeredStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__tapCooldownTime(float_t  value) ;

/// @brief Method .ctor, addr 0x9d2259c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::XRNode getStaticF_CurrentGrabbedHand() ;

static inline bool getStaticF_IsGrabbingTablet() ;

/// [CompilerGenerated]
/// @brief Method get_LastTapPosition, addr 0x9d21d30, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastTapPosition() ;

static inline void setStaticF_CurrentGrabbedHand(::UnityEngine::XR::XRNode  value) ;

static inline void setStaticF_IsGrabbingTablet(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastTapPosition, addr 0x9d21d3c, size 0xc, virtual false, abstract: false, final false
inline void set_LastTapPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtColliderTriggerProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtColliderTriggerProcessor(GtColliderTriggerProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtColliderTriggerProcessor(GtColliderTriggerProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29626};

/// [Header("Global Settings")]
/// [SerializeField]
/// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _group, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  ____group;

/// [SerializeField]
/// @brief Field _tapCooldownTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____tapCooldownTime;

/// [SerializeField]
/// @brief Field _checkTriggerFromAbove, offset: 0x34, size: 0x1, def value: None
 bool  ____checkTriggerFromAbove;

/// [Header("Events")]
/// [SerializeField]
/// @brief Field _onTriggeredStarted, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onTriggeredStarted;

/// [SerializeField]
/// @brief Field _onTriggeredEnded, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onTriggeredEnded;

/// @brief Field _canTap, offset: 0x48, size: 0x1, def value: None
 bool  ____canTap;

/// @brief Field _isTapped, offset: 0x49, size: 0x1, def value: None
 bool  ____isTapped;

/// @brief Field _gtTag, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTag>  ____gtTag;

/// @brief Field _boxCollider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____boxCollider;

/// [CompilerGenerated]
/// @brief Field <LastTapPosition>k__BackingField, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LastTapPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____group) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____tapCooldownTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____checkTriggerFromAbove) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____onTriggeredStarted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____onTriggeredEnded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____canTap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____isTapped) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____gtTag) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____boxCollider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor, ____LastTapPosition_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor) == 0x70, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtColliderTriggerProcessor/<AllowTap>d__28
class CORDL_TYPE GtColliderTriggerProcessor__AllowTap_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d225b8, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d22678, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d22680, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d226b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d225b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d22574, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtColliderTriggerProcessor__AllowTap_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessor__AllowTap_d__28", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtColliderTriggerProcessor__AllowTap_d__28(GtColliderTriggerProcessor__AllowTap_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessor__AllowTap_d__28", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtColliderTriggerProcessor__AllowTap_d__28(GtColliderTriggerProcessor__AllowTap_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29625};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
