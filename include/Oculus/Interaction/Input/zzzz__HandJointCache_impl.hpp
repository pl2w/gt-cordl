#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandJointCache.hpp"
#include "Oculus/Interaction/Input/zzzz__SkeletonJointsCache_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointCache_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.TryGetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandJointCache::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Input::HandJointCache::TryGetParent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa50e724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandJointCache::*)()>(&::Oculus::Interaction::Input::HandJointCache::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa50e7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandDataAsset*, int32_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Input::HandJointCache::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa50e9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.GetAllLocalPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandJointCache::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::HandJointCache::GetAllLocalPoses)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa50ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetAllLocalPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.GetAllPosesFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandJointCache::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::HandJointCache::GetAllPosesFromWrist)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa50eda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetAllPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.GetLocalJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointCache::GetLocalJointPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50ee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointCache::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50eee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.GetWorldJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointCache::GetWorldJointPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50ef6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.LocalJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointCache::LocalJointPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"LocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.PoseFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointCache::PoseFromWrist)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50f024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"PoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointCache.WorldJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::HandJointCache::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Input::HandJointCache::WorldJointPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa50f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"WorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& Oculus::Interaction::Input::HandJointCache::__cordl_internal_get__posesFromWristCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromWristCollection;
}
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& Oculus::Interaction::Input::HandJointCache::__cordl_internal_get__posesFromWristCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromWristCollection;
}
constexpr void Oculus::Interaction::Input::HandJointCache::__cordl_internal_set__posesFromWristCollection(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posesFromWristCollection = value;
}
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& Oculus::Interaction::Input::HandJointCache::__cordl_internal_get__localPosesCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosesCollection;
}
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& Oculus::Interaction::Input::HandJointCache::__cordl_internal_get__localPosesCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosesCollection;
}
constexpr void Oculus::Interaction::Input::HandJointCache::__cordl_internal_set__localPosesCollection(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPosesCollection = value;
}
inline bool Oculus::Interaction::Input::HandJointCache::TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, parent);
}
inline void Oculus::Interaction::Input::HandJointCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandJointCache::Update(::Oculus::Interaction::Input::HandDataAsset*  data, int32_t  dataVersion, ::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataVersion, trackingSpace);
}
inline bool Oculus::Interaction::Input::HandJointCache::GetAllLocalPoses(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  localJointPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetAllLocalPoses", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localJointPoses);
}
inline bool Oculus::Interaction::Input::HandJointCache::GetAllPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetAllPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesFromWrist);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::GetLocalJointPose(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::GetJointPoseFromRoot(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::GetWorldJointPose(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::LocalJointPose(::Oculus::Interaction::Input::HandJointId  jointid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"LocalJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointid);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::PoseFromWrist(::Oculus::Interaction::Input::HandJointId  jointid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"PoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointid);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::HandJointCache::WorldJointPose(::Oculus::Interaction::Input::HandJointId  jointid, ::UnityEngine::Pose  rootPose, float_t  handScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointCache*>(),
                        {"WorldJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointid, rootPose, handScale);
}
inline ::Oculus::Interaction::Input::HandJointCache* Oculus::Interaction::Input::HandJointCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandJointCache*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandJointCache::HandJointCache()   {
}
