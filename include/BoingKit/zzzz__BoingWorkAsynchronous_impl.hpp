#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkAsynchronous.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Output_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "BoingKit/zzzz__BoingWorkAsynchronous_def.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingEffector_def.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "BoingKit/zzzz__BoingReactorFieldCPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
#include "BoingKit/zzzz__BoingWorkAsynchronous_BehaviorJob_def.hpp"
#include "BoingKit/zzzz__BoingWorkAsynchronous_ReactorJob_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.PostUnregisterBehaviorCleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingWorkAsynchronous::PostUnregisterBehaviorCleanUp)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e2717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PostUnregisterBehaviorCleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.PostUnregisterEffectorReactorCleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingWorkAsynchronous::PostUnregisterEffectorReactorCleanUp)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e27230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PostUnregisterEffectorReactorCleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.ExecuteBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkAsynchronous::ExecuteBehaviors)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x5e27314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.ExecuteReactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkAsynchronous::ExecuteReactors)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x5e277a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.ExecuteBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::BoingEffector_Params>, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkAsynchronous::ExecuteBones)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5e2808c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkAsynchronous.PullBonesResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::BoingEffector_Params>, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkAsynchronous::PullBonesResults)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e283cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_behaviorJobNeedsGather(bool  value)  {
::cordl_internals::setStaticField<bool, "s_behaviorJobNeedsGather", ::BoingKit::BoingWorkAsynchronous*>(std::forward<bool>(value));
}
inline bool BoingKit::BoingWorkAsynchronous::getStaticF_s_behaviorJobNeedsGather()  {
return ::cordl_internals::getStaticField<bool, "s_behaviorJobNeedsGather", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_hBehaviorJob(::Unity::Jobs::JobHandle  value)  {
::cordl_internals::setStaticField<::Unity::Jobs::JobHandle, "s_hBehaviorJob", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Jobs::JobHandle>(value));
}
inline ::Unity::Jobs::JobHandle BoingKit::BoingWorkAsynchronous::getStaticF_s_hBehaviorJob()  {
return ::cordl_internals::getStaticField<::Unity::Jobs::JobHandle, "s_hBehaviorJob", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_aBehaviorParams(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  value)  {
::cordl_internals::setStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>, "s_aBehaviorParams", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>>(value));
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params> BoingKit::BoingWorkAsynchronous::getStaticF_s_aBehaviorParams()  {
return ::cordl_internals::getStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>, "s_aBehaviorParams", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_aBehaviorOutput(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  value)  {
::cordl_internals::setStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>, "s_aBehaviorOutput", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>>(value));
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output> BoingKit::BoingWorkAsynchronous::getStaticF_s_aBehaviorOutput()  {
return ::cordl_internals::getStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>, "s_aBehaviorOutput", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_reactorJobNeedsGather(bool  value)  {
::cordl_internals::setStaticField<bool, "s_reactorJobNeedsGather", ::BoingKit::BoingWorkAsynchronous*>(std::forward<bool>(value));
}
inline bool BoingKit::BoingWorkAsynchronous::getStaticF_s_reactorJobNeedsGather()  {
return ::cordl_internals::getStaticField<bool, "s_reactorJobNeedsGather", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_hReactorJob(::Unity::Jobs::JobHandle  value)  {
::cordl_internals::setStaticField<::Unity::Jobs::JobHandle, "s_hReactorJob", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Jobs::JobHandle>(value));
}
inline ::Unity::Jobs::JobHandle BoingKit::BoingWorkAsynchronous::getStaticF_s_hReactorJob()  {
return ::cordl_internals::getStaticField<::Unity::Jobs::JobHandle, "s_hReactorJob", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_aEffectors(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>  value)  {
::cordl_internals::setStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>, "s_aEffectors", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>>(value));
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params> BoingKit::BoingWorkAsynchronous::getStaticF_s_aEffectors()  {
return ::cordl_internals::getStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>, "s_aEffectors", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_aReactorExecParams(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  value)  {
::cordl_internals::setStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>, "s_aReactorExecParams", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>>(value));
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params> BoingKit::BoingWorkAsynchronous::getStaticF_s_aReactorExecParams()  {
return ::cordl_internals::getStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>, "s_aReactorExecParams", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::setStaticF_s_aReactorExecOutput(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  value)  {
::cordl_internals::setStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>, "s_aReactorExecOutput", ::BoingKit::BoingWorkAsynchronous*>(std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>>(value));
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output> BoingKit::BoingWorkAsynchronous::getStaticF_s_aReactorExecOutput()  {
return ::cordl_internals::getStaticField<::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>, "s_aReactorExecOutput", ::BoingKit::BoingWorkAsynchronous*>();
}
inline void BoingKit::BoingWorkAsynchronous::PostUnregisterBehaviorCleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PostUnregisterBehaviorCleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingWorkAsynchronous::PostUnregisterEffectorReactorCleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PostUnregisterEffectorReactorCleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingWorkAsynchronous::ExecuteBehaviors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviorMap, updateMode);
}
inline void BoingKit::BoingWorkAsynchronous::ExecuteReactors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*  effectorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  fieldMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  cpuSamplerMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effectorMap, reactorMap, fieldMap, cpuSamplerMap, updateMode);
}
inline void BoingKit::BoingWorkAsynchronous::ExecuteBones(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aEffectorParams, bonesMap, updateMode);
}
inline void BoingKit::BoingWorkAsynchronous::PullBonesResults(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkAsynchronous*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aEffectorParams, bonesMap, updateMode);
}
// Ctor Parameters []
constexpr ::BoingKit::BoingWorkAsynchronous::BoingWorkAsynchronous()   {
}
