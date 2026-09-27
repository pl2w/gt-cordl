#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabPoseHelper.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseHelper_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseHelper_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*)>(&::Oculus::Interaction::Grab::GrabPoseHelper::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa4e618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper.SelectBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>)>(&::Oculus::Interaction::Grab::GrabPoseHelper::SelectBestPose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa4e6388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"SelectBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper.CollidersScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Grab::GrabPoseHelper::CollidersScore)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa4de6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"CollidersScore", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabPoseHelper::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*  minimalTranslationPoseCalculator, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*  minimalRotationPoseCalculator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(nullptr, ___internal_method, desiredPose, offset, bestPose, scoringModifier, relativeTo, minimalTranslationPoseCalculator, minimalRotationPoseCalculator);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabPoseHelper::SelectBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseA, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseB, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  reference, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  bestScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"SelectBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, poseA, poseB, reference, offset, scoringModifier, bestScore);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabPoseHelper::CollidersScore(::UnityEngine::Vector3  position, ::ArrayW<::UnityEngine::Collider*>  colliders, ::by_ref<::UnityEngine::Vector3>  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper*>(),
                        {"CollidersScore", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(nullptr, ___internal_method, position, colliders, hitPoint);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabPoseHelper::GrabPoseHelper()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4e65ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4e6660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4e6674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::*)(::by_ref<::UnityEngine::Pose>, ::System::IAsyncResult*)>(&::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4e6708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::UnityEngine::Transform*  relativeTo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, desiredPose, relativeTo);
}
inline ::System::IAsyncResult* Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::UnityEngine::Transform*  relativeTo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, desiredPose, relativeTo, callback, object);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::EndInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, desiredPose, result);
}
inline ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator* Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator::GrabPoseHelper_PoseCalculator()   {
}
