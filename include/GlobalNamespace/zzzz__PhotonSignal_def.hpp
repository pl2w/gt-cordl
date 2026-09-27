#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonSignal)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class OnSignalReceived_10;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class OnSignalReceived_11;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class OnSignalReceived_12;
}
namespace GlobalNamespace {
template<typename T1>
class OnSignalReceived_1;
}
namespace GlobalNamespace {
template<typename T1,typename T2>
class OnSignalReceived_2;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3>
class OnSignalReceived_3;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4>
class OnSignalReceived_4;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class OnSignalReceived_5;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class OnSignalReceived_6;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class OnSignalReceived_7;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class OnSignalReceived_8;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class OnSignalReceived_9;
}
namespace GlobalNamespace {
class OnSignalReceived;
}
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
namespace GlobalNamespace {
class PhotonSignal_RefID;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace Photon::Realtime {
struct ReceiverGroup;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonSignal;
}
namespace GlobalNamespace {
class PhotonSignal_RefID;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonSignal*);
MARK_REF_T(::GlobalNamespace::PhotonSignal_RefID*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonSignal*, "", "PhotonSignal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonSignal_RefID*, "", "PhotonSignal/RefID");
// Dependencies ExitGames.Client.Photon.SendOptions, Photon.Realtime.ReceiverGroup, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonSignal
class CORDL_TYPE PhotonSignal : public ::System::Object {
public:
// Declarations
using RefID = ::GlobalNamespace::PhotonSignal_RefID;

/// @brief Field _callbacks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callbacks, put=__cordl_internal_set__callbacks)) ::GlobalNamespace::OnSignalReceived*  _callbacks;

/// @brief Field _enabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _localOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__localOnly, put=__cordl_internal_set__localOnly)) bool  _localOnly;

/// @brief Field _mute, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get__mute, put=__cordl_internal_set__mute)) bool  _mute;

/// @brief Field _receivers, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__receivers, put=__cordl_internal_set__receivers)) ::Photon::Realtime::ReceiverGroup  _receivers;

/// @brief Field _refID, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__refID, put=__cordl_internal_set__refID)) int32_t  _refID;

/// @brief Field _safeInvoke, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get__safeInvoke, put=__cordl_internal_set__safeInvoke)) bool  _safeInvoke;

/// @brief Field _signalID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__signalID, put=__cordl_internal_set__signalID)) int32_t  _signalID;

 __declspec(property(get=get_argCount)) int32_t  argCount;

 __declspec(property(get=get_enabled)) bool  enabled;

/// @brief Field gGroupToOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gGroupToOptions, put=setStaticF_gGroupToOptions)) ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*  gGroupToOptions;

/// @brief Field gSendReliable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSendReliable, put=setStaticF_gSendReliable)) ::ExitGames::Client::Photon::SendOptions  gSendReliable;

/// @brief Field gSendUnreliable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSendUnreliable, put=setStaticF_gSendUnreliable)) ::ExitGames::Client::Photon::SendOptions  gSendUnreliable;

/// @brief Method ClearListeners, addr 0x5abfaf4, size 0xc, virtual true, abstract: false, final false
inline void ClearListeners() ;

/// @brief Method Disable, addr 0x5abf74c, size 0xc0, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Dispose, addr 0x5abfb20, size 0x10, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Enable, addr 0x5abf684, size 0xc8, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method Finalize, addr 0x5abfb30, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::PhotonSignal* New_ctor() ;

static inline ::GlobalNamespace::PhotonSignal* New_ctor(::StringW  signalID) ;

static inline ::GlobalNamespace::PhotonSignal* New_ctor(int32_t  signalID) ;

/// @brief Method Raise, addr 0x5abf1a8, size 0x8, virtual false, abstract: false, final false
inline void Raise() ;

/// @brief Method Raise, addr 0x5abf1b0, size 0x2a4, virtual false, abstract: false, final false
inline void Raise(::Photon::Realtime::ReceiverGroup  receivers) ;

/// @brief Method Reset, addr 0x5abfb00, size 0x20, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method _EventHandle, addr 0x5abf80c, size 0x198, virtual false, abstract: false, final false
inline void _EventHandle(::ExitGames::Client::Photon::EventData*  eventData) ;

/// @brief Method _Invoke, addr 0x5abec58, size 0x1c, virtual false, abstract: false, final false
static inline void _Invoke(::GlobalNamespace::OnSignalReceived*  _event, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_1<T1>*  _event, T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_2<T1,T2>*  _event, T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  _event, T1  arg1, T2  arg2, T3  arg3, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline void _Invoke(::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _Relay, addr 0x5abfa34, size 0xc0, virtual true, abstract: false, final false
inline void _Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x5abec74, size 0x164, virtual false, abstract: false, final false
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived*  _event, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_1<T1>*  _event, T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_2<T1,T2>*  _event, T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  _event, T1  arg1, T2  arg2, T3  arg3, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, ::GlobalNamespace::PhotonSignalInfo  info) ;

/// @brief Method _SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline void _SafeInvoke(::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, ::GlobalNamespace::PhotonSignalInfo  info) ;

constexpr ::GlobalNamespace::OnSignalReceived* const& __cordl_internal_get__callbacks() const;

constexpr ::GlobalNamespace::OnSignalReceived*& __cordl_internal_get__callbacks() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr bool const& __cordl_internal_get__localOnly() const;

constexpr bool& __cordl_internal_get__localOnly() ;

constexpr bool const& __cordl_internal_get__mute() const;

constexpr bool& __cordl_internal_get__mute() ;

constexpr ::Photon::Realtime::ReceiverGroup const& __cordl_internal_get__receivers() const;

constexpr ::Photon::Realtime::ReceiverGroup& __cordl_internal_get__receivers() ;

constexpr int32_t const& __cordl_internal_get__refID() const;

constexpr int32_t& __cordl_internal_get__refID() ;

constexpr bool const& __cordl_internal_get__safeInvoke() const;

constexpr bool& __cordl_internal_get__safeInvoke() ;

constexpr int32_t const& __cordl_internal_get__signalID() const;

constexpr int32_t& __cordl_internal_get__signalID() ;

constexpr void __cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived*  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__localOnly(bool  value) ;

constexpr void __cordl_internal_set__mute(bool  value) ;

constexpr void __cordl_internal_set__receivers(::Photon::Realtime::ReceiverGroup  value) ;

constexpr void __cordl_internal_set__refID(int32_t  value) ;

constexpr void __cordl_internal_set__safeInvoke(bool  value) ;

constexpr void __cordl_internal_set__signalID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5abef74, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5abf094, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::StringW  signalID) ;

/// @brief Method .ctor, addr 0x5abf184, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  signalID) ;

/// @brief Method add_OnSignal, addr 0x5abede8, size 0xec, virtual false, abstract: false, final false
inline void add_OnSignal(::GlobalNamespace::OnSignalReceived*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>* getStaticF_gGroupToOptions() ;

static inline ::ExitGames::Client::Photon::SendOptions getStaticF_gSendReliable() ;

static inline ::ExitGames::Client::Photon::SendOptions getStaticF_gSendUnreliable() ;

/// @brief Method get_argCount, addr 0x5abede0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_argCount() ;

/// @brief Method get_enabled, addr 0x5abedd8, size 0x8, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method op_Explicit, addr 0x5abfc14, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonSignal* op_Explicit___GlobalNamespace__PhotonSignal_(int32_t  i) ;

/// @brief Method op_Implicit, addr 0x5abfbbc, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonSignal* op_Implicit___GlobalNamespace__PhotonSignal_(::StringW  s) ;

/// @brief Method remove_OnSignal, addr 0x5abeed4, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnSignal(::GlobalNamespace::OnSignalReceived*  value) ;

static inline void setStaticF_gGroupToOptions(::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*  value) ;

static inline void setStaticF_gSendReliable(::ExitGames::Client::Photon::SendOptions  value) ;

static inline void setStaticF_gSendUnreliable(::ExitGames::Client::Photon::SendOptions  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonSignal(PhotonSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonSignal(PhotonSignal const& ) = delete;

/// @brief Field EVENT_CODE offset 0xffffffff size 0x1
static constexpr uint8_t  EVENT_CODE{static_cast<uint8_t>(0xb1u)};

/// @brief Field HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HEADER_SIZE{static_cast<int32_t>(0x2)};

/// @brief Field NULL_SIGNAL offset 0xffffffff size 0x4
static constexpr int32_t  NULL_SIGNAL{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3333};

/// @brief Field _signalID, offset: 0x10, size: 0x4, def value: None
 int32_t  ____signalID;

/// @brief Field _enabled, offset: 0x14, size: 0x1, def value: None
 bool  ____enabled;

/// [SerializeField]
/// @brief Field _receivers, offset: 0x15, size: 0x1, def value: None
 ::Photon::Realtime::ReceiverGroup  ____receivers;

/// [FormerlySerializedAs("mute")]
/// [SerializeField]
/// @brief Field _mute, offset: 0x16, size: 0x1, def value: None
 bool  ____mute;

/// [SerializeField]
/// @brief Field _safeInvoke, offset: 0x17, size: 0x1, def value: None
 bool  ____safeInvoke;

/// [SerializeField]
/// @brief Field _localOnly, offset: 0x18, size: 0x1, def value: None
 bool  ____localOnly;

/// @brief Field _refID, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____refID;

/// @brief Field _callbacks, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OnSignalReceived*  ____callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____signalID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____enabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____receivers) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____mute) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____safeInvoke) == 0x17, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____localOnly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____refID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignal, ____callbacks) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonSignal) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonSignal/RefID
class CORDL_TYPE PhotonSignal_RefID : public ::System::Object {
public:
// Declarations
/// @brief Field gNextID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gNextID, put=setStaticF_gNextID)) int32_t  gNextID;

/// @brief Field gRefCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gRefCount, put=setStaticF_gRefCount)) int32_t  gRefCount;

/// @brief Field gRefTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRefTable, put=setStaticF_gRefTable)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*  gRefTable;

/// @brief Field intValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_intValue, put=__cordl_internal_set_intValue)) int32_t  intValue;

/// @brief Method Finalize, addr 0x5abff34, size 0xd4, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::PhotonSignal_RefID* New_ctor() ;

/// @brief Method Register, addr 0x5abefe8, size 0xac, virtual false, abstract: false, final false
static inline int32_t Register(::GlobalNamespace::PhotonSignal*  ps) ;

constexpr int32_t const& __cordl_internal_get_intValue() const;

constexpr int32_t& __cordl_internal_get_intValue() ;

constexpr void __cordl_internal_set_intValue(int32_t  value) ;

/// @brief Method .ctor, addr 0x5abfe84, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_gNextID() ;

static inline int32_t getStaticF_gRefCount() ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>* getStaticF_gRefTable() ;

/// @brief Method get_Count, addr 0x5abfe2c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_Count() ;

static inline void setStaticF_gNextID(int32_t  value) ;

static inline void setStaticF_gRefCount(int32_t  value) ;

static inline void setStaticF_gRefTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonSignal_RefID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal_RefID", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonSignal_RefID(PhotonSignal_RefID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal_RefID", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonSignal_RefID(PhotonSignal_RefID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3332};

/// @brief Field intValue, offset: 0x10, size: 0x4, def value: None
 int32_t  ___intValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonSignal_RefID, ___intValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonSignal_RefID) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
