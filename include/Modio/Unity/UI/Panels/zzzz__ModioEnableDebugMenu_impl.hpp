#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioEnableDebugMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioEnableDebugMenu_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioEnableDebugMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioEnableDebugMenu::*)()>(&::Modio::Unity::UI::Panels::ModioEnableDebugMenu::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa7cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioEnableDebugMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::ModioEnableDebugMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioEnableDebugMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioEnableDebugMenu* Modio::Unity::UI::Panels::ModioEnableDebugMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioEnableDebugMenu*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Unity::UI::Panels::ModioEnableDebugMenu::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Unity::UI::Panels::ModioEnableDebugMenu::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioEnableDebugMenu::ModioEnableDebugMenu()   {
}
