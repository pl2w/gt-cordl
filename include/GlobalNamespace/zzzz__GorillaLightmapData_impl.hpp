#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaLightmapData.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaLightmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaLightmapData.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaLightmapData::*)()>(&::GlobalNamespace::GorillaLightmapData::Awake)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5919bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLightmapData*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaLightmapData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaLightmapData::*)()>(&::GlobalNamespace::GorillaLightmapData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5919e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLightmapData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_dirTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_dirTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirTextures;
}
constexpr void GlobalNamespace::GorillaLightmapData::__cordl_internal_set_dirTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirTextures = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_lightTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_lightTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightTextures;
}
constexpr void GlobalNamespace::GorillaLightmapData::__cordl_internal_set_lightTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightTextures = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GlobalNamespace::GorillaLightmapData::__cordl_internal_set_lights(::ArrayW<::ArrayW<::UnityEngine::Color>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_dirs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirs;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_dirs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirs;
}
constexpr void GlobalNamespace::GorillaLightmapData::__cordl_internal_set_dirs(::ArrayW<::ArrayW<::UnityEngine::Color>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirs = value;
}
constexpr bool& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_done()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___done;
}
constexpr bool const& GlobalNamespace::GorillaLightmapData::__cordl_internal_get_done() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___done;
}
constexpr void GlobalNamespace::GorillaLightmapData::__cordl_internal_set_done(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___done = value;
}
inline void GlobalNamespace::GorillaLightmapData::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLightmapData*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaLightmapData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLightmapData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaLightmapData* GlobalNamespace::GorillaLightmapData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaLightmapData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaLightmapData::GorillaLightmapData()   {
}
