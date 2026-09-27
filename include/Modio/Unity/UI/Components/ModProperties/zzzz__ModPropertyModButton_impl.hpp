#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyModButton.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyButtonBase_1_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyModButton_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::GetProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc71f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9fc71fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Modio::Mods::Mod* Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::GetProperty(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton* Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton::ModPropertyModButton()   {
}
