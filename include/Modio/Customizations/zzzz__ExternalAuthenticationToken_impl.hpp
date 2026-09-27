#pragma once
// IWYU pragma private; include "Modio/Customizations/ExternalAuthenticationToken.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Modio/Customizations/zzzz__ExternalAuthenticationToken_def.hpp"
#include "Modio/Customizations/zzzz__WssLoginSuccess_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ExternalAuthenticationToken.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ExternalAuthenticationToken::*)()>(&::Modio::Customizations::ExternalAuthenticationToken::Cancel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa059cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ExternalAuthenticationToken.get_cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Modio::Customizations::ExternalAuthenticationToken::*)()>(&::Modio::Customizations::ExternalAuthenticationToken::get_cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa059d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"get_cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ExternalAuthenticationToken.set_cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::ExternalAuthenticationToken::*)(::System::Action*)>(&::Modio::Customizations::ExternalAuthenticationToken::set_cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa059d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"set_cancel", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Customizations::ExternalAuthenticationToken::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Action* Modio::Customizations::ExternalAuthenticationToken::get_cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"get_cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(*this, ___internal_method);
}
inline void Modio::Customizations::ExternalAuthenticationToken::set_cancel(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::ExternalAuthenticationToken>(),
                        {"set_cancel", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "autoUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "expiryTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cancel_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::ExternalAuthenticationToken::ExternalAuthenticationToken(::StringW  url, ::StringW  autoUrl, ::StringW  code, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*  task, ::System::DateTime  expiryTime, ::System::Action*  _cancel_k__BackingField) noexcept  {
this->url = url;
this->autoUrl = autoUrl;
this->code = code;
this->task = task;
this->expiryTime = expiryTime;
this->_cancel_k__BackingField = _cancel_k__BackingField;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::ExternalAuthenticationToken::ExternalAuthenticationToken()   {
}
