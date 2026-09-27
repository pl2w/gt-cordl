#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportErrorPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Report/zzzz__ModioReportErrorPanel_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fad480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::Report::ModioReportErrorPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel* Modio::Unity::UI::Panels::Report::ModioReportErrorPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel::ModioReportErrorPanel()   {
}
