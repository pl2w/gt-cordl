#pragma once
// IWYU pragma private; include "Viveport/Api.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__Api_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Viveport/Internal/zzzz__GetLicenseCallback_def.hpp"
#include "Viveport/Internal/zzzz__QueryRuntimeModeCallback_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Api_def.hpp"
#include "Viveport/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Api.GetLicense
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Api_LicenseChecker*, ::StringW, ::StringW)>(&::Viveport::Api::GetLicense)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b4c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"GetLicense", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api.InitIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::Api::InitIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"InitIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*, ::StringW)>(&::Viveport::Api::Init)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5b4c45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Init", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api.ShutdownIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::Api::ShutdownIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4c134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"ShutdownIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*)>(&::Viveport::Api::Shutdown)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b4c86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api.Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::Api::Version)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b4cb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Api::*)()>(&::Viveport::Api::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Api::setStaticF_InternalGetLicenseCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*, "InternalGetLicenseCallbacks", ::Viveport::Api*>(std::forward<::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>* Viveport::Api::getStaticF_InternalGetLicenseCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*, "InternalGetLicenseCallbacks", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_InternalStatusCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*, "InternalStatusCallbacks", ::Viveport::Api*>(std::forward<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>* Viveport::Api::getStaticF_InternalStatusCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*, "InternalStatusCallbacks", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_InternalQueryRunTimeCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*, "InternalQueryRunTimeCallbacks", ::Viveport::Api*>(std::forward<::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>* Viveport::Api::getStaticF_InternalQueryRunTimeCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*, "InternalQueryRunTimeCallbacks", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_InternalStatusCallback2s(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*, "InternalStatusCallback2s", ::Viveport::Api*>(std::forward<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>* Viveport::Api::getStaticF_InternalStatusCallback2s()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*, "InternalStatusCallback2s", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_InternalLicenseCheckers(::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*, "InternalLicenseCheckers", ::Viveport::Api*>(std::forward<::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>* Viveport::Api::getStaticF_InternalLicenseCheckers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*, "InternalLicenseCheckers", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_initIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "initIl2cppCallback", ::Viveport::Api*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::Api::getStaticF_initIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "initIl2cppCallback", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_shutdownIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "shutdownIl2cppCallback", ::Viveport::Api*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::Api::getStaticF_shutdownIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "shutdownIl2cppCallback", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF_queryRuntimeModeIl2cppCallback(::Viveport::Internal::QueryRuntimeModeCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::QueryRuntimeModeCallback*, "queryRuntimeModeIl2cppCallback", ::Viveport::Api*>(std::forward<::Viveport::Internal::QueryRuntimeModeCallback*>(value));
}
inline ::Viveport::Internal::QueryRuntimeModeCallback* Viveport::Api::getStaticF_queryRuntimeModeIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::QueryRuntimeModeCallback*, "queryRuntimeModeIl2cppCallback", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF__cordl_VERSION(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "VERSION", ::Viveport::Api*>(std::forward<::StringW>(value));
}
inline ::StringW Viveport::Api::getStaticF__cordl_VERSION()  {
return ::cordl_internals::getStaticField<::StringW, "VERSION", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF__appId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_appId", ::Viveport::Api*>(std::forward<::StringW>(value));
}
inline ::StringW Viveport::Api::getStaticF__appId()  {
return ::cordl_internals::getStaticField<::StringW, "_appId", ::Viveport::Api*>();
}
inline void Viveport::Api::setStaticF__appKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_appKey", ::Viveport::Api*>(std::forward<::StringW>(value));
}
inline ::StringW Viveport::Api::getStaticF__appKey()  {
return ::cordl_internals::getStaticField<::StringW, "_appKey", ::Viveport::Api*>();
}
inline void Viveport::Api::GetLicense(::Viveport::Api_LicenseChecker*  checker, ::StringW  appId, ::StringW  appKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"GetLicense", {}, {::i2c::type_of<::Viveport::Api_LicenseChecker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, checker, appId, appKey);
}
inline void Viveport::Api::InitIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"InitIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::Api::Init(::Viveport::StatusCallback*  callback, ::StringW  appId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Init", {}, {::i2c::type_of<::Viveport::StatusCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, appId);
}
inline void Viveport::Api::ShutdownIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"ShutdownIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::Api::Shutdown(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline ::StringW Viveport::Api::Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {"Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Viveport::Api::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Api* Viveport::Api::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Api*>());
}
// Ctor Parameters []
constexpr ::Viveport::Api::Api()   {
}
//  Writing Method size for method: ::Viveport::Api_LicenseChecker.OnSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Api_LicenseChecker::*)(int64_t, int64_t, int32_t, bool)>(&::Viveport::Api_LicenseChecker::OnSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Api_LicenseChecker*>(),
                    {::i2c::class_of<::Viveport::Api_LicenseChecker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api_LicenseChecker.OnFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Api_LicenseChecker::*)(int32_t, ::StringW)>(&::Viveport::Api_LicenseChecker::OnFailure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Api_LicenseChecker*>(),
                    {::i2c::class_of<::Viveport::Api_LicenseChecker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Api_LicenseChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Api_LicenseChecker::*)()>(&::Viveport::Api_LicenseChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4cf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api_LicenseChecker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Api_LicenseChecker::OnSuccess(int64_t  issueTime, int64_t  expirationTime, int32_t  latestVersion, bool  updateRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Api_LicenseChecker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issueTime, expirationTime, latestVersion, updateRequired);
}
inline void Viveport::Api_LicenseChecker::OnFailure(int32_t  errorCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Api_LicenseChecker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, errorMessage);
}
inline void Viveport::Api_LicenseChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Api_LicenseChecker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Api_LicenseChecker* Viveport::Api_LicenseChecker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Api_LicenseChecker*>());
}
// Ctor Parameters []
constexpr ::Viveport::Api_LicenseChecker::Api_LicenseChecker()   {
}
