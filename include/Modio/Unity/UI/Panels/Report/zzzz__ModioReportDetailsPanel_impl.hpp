#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportDetailsPanel.hpp"
#include "Modio/Reports/zzzz__ReportType_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Report/zzzz__ModioReportDetailsPanel_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Reports/zzzz__ReportType_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIButton_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9face04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9fad108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnModUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fad078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnModUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OnDescriptionTextChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnDescriptionTextChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9facfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnDescriptionTextChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)(::Modio::Reports::ReportType)>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OpenPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fad204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Reports::ReportType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OnUserPressedBackButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnUserPressedBackButton)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fad20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnUserPressedBackButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.OnUserSubmittedReportDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnUserSubmittedReportDetails)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fad264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnUserSubmittedReportDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel.ReportCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)(::Modio::Error*)>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::ReportCompleted)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9fad3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"ReportCompleted", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fad478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Reports::ReportType& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__reportType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportType;
}
constexpr ::Modio::Reports::ReportType const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__reportType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportType;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__reportType(::Modio::Reports::ReportType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportType = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____email;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____email;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__email(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____email = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____description;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____description;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__description(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____description = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__disableWhenInvalidToSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenInvalidToSubmit;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton> const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__disableWhenInvalidToSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenInvalidToSubmit;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__disableWhenInvalidToSubmit(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableWhenInvalidToSubmit = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__modioUIMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__modioUIMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modioUIMod = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__lastMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMod;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_get__lastMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMod;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::__cordl_internal_set__lastMod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMod = value;
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnModUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnModUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnDescriptionTextChanged(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnDescriptionTextChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OpenPanel(::Modio::Reports::ReportType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Reports::ReportType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnUserPressedBackButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnUserPressedBackButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::OnUserSubmittedReportDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"OnUserSubmittedReportDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::ReportCompleted(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {"ReportCompleted", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel* Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel::ModioReportDetailsPanel()   {
}
