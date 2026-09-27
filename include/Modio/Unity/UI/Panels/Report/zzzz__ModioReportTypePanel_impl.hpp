#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportTypePanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Report/zzzz__ModioReportTypePanel_def.hpp"
#include "Modio/Reports/zzzz__ReportType_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel.OnUserSubmittedReportType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::*)(int32_t)>(&::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::OnUserSubmittedReportType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fad500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {"OnUserSubmittedReportType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel.OnUserSubmittedReportTypeEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::*)(::Modio::Reports::ReportType)>(&::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::OnUserSubmittedReportTypeEnum)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fad504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {"OnUserSubmittedReportTypeEnum", {}, {::i2c::type_of<::Modio::Reports::ReportType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fad56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::Report::ModioReportTypePanel::OnUserSubmittedReportType(int32_t  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {"OnUserSubmittedReportType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportTypePanel::OnUserSubmittedReportTypeEnum(::Modio::Reports::ReportType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {"OnUserSubmittedReportTypeEnum", {}, {::i2c::type_of<::Modio::Reports::ReportType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportTypePanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel* Modio::Unity::UI::Panels::Report::ModioReportTypePanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel::ModioReportTypePanel()   {
}
