#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioOculusAuthService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__ModioOculusAuthService_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/Authentication/zzzz__IGetActiveUserIdentifier_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
#include "Modio/Customizations/zzzz__IOculusCredentialProvider_def.hpp"
#include "Modio/Customizations/zzzz__ModioOculusAuthService__Authenticate_d__9_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::ModioOculusAuthService::*)()>(&::Modio::Customizations::ModioOculusAuthService::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Customizations::ModioOculusAuthService::*)()>(&::Modio::Customizations::ModioOculusAuthService::get_Portal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.GetActiveUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Customizations::ModioOculusAuthService::*)()>(&::Modio::Customizations::ModioOculusAuthService::GetActiveUserIdentifier)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa057a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioOculusAuthService::*)(::Modio::Customizations::IOculusCredentialProvider*)>(&::Modio::Customizations::ModioOculusAuthService::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa057afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::IOculusCredentialProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioOculusAuthService::*)()>(&::Modio::Customizations::ModioOculusAuthService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::ModioOculusAuthService::*)(bool, ::StringW)>(&::Modio::Customizations::ModioOculusAuthService::Authenticate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa057b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.SetCredentialProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioOculusAuthService::*)(::Modio::Customizations::IOculusCredentialProvider*)>(&::Modio::Customizations::ModioOculusAuthService::SetCredentialProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"SetCredentialProvider", {}, {::i2c::type_of<::Modio::Customizations::IOculusCredentialProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.ValidateAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioOculusAuthService::*)()>(&::Modio::Customizations::ModioOculusAuthService::ValidateAttempt)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa057c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioOculusAuthService.ReturnErrorAndReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioOculusAuthService::*)(::Modio::Error*)>(&::Modio::Customizations::ModioOculusAuthService::ReturnErrorAndReset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa057de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Customizations::IOculusCredentialProvider*& Modio::Customizations::ModioOculusAuthService::__cordl_internal_get__credentialProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialProvider;
}
constexpr ::Modio::Customizations::IOculusCredentialProvider* const& Modio::Customizations::ModioOculusAuthService::__cordl_internal_get__credentialProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialProvider;
}
constexpr void Modio::Customizations::ModioOculusAuthService::__cordl_internal_set__credentialProvider(::Modio::Customizations::IOculusCredentialProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentialProvider = value;
}
constexpr bool& Modio::Customizations::ModioOculusAuthService::__cordl_internal_get__isAttemptInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr bool const& Modio::Customizations::ModioOculusAuthService::__cordl_internal_get__isAttemptInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr void Modio::Customizations::ModioOculusAuthService::__cordl_internal_set__isAttemptInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAttemptInProgress = value;
}
inline bool Modio::Customizations::ModioOculusAuthService::get_IsEmailPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Customizations::ModioOculusAuthService::get_Portal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Customizations::ModioOculusAuthService::GetActiveUserIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Customizations::ModioOculusAuthService::_ctor(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::IOculusCredentialProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentialProvider);
}
inline void Modio::Customizations::ModioOculusAuthService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::ModioOculusAuthService::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline void Modio::Customizations::ModioOculusAuthService::SetCredentialProvider(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"SetCredentialProvider", {}, {::i2c::type_of<::Modio::Customizations::IOculusCredentialProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentialProvider);
}
inline ::Modio::Error* Modio::Customizations::ModioOculusAuthService::ValidateAttempt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Customizations::ModioOculusAuthService::ReturnErrorAndReset(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioOculusAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, error);
}
inline ::Modio::Customizations::ModioOculusAuthService* Modio::Customizations::ModioOculusAuthService::New_ctor(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioOculusAuthService*>(credentialProvider));
}
inline ::Modio::Customizations::ModioOculusAuthService* Modio::Customizations::ModioOculusAuthService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioOculusAuthService*>());
}
/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr  Modio::Customizations::ModioOculusAuthService::operator ::Modio::Authentication::IModioAuthService*() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* Modio::Customizations::ModioOculusAuthService::i___Modio__Authentication__IModioAuthService() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr  Modio::Customizations::ModioOculusAuthService::operator ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* Modio::Customizations::ModioOculusAuthService::i___Modio__Authentication__IGetActiveUserIdentifier() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr  Modio::Customizations::ModioOculusAuthService::operator ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* Modio::Customizations::ModioOculusAuthService::i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Customizations::ModioOculusAuthService::ModioOculusAuthService()   {
}
