#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Report/zzzz__ModioReportPanel_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportPanel::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fad488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportPanel.OpenReportFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportPanel::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Panels::Report::ModioReportPanel::OpenReportFlow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fa5e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {"OpenReportFlow", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportPanel.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportPanel::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fad4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Report::ModioReportPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Report::ModioReportPanel::*)()>(&::Modio::Unity::UI::Panels::Report::ModioReportPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fad4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Panels::Report::ModioReportPanel::__cordl_internal_get__modioUIMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Panels::Report::ModioReportPanel::__cordl_internal_get__modioUIMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr void Modio::Unity::UI::Panels::Report::ModioReportPanel::__cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modioUIMod = value;
}
inline void Modio::Unity::UI::Panels::Report::ModioReportPanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportPanel::OpenReportFlow(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {"OpenReportFlow", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportPanel::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Report::ModioReportPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Report::ModioReportPanel* Modio::Unity::UI::Panels::Report::ModioReportPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Report::ModioReportPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Report::ModioReportPanel::ModioReportPanel()   {
}
