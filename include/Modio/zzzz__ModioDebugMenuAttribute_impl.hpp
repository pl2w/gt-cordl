#pragma once
// IWYU pragma private; include "Modio/ModioDebugMenuAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Modio/zzzz__ModioDebugMenuAttribute_def.hpp"
//  Writing Method size for method: ::Modio::ModioDebugMenuAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioDebugMenuAttribute::*)()>(&::Modio::ModioDebugMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa01a994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioDebugMenuAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::ModioDebugMenuAttribute::__cordl_internal_get_ShowInSettingsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInSettingsMenu;
}
constexpr bool const& Modio::ModioDebugMenuAttribute::__cordl_internal_get_ShowInSettingsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInSettingsMenu;
}
constexpr void Modio::ModioDebugMenuAttribute::__cordl_internal_set_ShowInSettingsMenu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowInSettingsMenu = value;
}
constexpr bool& Modio::ModioDebugMenuAttribute::__cordl_internal_get_ShowInBrowserMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInBrowserMenu;
}
constexpr bool const& Modio::ModioDebugMenuAttribute::__cordl_internal_get_ShowInBrowserMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInBrowserMenu;
}
constexpr void Modio::ModioDebugMenuAttribute::__cordl_internal_set_ShowInBrowserMenu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowInBrowserMenu = value;
}
inline void Modio::ModioDebugMenuAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioDebugMenuAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModioDebugMenuAttribute* Modio::ModioDebugMenuAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioDebugMenuAttribute*>());
}
// Ctor Parameters []
constexpr ::Modio::ModioDebugMenuAttribute::ModioDebugMenuAttribute()   {
}
