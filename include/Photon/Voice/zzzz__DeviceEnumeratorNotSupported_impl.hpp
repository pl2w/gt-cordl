#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceEnumeratorNotSupported.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorBase_impl.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorNotSupported_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorNotSupported.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::DeviceEnumeratorNotSupported::*)()>(&::Photon::Voice::DeviceEnumeratorNotSupported::get_IsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7462ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorNotSupported._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorNotSupported::*)(::Photon::Voice::ILogger*, ::StringW)>(&::Photon::Voice::DeviceEnumeratorNotSupported::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa7462f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorNotSupported.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorNotSupported::*)()>(&::Photon::Voice::DeviceEnumeratorNotSupported::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa746320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorNotSupported.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::DeviceEnumeratorNotSupported::*)()>(&::Photon::Voice::DeviceEnumeratorNotSupported::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceEnumeratorNotSupported.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceEnumeratorNotSupported::*)()>(&::Photon::Voice::DeviceEnumeratorNotSupported::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                    {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 14}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Voice::DeviceEnumeratorNotSupported::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Photon::Voice::DeviceEnumeratorNotSupported::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Photon::Voice::DeviceEnumeratorNotSupported::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline bool Photon::Voice::DeviceEnumeratorNotSupported::get_IsSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::DeviceEnumeratorNotSupported::_ctor(::Photon::Voice::ILogger*  logger, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, message);
}
inline void Photon::Voice::DeviceEnumeratorNotSupported::Refresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Photon::Voice::DeviceEnumeratorNotSupported::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::DeviceEnumeratorNotSupported::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceEnumeratorNotSupported*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::DeviceEnumeratorNotSupported* Photon::Voice::DeviceEnumeratorNotSupported::New_ctor(::Photon::Voice::ILogger*  logger, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::DeviceEnumeratorNotSupported*>(logger, message));
}
// Ctor Parameters []
constexpr ::Photon::Voice::DeviceEnumeratorNotSupported::DeviceEnumeratorNotSupported()   {
}
