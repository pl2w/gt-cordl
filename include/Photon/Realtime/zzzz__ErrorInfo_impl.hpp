#pragma once
// IWYU pragma private; include "Photon/Realtime/ErrorInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ErrorInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ErrorInfo::*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Realtime::ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa7054ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ErrorInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::ErrorInfo::*)()>(&::Photon::Realtime::ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa706328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ErrorInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::ErrorInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::ErrorInfo::__cordl_internal_get_Info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr ::StringW const& Photon::Realtime::ErrorInfo::__cordl_internal_get_Info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr void Photon::Realtime::ErrorInfo::__cordl_internal_set_Info(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Info = value;
}
inline void Photon::Realtime::ErrorInfo::_ctor(::ExitGames::Client::Photon::EventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::StringW Photon::Realtime::ErrorInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ErrorInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Photon::Realtime::ErrorInfo* Photon::Realtime::ErrorInfo::New_ctor(::ExitGames::Client::Photon::EventData*  eventData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ErrorInfo*>(eventData));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ErrorInfo::ErrorInfo()   {
}
