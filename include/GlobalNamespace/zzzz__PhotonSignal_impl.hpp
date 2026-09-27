#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_impl.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_10_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_11_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_12_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_1_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_2_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_3_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_4_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_5_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_6_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_7_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_8_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_9_def.hpp"
#include "GlobalNamespace/zzzz__OnSignalReceived_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OnSignalReceived*, ::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::PhotonSignal::_Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5abec58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_Invoke", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._SafeInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OnSignalReceived*, ::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::PhotonSignal::_SafeInvoke)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5abec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_SafeInvoke", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abedd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.get_argCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::get_argCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.add_OnSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::GlobalNamespace::OnSignalReceived*)>(&::GlobalNamespace::PhotonSignal::add_OnSignal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5abede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"add_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.remove_OnSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::GlobalNamespace::OnSignalReceived*)>(&::GlobalNamespace::PhotonSignal::remove_OnSignal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5abeed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"remove_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5abef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::StringW)>(&::GlobalNamespace::PhotonSignal::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5abf094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(int32_t)>(&::GlobalNamespace::PhotonSignal::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5abf184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Raise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Raise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abf1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Raise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Raise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::Photon::Realtime::ReceiverGroup)>(&::GlobalNamespace::PhotonSignal::Raise)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5abf1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Raise", {}, {::i2c::type_of<::Photon::Realtime::ReceiverGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Enable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5abf684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Disable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5abf74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._EventHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::PhotonSignal::_EventHandle)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5abf80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_EventHandle", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal._Relay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)(::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::PhotonSignal::_Relay)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5abfa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.ClearListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::ClearListeners)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abfaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5abfb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5abfb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal::*)()>(&::GlobalNamespace::PhotonSignal::Finalize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5abfb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.op_Implicit___GlobalNamespace__PhotonSignal_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonSignal* (*)(::StringW)>(&::GlobalNamespace::PhotonSignal::op_Implicit___GlobalNamespace__PhotonSignal_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5abfbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal.op_Explicit___GlobalNamespace__PhotonSignal_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonSignal* (*)(int32_t)>(&::GlobalNamespace::PhotonSignal::op_Explicit___GlobalNamespace__PhotonSignal_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5abfc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PhotonSignal::__cordl_internal_get__signalID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalID;
}
constexpr int32_t const& GlobalNamespace::PhotonSignal::__cordl_internal_get__signalID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalID;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__signalID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signalID = value;
}
constexpr bool& GlobalNamespace::PhotonSignal::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& GlobalNamespace::PhotonSignal::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr ::Photon::Realtime::ReceiverGroup& GlobalNamespace::PhotonSignal::__cordl_internal_get__receivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivers;
}
constexpr ::Photon::Realtime::ReceiverGroup const& GlobalNamespace::PhotonSignal::__cordl_internal_get__receivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivers;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__receivers(::Photon::Realtime::ReceiverGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivers = value;
}
constexpr bool& GlobalNamespace::PhotonSignal::__cordl_internal_get__mute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mute;
}
constexpr bool const& GlobalNamespace::PhotonSignal::__cordl_internal_get__mute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mute;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__mute(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mute = value;
}
constexpr bool& GlobalNamespace::PhotonSignal::__cordl_internal_get__safeInvoke()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeInvoke;
}
constexpr bool const& GlobalNamespace::PhotonSignal::__cordl_internal_get__safeInvoke() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeInvoke;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__safeInvoke(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeInvoke = value;
}
constexpr bool& GlobalNamespace::PhotonSignal::__cordl_internal_get__localOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOnly;
}
constexpr bool const& GlobalNamespace::PhotonSignal::__cordl_internal_get__localOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOnly;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__localOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localOnly = value;
}
constexpr int32_t& GlobalNamespace::PhotonSignal::__cordl_internal_get__refID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refID;
}
constexpr int32_t const& GlobalNamespace::PhotonSignal::__cordl_internal_get__refID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refID;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__refID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____refID = value;
}
constexpr ::GlobalNamespace::OnSignalReceived*& GlobalNamespace::PhotonSignal::__cordl_internal_get__callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr ::GlobalNamespace::OnSignalReceived* const& GlobalNamespace::PhotonSignal::__cordl_internal_get__callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbacks;
}
constexpr void GlobalNamespace::PhotonSignal::__cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbacks = value;
}
inline void GlobalNamespace::PhotonSignal::setStaticF_gGroupToOptions(::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*, "gGroupToOptions", ::GlobalNamespace::PhotonSignal*>(std::forward<::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>* GlobalNamespace::PhotonSignal::getStaticF_gGroupToOptions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Photon::Realtime::ReceiverGroup,::Photon::Realtime::RaiseEventOptions*>*, "gGroupToOptions", ::GlobalNamespace::PhotonSignal*>();
}
inline void GlobalNamespace::PhotonSignal::setStaticF_gSendReliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "gSendReliable", ::GlobalNamespace::PhotonSignal*>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions GlobalNamespace::PhotonSignal::getStaticF_gSendReliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "gSendReliable", ::GlobalNamespace::PhotonSignal*>();
}
inline void GlobalNamespace::PhotonSignal::setStaticF_gSendUnreliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "gSendUnreliable", ::GlobalNamespace::PhotonSignal*>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions GlobalNamespace::PhotonSignal::getStaticF_gSendUnreliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "gSendUnreliable", ::GlobalNamespace::PhotonSignal*>();
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, info);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, info);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  _event, T1  arg1, T2  arg2, T3  arg3, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, info);
}
template<typename T1,typename T2>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_2<T1,T2>*  _event, T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, info);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived_1<T1>*  _event, T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_Invoke", {::i2c::class_of<T1>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_1<T1>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, info);
}
inline void GlobalNamespace::PhotonSignal::_Invoke(::GlobalNamespace::OnSignalReceived*  _event, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_Invoke", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_8<T1,T2,T3,T4,T5,T6,T7,T8>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_7<T1,T2,T3,T4,T5,T6,T7>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, arg7, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_6<T1,T2,T3,T4,T5,T6>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, arg6, info);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, arg5, info);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*  _event, T1  arg1, T2  arg2, T3  arg3, T4  arg4, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_4<T1,T2,T3,T4>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, arg4, info);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*  _event, T1  arg1, T2  arg2, T3  arg3, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_3<T1,T2,T3>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, arg3, info);
}
template<typename T1,typename T2>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_2<T1,T2>*  _event, T1  arg1, T2  arg2, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_2<T1,T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, arg2, info);
}
template<typename T1>
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived_1<T1>*  _event, T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                    {"_SafeInvoke", {::i2c::class_of<T1>()}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived_1<T1>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, arg1, info);
}
inline void GlobalNamespace::PhotonSignal::_SafeInvoke(::GlobalNamespace::OnSignalReceived*  _event, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_SafeInvoke", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _event, info);
}
inline bool GlobalNamespace::PhotonSignal::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PhotonSignal::get_argCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::add_OnSignal(::GlobalNamespace::OnSignalReceived*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"add_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PhotonSignal::remove_OnSignal(::GlobalNamespace::OnSignalReceived*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"remove_OnSignal", {}, {::i2c::type_of<::GlobalNamespace::OnSignalReceived*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PhotonSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::_ctor(::StringW  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
inline void GlobalNamespace::PhotonSignal::_ctor(int32_t  signalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalID);
}
inline void GlobalNamespace::PhotonSignal::Raise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Raise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::Raise(::Photon::Realtime::ReceiverGroup  receivers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Raise", {}, {::i2c::type_of<::Photon::Realtime::ReceiverGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivers);
}
inline void GlobalNamespace::PhotonSignal::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::_EventHandle(::ExitGames::Client::Photon::EventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"_EventHandle", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::PhotonSignal::_Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, info);
}
inline void GlobalNamespace::PhotonSignal::ClearListeners()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonSignal* GlobalNamespace::PhotonSignal::op_Implicit___GlobalNamespace__PhotonSignal_(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal*>(nullptr, ___internal_method, s);
}
inline ::GlobalNamespace::PhotonSignal* GlobalNamespace::PhotonSignal::op_Explicit___GlobalNamespace__PhotonSignal_(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal*>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonSignal*>(nullptr, ___internal_method, i);
}
inline ::GlobalNamespace::PhotonSignal* GlobalNamespace::PhotonSignal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal*>());
}
inline ::GlobalNamespace::PhotonSignal* GlobalNamespace::PhotonSignal::New_ctor(::StringW  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal*>(signalID));
}
inline ::GlobalNamespace::PhotonSignal* GlobalNamespace::PhotonSignal::New_ctor(int32_t  signalID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal*>(signalID));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonSignal::PhotonSignal()   {
}
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal_RefID.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::PhotonSignal_RefID::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5abfe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal_RefID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal_RefID::*)()>(&::GlobalNamespace::PhotonSignal_RefID::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5abfe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal_RefID.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignal_RefID::*)()>(&::GlobalNamespace::PhotonSignal_RefID::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5abff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignal_RefID.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::PhotonSignal*)>(&::GlobalNamespace::PhotonSignal_RefID::Register)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5abefe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::PhotonSignal*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PhotonSignal_RefID::__cordl_internal_get_intValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr int32_t const& GlobalNamespace::PhotonSignal_RefID::__cordl_internal_get_intValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr void GlobalNamespace::PhotonSignal_RefID::__cordl_internal_set_intValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intValue = value;
}
inline void GlobalNamespace::PhotonSignal_RefID::setStaticF_gNextID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "gNextID", ::GlobalNamespace::PhotonSignal_RefID*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PhotonSignal_RefID::getStaticF_gNextID()  {
return ::cordl_internals::getStaticField<int32_t, "gNextID", ::GlobalNamespace::PhotonSignal_RefID*>();
}
inline void GlobalNamespace::PhotonSignal_RefID::setStaticF_gRefCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "gRefCount", ::GlobalNamespace::PhotonSignal_RefID*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PhotonSignal_RefID::getStaticF_gRefCount()  {
return ::cordl_internals::getStaticField<int32_t, "gRefCount", ::GlobalNamespace::PhotonSignal_RefID*>();
}
inline void GlobalNamespace::PhotonSignal_RefID::setStaticF_gRefTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*, "gRefTable", ::GlobalNamespace::PhotonSignal_RefID*>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>* GlobalNamespace::PhotonSignal_RefID::getStaticF_gRefTable()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::GlobalNamespace::PhotonSignal*,::GlobalNamespace::PhotonSignal_RefID*>*, "gRefTable", ::GlobalNamespace::PhotonSignal_RefID*>();
}
inline int32_t GlobalNamespace::PhotonSignal_RefID::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal_RefID::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonSignal_RefID::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PhotonSignal_RefID::Register(::GlobalNamespace::PhotonSignal*  ps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignal_RefID*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::PhotonSignal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ps);
}
inline ::GlobalNamespace::PhotonSignal_RefID* GlobalNamespace::PhotonSignal_RefID::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonSignal_RefID*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonSignal_RefID::PhotonSignal_RefID()   {
}
