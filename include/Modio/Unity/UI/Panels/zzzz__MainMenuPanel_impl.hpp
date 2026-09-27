#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/MainMenuPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__MainMenuPanel_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::MainMenuPanel.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::MainMenuPanel::*)()>(&::Modio::Unity::UI::Panels::MainMenuPanel::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::MainMenuPanel.CancelPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::MainMenuPanel::*)()>(&::Modio::Unity::UI::Panels::MainMenuPanel::CancelPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fa321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::MainMenuPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::MainMenuPanel::*)()>(&::Modio::Unity::UI::Panels::MainMenuPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa3220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::MainMenuPanel::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::MainMenuPanel::CancelPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::MainMenuPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::MainMenuPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::MainMenuPanel* Modio::Unity::UI::Panels::MainMenuPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::MainMenuPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::MainMenuPanel::MainMenuPanel()   {
}
