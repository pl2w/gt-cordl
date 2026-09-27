#pragma once
// IWYU pragma private; include "Photon/Realtime/RegionPinger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Photon/Realtime/zzzz__Region_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.get_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::get_Done)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70bdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"get_Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.set_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger::*)(bool)>(&::Photon::Realtime::RegionPinger::set_Done)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70bddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"set_Done", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger::*)(::Photon::Realtime::Region*, ::System::Action_1<::Photon::Realtime::Region*>*)>(&::Photon::Realtime::RegionPinger::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa70bde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::Region*>(), ::i2c::type_of<::System::Action_1<::Photon::Realtime::Region*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.GetPingImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::PhotonPing* (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::GetPingImplementation)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa70be90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"GetPingImplementation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::Start)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa70c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.RegionPingPooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger::*)(::System::Object*)>(&::Photon::Realtime::RegionPinger::RegionPingPooled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa70c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingPooled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.RegionPingThreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::RegionPingThreaded)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa70c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingThreaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.RegionPingCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::RegionPingCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa70c8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.GetResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RegionPinger::*)()>(&::Photon::Realtime::RegionPinger::GetResults)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa70c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"GetResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger.ResolveHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Photon::Realtime::RegionPinger::ResolveHost)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa70c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"ResolveHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::Region*& Photon::Realtime::RegionPinger::__cordl_internal_get_region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr ::Photon::Realtime::Region* const& Photon::Realtime::RegionPinger::__cordl_internal_get_region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_region(::Photon::Realtime::Region*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___region = value;
}
constexpr ::StringW& Photon::Realtime::RegionPinger::__cordl_internal_get_regionAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionAddress;
}
constexpr ::StringW const& Photon::Realtime::RegionPinger::__cordl_internal_get_regionAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionAddress;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_regionAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionAddress = value;
}
constexpr int32_t& Photon::Realtime::RegionPinger::__cordl_internal_get_CurrentAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentAttempt;
}
constexpr int32_t const& Photon::Realtime::RegionPinger::__cordl_internal_get_CurrentAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentAttempt;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_CurrentAttempt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentAttempt = value;
}
constexpr bool& Photon::Realtime::RegionPinger::__cordl_internal_get__Done_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Done_k__BackingField;
}
constexpr bool const& Photon::Realtime::RegionPinger::__cordl_internal_get__Done_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Done_k__BackingField;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set__Done_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Done_k__BackingField = value;
}
constexpr ::System::Action_1<::Photon::Realtime::Region*>*& Photon::Realtime::RegionPinger::__cordl_internal_get_onDoneCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneCall;
}
constexpr ::System::Action_1<::Photon::Realtime::Region*>* const& Photon::Realtime::RegionPinger::__cordl_internal_get_onDoneCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneCall;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_onDoneCall(::System::Action_1<::Photon::Realtime::Region*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDoneCall = value;
}
constexpr ::Photon::Realtime::PhotonPing*& Photon::Realtime::RegionPinger::__cordl_internal_get_ping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ping;
}
constexpr ::Photon::Realtime::PhotonPing* const& Photon::Realtime::RegionPinger::__cordl_internal_get_ping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ping;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_ping(::Photon::Realtime::PhotonPing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ping = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Photon::Realtime::RegionPinger::__cordl_internal_get_rttResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rttResults;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Photon::Realtime::RegionPinger::__cordl_internal_get_rttResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rttResults;
}
constexpr void Photon::Realtime::RegionPinger::__cordl_internal_set_rttResults(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rttResults = value;
}
inline void Photon::Realtime::RegionPinger::setStaticF_Attempts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Attempts", ::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Realtime::RegionPinger::getStaticF_Attempts()  {
return ::cordl_internals::getStaticField<int32_t, "Attempts", ::Photon::Realtime::RegionPinger*>();
}
inline void Photon::Realtime::RegionPinger::setStaticF_IgnoreInitialAttempt(bool  value)  {
::cordl_internals::setStaticField<bool, "IgnoreInitialAttempt", ::Photon::Realtime::RegionPinger*>(std::forward<bool>(value));
}
inline bool Photon::Realtime::RegionPinger::getStaticF_IgnoreInitialAttempt()  {
return ::cordl_internals::getStaticField<bool, "IgnoreInitialAttempt", ::Photon::Realtime::RegionPinger*>();
}
inline void Photon::Realtime::RegionPinger::setStaticF_MaxMilliseconsPerPing(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxMilliseconsPerPing", ::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Realtime::RegionPinger::getStaticF_MaxMilliseconsPerPing()  {
return ::cordl_internals::getStaticField<int32_t, "MaxMilliseconsPerPing", ::Photon::Realtime::RegionPinger*>();
}
inline void Photon::Realtime::RegionPinger::setStaticF_PingWhenFailed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PingWhenFailed", ::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Photon::Realtime::RegionPinger::getStaticF_PingWhenFailed()  {
return ::cordl_internals::getStaticField<int32_t, "PingWhenFailed", ::Photon::Realtime::RegionPinger*>();
}
inline bool Photon::Realtime::RegionPinger::get_Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"get_Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::RegionPinger::set_Done(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"set_Done", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Realtime::RegionPinger::_ctor(::Photon::Realtime::Region*  region, ::System::Action_1<::Photon::Realtime::Region*>*  onDoneCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::Region*>(), ::i2c::type_of<::System::Action_1<::Photon::Realtime::Region*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, region, onDoneCallback);
}
inline ::Photon::Realtime::PhotonPing* Photon::Realtime::RegionPinger::GetPingImplementation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"GetPingImplementation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::PhotonPing*>(this, ___internal_method);
}
inline bool Photon::Realtime::RegionPinger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::RegionPinger::RegionPingPooled(::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingPooled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Photon::Realtime::RegionPinger::RegionPingThreaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingThreaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Photon::Realtime::RegionPinger::RegionPingCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionPinger::GetResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"GetResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionPinger::ResolveHost(::StringW  hostName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger*>(),
                        {"ResolveHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hostName);
}
inline ::Photon::Realtime::RegionPinger* Photon::Realtime::RegionPinger::New_ctor(::Photon::Realtime::Region*  region, ::System::Action_1<::Photon::Realtime::Region*>*  onDoneCallback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RegionPinger*>(region, onDoneCallback));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionPinger::RegionPinger()   {
}
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)(int32_t)>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa70c958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)()>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa70cac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)()>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0xa70cacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)()>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)()>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa70cfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::*)()>(&::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70cfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Photon::Realtime::RegionPinger*& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Photon::Realtime::RegionPinger* const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set___4__this(::Photon::Realtime::RegionPinger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__rttSum_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rttSum_5__2;
}
constexpr float_t const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__rttSum_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rttSum_5__2;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set__rttSum_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rttSum_5__2 = value;
}
constexpr int32_t& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__replyCount_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replyCount_5__3;
}
constexpr int32_t const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__replyCount_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replyCount_5__3;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set__replyCount_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____replyCount_5__3 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__sw_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__4;
}
constexpr ::System::Diagnostics::Stopwatch* const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__sw_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__4;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set__sw_5__4(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sw_5__4 = value;
}
constexpr bool& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__overtime_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overtime_5__5;
}
constexpr bool const& Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_get__overtime_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overtime_5__5;
}
constexpr void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::__cordl_internal_set__overtime_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overtime_5__5 = value;
}
inline void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__19::RegionPinger__RegionPingCoroutine_d__19()   {
}
