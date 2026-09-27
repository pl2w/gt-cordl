#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_PropertySyncer_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_TransformSyncer_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_PropertySyncer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_TransformSyncer_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae77254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::ProcessAnimation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae77258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transformSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "propertySyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rigWeightSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constraintWeightSyncer", ty: "::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rigStates", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rigConstraintEndIdx", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modulatedConstraintWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::RigSyncSceneToStreamJob(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer  transformSyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  propertySyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  rigWeightSyncer, ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer  constraintWeightSyncer, ::Unity::Collections::NativeArray_1<float_t>  rigStates, ::Unity::Collections::NativeArray_1<int32_t>  rigConstraintEndIdx, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  modulatedConstraintWeights) noexcept  {
this->transformSyncer = transformSyncer;
this->propertySyncer = propertySyncer;
this->rigWeightSyncer = rigWeightSyncer;
this->constraintWeightSyncer = constraintWeightSyncer;
this->rigStates = rigStates;
this->rigConstraintEndIdx = rigConstraintEndIdx;
this->modulatedConstraintWeights = modulatedConstraintWeights;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob::RigSyncSceneToStreamJob()   {
}
