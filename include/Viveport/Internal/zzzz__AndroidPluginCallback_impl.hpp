#pragma once
// IWYU pragma private; include "Viveport/Internal/AndroidPluginCallback.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Viveport/Internal/zzzz__AndroidPluginCallback_def.hpp"
#include "Viveport/Internal/zzzz__IAPurchaseCallback_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::AndroidPluginCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::AndroidPluginCallback::*)(::Viveport::Internal::IAPurchaseCallback*)>(&::Viveport::Internal::AndroidPluginCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b59fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::AndroidPluginCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::AndroidPluginCallback::*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::AndroidPluginCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b59640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::AndroidPluginCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::AndroidPluginCallback::*)(::Viveport::Internal::StatusCallback2*)>(&::Viveport::Internal::AndroidPluginCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b5a19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::AndroidPluginCallback.onResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::AndroidPluginCallback::*)(int32_t, ::StringW)>(&::Viveport::Internal::AndroidPluginCallback::onResult)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b5a464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {"onResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Viveport::Internal::IAPurchaseCallback*& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::Viveport::Internal::IAPurchaseCallback* const& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Viveport::Internal::AndroidPluginCallback::__cordl_internal_set_callback(::Viveport::Internal::IAPurchaseCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::Viveport::Internal::StatusCallback*& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_statusCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCallback;
}
constexpr ::Viveport::Internal::StatusCallback* const& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_statusCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCallback;
}
constexpr void Viveport::Internal::AndroidPluginCallback::__cordl_internal_set_statusCallback(::Viveport::Internal::StatusCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusCallback = value;
}
constexpr ::Viveport::Internal::StatusCallback2*& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_statusCallback2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCallback2;
}
constexpr ::Viveport::Internal::StatusCallback2* const& Viveport::Internal::AndroidPluginCallback::__cordl_internal_get_statusCallback2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCallback2;
}
constexpr void Viveport::Internal::AndroidPluginCallback::__cordl_internal_set_statusCallback2(::Viveport::Internal::StatusCallback2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusCallback2 = value;
}
inline void Viveport::Internal::AndroidPluginCallback::_ctor(::Viveport::Internal::IAPurchaseCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Viveport::Internal::AndroidPluginCallback::_ctor(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Viveport::Internal::AndroidPluginCallback::_ctor(::Viveport::Internal::StatusCallback2*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Viveport::Internal::AndroidPluginCallback::onResult(int32_t  statusCode, ::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::AndroidPluginCallback*>(),
                        {"onResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode, result);
}
inline ::Viveport::Internal::AndroidPluginCallback* Viveport::Internal::AndroidPluginCallback::New_ctor(::Viveport::Internal::IAPurchaseCallback*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::AndroidPluginCallback*>(callback));
}
inline ::Viveport::Internal::AndroidPluginCallback* Viveport::Internal::AndroidPluginCallback::New_ctor(::Viveport::Internal::StatusCallback*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::AndroidPluginCallback*>(callback));
}
inline ::Viveport::Internal::AndroidPluginCallback* Viveport::Internal::AndroidPluginCallback::New_ctor(::Viveport::Internal::StatusCallback2*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::AndroidPluginCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::AndroidPluginCallback::AndroidPluginCallback()   {
}
