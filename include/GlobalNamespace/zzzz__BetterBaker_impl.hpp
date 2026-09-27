#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBaker.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BetterBaker_def.hpp"
#include "GlobalNamespace/zzzz__BetterBaker_LightMapMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterBaker::*)()>(&::GlobalNamespace::BetterBaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae1d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BetterBaker::__cordl_internal_get_bakeryLightmapDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeryLightmapDirectory;
}
constexpr ::StringW const& GlobalNamespace::BetterBaker::__cordl_internal_get_bakeryLightmapDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeryLightmapDirectory;
}
constexpr void GlobalNamespace::BetterBaker::__cordl_internal_set_bakeryLightmapDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeryLightmapDirectory = value;
}
constexpr ::StringW& GlobalNamespace::BetterBaker::__cordl_internal_get_dayNightLightmapsDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightLightmapsDirectory;
}
constexpr ::StringW const& GlobalNamespace::BetterBaker::__cordl_internal_get_dayNightLightmapsDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightLightmapsDirectory;
}
constexpr void GlobalNamespace::BetterBaker::__cordl_internal_set_dayNightLightmapsDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightLightmapsDirectory = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BetterBaker::__cordl_internal_get_allLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allLights;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BetterBaker::__cordl_internal_get_allLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allLights;
}
constexpr void GlobalNamespace::BetterBaker::__cordl_internal_set_allLights(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allLights = value;
}
inline void GlobalNamespace::BetterBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterBaker* GlobalNamespace::BetterBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterBaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterBaker::BetterBaker()   {
}
