#pragma once
// IWYU pragma private; include "GlobalNamespace/FXModifierPlayerColorSetter.hpp"
#include "GlobalNamespace/zzzz__FXModifier_impl.hpp"
#include "GlobalNamespace/zzzz__FXModifierPlayerColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FXModifierPlayerColorSetter.UpdateScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FXModifierPlayerColorSetter::*)(float_t, ::UnityEngine::Color)>(&::GlobalNamespace::FXModifierPlayerColorSetter::UpdateScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x567468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FXModifierPlayerColorSetter*>(),
                    {::i2c::class_of<::GlobalNamespace::FXModifierPlayerColorSetter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FXModifierPlayerColorSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FXModifierPlayerColorSetter::*)()>(&::GlobalNamespace::FXModifierPlayerColorSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56746b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXModifierPlayerColorSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>& GlobalNamespace::FXModifierPlayerColorSetter::__cordl_internal_get_playerColoredCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColoredCosmetic;
}
constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic> const& GlobalNamespace::FXModifierPlayerColorSetter::__cordl_internal_get_playerColoredCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColoredCosmetic;
}
constexpr void GlobalNamespace::FXModifierPlayerColorSetter::__cordl_internal_set_playerColoredCosmetic(::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerColoredCosmetic = value;
}
inline void GlobalNamespace::FXModifierPlayerColorSetter::UpdateScale(float_t  scale, ::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FXModifierPlayerColorSetter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale, color);
}
inline void GlobalNamespace::FXModifierPlayerColorSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXModifierPlayerColorSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FXModifierPlayerColorSetter* GlobalNamespace::FXModifierPlayerColorSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FXModifierPlayerColorSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FXModifierPlayerColorSetter::FXModifierPlayerColorSetter()   {
}
