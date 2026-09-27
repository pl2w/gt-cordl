#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/SplinePlanetZone.hpp"
#include "GorillaTag/Gravity/zzzz__PlanetZone_impl.hpp"
#include "GorillaTag/Gravity/zzzz__SplinePlanetZone_def.hpp"
#include "GlobalNamespace/zzzz__CatmullRomSpline_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::SplinePlanetZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::SplinePlanetZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::SplinePlanetZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d3b878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::SplinePlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::SplinePlanetZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::SplinePlanetZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::SplinePlanetZone::*)()>(&::GorillaTag::Gravity::SplinePlanetZone::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3b8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::SplinePlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline>& GorillaTag::Gravity::SplinePlanetZone::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline> const& GorillaTag::Gravity::SplinePlanetZone::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GorillaTag::Gravity::SplinePlanetZone::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::CatmullRomSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::SplinePlanetZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::SplinePlanetZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline void GorillaTag::Gravity::SplinePlanetZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::SplinePlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::SplinePlanetZone* GorillaTag::Gravity::SplinePlanetZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::SplinePlanetZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::SplinePlanetZone::SplinePlanetZone()   {
}
