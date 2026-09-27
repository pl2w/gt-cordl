#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PingHttp.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__PingHttp_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingHttp.StartPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PingHttp::*)(::StringW)>(&::Fusion::Photon::Realtime::PingHttp::StartPing)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f5ee58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingHttp.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PingHttp::*)()>(&::Fusion::Photon::Realtime::PingHttp::Done)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f5ef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingHttp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PingHttp::*)()>(&::Fusion::Photon::Realtime::PingHttp::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f5efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingHttp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PingHttp::*)()>(&::Fusion::Photon::Realtime::PingHttp::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f5efd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& Fusion::Photon::Realtime::PingHttp::__cordl_internal_get_webRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webRequest;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Fusion::Photon::Realtime::PingHttp::__cordl_internal_get_webRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webRequest;
}
constexpr void Fusion::Photon::Realtime::PingHttp::__cordl_internal_set_webRequest(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webRequest = value;
}
inline bool Fusion::Photon::Realtime::PingHttp::StartPing(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address);
}
inline bool Fusion::Photon::Realtime::PingHttp::Done()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PingHttp::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PingHttp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PingHttp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::PingHttp* Fusion::Photon::Realtime::PingHttp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::PingHttp*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PingHttp::PingHttp()   {
}
