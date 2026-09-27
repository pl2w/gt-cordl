#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/Body.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__Body_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyDataAsset_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointsCache_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__Body_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__IBody_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::get_IsConnected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4f7618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4f7670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::get_Scale)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4f76c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4f7720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.get_IsTrackedDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::get_IsTrackedDataValid)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4f7778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.add_WhenBodyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)(::System::Action*)>(&::Oculus::Interaction::Body::Input::Body::add_WhenBodyUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"add_WhenBodyUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.remove_WhenBodyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)(::System::Action*)>(&::Oculus::Interaction::Body::Input::Body::remove_WhenBodyUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"remove_WhenBodyUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Input::Body::GetJointPose)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4f7908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Input::Body::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4f7bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Input::Body::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4f7db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::Body::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Input::Body::GetRootPose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4f7fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.InitializeJointPosesCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::InitializeJointPosesCache)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4f8074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"InitializeJointPosesCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.CheckJointPosesCacheUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::CheckJointPosesCacheUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4f7ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"CheckJointPosesCacheUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)(::Oculus::Interaction::Body::Input::BodyDataAsset*)>(&::Oculus::Interaction::Body::Input::Body::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body.MarkInputDataRequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::MarkInputDataRequiresUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4f8270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body::*)()>(&::Oculus::Interaction::Body::Input::Body::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa4f82fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Body::Input::Body::__cordl_internal_get__trackingSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingSpace;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Body::Input::Body::__cordl_internal_get__trackingSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingSpace;
}
constexpr void Oculus::Interaction::Body::Input::Body::__cordl_internal_set__trackingSpace(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingSpace = value;
}
constexpr ::System::Action*& Oculus::Interaction::Body::Input::Body::__cordl_internal_get_WhenBodyUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Body::Input::Body::__cordl_internal_get_WhenBodyUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyUpdated;
}
constexpr void Oculus::Interaction::Body::Input::Body::__cordl_internal_set_WhenBodyUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenBodyUpdated = value;
}
constexpr ::Oculus::Interaction::Body::Input::BodyJointsCache*& Oculus::Interaction::Body::Input::Body::__cordl_internal_get__jointPosesCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesCache;
}
constexpr ::Oculus::Interaction::Body::Input::BodyJointsCache* const& Oculus::Interaction::Body::Input::Body::__cordl_internal_get__jointPosesCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesCache;
}
constexpr void Oculus::Interaction::Body::Input::Body::__cordl_internal_set__jointPosesCache(::Oculus::Interaction::Body::Input::BodyJointsCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPosesCache = value;
}
inline bool Oculus::Interaction::Body::Input::Body::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::Input::Body::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Body::Input::Body::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Input::Body::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::Input::Body::get_IsTrackedDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::Body::add_WhenBodyUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"add_WhenBodyUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::Input::Body::remove_WhenBodyUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"remove_WhenBodyUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Body::Input::Body::GetJointPose(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::Input::Body::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::Input::Body::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::Input::Body::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Body::Input::Body::InitializeJointPosesCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"InitializeJointPosesCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::Body::CheckJointPosesCacheUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {"CheckJointPosesCacheUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::Body::Apply(::Oculus::Interaction::Body::Input::BodyDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Body::Input::Body::MarkInputDataRequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::Body::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Input::Body* Oculus::Interaction::Body::Input::Body::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::Body*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::Input::IBody"
constexpr  Oculus::Interaction::Body::Input::Body::operator ::Oculus::Interaction::Body::Input::IBody*() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::IBody*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::Input::IBody"
constexpr ::Oculus::Interaction::Body::Input::IBody* Oculus::Interaction::Body::Input::Body::i___Oculus__Interaction__Body__Input__IBody() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::IBody*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::Body::Body()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body___c::*)()>(&::Oculus::Interaction::Body::Input::Body___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f8494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::Body___c.__ctor_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::Body___c::*)()>(&::Oculus::Interaction::Body::Input::Body___c::__ctor_b__23_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body___c*>(),
                        {"<.ctor>b__23_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::Input::Body___c::setStaticF___9(::Oculus::Interaction::Body::Input::Body___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::Input::Body___c*, "<>9", ::Oculus::Interaction::Body::Input::Body___c*>(std::forward<::Oculus::Interaction::Body::Input::Body___c*>(value));
}
inline ::Oculus::Interaction::Body::Input::Body___c* Oculus::Interaction::Body::Input::Body___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::Input::Body___c*, "<>9", ::Oculus::Interaction::Body::Input::Body___c*>();
}
inline void Oculus::Interaction::Body::Input::Body___c::setStaticF___9__23_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__23_0", ::Oculus::Interaction::Body::Input::Body___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Body::Input::Body___c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__23_0", ::Oculus::Interaction::Body::Input::Body___c*>();
}
inline void Oculus::Interaction::Body::Input::Body___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::Body___c::__ctor_b__23_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::Body___c*>(),
                        {"<.ctor>b__23_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Input::Body___c* Oculus::Interaction::Body::Input::Body___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::Body___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::Body___c::Body___c()   {
}
