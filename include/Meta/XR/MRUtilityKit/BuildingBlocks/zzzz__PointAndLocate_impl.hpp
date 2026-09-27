#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/PointAndLocate.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_impl.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__PointAndLocate_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate.get_RaycastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::get_RaycastOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f58ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate.Locate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::Locate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f58f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                        {"Locate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate.GetRaycastRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::GetRaycastRay)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9f58f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f59080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::__cordl_internal_get__raycastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::__cordl_internal_get__raycastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastOrigin;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::__cordl_internal_set__raycastOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastOrigin = value;
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::get_RaycastOrigin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::Locate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                        {"Locate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Ray Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::GetRaycastRay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate* Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::BuildingBlocks::PointAndLocate::PointAndLocate()   {
}
