#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandPuppet.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandPuppet_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandJointMap_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__JointCollection_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.get_JointMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_JointMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_Scale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4e5ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(float_t)>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::set_Scale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4e5ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"set_Scale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.get_JointsCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::Visuals::JointCollection* (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointsCache)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4e5f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_JointsCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.SetJointRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(::by_ref<::ArrayW<::UnityEngine::Quaternion>>)>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetJointRotations)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa4e579c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"SetJointRotations", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.SetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetRootPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4e5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"SetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet.CopyCachedJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)(::by_ref<::Oculus::Interaction::HandGrab::HandPose*>)>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::CopyCachedJoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4e5fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"CopyCachedJoints", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandPuppet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandPuppet::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandPuppet::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4e60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*& Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_get__jointMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointMaps;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* const& Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_get__jointMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointMaps;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_set__jointMaps(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointMaps = value;
}
constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection*& Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_get__jointsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsCache;
}
constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection* const& Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_get__jointsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsCache;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandPuppet::__cordl_internal_set__jointsCache(::Oculus::Interaction::HandGrab::Visuals::JointCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointsCache = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_JointMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandPuppet::set_Scale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"set_Scale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection* Oculus::Interaction::HandGrab::Visuals::HandPuppet::get_JointsCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"get_JointsCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::Visuals::JointCollection*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetJointRotations(/* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  jointRotations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"SetJointRotations", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointRotations);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandPuppet::SetRootPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rootPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"SetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootPose);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandPuppet::CopyCachedJoints(::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {"CopyCachedJoints", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandPuppet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Visuals::HandPuppet* Oculus::Interaction::HandGrab::Visuals::HandPuppet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::HandPuppet*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::HandPuppet::HandPuppet()   {
}
