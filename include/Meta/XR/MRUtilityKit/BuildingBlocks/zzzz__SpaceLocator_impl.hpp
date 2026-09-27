#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/SpaceLocator.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_SurfaceOrientation_impl.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_def.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_SurfaceOrientation_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastManager_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.get_RaycastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_RaycastOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f59084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.set_RaycastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(::UnityEngine::Transform*)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_RaycastOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.get_MaxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_MaxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f59094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.set_MaxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(float_t)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_MaxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.get_OnSpaceLocateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>* (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_OnSpaceLocateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f590a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"get_OnSpaceLocateCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.set_OnSpaceLocateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_OnSpaceLocateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f590ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"set_OnSpaceLocateCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.get_RaycastHitResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::EnvironmentRaycastHit (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_RaycastHitResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f590b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"get_RaycastHitResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f590c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.GetRaycastRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::GetRaycastRay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.TryLocateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(::by_ref<::UnityEngine::Pose>)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::TryLocateSpace)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9f5913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.TryCalculateSurfacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(::Meta::XR::EnvironmentRaycastHit, ::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::TryCalculateSurfacePose)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x9f59350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"TryCalculateSurfacePose", {}, {::i2c::type_of<::Meta::XR::EnvironmentRaycastHit>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.CalculateUpwardFromPlacementSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)(::Meta::XR::EnvironmentRaycastHit, ::UnityEngine::Transform*, ::UnityEngine::Ray)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::CalculateUpwardFromPlacementSide)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9f596bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"CalculateUpwardFromPlacementSide", {}, {::i2c::type_of<::Meta::XR::EnvironmentRaycastHit>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.IsVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsVertical)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f59864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsVertical", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.IsHorizontalDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsHorizontalDown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f598ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsHorizontalDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.IsHorizontalUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsHorizontalUp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f59970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsHorizontalUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator.GetSurfaceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SpaceLocator_SurfaceOrientation (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::GetSurfaceOrientation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f592e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"GetSurfaceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9f58914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_PreferredSurfaceOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredSurfaceOrientation;
}
constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_PreferredSurfaceOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredSurfaceOrientation;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set_PreferredSurfaceOrientation(::GlobalNamespace::SpaceLocator_SurfaceOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreferredSurfaceOrientation = value;
}
constexpr bool& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_UseCustomSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCustomSize;
}
constexpr bool const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_UseCustomSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCustomSize;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set_UseCustomSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseCustomSize = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_CustomSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSize;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get_CustomSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSize;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set_CustomSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomSize = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__onSpaceLocateCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpaceLocateCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>* const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__onSpaceLocateCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSpaceLocateCompleted;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__onSpaceLocateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSpaceLocateCompleted = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__RaycastOrigin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastOrigin_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__RaycastOrigin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastOrigin_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__RaycastOrigin_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RaycastOrigin_k__BackingField = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__MaxRaycastDistance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRaycastDistance_k__BackingField;
}
constexpr float_t const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__MaxRaycastDistance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRaycastDistance_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__MaxRaycastDistance_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxRaycastDistance_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager>& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__raycastManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastManager;
}
constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager> const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__raycastManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastManager;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__raycastManager(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastManager = value;
}
constexpr ::Meta::XR::EnvironmentRaycastHit& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__raycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit;
}
constexpr ::Meta::XR::EnvironmentRaycastHit const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__raycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__raycastHit(::Meta::XR::EnvironmentRaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHit = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__sizeToLocate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeToLocate;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_get__sizeToLocate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeToLocate;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::__cordl_internal_set__sizeToLocate(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sizeToLocate = value;
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_RaycastOrigin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_RaycastOrigin(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_MaxRaycastDistance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_MaxRaycastDistance(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>* Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_OnSpaceLocateCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"get_OnSpaceLocateCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::set_OnSpaceLocateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"set_OnSpaceLocateCompleted", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::EnvironmentRaycastHit Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::get_RaycastHitResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"get_RaycastHitResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentRaycastHit>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Ray Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::GetRaycastRay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::TryLocateSpace(::by_ref<::UnityEngine::Pose>  surfacePose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, surfacePose);
}
inline bool Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::TryCalculateSurfacePose(::Meta::XR::EnvironmentRaycastHit  hit, ::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Pose>  surfacePose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"TryCalculateSurfacePose", {}, {::i2c::type_of<::Meta::XR::EnvironmentRaycastHit>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit, ray, surfacePose);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::CalculateUpwardFromPlacementSide(::Meta::XR::EnvironmentRaycastHit  hit, ::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"CalculateUpwardFromPlacementSide", {}, {::i2c::type_of<::Meta::XR::EnvironmentRaycastHit>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hit, rayOrigin, ray);
}
inline bool Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsVertical(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsVertical", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, normal);
}
inline bool Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsHorizontalDown(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsHorizontalDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, normal);
}
inline bool Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::IsHorizontalUp(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"IsHorizontalUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, normal);
}
inline ::GlobalNamespace::SpaceLocator_SurfaceOrientation Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::GetSurfaceOrientation(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {"GetSurfaceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SpaceLocator_SurfaceOrientation>(nullptr, ___internal_method, normal);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator* Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator::SpaceLocator()   {
}
