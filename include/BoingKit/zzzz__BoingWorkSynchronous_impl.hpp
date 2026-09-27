#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkSynchronous.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__BoingWorkSynchronous_def.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "BoingKit/zzzz__BoingReactorFieldCPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingWorkSynchronous.ExecuteBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkSynchronous::ExecuteBehaviors)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5e28858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkSynchronous.ExecuteReactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::BoingEffector_Params>, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkSynchronous::ExecuteReactors)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5e28a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkSynchronous.ExecuteBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::BoingEffector_Params>, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkSynchronous::ExecuteBones)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5e28f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingWorkSynchronous.PullBonesResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::BoingEffector_Params>, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingWorkSynchronous::PullBonesResults)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e29278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::BoingWorkSynchronous::ExecuteBehaviors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviorMap, updateMode);
}
inline void BoingKit::BoingWorkSynchronous::ExecuteReactors(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  fieldMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  cpuSamplerMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aEffectorParams, reactorMap, fieldMap, cpuSamplerMap, updateMode);
}
inline void BoingKit::BoingWorkSynchronous::ExecuteBones(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aEffectorParams, bonesMap, updateMode);
}
inline void BoingKit::BoingWorkSynchronous::PullBonesResults(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWorkSynchronous*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aEffectorParams, bonesMap, updateMode);
}
// Ctor Parameters []
constexpr ::BoingKit::BoingWorkSynchronous::BoingWorkSynchronous()   {
}
