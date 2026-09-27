#pragma once
// IWYU pragma private; include "GlobalNamespace/DeepLinkHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeepLinkHandler)
namespace GlobalNamespace {
class DeepLinkHandler_CollabRequest;
}
namespace GlobalNamespace {
class DeepLinkHandler__CheckProcessExternalUnlock_d__15;
}
namespace GlobalNamespace {
class DeepLinkHandler__ProcessWebRequest_d__11;
}
namespace Oculus::Platform::Models {
class LaunchDetails;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DeepLinkHandler;
}
namespace GlobalNamespace {
class DeepLinkHandler_CollabRequest;
}
namespace GlobalNamespace {
class DeepLinkHandler__CheckProcessExternalUnlock_d__15;
}
namespace GlobalNamespace {
class DeepLinkHandler__ProcessWebRequest_d__11;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeepLinkHandler*);
MARK_REF_T(::GlobalNamespace::DeepLinkHandler_CollabRequest*);
MARK_REF_T(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*);
MARK_REF_T(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeepLinkHandler*, "", "DeepLinkHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeepLinkHandler_CollabRequest*, "", "DeepLinkHandler/CollabRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*, "", "DeepLinkHandler/<CheckProcessExternalUnlock>d__15");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*, "", "DeepLinkHandler/<ProcessWebRequest>d__11");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeepLinkHandler
class CORDL_TYPE DeepLinkHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CollabRequest = ::GlobalNamespace::DeepLinkHandler_CollabRequest;

using _CheckProcessExternalUnlock_d__15 = ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15;

using _ProcessWebRequest_d__11 = ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11;

/// @brief Field RaccoonLagoonCosmeticIDs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RaccoonLagoonCosmeticIDs, put=__cordl_internal_set_RaccoonLagoonCosmeticIDs)) ::ArrayW<::StringW>  RaccoonLagoonCosmeticIDs;

/// @brief Field WitchbloodCollabCosmeticID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WitchbloodCollabCosmeticID, put=__cordl_internal_set_WitchbloodCollabCosmeticID)) ::ArrayW<::StringW>  WitchbloodCollabCosmeticID;

/// @brief Field cachedLaunchDetails, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedLaunchDetails, put=__cordl_internal_set_cachedLaunchDetails)) ::Oculus::Platform::Models::LaunchDetails*  cachedLaunchDetails;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::DeepLinkHandler>  instance;

/// @brief Method Awake, addr 0x5799318, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(DeepLinkHandler::<CheckProcessExternalUnlock>d__15))]
/// @brief Method CheckProcessExternalUnlock, addr 0x579a1ec, size 0xb4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckProcessExternalUnlock(::ArrayW<::StringW>  itemIDs, bool  autoEquip, bool  isLeftHand, bool  destroyOnFinish) ;

/// @brief Method HandleDeepLink, addr 0x579988c, size 0x644, virtual false, abstract: false, final false
inline void HandleDeepLink() ;

/// @brief Method Initialize, addr 0x5799430, size 0x1d0, virtual false, abstract: false, final false
static inline void Initialize(::UnityEngine::GameObject*  parent) ;

static inline ::GlobalNamespace::DeepLinkHandler* New_ctor() ;

/// @brief Method OnRaccoonLagoonCollabResponse, addr 0x579a2a0, size 0x234, virtual false, abstract: false, final false
inline void OnRaccoonLagoonCollabResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest) ;

/// @brief Method OnWitchbloodCollabResponse, addr 0x5799fb8, size 0x234, virtual false, abstract: false, final false
inline void OnWitchbloodCollabResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest) ;

/// [IteratorStateMachine(typeof(DeepLinkHandler::<ProcessWebRequest>d__11))]
/// @brief Method ProcessWebRequest, addr 0x5799ed0, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ProcessWebRequest(::StringW  url, ::StringW  data, ::StringW  contentType, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback) ;

/// @brief Method RefreshLaunchDetails, addr 0x5799600, size 0x28c, virtual false, abstract: false, final false
inline void RefreshLaunchDetails() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_RaccoonLagoonCosmeticIDs() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_RaccoonLagoonCosmeticIDs() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_WitchbloodCollabCosmeticID() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_WitchbloodCollabCosmeticID() ;

constexpr ::Oculus::Platform::Models::LaunchDetails* const& __cordl_internal_get_cachedLaunchDetails() const;

