#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolume.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolume_Mode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolume_Version_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolume_Mode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolume_Version_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolume::*)()>(&::UnityEngine::Rendering::ProbeVolume::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb161b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ProbeVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolume::*)()>(&::UnityEngine::Rendering::ProbeVolume::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb161bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ProbeVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProbeVolume_Mode& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::ProbeVolume_Mode const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_mode(::GlobalNamespace::ProbeVolume_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_overrideRendererFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRendererFilters;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_overrideRendererFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRendererFilters;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_overrideRendererFilters(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideRendererFilters = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_minRendererVolumeSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRendererVolumeSize;
}
constexpr float_t const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_minRendererVolumeSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRendererVolumeSize;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_minRendererVolumeSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRendererVolumeSize = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_objectLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_objectLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectLayerMask;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_objectLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectLayerMask = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_lowestSubdivLevelOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestSubdivLevelOverride;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_lowestSubdivLevelOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestSubdivLevelOverride;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_lowestSubdivLevelOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestSubdivLevelOverride = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_highestSubdivLevelOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestSubdivLevelOverride;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_highestSubdivLevelOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestSubdivLevelOverride;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_highestSubdivLevelOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highestSubdivLevelOverride = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_overridesSubdivLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridesSubdivLevels;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_overridesSubdivLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridesSubdivLevels;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_overridesSubdivLevels(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overridesSubdivLevels = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_mightNeedRebaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mightNeedRebaking;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_mightNeedRebaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mightNeedRebaking;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_mightNeedRebaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mightNeedRebaking = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_cachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTransform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_cachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTransform;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_cachedTransform(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedTransform = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_cachedHashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedHashCode;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_cachedHashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedHashCode;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_cachedHashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedHashCode = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_fillEmptySpaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillEmptySpaces;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_fillEmptySpaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillEmptySpaces;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_fillEmptySpaces(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillEmptySpaces = value;
}
constexpr ::GlobalNamespace::ProbeVolume_Version& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::GlobalNamespace::ProbeVolume_Version const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_version(::GlobalNamespace::ProbeVolume_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr bool& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_globalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalVolume;
}
constexpr bool const& UnityEngine::Rendering::ProbeVolume::__cordl_internal_get_globalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalVolume;
}
constexpr void UnityEngine::Rendering::ProbeVolume::__cordl_internal_set_globalVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalVolume = value;
}
inline void UnityEngine::Rendering::ProbeVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ProbeVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ProbeVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolume* UnityEngine::Rendering::ProbeVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolume::ProbeVolume()   {
}
