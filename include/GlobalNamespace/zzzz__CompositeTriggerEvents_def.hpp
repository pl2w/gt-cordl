#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeTriggerEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeTriggerEvents)
namespace GlobalNamespace {
class CompositeTriggerEvents_TriggerEvent;
}
namespace GlobalNamespace {
class CompositeTriggerEvents___c;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
class CompositeTriggerEvents_TriggerEvent;
}
namespace GlobalNamespace {
class CompositeTriggerEvents___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeTriggerEvents*);
MARK_REF_T(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*);
MARK_REF_T(::GlobalNamespace::CompositeTriggerEvents___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeTriggerEvents*, "", "CompositeTriggerEvents");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*, "", "CompositeTriggerEvents/TriggerEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeTriggerEvents___c*, "", "CompositeTriggerEvents/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeTriggerEvents
class CORDL_TYPE CompositeTriggerEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TriggerEvent = ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent;

using __c = ::GlobalNamespace::CompositeTriggerEvents___c;

 __declspec(property(get=get_CollderMasks)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>*  CollderMasks;

/// @brief Field CompositeTriggerEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompositeTriggerEnter, put=__cordl_internal_set_CompositeTriggerEnter)) ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  CompositeTriggerEnter;

/// @brief Field CompositeTriggerExit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompositeTriggerExit, put=__cordl_internal_set_CompositeTriggerExit)) ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  CompositeTriggerExit;

/// @brief Field individualTriggerColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_individualTriggerColliders, put=__cordl_internal_set_individualTriggerColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  individualTriggerColliders;

/// @brief Field overlapMask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapMask, put=__cordl_internal_set_overlapMask)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>*  overlapMask;

/// @brief Field triggerEventNotifiers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerEventNotifiers, put=__cordl_internal_set_triggerEventNotifiers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*  triggerEventNotifiers;

/// @brief Method AddCollider, addr 0x5b02c60, size 0x384, virtual false, abstract: false, final false
inline void AddCollider(::UnityEngine::Collider*  colliderToAdd) ;

/// @brief Method Awake, addr 0x5b029d8, size 0x288, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompositeTriggerEnterReceiver, addr 0x5b03c8c, size 0x1c, virtual false, abstract: false, final false
inline void CompositeTriggerEnterReceiver(::UnityEngine::Collider*  other) ;

/// @brief Method CompositeTriggerExitReceiver, addr 0x5b03ca8, size 0x1c, virtual false, abstract: false, final false
inline void CompositeTriggerExitReceiver(::UnityEngine::Collider*  other) ;

/// @brief Method GetNextMaskIndex, addr 0x5b02fe4, size 0x148, virtual false, abstract: false, final false
inline int32_t GetNextMaskIndex() ;

/// @brief Method GetNumColliders, addr 0x5b038ac, size 0x48, virtual false, abstract: false, final false
inline int32_t GetNumColliders() ;

/// @brief Method MaskToString, addr 0x5b03cd0, size 0x9c, virtual false, abstract: false, final false
inline ::StringW MaskToString(int32_t  mask) ;

static inline ::GlobalNamespace::CompositeTriggerEvents* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b038f4, size 0x1ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveCollider, addr 0x5b0312c, size 0x2ec, virtual false, abstract: false, final false
inline void RemoveCollider(::UnityEngine::Collider*  colliderToRemove) ;

/// @brief Method ResetColliderMask, addr 0x5b03bd0, size 0xbc, virtual false, abstract: false, final false
inline void ResetColliderMask(::UnityEngine::Collider*  other) ;

/// @brief Method ResetColliders, addr 0x5b03518, size 0x394, virtual false, abstract: false, final false
inline void ResetColliders(bool  sendExitEvent) ;

/// @brief Method SetMaskIndexFalse, addr 0x5b03bc0, size 0x10, virtual false, abstract: false, final false
inline int32_t SetMaskIndexFalse(int32_t  mask, int32_t  index) ;

/// @brief Method SetMaskIndexTrue, addr 0x5b03bb0, size 0x10, virtual false, abstract: false, final false
inline int32_t SetMaskIndexTrue(int32_t  mask, int32_t  index) ;

/// @brief Method TestMaskIndex, addr 0x5b03cc4, size 0xc, virtual false, abstract: false, final false
inline bool TestMaskIndex(int32_t  mask, int32_t  index) ;

/// @brief Method TriggerEnterReceiver, addr 0x5b03aa0, size 0x110, virtual false, abstract: false, final false
inline void TriggerEnterReceiver(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method TriggerExitReceiver, addr 0x5b03418, size 0x100, virtual false, abstract: false, final false
inline void TriggerExitReceiver(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* const& __cordl_internal_get_CompositeTriggerEnter() const;

constexpr ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*& __cordl_internal_get_CompositeTriggerEnter() ;

constexpr ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* const& __cordl_internal_get_CompositeTriggerExit() const;

constexpr ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*& __cordl_internal_get_CompositeTriggerExit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_individualTriggerColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_individualTriggerColliders() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>* const& __cordl_internal_get_overlapMask() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>*& __cordl_internal_get_overlapMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>* const& __cordl_internal_get_triggerEventNotifiers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*& __cordl_internal_get_triggerEventNotifiers() ;

constexpr void __cordl_internal_set_CompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

constexpr void __cordl_internal_set_CompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

constexpr void __cordl_internal_set_individualTriggerColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_overlapMask(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>*  value) ;

constexpr void __cordl_internal_set_triggerEventNotifiers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*  value) ;

/// @brief Method .ctor, addr 0x5b03d6c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_CompositeTriggerEnter, addr 0x5b02768, size 0x9c, virtual false, abstract: false, final false
inline void add_CompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_CompositeTriggerExit, addr 0x5b028a0, size 0x9c, virtual false, abstract: false, final false
inline void add_CompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

/// @brief Method get_CollderMasks, addr 0x5b02760, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>* get_CollderMasks() ;

/// [CompilerGenerated]
/// @brief Method remove_CompositeTriggerEnter, addr 0x5b02804, size 0x9c, virtual false, abstract: false, final false
inline void remove_CompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_CompositeTriggerExit, addr 0x5b0293c, size 0x9c, virtual false, abstract: false, final false
inline void remove_CompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeTriggerEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeTriggerEvents(CompositeTriggerEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeTriggerEvents(CompositeTriggerEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3486};

/// [CompilerGenerated]
/// @brief Field CompositeTriggerEnter, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  ___CompositeTriggerEnter;

/// [CompilerGenerated]
/// @brief Field CompositeTriggerExit, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*  ___CompositeTriggerExit;

/// [SerializeField]
/// @brief Field individualTriggerColliders, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___individualTriggerColliders;

/// @brief Field triggerEventNotifiers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*  ___triggerEventNotifiers;

/// @brief Field overlapMask, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,int32_t>*  ___overlapMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeTriggerEvents, ___CompositeTriggerEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeTriggerEvents, ___CompositeTriggerExit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeTriggerEvents, ___individualTriggerColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeTriggerEvents, ___triggerEventNotifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeTriggerEvents, ___overlapMask) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeTriggerEvents) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeTriggerEvents/<>c
class CORDL_TYPE CompositeTriggerEvents___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::CompositeTriggerEvents___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*  __9__13_0;

static inline ::GlobalNamespace::CompositeTriggerEvents___c* New_ctor() ;

/// @brief Method <AddCollider>b__13_0, addr 0x5b04054, size 0x28, virtual false, abstract: false, final false
inline int32_t _AddCollider_b__13_0(::GlobalNamespace::TriggerEventNotifier*  a, ::GlobalNamespace::TriggerEventNotifier*  b) ;

/// @brief Method .ctor, addr 0x5b0404c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CompositeTriggerEvents___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::GlobalNamespace::CompositeTriggerEvents___c*  value) ;

static inline void setStaticF___9__13_0(::System::Comparison_1<::UnityW<::GlobalNamespace::TriggerEventNotifier>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeTriggerEvents___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeTriggerEvents___c(CompositeTriggerEvents___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeTriggerEvents___c(CompositeTriggerEvents___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeTriggerEvents___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeTriggerEvents/TriggerEvent
class CORDL_TYPE CompositeTriggerEvents_TriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b03fb8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b03fd8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b03fa4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b03e9c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeTriggerEvents_TriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents_TriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeTriggerEvents_TriggerEvent(CompositeTriggerEvents_TriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeTriggerEvents_TriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeTriggerEvents_TriggerEvent(CompositeTriggerEvents_TriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
