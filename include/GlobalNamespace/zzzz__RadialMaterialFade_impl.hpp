#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialMaterialFade.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadialMaterialFade_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RadialMaterialFade.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialMaterialFade::*)()>(&::GlobalNamespace::RadialMaterialFade::Update)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x597e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialMaterialFade*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadialMaterialFade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadialMaterialFade::*)()>(&::GlobalNamespace::RadialMaterialFade::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x597e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialMaterialFade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr float_t const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistance = value;
}
constexpr float_t& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr float_t& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_alphaAtMinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaAtMinDistance;
}
constexpr float_t const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_alphaAtMinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaAtMinDistance;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_alphaAtMinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaAtMinDistance = value;
}
constexpr float_t& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_alphaAtMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaAtMaxDistance;
}
constexpr float_t const& GlobalNamespace::RadialMaterialFade::__cordl_internal_get_alphaAtMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaAtMaxDistance;
}
constexpr void GlobalNamespace::RadialMaterialFade::__cordl_internal_set_alphaAtMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaAtMaxDistance = value;
}
inline void GlobalNamespace::RadialMaterialFade::setStaticF_colorID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorID", ::GlobalNamespace::RadialMaterialFade*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RadialMaterialFade::getStaticF_colorID()  {
return ::cordl_internals::getStaticField<int32_t, "colorID", ::GlobalNamespace::RadialMaterialFade*>();
}
inline void GlobalNamespace::RadialMaterialFade::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialMaterialFade*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadialMaterialFade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadialMaterialFade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadialMaterialFade* GlobalNamespace::RadialMaterialFade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadialMaterialFade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadialMaterialFade::RadialMaterialFade()   {
}