constexpr ::Oculus::Platform::Models::LaunchDetails*& __cordl_internal_get_cachedLaunchDetails() ;

constexpr void __cordl_internal_set_RaccoonLagoonCosmeticIDs(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_WitchbloodCollabCosmeticID(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_cachedLaunchDetails(::Oculus::Platform::Models::LaunchDetails*  value) ;

/// @brief Method .ctor, addr 0x579a4fc, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::DeepLinkHandler> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::DeepLinkHandler>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeepLinkHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeepLinkHandler(DeepLinkHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeepLinkHandler(DeepLinkHandler const& ) = delete;

/// @brief Field HiddenPathCollabEndpoint offset 0xffffffff size 0x8
static constexpr ::ConstString  HiddenPathCollabEndpoint{u"/api/ConsumeItem"};

/// @brief Field RaccoonLagoonAppID offset 0xffffffff size 0x8
static constexpr ::ConstString  RaccoonLagoonAppID{u"1903584373052985"};

/// @brief Field WitchbloodAppID offset 0xffffffff size 0x8
static constexpr ::ConstString  WitchbloodAppID{u"7221491444554579"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1476};

/// @brief Field cachedLaunchDetails, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Platform::Models::LaunchDetails*  ___cachedLaunchDetails;

/// @brief Field WitchbloodCollabCosmeticID, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___WitchbloodCollabCosmeticID;

/// @brief Field RaccoonLagoonCosmeticIDs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___RaccoonLagoonCosmeticIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeepLinkHandler, ___cachedLaunchDetails) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler, ___WitchbloodCollabCosmeticID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler, ___RaccoonLagoonCosmeticIDs) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeepLinkHandler) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeepLinkHandler/<ProcessWebRequest>d__11
class CORDL_TYPE DeepLinkHandler__ProcessWebRequest_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <request>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback;

/// @brief Field contentType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentType, put=__cordl_internal_set_contentType)) ::StringW  contentType;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::StringW  data;

/// @brief Field url, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x579a820, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x579a8d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x579a8d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x579a910, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x579a81c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& __cordl_internal_get_callback() ;

constexpr ::StringW const& __cordl_internal_get_contentType() const;

constexpr ::StringW& __cordl_internal_get_contentType() ;

constexpr ::StringW const& __cordl_internal_get_data() const;

constexpr ::StringW& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

constexpr void __cordl_internal_set_contentType(::StringW  value) ;

constexpr void __cordl_internal_set_data(::StringW  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5799f88, size 0x28, virtual false, abstract: false, final false
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
constexpr DeepLinkHandler__ProcessWebRequest_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler__ProcessWebRequest_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeepLinkHandler__ProcessWebRequest_d__11(DeepLinkHandler__ProcessWebRequest_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler__ProcessWebRequest_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeepLinkHandler__ProcessWebRequest_d__11(DeepLinkHandler__ProcessWebRequest_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1475};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___url;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___data;

/// @brief Field contentType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___contentType;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  ___callback;

/// @brief Field <request>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, ___url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, ___contentType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, ___callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11, ____request_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeepLinkHandler/<CheckProcessExternalUnlock>d__15
class CORDL_TYPE DeepLinkHandler__CheckProcessExternalUnlock_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DeepLinkHandler>  __4__this;

/// @brief Field autoEquip, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoEquip, put=__cordl_internal_set_autoEquip)) bool  autoEquip;

/// @brief Field destroyOnFinish, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnFinish, put=__cordl_internal_set_destroyOnFinish)) bool  destroyOnFinish;

/// @brief Field isLeftHand, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field itemIDs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIDs, put=__cordl_internal_set_itemIDs)) ::ArrayW<::StringW>  itemIDs;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x579a624, size 0x1b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x579a7d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x579a7dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x579a814, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x579a620, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::DeepLinkHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::DeepLinkHandler>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_autoEquip() const;

constexpr bool& __cordl_internal_get_autoEquip() ;

constexpr bool const& __cordl_internal_get_destroyOnFinish() const;

constexpr bool& __cordl_internal_get_destroyOnFinish() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_itemIDs() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_itemIDs() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DeepLinkHandler>  value) ;

constexpr void __cordl_internal_set_autoEquip(bool  value) ;

constexpr void __cordl_internal_set_destroyOnFinish(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_itemIDs(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x579a4d4, size 0x28, virtual false, abstract: false, final false
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
constexpr DeepLinkHandler__CheckProcessExternalUnlock_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler__CheckProcessExternalUnlock_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeepLinkHandler__CheckProcessExternalUnlock_d__15(DeepLinkHandler__CheckProcessExternalUnlock_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler__CheckProcessExternalUnlock_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeepLinkHandler__CheckProcessExternalUnlock_d__15(DeepLinkHandler__CheckProcessExternalUnlock_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1474};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field itemIDs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___itemIDs;

/// @brief Field autoEquip, offset: 0x28, size: 0x1, def value: None
 bool  ___autoEquip;

/// @brief Field isLeftHand, offset: 0x29, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field destroyOnFinish, offset: 0x2a, size: 0x1, def value: None
 bool  ___destroyOnFinish;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DeepLinkHandler>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, ___itemIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, ___autoEquip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, ___isLeftHand) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, ___destroyOnFinish) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15, _____4__this) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeepLinkHandler/CollabRequest
class CORDL_TYPE DeepLinkHandler_CollabRequest : public ::System::Object {
public:
// Declarations
/// @brief Field itemGUID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemGUID, put=__cordl_internal_set_itemGUID)) ::StringW  itemGUID;

/// @brief Field launchSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchSource, put=__cordl_internal_set_launchSource)) ::StringW  launchSource;

/// @brief Field mothershipEnvId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipEnvId, put=__cordl_internal_set_mothershipEnvId)) ::StringW  mothershipEnvId;

/// @brief Field mothershipId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field mothershipToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipToken, put=__cordl_internal_set_mothershipToken)) ::StringW  mothershipToken;

/// @brief Field oculusUserID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_oculusUserID, put=__cordl_internal_set_oculusUserID)) ::StringW  oculusUserID;

/// @brief Field playFabID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabID, put=__cordl_internal_set_playFabID)) ::StringW  playFabID;

/// @brief Field playFabSessionTicket, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabSessionTicket, put=__cordl_internal_set_playFabSessionTicket)) ::StringW  playFabSessionTicket;

static inline ::GlobalNamespace::DeepLinkHandler_CollabRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_itemGUID() const;

constexpr ::StringW& __cordl_internal_get_itemGUID() ;

constexpr ::StringW const& __cordl_internal_get_launchSource() const;

constexpr ::StringW& __cordl_internal_get_launchSource() ;

constexpr ::StringW const& __cordl_internal_get_mothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_mothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipToken() const;

constexpr ::StringW& __cordl_internal_get_mothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_oculusUserID() const;

constexpr ::StringW& __cordl_internal_get_oculusUserID() ;

constexpr ::StringW const& __cordl_internal_get_playFabID() const;

constexpr ::StringW& __cordl_internal_get_playFabID() ;

constexpr ::StringW const& __cordl_internal_get_playFabSessionTicket() const;

constexpr ::StringW& __cordl_internal_get_playFabSessionTicket() ;

constexpr void __cordl_internal_set_itemGUID(::StringW  value) ;

constexpr void __cordl_internal_set_launchSource(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_oculusUserID(::StringW  value) ;

constexpr void __cordl_internal_set_playFabID(::StringW  value) ;

constexpr void __cordl_internal_set_playFabSessionTicket(::StringW  value) ;

/// @brief Method .ctor, addr 0x5799fb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeepLinkHandler_CollabRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler_CollabRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeepLinkHandler_CollabRequest(DeepLinkHandler_CollabRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeepLinkHandler_CollabRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeepLinkHandler_CollabRequest(DeepLinkHandler_CollabRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1473};

/// @brief Field itemGUID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___itemGUID;

/// @brief Field launchSource, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___launchSource;

/// @brief Field oculusUserID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___oculusUserID;

/// @brief Field playFabID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___playFabID;

/// @brief Field playFabSessionTicket, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___playFabSessionTicket;

/// @brief Field mothershipId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field mothershipToken, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___mothershipToken;

/// @brief Field mothershipEnvId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___mothershipEnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___itemGUID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___launchSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___oculusUserID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___playFabID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___playFabSessionTicket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___mothershipId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___mothershipToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeepLinkHandler_CollabRequest, ___mothershipEnvId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeepLinkHandler_CollabRequest) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
