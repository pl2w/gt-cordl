#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonEvent.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_RaiseMode_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaTag/zzzz__ListProcessor_1_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.get_reliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::get_reliable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abce78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"get_reliable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.set_reliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(bool)>(&::GlobalNamespace::PhotonEvent::set_reliable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"set_reliable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.get_failSilent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::get_failSilent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"get_failSilent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.set_failSilent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(bool)>(&::GlobalNamespace::PhotonEvent::set_failSilent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"set_failSilent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5abce98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(int32_t)>(&::GlobalNamespace::PhotonEvent::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5abcea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::StringW)>(&::GlobalNamespace::PhotonEvent::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5abd014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(int32_t, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5abd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::StringW, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5abd2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5abd2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::AddCallback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5abd128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.RemoveCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::RemoveCallback)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5abd408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::Enable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5abcf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::Disable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5abd648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5abd350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*)>(&::GlobalNamespace::PhotonEvent::add_OnError)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5abd80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*)>(&::GlobalNamespace::PhotonEvent::remove_OnError)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5abd8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.InvokeDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::PhotonEvent::InvokeDelegate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5abd9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"InvokeDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.RaiseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::PhotonEvent::RaiseLocal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abda38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseLocal", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.RaiseOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::PhotonEvent::RaiseOthers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseOthers", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.RaiseAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::PhotonEvent::RaiseAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseAll", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Raise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent::*)(::GlobalNamespace::PhotonEvent_RaiseMode, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::PhotonEvent::Raise)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5abda44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Raise", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent_RaiseMode>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonEvent::*)(::GlobalNamespace::PhotonEvent*)>(&::GlobalNamespace::PhotonEvent::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5abddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonEvent::*)(::System::Object*)>(&::GlobalNamespace::PhotonEvent::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5abdf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PhotonEvent::*)()>(&::GlobalNamespace::PhotonEvent::GetHashCode)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5abdf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.StaticLoadAfterPhotonNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PhotonEvent::StaticLoadAfterPhotonNetwork)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5abe280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"StaticLoadAfterPhotonNetwork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PhotonEvent*, ::GlobalNamespace::PhotonEvent*)>(&::GlobalNamespace::PhotonEvent::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5abdea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PhotonEvent*, ::GlobalNamespace::PhotonEvent*)>(&::GlobalNamespace::PhotonEvent::op_Inequality)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5abe330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.StaticOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::PhotonEvent::StaticOnEvent)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5abe3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"StaticOnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.AddPhotonEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PhotonEvent*)>(&::GlobalNamespace::PhotonEvent::AddPhotonEvent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5abd4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"AddPhotonEvent", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.RemovePhotonEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PhotonEvent*)>(&::GlobalNamespace::PhotonEvent::RemovePhotonEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5abd6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RemovePhotonEvent", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonEvent* (*)(::GlobalNamespace::PhotonEvent*, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::op_Addition)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5abe7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonEvent* (*)(::GlobalNamespace::PhotonEvent*, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*)>(&::GlobalNamespace::PhotonEvent::op_Subtraction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5abe86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PhotonEvent::__cordl_internal_get__eventId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventId;
}
constexpr int32_t const& GlobalNamespace::PhotonEvent::__cordl_internal_get__eventId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventId;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__eventId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventId = value;
}
constexpr bool& GlobalNamespace::PhotonEvent::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& GlobalNamespace::PhotonEvent::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr bool& GlobalNamespace::PhotonEvent::__cordl_internal_get__reliable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliable;
}
constexpr bool const& GlobalNamespace::PhotonEvent::__cordl_internal_get__reliable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliable;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__reliable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reliable = value;
}
constexpr bool& GlobalNamespace::PhotonEvent::__cordl_internal_get__failSilent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failSilent;
}
constexpr bool const& GlobalNamespace::PhotonEvent::__cordl_internal_get__failSilent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failSilent;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__failSilent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____failSilent = value;
}
constexpr bool& GlobalNamespace::PhotonEvent::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& GlobalNamespace::PhotonEvent::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& GlobalNamespace::PhotonEvent::__cordl_internal_get__delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delegate;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& GlobalNamespace::PhotonEvent::__cordl_internal_get__delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delegate;
}
constexpr void GlobalNamespace::PhotonEvent::__cordl_internal_set__delegate(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delegate = value;
}
inline void GlobalNamespace::PhotonEvent::setStaticF_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*, "OnError", ::GlobalNamespace::PhotonEvent*>(std::forward<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>(value));
}
inline ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>* GlobalNamespace::PhotonEvent::getStaticF_OnError()  {
return ::cordl_internals::getStaticField<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*, "OnError", ::GlobalNamespace::PhotonEvent*>();
}
inline void GlobalNamespace::PhotonEvent::setStaticF_gReceiversAll(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "gReceiversAll", ::GlobalNamespace::PhotonEvent*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GlobalNamespace::PhotonEvent::getStaticF_gReceiversAll()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "gReceiversAll", ::GlobalNamespace::PhotonEvent*>();
}
inline void GlobalNamespace::PhotonEvent::setStaticF_gReceiversOthers(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "gReceiversOthers", ::GlobalNamespace::PhotonEvent*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GlobalNamespace::PhotonEvent::getStaticF_gReceiversOthers()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "gReceiversOthers", ::GlobalNamespace::PhotonEvent*>();
}
inline void GlobalNamespace::PhotonEvent::setStaticF_gSendReliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "gSendReliable", ::GlobalNamespace::PhotonEvent*>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions GlobalNamespace::PhotonEvent::getStaticF_gSendReliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "gSendReliable", ::GlobalNamespace::PhotonEvent*>();
}
inline void GlobalNamespace::PhotonEvent::setStaticF_gSendUnreliable(::ExitGames::Client::Photon::SendOptions  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "gSendUnreliable", ::GlobalNamespace::PhotonEvent*>(std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions GlobalNamespace::PhotonEvent::getStaticF_gSendUnreliable()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "gSendUnreliable", ::GlobalNamespace::PhotonEvent*>();
}
inline void GlobalNamespace::PhotonEvent::setStaticF__photonEvents(::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*, "_photonEvents", ::GlobalNamespace::PhotonEvent*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>* GlobalNamespace::PhotonEvent::getStaticF__photonEvents()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ListProcessor_1<::GlobalNamespace::PhotonEvent*>*>*, "_photonEvents", ::GlobalNamespace::PhotonEvent*>();
}
inline bool GlobalNamespace::PhotonEvent::get_reliable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"get_reliable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::set_reliable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"set_reliable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PhotonEvent::get_failSilent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"get_failSilent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::set_failSilent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"set_failSilent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PhotonEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::_ctor(int32_t  eventId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId);
}
inline void GlobalNamespace::PhotonEvent::_ctor(::StringW  eventId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId);
}
inline void GlobalNamespace::PhotonEvent::_ctor(int32_t  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, callback);
}
inline void GlobalNamespace::PhotonEvent::_ctor(::StringW  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, callback);
}
inline void GlobalNamespace::PhotonEvent::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::AddCallback(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::PhotonEvent::RemoveCallback(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::PhotonEvent::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::add_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PhotonEvent::remove_OnError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PhotonEvent::InvokeDelegate(int32_t  sender, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"InvokeDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args, info);
}
inline void GlobalNamespace::PhotonEvent::RaiseLocal(/* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseLocal", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::PhotonEvent::RaiseOthers(/* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseOthers", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::PhotonEvent::RaiseAll(/* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RaiseAll", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::PhotonEvent::Raise(::GlobalNamespace::PhotonEvent_RaiseMode  mode, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Raise", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent_RaiseMode>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, args);
}
inline bool GlobalNamespace::PhotonEvent::Equals(::GlobalNamespace::PhotonEvent*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool GlobalNamespace::PhotonEvent::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::PhotonEvent::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonEvent*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent::StaticLoadAfterPhotonNetwork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"StaticLoadAfterPhotonNetwork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PhotonEvent::op_Equality(::GlobalNamespace::PhotonEvent*  x, ::GlobalNamespace::PhotonEvent*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool GlobalNamespace::PhotonEvent::op_Inequality(::GlobalNamespace::PhotonEvent*  x, ::GlobalNamespace::PhotonEvent*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline void GlobalNamespace::PhotonEvent::StaticOnEvent(::ExitGames::Client::Photon::EventData*  evData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"StaticOnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evData);
}
inline void GlobalNamespace::PhotonEvent::AddPhotonEvent(::GlobalNamespace::PhotonEvent*  photonEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"AddPhotonEvent", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonEvent);
}
inline void GlobalNamespace::PhotonEvent::RemovePhotonEvent(::GlobalNamespace::PhotonEvent*  photonEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"RemovePhotonEvent", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonEvent);
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::op_Addition(::GlobalNamespace::PhotonEvent*  photonEvent, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonEvent*>(nullptr, ___internal_method, photonEvent, callback);
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::op_Subtraction(::GlobalNamespace::PhotonEvent*  photonEvent, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent*>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::GlobalNamespace::PhotonEvent*>(), ::i2c::type_of<::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonEvent*>(nullptr, ___internal_method, photonEvent, callback);
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent*>());
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::New_ctor(int32_t  eventId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent*>(eventId));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::New_ctor(::StringW  eventId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent*>(eventId));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::New_ctor(int32_t  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent*>(eventId, callback));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PhotonEvent::New_ctor(::StringW  eventId, ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent*>(eventId, callback));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>"
constexpr  GlobalNamespace::PhotonEvent::operator ::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>*() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>* GlobalNamespace::PhotonEvent::i___System__IEquatable_1___GlobalNamespace__PhotonEvent__() noexcept {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonEvent*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonEvent::PhotonEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent___c__DisplayClass47_0::*)()>(&::GlobalNamespace::PhotonEvent___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abe798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0._StaticOnEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonEvent___c__DisplayClass47_0::*)(::by_ref<::GlobalNamespace::PhotonEvent*>)>(&::GlobalNamespace::PhotonEvent___c__DisplayClass47_0::_StaticOnEvent_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5abe938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*>(),
                        {"<StaticOnEvent>b__0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PhotonEvent*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr int32_t const& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_set_sender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr ::ArrayW<::System::Object*>& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_args()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr ::ArrayW<::System::Object*> const& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_args() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr void GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_set_args(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___args = value;
}
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped const& GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void GlobalNamespace::PhotonEvent___c__DisplayClass47_0::__cordl_internal_set_info(::GlobalNamespace::PhotonMessageInfoWrapped  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
inline void GlobalNamespace::PhotonEvent___c__DisplayClass47_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonEvent___c__DisplayClass47_0::_StaticOnEvent_b__0(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonEvent*>  pEv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*>(),
                        {"<StaticOnEvent>b__0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PhotonEvent*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pEv);
}
inline ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0* GlobalNamespace::PhotonEvent___c__DisplayClass47_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonEvent___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonEvent___c__DisplayClass47_0::PhotonEvent___c__DisplayClass47_0()   {
}
