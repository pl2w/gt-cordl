#pragma once
// IWYU pragma private; include "Modio/Authentication/IModioAuthService.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Authentication::IModioAuthService.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Authentication::IModioAuthService::*)(bool, ::StringW)>(&::Modio::Authentication::IModioAuthService::Authenticate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Authentication::IModioAuthService*>(),
                    {::i2c::class_of<::Modio::Authentication::IModioAuthService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::IModioAuthService.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Authentication::IModioAuthService::*)()>(&::Modio::Authentication::IModioAuthService::get_Portal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Authentication::IModioAuthService*>(),
                    {::i2c::class_of<::Modio::Authentication::IModioAuthService*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Authentication::IModioAuthService::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Authentication::IModioAuthService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Authentication::IModioAuthService::get_Portal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Authentication::IModioAuthService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
