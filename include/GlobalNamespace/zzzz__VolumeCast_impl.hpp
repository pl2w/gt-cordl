#pragma once
// IWYU pragma private; include "GlobalNamespace/VolumeCast.hpp"
#include "Drawing/zzzz__MonoBehaviourGizmos_impl.hpp"
#include "GlobalNamespace/zzzz__UnityLayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__VolumeCast_VolumeShape_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VolumeCast_def.hpp"
#include "GlobalNamespace/zzzz__VolumeCast_VolumeShape_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VolumeCast.CheckOverlaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VolumeCast::*)()>(&::GlobalNamespace::VolumeCast::CheckOverlaps)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5a227f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {"CheckOverlaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolumeCast.GetEndsAndRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::VolumeCast::GetEndsAndRadius)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a22d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {"GetEndsAndRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolumeCast._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolumeCast::*)()>(&::GlobalNamespace::VolumeCast::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a22f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VolumeCast_VolumeShape& GlobalNamespace::VolumeCast::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::GlobalNamespace::VolumeCast_VolumeShape const& GlobalNamespace::VolumeCast::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_shape(::GlobalNamespace::VolumeCast_VolumeShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VolumeCast::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VolumeCast::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VolumeCast::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VolumeCast::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr float_t& GlobalNamespace::VolumeCast::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& GlobalNamespace::VolumeCast::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& GlobalNamespace::VolumeCast::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::VolumeCast::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::GlobalNamespace::UnityLayerMask& GlobalNamespace::VolumeCast::__cordl_internal_get_physicsMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsMask;
}
constexpr ::GlobalNamespace::UnityLayerMask const& GlobalNamespace::VolumeCast::__cordl_internal_get_physicsMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsMask;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_physicsMask(::GlobalNamespace::UnityLayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicsMask = value;
}
constexpr bool& GlobalNamespace::VolumeCast::__cordl_internal_get_includeTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeTriggers;
}
constexpr bool const& GlobalNamespace::VolumeCast::__cordl_internal_get_includeTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeTriggers;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set_includeTriggers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeTriggers = value;
}
constexpr bool& GlobalNamespace::VolumeCast::__cordl_internal_get__simulateInEditMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulateInEditMode;
}
constexpr bool const& GlobalNamespace::VolumeCast::__cordl_internal_get__simulateInEditMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulateInEditMode;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__simulateInEditMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulateInEditMode = value;
}
constexpr int32_t& GlobalNamespace::VolumeCast::__cordl_internal_get__capHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capHits;
}
constexpr int32_t const& GlobalNamespace::VolumeCast::__cordl_internal_get__capHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capHits;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__capHits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::VolumeCast::__cordl_internal_get__capOverlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capOverlaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::VolumeCast::__cordl_internal_get__capOverlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capOverlaps;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__capOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capOverlaps = value;
}
constexpr int32_t& GlobalNamespace::VolumeCast::__cordl_internal_get__boxHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxHits;
}
constexpr int32_t const& GlobalNamespace::VolumeCast::__cordl_internal_get__boxHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxHits;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__boxHits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boxHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::VolumeCast::__cordl_internal_get__boxOverlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxOverlaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::VolumeCast::__cordl_internal_get__boxOverlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxOverlaps;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__boxOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boxOverlaps = value;
}
constexpr int32_t& GlobalNamespace::VolumeCast::__cordl_internal_get__hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hits;
}
constexpr int32_t const& GlobalNamespace::VolumeCast::__cordl_internal_get__hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hits;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__hits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::VolumeCast::__cordl_internal_get__overlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::VolumeCast::__cordl_internal_get__overlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlaps;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__overlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlaps = value;
}
constexpr bool& GlobalNamespace::VolumeCast::__cordl_internal_get__colliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliding;
}
constexpr bool const& GlobalNamespace::VolumeCast::__cordl_internal_get__colliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliding;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__colliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliding = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::VolumeCast::__cordl_internal_get__set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____set;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::VolumeCast::__cordl_internal_get__set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____set;
}
constexpr void GlobalNamespace::VolumeCast::__cordl_internal_set__set(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____set = value;
}
inline bool GlobalNamespace::VolumeCast::CheckOverlaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {"CheckOverlaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VolumeCast::GetEndsAndRadius(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  center, float_t  height, float_t  radius, ::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b, ::by_ref<float_t>  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {"GetEndsAndRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, center, height, radius, a, b, r);
}
inline void GlobalNamespace::VolumeCast::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolumeCast*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VolumeCast* GlobalNamespace::VolumeCast::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VolumeCast*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolumeCast::VolumeCast()   {
}
