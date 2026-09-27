#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PingMono.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__PingMono_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingMono.StartPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PingMono::*)(::StringW)>(&::Fusion::Photon::Realtime::PingMono::StartPing)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5f5e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingMono.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PingMono::*)()>(&::Fusion::Photon::Realtime::PingMono::Done)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f5eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingMono.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PingMono::*)()>(&::Fusion::Photon::Realtime::PingMono::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f5ed54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PingMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PingMono::*)()>(&::Fusion::Photon::Realtime::PingMono::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f5ee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& Fusion::Photon::Realtime::PingMono::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& Fusion::Photon::Realtime::PingMono::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void Fusion::Photon::Realtime::PingMono::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
inline bool Fusion::Photon::Realtime::PingMono::StartPing(::StringW  ip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ip);
}
inline bool Fusion::Photon::Realtime::PingMono::Done()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PingMono::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PingMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PingMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::PingMono* Fusion::Photon::Realtime::PingMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::PingMono*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PingMono::PingMono()   {
}
