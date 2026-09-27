#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroupSelector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroupSelector_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryLightmapGroupSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryLightmapGroupSelector::*)()>(&::GlobalNamespace::BakeryLightmapGroupSelector::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f27880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroupSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_lmgroupAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmgroupAsset;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_lmgroupAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmgroupAsset;
}
constexpr void GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_set_lmgroupAsset(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lmgroupAsset = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_instanceResolutionOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceResolutionOverride;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_instanceResolutionOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceResolutionOverride;
}
constexpr void GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_set_instanceResolutionOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceResolutionOverride = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_instanceResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceResolution;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_get_instanceResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceResolution;
}
constexpr void GlobalNamespace::BakeryLightmapGroupSelector::__cordl_internal_set_instanceResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceResolution = value;
}
inline void GlobalNamespace::BakeryLightmapGroupSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroupSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryLightmapGroupSelector* GlobalNamespace::BakeryLightmapGroupSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryLightmapGroupSelector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightmapGroupSelector::BakeryLightmapGroupSelector()   {
}
