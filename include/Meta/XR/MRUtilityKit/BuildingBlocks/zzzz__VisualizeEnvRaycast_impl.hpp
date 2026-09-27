#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/VisualizeEnvRaycast.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__VisualizeEnvRaycast_def.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastManager_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f599f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f59a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast.VisualizeRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::VisualizeRay)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9f59a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"VisualizeRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f59ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastLine;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastLine;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_set__raycastLine(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastLine = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastHitPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHitPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastHitPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHitPoint;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_set__raycastHitPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHitPoint = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__spaceLocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceLocator;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator> const& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__spaceLocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceLocator;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_set__spaceLocator(::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spaceLocator = value;
}
constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager>& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastManager;
}
constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager> const& Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_get__raycastManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastManager;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::__cordl_internal_set__raycastManager(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastManager = value;
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::VisualizeRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {"VisualizeRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast* Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::BuildingBlocks::VisualizeEnvRaycast::VisualizeEnvRaycast()   {
}
