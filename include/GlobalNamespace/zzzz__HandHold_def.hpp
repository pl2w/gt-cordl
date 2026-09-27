#pragma once
// IWYU pragma private; include "GlobalNamespace/HandHold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandHold_HandSnapMethod_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HandHold)
namespace GT_CustomMapSupportRuntime {
class HandHoldSettings;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class HandHold_HandHoldEvent;
}
namespace GlobalNamespace {
class HandHold_HandHoldPositionEvent;
}
namespace GlobalNamespace {
struct HandHold_HandSnapMethod;
}
namespace GlobalNamespace {
class Tappable;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HandHold;
}
namespace GlobalNamespace {
class HandHold_HandHoldEvent;
}
namespace GlobalNamespace {
class HandHold_HandHoldPositionEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandHold*);
MARK_REF_T(::GlobalNamespace::HandHold_HandHoldEvent*);
MARK_REF_T(::GlobalNamespace::HandHold_HandHoldPositionEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandHold*, "", "HandHold");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandHold_HandHoldEvent*, "", "HandHold/HandHoldEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandHold_HandHoldPositionEvent*, "", "HandHold/HandHoldPositionEvent");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies HandHold::HandSnapMethod, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandHold
class CORDL_TYPE HandHold : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandHoldEvent = ::GlobalNamespace::HandHold_HandHoldEvent;

using HandHoldPositionEvent = ::GlobalNamespace::HandHold_HandHoldPositionEvent;

using HandSnapMethod = ::GlobalNamespace::HandHold_HandSnapMethod;

/// @brief Field HandPositionReleaseOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HandPositionReleaseOverride, put=setStaticF_HandPositionReleaseOverride)) ::GlobalNamespace::HandHold_HandHoldEvent*  HandPositionReleaseOverride;

/// @brief Field HandPositionRequestOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HandPositionRequestOverride, put=setStaticF_HandPositionRequestOverride)) ::GlobalNamespace::HandHold_HandHoldPositionEvent*  HandPositionRequestOverride;

/// @brief Field OnGrab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrab, put=__cordl_internal_set_OnGrab)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  OnGrab;

/// @brief Field OnGrabHandHold, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabHandHold, put=__cordl_internal_set_OnGrabHandHold)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  OnGrabHandHold;

/// @brief Field OnGrabHanded, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabHanded, put=__cordl_internal_set_OnGrabHanded)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnGrabHanded;

/// @brief Field OnRelease, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRelease, put=__cordl_internal_set_OnRelease)) ::UnityEngine::Events::UnityEvent*  OnRelease;

/// @brief Field OnReleaseHandHold, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleaseHandHold, put=__cordl_internal_set_OnReleaseHandHold)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  OnReleaseHandHold;

/// @brief Field attached, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attached, put=__cordl_internal_set_attached)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  attached;

/// @brief Field currentGrabbers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGrabbers, put=__cordl_internal_set_currentGrabbers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  currentGrabbers;

/// @brief Field forceMomentary, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceMomentary, put=__cordl_internal_set_forceMomentary)) bool  forceMomentary;

/// @brief Field handSnapMethod, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSnapMethod, put=__cordl_internal_set_handSnapMethod)) ::GlobalNamespace::HandHold_HandSnapMethod  handSnapMethod;

/// @brief Field initialized, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field myCollider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field myTappable, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTappable, put=__cordl_internal_set_myTappable)) ::UnityW<::GlobalNamespace::Tappable>  myTappable;

/// @brief Field rotatePlayerWhenHeld, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotatePlayerWhenHeld, put=__cordl_internal_set_rotatePlayerWhenHeld)) bool  rotatePlayerWhenHeld;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method CalculateOffset, addr 0x594f7f0, size 0x414, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateOffset(::UnityEngine::Vector3  position) ;

