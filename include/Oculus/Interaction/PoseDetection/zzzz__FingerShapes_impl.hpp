#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerShapes.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerShapes_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa49ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.PosesCurlValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::PoseDetection::FingerShapes::PosesCurlValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa49d1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"PosesCurlValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.PosesListCurlValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseDetection::FingerShapes::PosesListCurlValue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa49d30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"PosesListCurlValue", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.JointsCurlValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::ArrayW<::Oculus::Interaction::Input::HandJointId>, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::JointsCurlValue)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa49d494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"JointsCurlValue", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetCurlValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetCurlValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa49caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetCurlValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetFlexionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetFlexionValue)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa49cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetFlexionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetAbductionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetAbductionValue)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa49cdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetAbductionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetOppositionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetOppositionValue)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa49d038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetOppositionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes.GetJointsAffected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>* (::Oculus::Interaction::PoseDetection::FingerShapes::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::FingerShapes::GetJointsAffected)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa49d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerShapes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerShapes::*)()>(&::Oculus::Interaction::PoseDetection::FingerShapes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::FingerShapes::setStaticF_CURL_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "CURL_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::PoseDetection::FingerShapes::getStaticF_CURL_LINE_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "CURL_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>();
}
inline void Oculus::Interaction::PoseDetection::FingerShapes::setStaticF_FLEXION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "FLEXION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::PoseDetection::FingerShapes::getStaticF_FLEXION_LINE_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "FLEXION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>();
}
inline void Oculus::Interaction::PoseDetection::FingerShapes::setStaticF_ABDUCTION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "ABDUCTION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::PoseDetection::FingerShapes::getStaticF_ABDUCTION_LINE_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "ABDUCTION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>();
}
inline void Oculus::Interaction::PoseDetection::FingerShapes::setStaticF_OPPOSITION_LINE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "OPPOSITION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::PoseDetection::FingerShapes::getStaticF_OPPOSITION_LINE_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "OPPOSITION_LINE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>();
}
inline void Oculus::Interaction::PoseDetection::FingerShapes::setStaticF_CURL_ANGLE_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "CURL_ANGLE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::PoseDetection::FingerShapes::getStaticF_CURL_ANGLE_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "CURL_ANGLE_JOINTS", ::Oculus::Interaction::PoseDetection::FingerShapes*>();
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::GetValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::Input::IHand*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger, feature, hand);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::PosesCurlValue(::UnityEngine::Pose  p0, ::UnityEngine::Pose  p1, ::UnityEngine::Pose  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"PosesCurlValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::PosesListCurlValue(::ArrayW<::UnityEngine::Pose>  poses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"PosesListCurlValue", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, poses);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::JointsCurlValue(::ArrayW<::Oculus::Interaction::Input::HandJointId>  joints, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"JointsCurlValue", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, joints, hand);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::GetCurlValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetCurlValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger, hand);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::GetFlexionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetFlexionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger, hand);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::GetAbductionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetAbductionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger, hand);
}
inline float_t Oculus::Interaction::PoseDetection::FingerShapes::GetOppositionValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {"GetOppositionValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger, hand);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>* Oculus::Interaction::PoseDetection::FingerShapes::GetJointsAffected(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*>(this, ___internal_method, finger, feature);
}
inline void Oculus::Interaction::PoseDetection::FingerShapes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerShapes* Oculus::Interaction::PoseDetection::FingerShapes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerShapes*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerShapes::FingerShapes()   {
}
