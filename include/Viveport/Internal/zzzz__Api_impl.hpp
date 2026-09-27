#pragma once
// IWYU pragma private; include "Viveport/Internal/Api.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Viveport/Internal/zzzz__Api_def.hpp"
#include "Viveport/Internal/zzzz__Api_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Api_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::Api.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*, ::StringW)>(&::Viveport::Internal::Api::Init)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b4c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Init", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::Api::Shutdown)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b4ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api.Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::Internal::Api::Version)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b4cbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api.GetLicense
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Api_LicenseChecker*, ::StringW, ::StringW)>(&::Viveport::Internal::Api::GetLicense)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b4c2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"GetLicense", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Api::*)()>(&::Viveport::Internal::Api::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b59758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Viveport::Internal::Api::Init(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Init", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, pchAppKey);
}
inline int32_t Viveport::Internal::Api::Shutdown(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline ::StringW Viveport::Internal::Api::Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Viveport::Internal::Api::GetLicense(::Viveport::Api_LicenseChecker*  checker, ::StringW  appId, ::StringW  appKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {"GetLicense", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, appKey);
}
inline void Viveport::Internal::Api::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::Api* Viveport::Internal::Api::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Api*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Api::Api()   {
}
//  Writing Method size for method: ::Viveport::Internal::Api_AndroidLicenseChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Api_AndroidLicenseChecker::*)(::Viveport::Api_LicenseChecker*)>(&::Viveport::Internal::Api_AndroidLicenseChecker::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b596cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api_AndroidLicenseChecker.onSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Api_AndroidLicenseChecker::*)(int64_t, int64_t, int32_t, bool)>(&::Viveport::Internal::Api_AndroidLicenseChecker::onSuccess)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b59760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {"onSuccess", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Api_AndroidLicenseChecker.onFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Api_AndroidLicenseChecker::*)(int32_t, ::StringW)>(&::Viveport::Internal::Api_AndroidLicenseChecker::onFailure)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b59888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {"onFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Viveport::Api_LicenseChecker*& Viveport::Internal::Api_AndroidLicenseChecker::__cordl_internal_get_checker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checker;
}
constexpr ::Viveport::Api_LicenseChecker* const& Viveport::Internal::Api_AndroidLicenseChecker::__cordl_internal_get_checker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checker;
}
constexpr void Viveport::Internal::Api_AndroidLicenseChecker::__cordl_internal_set_checker(::Viveport::Api_LicenseChecker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checker = value;
}
inline void Viveport::Internal::Api_AndroidLicenseChecker::_ctor(::Viveport::Api_LicenseChecker*  checker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checker);
}
inline void Viveport::Internal::Api_AndroidLicenseChecker::onSuccess(int64_t  issueTime, int64_t  expirationTime, int32_t  latestVersion, bool  updateRequired)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {"onSuccess", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issueTime, expirationTime, latestVersion, updateRequired);
}
inline void Viveport::Internal::Api_AndroidLicenseChecker::onFailure(int32_t  errorCode, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Api_AndroidLicenseChecker*>(),
                        {"onFailure", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, errorMessage);
}
inline ::Viveport::Internal::Api_AndroidLicenseChecker* Viveport::Internal::Api_AndroidLicenseChecker::New_ctor(::Viveport::Api_LicenseChecker*  checker)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Api_AndroidLicenseChecker*>(checker));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Api_AndroidLicenseChecker::Api_AndroidLicenseChecker()   {
}