/// @brief Method CanBeGrabbed, addr 0x594f534, size 0x8, virtual true, abstract: false, final false
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method CopyProperties, addr 0x59500c8, size 0x2c, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::HandHoldSettings*  handHoldSettings) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased, addr 0x594fdb8, size 0x15c, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased(::GlobalNamespace::GorillaGrabber*  g) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed, addr 0x594f53c, size 0x2a4, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed(::GlobalNamespace::GorillaGrabber*  g, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x59501d8, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method Initialize, addr 0x594f498, size 0x9c, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MomentaryGrabOnly, addr 0x59500c0, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GlobalNamespace::HandHold* New_ctor() ;

/// @brief Method OnDisable, addr 0x594f260, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnGrab() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnGrab() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>* const& __cordl_internal_get_OnGrabHandHold() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*& __cordl_internal_get_OnGrabHandHold() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnGrabHanded() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnGrabHanded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRelease() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>* const& __cordl_internal_get_OnReleaseHandHold() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*& __cordl_internal_get_OnReleaseHandHold() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_attached() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_attached() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& __cordl_internal_get_currentGrabbers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& __cordl_internal_get_currentGrabbers() ;

constexpr bool const& __cordl_internal_get_forceMomentary() const;

constexpr bool& __cordl_internal_get_forceMomentary() ;

constexpr ::GlobalNamespace::HandHold_HandSnapMethod const& __cordl_internal_get_handSnapMethod() const;

constexpr ::GlobalNamespace::HandHold_HandSnapMethod& __cordl_internal_get_handSnapMethod() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::UnityW<::GlobalNamespace::Tappable> const& __cordl_internal_get_myTappable() const;

constexpr ::UnityW<::GlobalNamespace::Tappable>& __cordl_internal_get_myTappable() ;

constexpr bool const& __cordl_internal_get_rotatePlayerWhenHeld() const;

constexpr bool& __cordl_internal_get_rotatePlayerWhenHeld() ;

constexpr void __cordl_internal_set_OnGrab(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnGrabHandHold(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  value) ;

constexpr void __cordl_internal_set_OnGrabHanded(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnRelease(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReleaseHandHold(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  value) ;

constexpr void __cordl_internal_set_attached(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_currentGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value) ;

constexpr void __cordl_internal_set_forceMomentary(bool  value) ;

constexpr void __cordl_internal_set_handSnapMethod(::GlobalNamespace::HandHold_HandSnapMethod  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_myTappable(::UnityW<::GlobalNamespace::Tappable>  value) ;

constexpr void __cordl_internal_set_rotatePlayerWhenHeld(bool  value) ;

/// @brief Method .ctor, addr 0x59500f4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_HandPositionReleaseOverride, addr 0x594f0e8, size 0xbc, virtual false, abstract: false, final false
static inline void add_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_HandPositionRequestOverride, addr 0x594ef78, size 0xb8, virtual false, abstract: false, final false
static inline void add_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value) ;

static inline ::GlobalNamespace::HandHold_HandHoldEvent* getStaticF_HandPositionReleaseOverride() ;

static inline ::GlobalNamespace::HandHold_HandHoldPositionEvent* getStaticF_HandPositionRequestOverride() ;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_HandPositionReleaseOverride, addr 0x594f1a4, size 0xbc, virtual false, abstract: false, final false
static inline void remove_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_HandPositionRequestOverride, addr 0x594f030, size 0xb8, virtual false, abstract: false, final false
static inline void remove_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value) ;

static inline void setStaticF_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value) ;

static inline void setStaticF_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHold", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHold(HandHold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHold", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHold(HandHold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2300};

/// @brief Field attached, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  ___attached;

/// [SerializeField]
/// @brief Field handSnapMethod, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::HandHold_HandSnapMethod  ___handSnapMethod;

/// [SerializeField]
/// @brief Field rotatePlayerWhenHeld, offset: 0x2c, size: 0x1, def value: None
 bool  ___rotatePlayerWhenHeld;

/// [SerializeField]
/// @brief Field OnGrab, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___OnGrab;

/// [SerializeField]
/// @brief Field OnGrabHandHold, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  ___OnGrabHandHold;

/// [SerializeField]
/// @brief Field OnGrabHanded, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnGrabHanded;

/// [SerializeField]
/// @brief Field OnRelease, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRelease;

/// [SerializeField]
/// @brief Field OnReleaseHandHold, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  ___OnReleaseHandHold;

/// @brief Field initialized, offset: 0x58, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field myCollider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// @brief Field myTappable, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Tappable>  ___myTappable;

/// [Tooltip("Turning this on disables \"pregrabbing\". Use pregrabbing to allow players to catch a handhold even if they have squeezed the trigger too soon. Useful if you\'re anticipating jumping players needed to grab while airborne")]
/// [SerializeField]
/// @brief Field forceMomentary, offset: 0x70, size: 0x1, def value: None
 bool  ___forceMomentary;

/// @brief Field currentGrabbers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  ___currentGrabbers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandHold, ___attached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___handSnapMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___rotatePlayerWhenHeld) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___OnGrab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___OnGrabHandHold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___OnGrabHanded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___OnRelease) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___OnReleaseHandHold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___initialized) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___myCollider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___myTappable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___forceMomentary) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHold, ___currentGrabbers) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandHold) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandHold/HandHoldEvent
class CORDL_TYPE HandHold_HandHoldEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x59504e8, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5950548, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x59504d4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::HandHold*  hh, bool  lh) ;

static inline ::GlobalNamespace::HandHold_HandHoldEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x59503c8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHold_HandHoldEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHold_HandHoldEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHold_HandHoldEvent(HandHold_HandHoldEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHold_HandHoldEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHold_HandHoldEvent(HandHold_HandHoldEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HandHold_HandHoldEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandHold/HandHoldPositionEvent
class CORDL_TYPE HandHold_HandHoldPositionEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5950300, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::UnityEngine::Vector3  pos, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x59503bc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x59502ec, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::UnityEngine::Vector3  pos) ;

static inline ::GlobalNamespace::HandHold_HandHoldPositionEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x59501e0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHold_HandHoldPositionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHold_HandHoldPositionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHold_HandHoldPositionEvent(HandHold_HandHoldPositionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHold_HandHoldPositionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHold_HandHoldPositionEvent(HandHold_HandHoldPositionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HandHold_HandHoldPositionEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
