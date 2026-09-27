#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodyJointsCache.hpp"
#include "Oculus/Interaction/Input/zzzz__SkeletonJointsCache_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointsCache_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyDataAsset_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ReadOnlyBodyJointPoses_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.TryGetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::TryGetParent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4f86c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::Oculus::Interaction::Body::Input::ISkeletonMapping*)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4f8108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::Oculus::Interaction::Body::Input::BodyDataAsset*, int32_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f8218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetLocalJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::Oculus::Interaction::Body::Input::BodyJointId)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetLocalJointPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4f7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::Oculus::Interaction::Body::Input::BodyJointId)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4f7f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetWorldJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::Oculus::Interaction::Body::Input::BodyJointId)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetWorldJointPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4f7b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetAllLocalPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetAllLocalPoses)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f87c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllLocalPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetAllPosesFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetAllPosesFromRoot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f8834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllPosesFromRoot", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::BodyJointsCache.GetAllWorldPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::BodyJointsCache::*)(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>)>(&::Oculus::Interaction::Body::Input::BodyJointsCache::GetAllWorldPoses)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f8888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllWorldPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__posesFromRootCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRootCollection;
}
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__posesFromRootCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRootCollection;
}
constexpr void Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_set__posesFromRootCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posesFromRootCollection = value;
}
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__worldPosesCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPosesCollection;
}
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__worldPosesCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPosesCollection;
}
constexpr void Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_set__worldPosesCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldPosesCollection = value;
}
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__localPosesCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosesCollection;
}
constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__localPosesCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosesCollection;
}
constexpr void Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_set__localPosesCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPosesCollection = value;
}
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping*& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* const& Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_get__mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr void Oculus::Interaction::Body::Input::BodyJointsCache::__cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapping = value;
}
inline bool Oculus::Interaction::Body::Input::BodyJointsCache::TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, parent);
}
inline void Oculus::Interaction::Body::Input::BodyJointsCache::_ctor(::Oculus::Interaction::Body::Input::ISkeletonMapping*  mapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapping);
}
inline void Oculus::Interaction::Body::Input::BodyJointsCache::Update(::Oculus::Interaction::Body::Input::BodyDataAsset*  data, int32_t  dataVersion, ::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyDataAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataVersion, trackingSpace);
}
inline ::UnityEngine::Pose Oculus::Interaction::Body::Input::BodyJointsCache::GetLocalJointPose(::Oculus::Interaction::Body::Input::BodyJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Body::Input::BodyJointsCache::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Body::Input::BodyJointsCache::GetWorldJointPose(::Oculus::Interaction::Body::Input::BodyJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline bool Oculus::Interaction::Body::Input::BodyJointsCache::GetAllLocalPoses(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  localJointPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllLocalPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localJointPoses);
}
inline bool Oculus::Interaction::Body::Input::BodyJointsCache::GetAllPosesFromRoot(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  posesFromRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllPosesFromRoot", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, posesFromRoot);
}
inline bool Oculus::Interaction::Body::Input::BodyJointsCache::GetAllWorldPoses(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  worldJointPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::BodyJointsCache*>(),
                        {"GetAllWorldPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldJointPoses);
}
inline ::Oculus::Interaction::Body::Input::BodyJointsCache* Oculus::Interaction::Body::Input::BodyJointsCache::New_ctor(::Oculus::Interaction::Body::Input::ISkeletonMapping*  mapping)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::BodyJointsCache*>(mapping));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::BodyJointsCache::BodyJointsCache()   {
}
