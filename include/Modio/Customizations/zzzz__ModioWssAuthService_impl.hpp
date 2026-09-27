#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioWssAuthService.hpp"
#include "Modio/Customizations/zzzz__ExternalAuthenticationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__ModioWssAuthService_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/Authentication/zzzz__IGetActiveUserIdentifier_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
#include "Modio/Customizations/zzzz__IWssAuthPrompter_def.hpp"
#include "Modio/Customizations/zzzz__ModioWssAuthService__Authenticate_d__10_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa059d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::get_Portal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa059d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.GetActiveUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::GetActiveUserIdentifier)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa059d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioWssAuthService::*)(::Modio::Customizations::IWssAuthPrompter*)>(&::Modio::Customizations::ModioWssAuthService::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa059da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa059dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::ModioWssAuthService::*)(bool, ::StringW)>(&::Modio::Customizations::ModioWssAuthService::Authenticate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa059ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.ValidateAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::ValidateAttempt)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa059ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.ReturnErrorAndReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Customizations::ModioWssAuthService::*)(::Modio::Error*)>(&::Modio::Customizations::ModioWssAuthService::ReturnErrorAndReset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa05a068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.SetPrompter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioWssAuthService::*)(::Modio::Customizations::IWssAuthPrompter*)>(&::Modio::Customizations::ModioWssAuthService::SetPrompter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05a078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"SetPrompter", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.InProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::InProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"InProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ModioWssAuthService.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ModioWssAuthService::*)()>(&::Modio::Customizations::ModioWssAuthService::Cancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa05a088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Customizations::IWssAuthPrompter*& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__authPrompter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authPrompter;
}
constexpr ::Modio::Customizations::IWssAuthPrompter* const& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__authPrompter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authPrompter;
}
constexpr void Modio::Customizations::ModioWssAuthService::__cordl_internal_set__authPrompter(::Modio::Customizations::IWssAuthPrompter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authPrompter = value;
}
constexpr bool& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__isAttemptInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr bool const& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__isAttemptInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr void Modio::Customizations::ModioWssAuthService::__cordl_internal_set__isAttemptInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAttemptInProgress = value;
}
constexpr ::Modio::Customizations::ExternalAuthenticationToken& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__authToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authToken;
}
constexpr ::Modio::Customizations::ExternalAuthenticationToken const& Modio::Customizations::ModioWssAuthService::__cordl_internal_get__authToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authToken;
}
constexpr void Modio::Customizations::ModioWssAuthService::__cordl_internal_set__authToken(::Modio::Customizations::ExternalAuthenticationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authToken = value;
}
inline bool Modio::Customizations::ModioWssAuthService::get_IsEmailPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Customizations::ModioWssAuthService::get_Portal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Customizations::ModioWssAuthService::GetActiveUserIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Customizations::ModioWssAuthService::_ctor(::Modio::Customizations::IWssAuthPrompter*  prompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prompter);
}
inline void Modio::Customizations::ModioWssAuthService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::ModioWssAuthService::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline ::Modio::Error* Modio::Customizations::ModioWssAuthService::ValidateAttempt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Customizations::ModioWssAuthService::ReturnErrorAndReset(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, error);
}
inline void Modio::Customizations::ModioWssAuthService::SetPrompter(::Modio::Customizations::IWssAuthPrompter*  prompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"SetPrompter", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prompter);
}
inline bool Modio::Customizations::ModioWssAuthService::InProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"InProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Customizations::ModioWssAuthService::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ModioWssAuthService*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Customizations::ModioWssAuthService* Modio::Customizations::ModioWssAuthService::New_ctor(::Modio::Customizations::IWssAuthPrompter*  prompter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioWssAuthService*>(prompter));
}
inline ::Modio::Customizations::ModioWssAuthService* Modio::Customizations::ModioWssAuthService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::ModioWssAuthService*>());
}
/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr  Modio::Customizations::ModioWssAuthService::operator ::Modio::Authentication::IModioAuthService*() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* Modio::Customizations::ModioWssAuthService::i___Modio__Authentication__IModioAuthService() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr  Modio::Customizations::ModioWssAuthService::operator ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* Modio::Customizations::ModioWssAuthService::i___Modio__Authentication__IGetActiveUserIdentifier() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr  Modio::Customizations::ModioWssAuthService::operator ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* Modio::Customizations::ModioWssAuthService::i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Customizations::ModioWssAuthService::ModioWssAuthService()   {
}
