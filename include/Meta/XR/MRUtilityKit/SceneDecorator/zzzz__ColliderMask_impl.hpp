#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ColliderMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ColliderMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::SampleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f50aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::Check)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x9f50ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask.CheckColliderHitsForMRUK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::*)(::ArrayW<::UnityEngine::Collider*>, int32_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::CheckColliderHitsForMRUK)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f510c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                        {"CheckColliderHitsForMRUK", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f5124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_MaxCheckColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCheckColliders;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_MaxCheckColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCheckColliders;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_set_MaxCheckColliders(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxCheckColliders = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_IgnoreFloorCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreFloorCollision;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_IgnoreFloorCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreFloorCollision;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_set_IgnoreFloorCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreFloorCollision = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_IgnoreGlobalMeshCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreGlobalMeshCollision;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_IgnoreGlobalMeshCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreGlobalMeshCollision;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_set_IgnoreGlobalMeshCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreGlobalMeshCollision = value;
}
constexpr ::UnityEngine::LayerMask& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_CheckLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckLayers;
}
constexpr ::UnityEngine::LayerMask const& Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_get_CheckLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckLayers;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::__cordl_internal_set_CheckLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CheckLayers = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::CheckColliderHitsForMRUK(::ArrayW<::UnityEngine::Collider*>  colliders, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                        {"CheckColliderHitsForMRUK", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders, size);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask* Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::ColliderMask::ColliderMask()   {
}
