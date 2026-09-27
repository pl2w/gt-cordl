#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationLogOutPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationLogOutPanel_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel.OnPressLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::OnPressLogout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9faee3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*>(),
                        {"OnPressLogout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faee58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::OnPressLogout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*>(),
                        {"OnPressLogout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel::ModioAuthenticationLogOutPanel()   {
}
