#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationWaitingPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationWaitingPanel_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel::ModioAuthenticationWaitingPanel()   {
}
