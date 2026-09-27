#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerSettings.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BetterBakerSettings_def.hpp"
#include "GlobalNamespace/zzzz__BetterBakerSettings_LightMapMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterBakerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterBakerSettings::*)()>(&::GlobalNamespace::BetterBakerSettings::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ae1e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BetterBakerSettings::__cordl_internal_get_lightMapMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMapMaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BetterBakerSettings::__cordl_internal_get_lightMapMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMapMaps;
}
constexpr void GlobalNamespace::BetterBakerSettings::__cordl_internal_set_lightMapMaps(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMapMaps = value;
}
inline void GlobalNamespace::BetterBakerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterBakerSettings* GlobalNamespace::BetterBakerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterBakerSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterBakerSettings::BetterBakerSettings()   {
}
