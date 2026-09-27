#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureValueProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureValueProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureValueProvider_TransformProperties_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformJointData_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::TransformJointData*, ::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetValue", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetHandVectorForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4a9054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetHandVectorForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4a7ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetHandVectorForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa4a9058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetTargetVectorForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4a7e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetTargetVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetTargetVectorForFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4a92d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetTargetVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetWristDownValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristDownValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetWristDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetWristUpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristUpValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetWristUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetPalmDownValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmDownValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetPalmUpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmUpValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a88bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetPalmTowardsFaceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmTowardsFaceValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmTowardsFaceValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetPalmAwayFromFaceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmAwayFromFaceValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmAwayFromFaceValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetFingersUpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersUpValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetFingersUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetFingersDownValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersDownValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetFingersDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetPinchClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPinchClearValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4a8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPinchClearValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.GetVerticalVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetVerticalVector)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4a93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetVerticalVector", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider.OffsetVectorWithRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::OffsetVectorWithRotation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa4a94ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"OffsetVectorWithRotation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a96ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetValue(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::Oculus::Interaction::PoseDetection::TransformJointData*  transformJointData, ::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetValue", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformFeature, transformJointData, transformConfig);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformFeature, transformJointData, transformConfig);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformFeature, transformJointData);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetHandVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformFeature, transformProps);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetTargetVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformFeature, transformJointData, transformConfig);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetTargetVectorForFeature", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformFeature, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetWristDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetWristUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmTowardsFaceValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmTowardsFaceValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmAwayFromFaceValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPalmAwayFromFaceValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetFingersUpValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetFingersDownValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPinchClearValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetPinchClearValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transformProps, transformConfig);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetVerticalVector(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  centerEyePose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  trackingSystemUp, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"GetVerticalVector", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, centerEyePose, trackingSystemUp, transformConfig);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::OffsetVectorWithRotation(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  originalVector, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {"OffsetVectorWithRotation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformProps, originalVector, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider* Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformFeatureValueProvider()   {
}
