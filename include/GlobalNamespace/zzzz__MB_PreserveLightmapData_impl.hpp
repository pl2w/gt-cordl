#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_PreserveLightmapData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MB_PreserveLightmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_PreserveLightmapData.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_PreserveLightmapData::*)()>(&::GlobalNamespace::MB_PreserveLightmapData::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9d7e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PreserveLightmapData*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_PreserveLightmapData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_PreserveLightmapData::*)()>(&::GlobalNamespace::MB_PreserveLightmapData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PreserveLightmapData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_get_lightmapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr int32_t const& GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_get_lightmapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr void GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_set_lightmapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapIndex = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_get_lightmapScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapScaleOffset;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_get_lightmapScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapScaleOffset;
}
constexpr void GlobalNamespace::MB_PreserveLightmapData::__cordl_internal_set_lightmapScaleOffset(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapScaleOffset = value;
}
inline void GlobalNamespace::MB_PreserveLightmapData::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PreserveLightmapData*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_PreserveLightmapData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_PreserveLightmapData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_PreserveLightmapData* GlobalNamespace::MB_PreserveLightmapData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_PreserveLightmapData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_PreserveLightmapData::MB_PreserveLightmapData()   {
}
