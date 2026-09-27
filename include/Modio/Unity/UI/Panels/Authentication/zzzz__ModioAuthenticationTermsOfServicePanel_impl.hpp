#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationTermsOfServicePanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationTermsOfServicePanel_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel.OnPressAgreeTOS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::OnPressAgreeTOS)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*>(),
                        {"OnPressAgreeTOS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::OnPressAgreeTOS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*>(),
                        {"OnPressAgreeTOS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel::ModioAuthenticationTermsOfServicePanel()   {
}
