#pragma once
// IWYU pragma private; include "Modio/Authentication/ModioEmailAuthService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/Authentication/zzzz__IEmailCodePrompter_def.hpp"
#include "Modio/Authentication/zzzz__IGetActiveUserIdentifier_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService__AuthenticateWithoutEmailRequest_d__10_def.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService__Authenticate_d__9_def.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService__ExchangeCode_d__11_def.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa062248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::get_Portal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa062250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService::*)(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*)>(&::Modio::Authentication::ModioEmailAuthService::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa062258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService::*)(::Modio::Authentication::IEmailCodePrompter*)>(&::Modio::Authentication::ModioEmailAuthService::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa062310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Authentication::IEmailCodePrompter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa062340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Authentication::ModioEmailAuthService::*)(bool, ::StringW)>(&::Modio::Authentication::ModioEmailAuthService::Authenticate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa062348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.AuthenticateWithoutEmailRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::AuthenticateWithoutEmailRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa062468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"AuthenticateWithoutEmailRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.ExchangeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Authentication::ModioEmailAuthService::*)(::StringW)>(&::Modio::Authentication::ModioEmailAuthService::ExchangeCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa062574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ExchangeCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.ValidateAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::ValidateAttempt)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa062694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.ReturnErrorAndReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Authentication::ModioEmailAuthService::*)(::Modio::Error*)>(&::Modio::Authentication::ModioEmailAuthService::ReturnErrorAndReset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa0627f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.SetCodePrompter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService::*)(::Modio::Authentication::IEmailCodePrompter*)>(&::Modio::Authentication::ModioEmailAuthService::SetCodePrompter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa062804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"SetCodePrompter", {}, {::i2c::type_of<::Modio::Authentication::IEmailCodePrompter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.SetCodePrompter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService::*)(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*)>(&::Modio::Authentication::ModioEmailAuthService::SetCodePrompter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa06280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"SetCodePrompter", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService.GetActiveUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Authentication::ModioEmailAuthService::*)()>(&::Modio::Authentication::ModioEmailAuthService::GetActiveUserIdentifier)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa062888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Authentication::IEmailCodePrompter*& Modio::Authentication::ModioEmailAuthService::__cordl_internal_get__codePrompter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codePrompter;
}
constexpr ::Modio::Authentication::IEmailCodePrompter* const& Modio::Authentication::ModioEmailAuthService::__cordl_internal_get__codePrompter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codePrompter;
}
constexpr void Modio::Authentication::ModioEmailAuthService::__cordl_internal_set__codePrompter(::Modio::Authentication::IEmailCodePrompter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codePrompter = value;
}
constexpr bool& Modio::Authentication::ModioEmailAuthService::__cordl_internal_get__isAttemptInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr bool const& Modio::Authentication::ModioEmailAuthService::__cordl_internal_get__isAttemptInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAttemptInProgress;
}
constexpr void Modio::Authentication::ModioEmailAuthService::__cordl_internal_set__isAttemptInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAttemptInProgress = value;
}
inline bool Modio::Authentication::ModioEmailAuthService::get_IsEmailPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Authentication::ModioEmailAuthService::get_Portal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"get_Portal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
inline void Modio::Authentication::ModioEmailAuthService::_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePrompter);
}
inline void Modio::Authentication::ModioEmailAuthService::_ctor(::Modio::Authentication::IEmailCodePrompter*  codePrompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Authentication::IEmailCodePrompter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePrompter);
}
inline void Modio::Authentication::ModioEmailAuthService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Authentication::ModioEmailAuthService::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Authentication::ModioEmailAuthService::AuthenticateWithoutEmailRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"AuthenticateWithoutEmailRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Authentication::ModioEmailAuthService::ExchangeCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ExchangeCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, code);
}
inline ::Modio::Error* Modio::Authentication::ModioEmailAuthService::ValidateAttempt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ValidateAttempt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Authentication::ModioEmailAuthService::ReturnErrorAndReset(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"ReturnErrorAndReset", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, error);
}
inline void Modio::Authentication::ModioEmailAuthService::SetCodePrompter(::Modio::Authentication::IEmailCodePrompter*  codePrompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"SetCodePrompter", {}, {::i2c::type_of<::Modio::Authentication::IEmailCodePrompter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePrompter);
}
inline void Modio::Authentication::ModioEmailAuthService::SetCodePrompter(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"SetCodePrompter", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePrompter);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Authentication::ModioEmailAuthService::GetActiveUserIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Modio::Authentication::ModioEmailAuthService* Modio::Authentication::ModioEmailAuthService::New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioEmailAuthService*>(codePrompter));
}
inline ::Modio::Authentication::ModioEmailAuthService* Modio::Authentication::ModioEmailAuthService::New_ctor(::Modio::Authentication::IEmailCodePrompter*  codePrompter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioEmailAuthService*>(codePrompter));
}
inline ::Modio::Authentication::ModioEmailAuthService* Modio::Authentication::ModioEmailAuthService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioEmailAuthService*>());
}
/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr  Modio::Authentication::ModioEmailAuthService::operator ::Modio::Authentication::IModioAuthService*() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* Modio::Authentication::ModioEmailAuthService::i___Modio__Authentication__IModioAuthService() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr  Modio::Authentication::ModioEmailAuthService::operator ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* Modio::Authentication::ModioEmailAuthService::i___Modio__Authentication__IGetActiveUserIdentifier() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr  Modio::Authentication::ModioEmailAuthService::operator ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* Modio::Authentication::ModioEmailAuthService::i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Authentication::ModioEmailAuthService::ModioEmailAuthService()   {
}
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::*)(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*)>(&::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0622e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter.ShowCodePrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::*)()>(&::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::ShowCodePrompt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa062904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*>(),
                        {"ShowCodePrompt", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*& Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::__cordl_internal_get__codePrompt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codePrompt;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>* const& Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::__cordl_internal_get__codePrompt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codePrompt;
}
constexpr void Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::__cordl_internal_set__codePrompt(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codePrompt = value;
}
inline void Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePrompt);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::ShowCodePrompt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*>(),
                        {"ShowCodePrompt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter* Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*>(codePrompt));
}
/// @brief Convert operator to "::Modio::Authentication::IEmailCodePrompter"
constexpr  Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::operator ::Modio::Authentication::IEmailCodePrompter*() noexcept {
return static_cast<::Modio::Authentication::IEmailCodePrompter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IEmailCodePrompter"
constexpr ::Modio::Authentication::IEmailCodePrompter* Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::i___Modio__Authentication__IEmailCodePrompter() noexcept {
return static_cast<::Modio::Authentication::IEmailCodePrompter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter::ModioEmailAuthService_EmailCodePrompter()   {
}
