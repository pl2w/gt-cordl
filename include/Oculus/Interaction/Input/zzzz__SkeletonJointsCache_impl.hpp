#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SkeletonJointsCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__SkeletonJointsCache_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.get_LocalDataVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Input::SkeletonJointsCache::*)()>(&::Oculus::Interaction::Input::SkeletonJointsCache::get_LocalDataVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa514ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"get_LocalDataVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.set_LocalDataVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::set_LocalDataVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa514cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"set_LocalDataVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.TryGetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Input::SkeletonJointsCache::TryGetParent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa50e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t, ::UnityEngine::Pose, ::ArrayW<::UnityEngine::Pose>, float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Input::SkeletonJointsCache::Update)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa50ea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.GetLocalJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::GetLocalJointPose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50ee8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50ef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.GetWorldJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::GetWorldJointPose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50ef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.GetWorldRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::SkeletonJointsCache::*)()>(&::Oculus::Interaction::Input::SkeletonJointsCache::GetWorldRootPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5150c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetWorldRootPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa514f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateJointPoseFromRoot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateLocalJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateLocalJointPose)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa514cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateLocalJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateWorldJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t)>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateWorldJointPose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa514fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateWorldJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateAllWorldPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)()>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllWorldPoses)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa51516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllWorldPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateAllLocalPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)()>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllLocalPoses)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa50ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllLocalPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.UpdateAllPosesFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)()>(&::Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllPosesFromRoot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa50ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllPosesFromRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.CheckJointDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t, ::ArrayW<uint64_t>)>(&::Oculus::Interaction::Input::SkeletonJointsCache::CheckJointDirty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa5150dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"CheckJointDirty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SkeletonJointsCache.SetJointClean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SkeletonJointsCache::*)(int32_t, ::ArrayW<uint64_t>)>(&::Oculus::Interaction::Input::SkeletonJointsCache::SetJointClean)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa515120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"SetJointClean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__LocalDataVersion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalDataVersion_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__LocalDataVersion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalDataVersion_k__BackingField;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__LocalDataVersion_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalDataVersion_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__originalPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__originalPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPoses;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__originalPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalPoses = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__posesFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRoot;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__posesFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRoot;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__posesFromRoot(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posesFromRoot = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__localPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__localPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPoses;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__localPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPoses = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__worldPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__worldPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPoses;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__worldPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldPoses = value;
}
constexpr ::ArrayW<uint64_t>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyJointsFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyJointsFromRoot;
}
constexpr ::ArrayW<uint64_t> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyJointsFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyJointsFromRoot;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__dirtyJointsFromRoot(::ArrayW<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtyJointsFromRoot = value;
}
constexpr ::ArrayW<uint64_t>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyLocalJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyLocalJoints;
}
constexpr ::ArrayW<uint64_t> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyLocalJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyLocalJoints;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__dirtyLocalJoints(::ArrayW<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtyLocalJoints = value;
}
constexpr ::ArrayW<uint64_t>& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyWorldJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyWorldJoints;
}
constexpr ::ArrayW<uint64_t> const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyWorldJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyWorldJoints;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__dirtyWorldJoints(::ArrayW<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtyWorldJoints = value;
}
constexpr ::UnityEngine::Matrix4x4& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr ::UnityEngine::Matrix4x4 const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__scale(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scale = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__rootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__rootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__rootPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__worldRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldRoot;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__worldRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldRoot;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__worldRoot(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldRoot = value;
}
constexpr int32_t& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__numJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numJoints;
}
constexpr int32_t const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__numJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numJoints;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__numJoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numJoints = value;
}
constexpr int32_t& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyArraySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyArraySize;
}
constexpr int32_t const& Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_get__dirtyArraySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtyArraySize;
}
constexpr void Oculus::Interaction::Input::SkeletonJointsCache::__cordl_internal_set__dirtyArraySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtyArraySize = value;
}
inline int32_t Oculus::Interaction::Input::SkeletonJointsCache::get_LocalDataVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"get_LocalDataVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::set_LocalDataVersion(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"set_LocalDataVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::SkeletonJointsCache::TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, parent);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::_ctor(int32_t  numJoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numJoints);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::Update(int32_t  dataVersion, ::UnityEngine::Pose  rootPose, ::ArrayW<::UnityEngine::Pose>  jointPoses, float_t  scale, ::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataVersion, rootPose, jointPoses, scale, trackingSpace);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::SkeletonJointsCache::GetLocalJointPose(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetLocalJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::SkeletonJointsCache::GetJointPoseFromRoot(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::SkeletonJointsCache::GetWorldJointPose(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetWorldJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::SkeletonJointsCache::GetWorldRootPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"GetWorldRootPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateJointPoseFromRoot(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateJointPoseFromRoot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateLocalJointPose(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateLocalJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateWorldJointPose(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateWorldJointPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllWorldPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllWorldPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllLocalPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllLocalPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::UpdateAllPosesFromRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"UpdateAllPosesFromRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::SkeletonJointsCache::CheckJointDirty(int32_t  jointId, ::ArrayW<uint64_t>  dirtyFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"CheckJointDirty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, dirtyFlags);
}
inline void Oculus::Interaction::Input::SkeletonJointsCache::SetJointClean(int32_t  jointId, ::ArrayW<uint64_t>  dirtyFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SkeletonJointsCache*>(),
                        {"SetJointClean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, dirtyFlags);
}
inline ::Oculus::Interaction::Input::SkeletonJointsCache* Oculus::Interaction::Input::SkeletonJointsCache::New_ctor(int32_t  numJoints)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::SkeletonJointsCache*>(numJoints));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::SkeletonJointsCache::SkeletonJointsCache()   {
}
