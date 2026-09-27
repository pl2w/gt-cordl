#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/PlaceWithAnchor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__PlaceWithAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9f589fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.RequestMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::RequestMove)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f58b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"RequestMove", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f58b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.OnLocateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)(::UnityEngine::Pose, bool)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::OnLocateSpace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f58c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"OnLocateSpace", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.SetTargetWithAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::SetTargetWithAnchor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f58bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"SetTargetWithAnchor", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.EraseAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::EraseAnchor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f58d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"EraseAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor.SetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::SetAnchor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f58dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"SetAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f58ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__spatialAnchorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__spatialAnchorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchorTransform;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_set__spatialAnchorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialAnchorTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__spatialAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__spatialAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchor;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_set__spatialAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialAnchor = value;
}
constexpr bool& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__requestMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestMove;
}
constexpr bool const& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__requestMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestMove;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_set__requestMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestMove = value;
}
constexpr ::UnityEngine::Pose& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__surfacePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePose;
}
constexpr ::UnityEngine::Pose const& Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_get__surfacePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePose;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::__cordl_internal_set__surfacePose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surfacePose = value;
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::RequestMove(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"RequestMove", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::OnLocateSpace(::UnityEngine::Pose  surfacePose, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"OnLocateSpace", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePose, success);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::SetTargetWithAnchor(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"SetTargetWithAnchor", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::EraseAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"EraseAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::SetAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {"SetAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor* Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor::PlaceWithAnchor()   {
}
