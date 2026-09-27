#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseDebugGizmos.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseDebugGizmos_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f62e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Update)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa4f6350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.GetVisibilityFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::GetVisibilityFlags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4f65e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"GetVisibilityFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.TryGetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)(int32_t, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::TryGetJointPose)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa4f6604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::TryGetParentJointId)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4f6788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.InjectAllBodyJointDebugGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::InjectAllBodyJointDebugGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f68d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"InjectAllBodyJointDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos.InjectBodyPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::InjectBodyPose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f68d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"InjectBodyPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f69a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_get__bodyPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPose;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_get__bodyPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPose;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_set__bodyPose(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyPose = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_get_BodyPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyPose;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_get_BodyPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyPose;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::__cordl_internal_set_BodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BodyPose = value;
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::GetVisibilityFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"GetVisibilityFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, pose);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::InjectAllBodyJointDebugGizmos(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"InjectAllBodyJointDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyPose);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::InjectBodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  bodyPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {"InjectBodyPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyPose);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos* Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseDebugGizmos::BodyPoseDebugGizmos()   {
}
