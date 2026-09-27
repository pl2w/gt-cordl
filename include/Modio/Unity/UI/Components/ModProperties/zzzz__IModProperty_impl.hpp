#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/IModProperty.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::IModProperty.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::IModProperty::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::IModProperty::OnModUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::ModProperties::IModProperty::OnModUpdate(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
