#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCreatorButton.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyButtonBase_1_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyCreatorButton_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserProfile* (::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::GetProperty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fc5f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9fc5f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Modio::Users::UserProfile* Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::GetProperty(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserProfile*>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton* Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton::ModPropertyCreatorButton()   {
}
