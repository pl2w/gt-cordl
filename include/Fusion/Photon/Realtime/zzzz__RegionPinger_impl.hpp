#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RegionPinger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Region_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.get_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::get_Done)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f61e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"get_Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.set_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger::*)(bool)>(&::Fusion::Photon::Realtime::RegionPinger::set_Done)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f61e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"set_Done", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.get_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::get_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f61e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"get_Aborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.set_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger::*)(bool)>(&::Fusion::Photon::Realtime::RegionPinger::set_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f61e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"set_Aborted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger::*)(::Fusion::Photon::Realtime::Region*, ::System::Action_1<::Fusion::Photon::Realtime::Region*>*)>(&::Fusion::Photon::Realtime::RegionPinger::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f614b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>(), ::i2c::type_of<::System::Action_1<::Fusion::Photon::Realtime::Region*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.GetPingImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::PhotonPing* (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::GetPingImplementation)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f61e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"GetPingImplementation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::Start)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5f61568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::Abort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f61ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.RegionPingThreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::RegionPingThreaded)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5f621dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingThreaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.RegionPingCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::RegionPingCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f620d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.GetResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::RegionPinger::*)()>(&::Fusion::Photon::Realtime::RegionPinger::GetResults)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f60624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"GetResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger.ResolveHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Fusion::Photon::Realtime::RegionPinger::ResolveHost)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5f628ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"ResolveHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger._Start_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger::*)(::System::Object*)>(&::Fusion::Photon::Realtime::RegionPinger::_Start_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f62d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"<Start>b__19_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_CurrentAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentAttempt;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_CurrentAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentAttempt;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_CurrentAttempt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentAttempt = value;
}
constexpr bool& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get__Done_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Done_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get__Done_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Done_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set__Done_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Done_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get__Aborted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborted_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get__Aborted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborted_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set__Aborted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Aborted_k__BackingField = value;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::Region*>*& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_onDoneCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneCall;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::Region*>* const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_onDoneCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneCall;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_onDoneCall(::System::Action_1<::Fusion::Photon::Realtime::Region*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDoneCall = value;
}
constexpr ::Fusion::Photon::Realtime::PhotonPing*& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_ping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ping;
}
constexpr ::Fusion::Photon::Realtime::PhotonPing* const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_ping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ping;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_ping(::Fusion::Photon::Realtime::PhotonPing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ping = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_rttResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rttResults;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_rttResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rttResults;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_rttResults(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rttResults = value;
}
constexpr ::Fusion::Photon::Realtime::Region*& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr ::Fusion::Photon::Realtime::Region* const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_region(::Fusion::Photon::Realtime::Region*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___region = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_regionAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionAddress;
}
constexpr ::StringW const& Fusion::Photon::Realtime::RegionPinger::__cordl_internal_get_regionAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionAddress;
}
constexpr void Fusion::Photon::Realtime::RegionPinger::__cordl_internal_set_regionAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionAddress = value;
}
inline void Fusion::Photon::Realtime::RegionPinger::setStaticF_Attempts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Attempts", ::Fusion::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::Photon::Realtime::RegionPinger::getStaticF_Attempts()  {
return ::cordl_internals::getStaticField<int32_t, "Attempts", ::Fusion::Photon::Realtime::RegionPinger*>();
}
inline void Fusion::Photon::Realtime::RegionPinger::setStaticF_MaxMillisecondsPerPing(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxMillisecondsPerPing", ::Fusion::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::Photon::Realtime::RegionPinger::getStaticF_MaxMillisecondsPerPing()  {
return ::cordl_internals::getStaticField<int32_t, "MaxMillisecondsPerPing", ::Fusion::Photon::Realtime::RegionPinger*>();
}
inline void Fusion::Photon::Realtime::RegionPinger::setStaticF_PingWhenFailed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PingWhenFailed", ::Fusion::Photon::Realtime::RegionPinger*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::Photon::Realtime::RegionPinger::getStaticF_PingWhenFailed()  {
return ::cordl_internals::getStaticField<int32_t, "PingWhenFailed", ::Fusion::Photon::Realtime::RegionPinger*>();
}
inline bool Fusion::Photon::Realtime::RegionPinger::get_Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"get_Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionPinger::set_Done(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"set_Done", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RegionPinger::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"get_Aborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionPinger::set_Aborted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"set_Aborted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::RegionPinger::_ctor(::Fusion::Photon::Realtime::Region*  region, ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  onDoneCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>(), ::i2c::type_of<::System::Action_1<::Fusion::Photon::Realtime::Region*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, region, onDoneCallback);
}
inline ::Fusion::Photon::Realtime::PhotonPing* Fusion::Photon::Realtime::RegionPinger::GetPingImplementation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"GetPingImplementation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::PhotonPing*>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::RegionPinger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionPinger::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::RegionPinger::RegionPingThreaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingThreaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::Photon::Realtime::RegionPinger::RegionPingCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"RegionPingCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::RegionPinger::GetResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"GetResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::RegionPinger::ResolveHost(::StringW  hostName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"ResolveHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hostName);
}
inline void Fusion::Photon::Realtime::RegionPinger::_Start_b__19_0(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger*>(),
                        {"<Start>b__19_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Fusion::Photon::Realtime::RegionPinger* Fusion::Photon::Realtime::RegionPinger::New_ctor(::Fusion::Photon::Realtime::Region*  region, ::System::Action_1<::Fusion::Photon::Realtime::Region*>*  onDoneCallback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RegionPinger*>(region, onDoneCallback));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RegionPinger::RegionPinger()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)(int32_t)>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f62c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)()>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f62d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)()>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x5f62d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)()>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)()>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f63758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::*)()>(&::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Fusion::Photon::Realtime::RegionPinger*& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Photon::Realtime::RegionPinger* const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set___4__this(::Fusion::Photon::Realtime::RegionPinger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__rttSum_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rttSum_5__1;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__rttSum_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rttSum_5__1;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__rttSum_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rttSum_5__1 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__replyCount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replyCount_5__2;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__replyCount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replyCount_5__2;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__replyCount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____replyCount_5__2 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__sw_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__3;
}
constexpr ::System::Diagnostics::Stopwatch* const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__sw_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__3;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__sw_5__3(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sw_5__3 = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__address_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____address_5__4;
}
constexpr ::StringW const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__address_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____address_5__4;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__address_5__4(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____address_5__4 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__indexOfColon_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexOfColon_5__5;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__indexOfColon_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexOfColon_5__5;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__indexOfColon_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indexOfColon_5__5 = value;
}
constexpr ::System::Exception*& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__e_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__6;
}
constexpr ::System::Exception* const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__e_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__6;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__e_5__6(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__6 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__rtt_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtt_5__7;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__rtt_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtt_5__7;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__rtt_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rtt_5__7 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__i_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__8;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__i_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__8;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__i_5__8(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__8 = value;
}
constexpr ::System::Exception*& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__e_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__9;
}
constexpr ::System::Exception* const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__e_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e_5__9;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__e_5__9(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e_5__9 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__bestRtt_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestRtt_5__10;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__bestRtt_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestRtt_5__10;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__bestRtt_5__10(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestRtt_5__10 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__worstRtt_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worstRtt_5__11;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__worstRtt_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worstRtt_5__11;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__worstRtt_5__11(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worstRtt_5__11 = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__weighedRttSum_5__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weighedRttSum_5__12;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_get__weighedRttSum_5__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weighedRttSum_5__12;
}
constexpr void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::__cordl_internal_set__weighedRttSum_5__12(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weighedRttSum_5__12 = value;
}
inline void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RegionPinger__RegionPingCoroutine_d__22::RegionPinger__RegionPingCoroutine_d__22()   {
}
