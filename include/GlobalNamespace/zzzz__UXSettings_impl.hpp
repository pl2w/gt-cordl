#pragma once
// IWYU pragma private; include "GlobalNamespace/UXSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UXSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UXSettings::*)()>(&::GlobalNamespace::UXSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac2810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UXSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::UXSettings::__cordl_internal_get_StickSensitvity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StickSensitvity;
}
constexpr float_t const& GlobalNamespace::UXSettings::__cordl_internal_get_StickSensitvity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StickSensitvity;
}
constexpr void GlobalNamespace::UXSettings::__cordl_internal_set_StickSensitvity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StickSensitvity = value;
}
inline void GlobalNamespace::UXSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UXSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UXSettings* GlobalNamespace::UXSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UXSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UXSettings::UXSettings()   {
}
