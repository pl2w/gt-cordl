#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioSteamAuthService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__ModioSteamAuthService_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/Authentication/zzzz__IGetActiveUserIdentifier_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
#include "Modio/Customizations/zzzz__ISteamCredentialProvider_def.hpp"
#include "Modio/Customizations/zzzz__ModioSteamAuthService__Authenticate_d__11_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::ModioSteamAuthService::*)()>(&::Modio::Customizations::ModioSteamAuthService::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa058abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Customizations::ModioSteamAuthService::*)()>(&::Modio::Customizations::ModioSteamAuthService::get_Portal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa058ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.GetActiveUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Customizations::ModioSteamAuthService::*)()>(&::Modio::Customizations::ModioSteamAuthService::GetActiveUserIdentifier)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa058acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioSteamAuthService::*)(::Modio::Customizations::ISteamCredentialProvider*)>(&::Modio::Customizations::ModioSteamAuthService::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa058b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::ISteamCredentialProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioSteamAuthService::*)()>(&::Modio::Customizations::ModioSteamAuthService::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa058bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::ModioSteamAuthService::*)(bool, ::StringW)>(&::Modio::Customizations::ModioSteamAuthService::Authenticate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa058c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.OnGetEncryptedAppTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioSteamAuthService::*)(bool, ::StringW)>(&::Modio::Customizations::ModioSteamAuthService::OnGetEncryptedAppTicket)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa058d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"OnGetEncryptedAppTicket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.SetCredentialProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioSteamAuthService::*)(::Modio::Customizations::ISteamCredentialProvider*)>(&::Modio::Customizations::ModioSteamAuthService::SetCredentialProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa058f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"SetCredentialProvider", {}, {::i2c::type_of<::Modio::Customizations::ISteamCredentialProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.ValidateAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioSteamAuthService::*)()>(&::Modio::Customizations::ModioSteamAuthService::ValidateAttempt)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa058f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioSteamAuthService.ReturnErrorAndReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioSteamAuthService::*)(::Modio::Error*)>(&::Modio::Customizations::ModioSteamAuthService::ReturnErrorAndReset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa059110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Customizations::ISteamCredentialProvider*& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__credentialProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialProvider;
}
constexpr ::Modio::Customizations::ISteamCredentialProvider* const& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__credentialProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialProvider;
}
constexpr void Modio::Customizations::ModioSteamAuthService::__cordl_internal_set__credentialProvider(::Modio::Customizations::ISteamCredentialProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentialProvider = value;
}
constexpr bool& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__isAttemptInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr bool const& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__isAttemptInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr void Modio::Customizations::ModioSteamAuthService::__cordl_internal_set__isAttemptInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAttemptInProgress = value;
}
constexpr ::StringW& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__encryptedAppTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptedAppTicket;
}
constexpr ::StringW const& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__encryptedAppTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptedAppTicket;
}
constexpr void Modio::Customizations::ModioSteamAuthService::__cordl_internal_set__encryptedAppTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptedAppTicket = value;
}
constexpr ::Modio::Error*& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__encryptedAppTicketError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptedAppTicketError;
}
constexpr ::Modio::Error* const& Modio::Customizations::ModioSteamAuthService::__cordl_internal_get__encryptedAppTicketError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptedAppTicketError;
}
constexpr void Modio::Customizations::ModioSteamAuthService::__cordl_internal_set__encryptedAppTicketError(::Modio::Error*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptedAppTicketError = value;
}
inline bool Modio::Customizations::ModioSteamAuthService::get_IsEmailPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Customizations::ModioSteamAuthService::get_Portal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Customizations::ModioSteamAuthService::GetActiveUserIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Customizations::ModioSteamAuthService::_ctor(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::ISteamCredentialProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentialProvider);
}
inline void Modio::Customizations::ModioSteamAuthService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::ModioSteamAuthService::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline void Modio::Customizations::ModioSteamAuthService::OnGetEncryptedAppTicket(bool  success, ::StringW  encryptedAppTicketOrError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"OnGetEncryptedAppTicket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, encryptedAppTicketOrError);
}
inline void Modio::Customizations::ModioSteamAuthService::SetCredentialProvider(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"SetCredentialProvider", {}, {::i2c::type_of<::Modio::Customizations::ISteamCredentialProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentialProvider);
}
inline ::Modio::Error* Modio::Customizations::ModioSteamAuthService::ValidateAttempt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Customizations::ModioSteamAuthService::ReturnErrorAndReset(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioSteamAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, error);
}
inline ::Modio::Customizations::ModioSteamAuthService* Modio::Customizations::ModioSteamAuthService::New_ctor(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioSteamAuthService*>(credentialProvider));
}
inline ::Modio::Customizations::ModioSteamAuthService* Modio::Customizations::ModioSteamAuthService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioSteamAuthService*>());
}
/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr  Modio::Customizations::ModioSteamAuthService::operator ::Modio::Authentication::IModioAuthService*() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* Modio::Customizations::ModioSteamAuthService::i___Modio__Authentication__IModioAuthService() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr  Modio::Customizations::ModioSteamAuthService::operator ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* Modio::Customizations::ModioSteamAuthService::i___Modio__Authentication__IGetActiveUserIdentifier() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr  Modio::Customizations::ModioSteamAuthService::operator ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* Modio::Customizations::ModioSteamAuthService::i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Customizations::ModioSteamAuthService::ModioSteamAuthService()   {
}
