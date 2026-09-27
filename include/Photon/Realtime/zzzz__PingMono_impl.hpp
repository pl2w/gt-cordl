#pragma once
// IWYU pragma private; include "Photon/Realtime/PingMono.hpp"
#include "Photon/Realtime/zzzz__PhotonPing_impl.hpp"
#include "Photon/Realtime/zzzz__PingMono_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::PingMono.StartPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::PingMono::*)(::StringW)>(&::Photon::Realtime::PingMono::StartPing)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa70a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Photon::Realtime::PingMono*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PingMono.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::PingMono::*)()>(&::Photon::Realtime::PingMono::Done)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa70a4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Photon::Realtime::PingMono*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PingMono.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::PingMono::*)()>(&::Photon::Realtime::PingMono::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa70a6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::PingMono*>(),
                    {::i2c::class_of<::Photon::Realtime::PingMono*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PingMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::PingMono::*)()>(&::Photon::Realtime::PingMono::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa70a784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::PingMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& Photon::Realtime::PingMono::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& Photon::Realtime::PingMono::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void Photon::Realtime::PingMono::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
inline bool Photon::Realtime::PingMono::StartPing(::StringW  ip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::PingMono*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ip);
}
inline bool Photon::Realtime::PingMono::Done()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::PingMono*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::PingMono::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::PingMono*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::PingMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::PingMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::PingMono* Photon::Realtime::PingMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::PingMono*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::PingMono::PingMono()   {
}
