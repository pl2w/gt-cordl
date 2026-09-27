#pragma once
// IWYU pragma private; include "GlobalNamespace/IDCardScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDCardScanner)
namespace GlobalNamespace {
class IDCardScanner_CardSwipeEvent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System {
class AsyncCallback;
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
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class IDCardScanner;
}
namespace GlobalNamespace {
class IDCardScanner_CardSwipeEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IDCardScanner*);
MARK_REF_T(::GlobalNamespace::IDCardScanner_CardSwipeEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IDCardScanner*, "", "IDCardScanner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IDCardScanner_CardSwipeEvent*, "", "IDCardScanner/CardSwipeEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDCardScanner
class CORDL_TYPE IDCardScanner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CardSwipeEvent = ::GlobalNamespace::IDCardScanner_CardSwipeEvent;

/// @brief Field OnPlayerCardSwipe, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerCardSwipe, put=__cordl_internal_set_OnPlayerCardSwipe)) ::GlobalNamespace::IDCardScanner_CardSwipeEvent*  OnPlayerCardSwipe;

/// @brief Field onCardSwiped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCardSwiped, put=__cordl_internal_set_onCardSwiped)) ::UnityEngine::Events::UnityEvent*  onCardSwiped;

/// @brief Field onCardSwipedByPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCardSwipedByPlayer, put=__cordl_internal_set_onCardSwipedByPlayer)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCardSwipedByPlayer;

/// @brief Field onFailed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailed, put=__cordl_internal_set_onFailed)) ::UnityEngine::Events::UnityEvent*  onFailed;

/// @brief Field onSucceeded, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSucceeded, put=__cordl_internal_set_onSucceeded)) ::UnityEngine::Events::UnityEvent*  onSucceeded;

/// @brief Field requireAuthority, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireAuthority, put=__cordl_internal_set_requireAuthority)) bool  requireAuthority;

/// @brief Field requireSpecificPlayer, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireSpecificPlayer, put=__cordl_internal_set_requireSpecificPlayer)) bool  requireSpecificPlayer;

/// @brief Field restrictToPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_restrictToPlayer, put=__cordl_internal_set_restrictToPlayer)) ::GlobalNamespace::NetPlayer*  restrictToPlayer;

static inline ::GlobalNamespace::IDCardScanner* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d0c32c, size 0x28c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::IDCardScanner_CardSwipeEvent* const& __cordl_internal_get_OnPlayerCardSwipe() const;

constexpr ::GlobalNamespace::IDCardScanner_CardSwipeEvent*& __cordl_internal_get_OnPlayerCardSwipe() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCardSwiped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCardSwiped() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCardSwipedByPlayer() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCardSwipedByPlayer() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onFailed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onFailed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSucceeded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSucceeded() ;

constexpr bool const& __cordl_internal_get_requireAuthority() const;

constexpr bool& __cordl_internal_get_requireAuthority() ;

constexpr bool const& __cordl_internal_get_requireSpecificPlayer() const;

constexpr bool& __cordl_internal_get_requireSpecificPlayer() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_restrictToPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_restrictToPlayer() ;

constexpr void __cordl_internal_set_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value) ;

constexpr void __cordl_internal_set_onCardSwiped(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onCardSwipedByPlayer(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onFailed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onSucceeded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_requireAuthority(bool  value) ;

constexpr void __cordl_internal_set_requireSpecificPlayer(bool  value) ;

constexpr void __cordl_internal_set_restrictToPlayer(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5d0c5b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerCardSwipe, addr 0x5d0c1f4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerCardSwipe, addr 0x5d0c290, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IDCardScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IDCardScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IDCardScanner(IDCardScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDCardScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDCardScanner(IDCardScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{462};

/// [CompilerGenerated]
/// @brief Field OnPlayerCardSwipe, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IDCardScanner_CardSwipeEvent*  ___OnPlayerCardSwipe;

/// @brief Field onCardSwiped, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCardSwiped;

/// @brief Field onCardSwipedByPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCardSwipedByPlayer;

/// [Tooltip("Has to be risen externally, by the receiver of the card swipe")]
/// @brief Field onSucceeded, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSucceeded;

/// [Tooltip("Has to be risen externally, by the receiver of the card swipe")]
/// @brief Field onFailed, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onFailed;

/// @brief Field requireSpecificPlayer, offset: 0x48, size: 0x1, def value: None
 bool  ___requireSpecificPlayer;

/// @brief Field requireAuthority, offset: 0x49, size: 0x1, def value: None
 bool  ___requireAuthority;

/// @brief Field restrictToPlayer, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___restrictToPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___OnPlayerCardSwipe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___onCardSwiped) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___onCardSwipedByPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___onSucceeded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___onFailed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___requireSpecificPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___requireAuthority) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IDCardScanner, ___restrictToPlayer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IDCardScanner) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDCardScanner/CardSwipeEvent
class CORDL_TYPE IDCardScanner_CardSwipeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5d0c674, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  actorNumber, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5d0c6d0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5d0c660, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  actorNumber) ;

static inline ::GlobalNamespace::IDCardScanner_CardSwipeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5d0c5c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IDCardScanner_CardSwipeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IDCardScanner_CardSwipeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IDCardScanner_CardSwipeEvent(IDCardScanner_CardSwipeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDCardScanner_CardSwipeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDCardScanner_CardSwipeEvent(IDCardScanner_CardSwipeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IDCardScanner_CardSwipeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
