#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonEvent)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
struct PhotonEvent_RaiseMode;
}
namespace GlobalNamespace {
class PhotonEvent___c__DisplayClass47_0;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaTag {
template<typename T>
class ListProcessor_1;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonEvent;
}
namespace GlobalNamespace {
class PhotonEvent___c__DisplayClass47_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonEvent*);
MARK_REF_T(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonEvent*, "", "PhotonEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*, "", "PhotonEvent/<>c__DisplayClass47_0");
// Dependencies ExitGames.Client.Photon.SendOptions, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonEvent
class CORDL_TYPE PhotonEvent : public ::System::Object {
public:
// Declarations
using RaiseMode = ::GlobalNamespace::PhotonEvent_RaiseMode;

using __c__DisplayClass47_0 = ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0;

/// @brief Field OnError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnError, put=setStaticF_OnError)) ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  OnError;

/// @brief Field _delegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__delegate, put=__cordl_internal_set__delegate)) ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  _delegate;

/// @brief Field _disposed, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _enabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _eventId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__eventId, put=__cordl_internal_set__eventId)) int32_t  _eventId;

/// @brief Field _failSilent, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get__failSilent, put=__cordl_internal_set__failSilent)) bool  _failSilent;

/// @brief Field _photonEvents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__photonEvents, put=setStaticF__photonEvents)) ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*  _photonEvents;

/// @brief Field _reliable, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__reliable, put=__cordl_internal_set__reliable)) bool  _reliable;

 __declspec(property(get=get_failSilent, put=set_failSilent)) bool  failSilent;

/// @brief Field gReceiversAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gReceiversAll, put=setStaticF_gReceiversAll)) ::Photon::Realtime::RaiseEventOptions*  gReceiversAll;

/// @brief Field gReceiversOthers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gReceiversOthers, put=setStaticF_gReceiversOthers)) ::Photon::Realtime::RaiseEventOptions*  gReceiversOthers;

/// @brief Field gSendReliable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSendReliable, put=setStaticF_gSendReliable)) ::ExitGames::Client::Photon::SendOptions  gSendReliable;

/// @brief Field gSendUnreliable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSendUnreliable, put=setStaticF_gSendUnreliable)) ::ExitGames::Client::Photon::SendOptions  gSendUnreliable;

 __declspec(property(get=get_reliable, put=set_reliable)) bool  reliable;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>*() noexcept;

/// @brief Method AddCallback, addr 0x5abd128, size 0x17c, virtual false, abstract: false, final false
inline void AddCallback(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// @brief Method AddPhotonEvent, addr 0x5abd4cc, size 0x17c, virtual false, abstract: false, final false
static inline void AddPhotonEvent(::GlobalNamespace::PhotonEvent*  photonEvent) ;

/// @brief Method Disable, addr 0x5abd648, size 0x9c, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Dispose, addr 0x5abd350, size 0xb8, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Enable, addr 0x5abcf74, size 0xa0, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method Equals, addr 0x5abdf0c, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5abddd4, size 0xcc, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::PhotonEvent*  other) ;

/// @brief Method Finalize, addr 0x5abd2cc, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHashCode, addr 0x5abdf98, size 0x178, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InvokeDelegate, addr 0x5abd9ec, size 0x4c, virtual false, abstract: false, final false
inline void InvokeDelegate(int32_t  sender, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

static inline ::GlobalNamespace::PhotonEvent* New_ctor() ;

static inline ::GlobalNamespace::PhotonEvent* New_ctor(::StringW  eventId) ;

static inline ::GlobalNamespace::PhotonEvent* New_ctor(::StringW  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

static inline ::GlobalNamespace::PhotonEvent* New_ctor(int32_t  eventId) ;

static inline ::GlobalNamespace::PhotonEvent* New_ctor(int32_t  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// @brief Method Raise, addr 0x5abda44, size 0x378, virtual false, abstract: false, final false
inline void Raise(::GlobalNamespace::PhotonEvent_RaiseMode  mode, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method RaiseAll, addr 0x5abddc8, size 0xc, virtual false, abstract: false, final false
inline void RaiseAll(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method RaiseLocal, addr 0x5abda38, size 0xc, virtual false, abstract: false, final false
inline void RaiseLocal(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method RaiseOthers, addr 0x5abddbc, size 0xc, virtual false, abstract: false, final false
inline void RaiseOthers(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method RemoveCallback, addr 0x5abd408, size 0xc4, virtual false, abstract: false, final false
inline void RemoveCallback(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// @brief Method RemovePhotonEvent, addr 0x5abd6e4, size 0x128, virtual false, abstract: false, final false
static inline void RemovePhotonEvent(::GlobalNamespace::PhotonEvent*  photonEvent) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)3)]
/// @brief Method StaticLoadAfterPhotonNetwork, addr 0x5abe280, size 0xb0, virtual false, abstract: false, final false
static inline void StaticLoadAfterPhotonNetwork() ;

/// @brief Method StaticOnEvent, addr 0x5abe3a8, size 0x3f0, virtual false, abstract: false, final false
static inline void StaticOnEvent(::ExitGames::Client::Photon::EventData*  evData) ;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& __cordl_internal_get__delegate() const;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& __cordl_internal_get__delegate() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr int32_t const& __cordl_internal_get__eventId() const;

constexpr int32_t& __cordl_internal_get__eventId() ;

constexpr bool const& __cordl_internal_get__failSilent() const;

constexpr bool& __cordl_internal_get__failSilent() ;

constexpr bool const& __cordl_internal_get__reliable() const;

constexpr bool& __cordl_internal_get__reliable() ;

constexpr void __cordl_internal_set__delegate(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__eventId(int32_t  value) ;

constexpr void __cordl_internal_set__failSilent(bool  value) ;

constexpr void __cordl_internal_set__reliable(bool  value) ;

/// @brief Method .ctor, addr 0x5abce98, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5abd014, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  eventId) ;

/// @brief Method .ctor, addr 0x5abd2a4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// @brief Method .ctor, addr 0x5abcea8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  eventId) ;

/// @brief Method .ctor, addr 0x5abd100, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0x5abd80c, size 0xf0, virtual false, abstract: false, final false
static inline void add_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value) ;

static inline ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>* getStaticF_OnError() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>* getStaticF__photonEvents() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_gReceiversAll() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_gReceiversOthers() ;

static inline ::ExitGames::Client::Photon::SendOptions getStaticF_gSendReliable() ;

static inline ::ExitGames::Client::Photon::SendOptions getStaticF_gSendUnreliable() ;

/// @brief Method get_failSilent, addr 0x5abce88, size 0x8, virtual false, abstract: false, final false
inline bool get_failSilent() ;

/// @brief Method get_reliable, addr 0x5abce78, size 0x8, virtual false, abstract: false, final false
inline bool get_reliable() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>* i___System__IEquatable_1___GlobalNamespace__PhotonEvent__() noexcept;

/// @brief Method op_Addition, addr 0x5abe7a0, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonEvent* op_Addition(::GlobalNamespace::PhotonEvent*  photonEvent, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// @brief Method op_Equality, addr 0x5abdea0, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::PhotonEvent*  x, ::GlobalNamespace::PhotonEvent*  y) ;

/// @brief Method op_Inequality, addr 0x5abe330, size 0x78, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::PhotonEvent*  x, ::GlobalNamespace::PhotonEvent*  y) ;

/// @brief Method op_Subtraction, addr 0x5abe86c, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonEvent* op_Subtraction(::GlobalNamespace::PhotonEvent*  photonEvent, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0x5abd8fc, size 0xf0, virtual false, abstract: false, final false
static inline void remove_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value) ;

static inline void setStaticF_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value) ;

static inline void setStaticF__photonEvents(::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*  value) ;

static inline void setStaticF_gReceiversAll(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_gReceiversOthers(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_gSendReliable(::ExitGames::Client::Photon::SendOptions  value) ;

static inline void setStaticF_gSendUnreliable(::ExitGames::Client::Photon::SendOptions  value) ;

/// @brief Method set_failSilent, addr 0x5abce90, size 0x8, virtual false, abstract: false, final false
inline void set_failSilent(bool  value) ;

/// @brief Method set_reliable, addr 0x5abce80, size 0x8, virtual false, abstract: false, final false
inline void set_reliable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonEvent(PhotonEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonEvent(PhotonEvent const& ) = delete;

/// @brief Field INVALID_ID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_ID{static_cast<int32_t>(0xffffffff)};

/// @brief Field MAX_EVENT_ARGS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_EVENT_ARGS{static_cast<int32_t>(0x14)};

/// @brief Field PHOTON_EVENT_CODE offset 0xffffffff size 0x1
static constexpr uint8_t  PHOTON_EVENT_CODE{static_cast<uint8_t>(0xb0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3317};

/// [SerializeField]
/// @brief Field _eventId, offset: 0x10, size: 0x4, def value: None
 int32_t  ____eventId;

/// [SerializeField]
/// @brief Field _enabled, offset: 0x14, size: 0x1, def value: None
 bool  ____enabled;

/// [SerializeField]
/// @brief Field _reliable, offset: 0x15, size: 0x1, def value: None
 bool  ____reliable;

/// [SerializeField]
/// @brief Field _failSilent, offset: 0x16, size: 0x1, def value: None
 bool  ____failSilent;

/// @brief Field _disposed, offset: 0x17, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _delegate, offset: 0x18, size: 0x8, def value: None
 ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  ____delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____eventId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____enabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____reliable) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____failSilent) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____disposed) == 0x17, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent, ____delegate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonEvent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies PhotonMessageInfoWrapped, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonEvent/<>c__DisplayClass47_0
class CORDL_TYPE PhotonEvent___c__DisplayClass47_0 : public ::System::Object {
public:
// Declarations
/// @brief Field args, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::ArrayW<::System::Object*>  args;

/// @brief Field info, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::GlobalNamespace::PhotonMessageInfoWrapped  info;

/// @brief Field sender, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) int32_t  sender;

static inline ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0* New_ctor() ;

/// @brief Method <StaticOnEvent>b__0, addr 0x5abe938, size 0x74, virtual false, abstract: false, final false
inline void _StaticOnEvent_b__0(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonEvent*>  pEv) ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_args() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_args() ;

constexpr ::GlobalNamespace::PhotonMessageInfoWrapped const& __cordl_internal_get_info() const;

constexpr ::GlobalNamespace::PhotonMessageInfoWrapped& __cordl_internal_get_info() ;

constexpr int32_t const& __cordl_internal_get_sender() const;

constexpr int32_t& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set_args(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set_info(::GlobalNamespace::PhotonMessageInfoWrapped  value) ;

constexpr void __cordl_internal_set_sender(int32_t  value) ;

/// @brief Method .ctor, addr 0x5abe798, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonEvent___c__DisplayClass47_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonEvent___c__DisplayClass47_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonEvent___c__DisplayClass47_0(PhotonEvent___c__DisplayClass47_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonEvent___c__DisplayClass47_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonEvent___c__DisplayClass47_0(PhotonEvent___c__DisplayClass47_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3316};

/// @brief Field sender, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sender;

/// @brief Field args, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___args;

/// @brief Field info, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PhotonMessageInfoWrapped  ___info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0, ___sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0, ___info) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonEvent___c__DisplayClass47_0) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
