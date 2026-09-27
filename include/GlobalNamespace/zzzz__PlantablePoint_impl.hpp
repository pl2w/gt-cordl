#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantablePoint.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlantablePoint_def.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlantablePoint.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantablePoint::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlantablePoint::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x568e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantablePoint.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantablePoint::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlantablePoint::OnTriggerExit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x568e3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantablePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantablePoint::*)()>(&::GlobalNamespace::PlantablePoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlantablePoint::__cordl_internal_get_shouldBeSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldBeSet;
}
constexpr bool const& GlobalNamespace::PlantablePoint::__cordl_internal_get_shouldBeSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldBeSet;
}
constexpr void GlobalNamespace::PlantablePoint::__cordl_internal_set_shouldBeSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldBeSet = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlantablePoint::__cordl_internal_get_floorMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlantablePoint::__cordl_internal_get_floorMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorMask;
}
constexpr void GlobalNamespace::PlantablePoint::__cordl_internal_set_floorMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorMask = value;
}
constexpr ::UnityW<::GlobalNamespace::PlantableObject>& GlobalNamespace::PlantablePoint::__cordl_internal_get_plantableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plantableObject;
}
constexpr ::UnityW<::GlobalNamespace::PlantableObject> const& GlobalNamespace::PlantablePoint::__cordl_internal_get_plantableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plantableObject;
}
constexpr void GlobalNamespace::PlantablePoint::__cordl_internal_set_plantableObject(::UnityW<::GlobalNamespace::PlantableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plantableObject = value;
}
inline void GlobalNamespace::PlantablePoint::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::PlantablePoint::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::PlantablePoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantablePoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlantablePoint* GlobalNamespace::PlantablePoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlantablePoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlantablePoint::PlantablePoint()   {
}
