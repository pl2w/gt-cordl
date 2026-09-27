#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkAsynchronous.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWorkAsynchronous)
namespace BoingKit {
class BoingBehavior;
}
namespace BoingKit {
class BoingBones;
}
namespace BoingKit {
class BoingEffector;
}
namespace BoingKit {
class BoingReactorFieldCPUSampler;
}
namespace BoingKit {
class BoingReactorField;
}
namespace BoingKit {
class BoingReactor;
}
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace GlobalNamespace {
struct BoingManager_UpdateMode;
}
namespace GlobalNamespace {
struct BoingWorkAsynchronous_BehaviorJob;
}
namespace GlobalNamespace {
struct BoingWorkAsynchronous_ReactorJob;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace BoingKit {
class BoingWorkAsynchronous;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingWorkAsynchronous*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingWorkAsynchronous*, "BoingKit", "BoingWorkAsynchronous");
// Dependencies BoingKit.BoingEffector::Params, BoingKit.BoingWork::Output, BoingKit.BoingWork::Params, System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingWorkAsynchronous
class CORDL_TYPE BoingWorkAsynchronous : public ::System::Object {
public:
// Declarations
using BehaviorJob = ::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob;

using ReactorJob = ::GlobalNamespace::BoingWorkAsynchronous_ReactorJob;

/// @brief Field s_aBehaviorOutput, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_aBehaviorOutput, put=setStaticF_s_aBehaviorOutput)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  s_aBehaviorOutput;

/// @brief Field s_aBehaviorParams, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_aBehaviorParams, put=setStaticF_s_aBehaviorParams)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  s_aBehaviorParams;

/// @brief Field s_aEffectors, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_aEffectors, put=setStaticF_s_aEffectors)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>  s_aEffectors;

/// @brief Field s_aReactorExecOutput, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_aReactorExecOutput, put=setStaticF_s_aReactorExecOutput)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  s_aReactorExecOutput;

/// @brief Field s_aReactorExecParams, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_aReactorExecParams, put=setStaticF_s_aReactorExecParams)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  s_aReactorExecParams;

/// @brief Field s_behaviorJobNeedsGather, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_behaviorJobNeedsGather, put=setStaticF_s_behaviorJobNeedsGather)) bool  s_behaviorJobNeedsGather;

/// @brief Field s_hBehaviorJob, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_hBehaviorJob, put=setStaticF_s_hBehaviorJob)) ::Unity::Jobs::JobHandle  s_hBehaviorJob;

/// @brief Field s_hReactorJob, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_hReactorJob, put=setStaticF_s_hReactorJob)) ::Unity::Jobs::JobHandle  s_hReactorJob;

/// @brief Field s_reactorJobNeedsGather, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_reactorJobNeedsGather, put=setStaticF_s_reactorJobNeedsGather)) bool  s_reactorJobNeedsGather;

/// @brief Method ExecuteBehaviors, addr 0x5e27314, size 0x48c, virtual false, abstract: false, final false
static inline void ExecuteBehaviors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteBones, addr 0x5e2808c, size 0x340, virtual false, abstract: false, final false
static inline void ExecuteBones(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteReactors, addr 0x5e277a0, size 0x8ec, virtual false, abstract: false, final false
static inline void ExecuteReactors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*  effectorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  fieldMap, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  cpuSamplerMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method PostUnregisterBehaviorCleanUp, addr 0x5e2717c, size 0xb4, virtual false, abstract: false, final false
static inline void PostUnregisterBehaviorCleanUp() ;

/// @brief Method PostUnregisterEffectorReactorCleanUp, addr 0x5e27230, size 0xe4, virtual false, abstract: false, final false
static inline void PostUnregisterEffectorReactorCleanUp() ;

/// @brief Method PullBonesResults, addr 0x5e283cc, size 0x180, virtual false, abstract: false, final false
static inline void PullBonesResults(::ArrayW<::GlobalNamespace::BoingEffector_Params>  aEffectorParams, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  bonesMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

static inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output> getStaticF_s_aBehaviorOutput() ;

static inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params> getStaticF_s_aBehaviorParams() ;

static inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params> getStaticF_s_aEffectors() ;

static inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output> getStaticF_s_aReactorExecOutput() ;

static inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params> getStaticF_s_aReactorExecParams() ;

static inline bool getStaticF_s_behaviorJobNeedsGather() ;

static inline ::Unity::Jobs::JobHandle getStaticF_s_hBehaviorJob() ;

static inline ::Unity::Jobs::JobHandle getStaticF_s_hReactorJob() ;

static inline bool getStaticF_s_reactorJobNeedsGather() ;

static inline void setStaticF_s_aBehaviorOutput(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  value) ;

static inline void setStaticF_s_aBehaviorParams(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  value) ;

static inline void setStaticF_s_aEffectors(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>  value) ;

static inline void setStaticF_s_aReactorExecOutput(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  value) ;

static inline void setStaticF_s_aReactorExecParams(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  value) ;

static inline void setStaticF_s_behaviorJobNeedsGather(bool  value) ;

static inline void setStaticF_s_hBehaviorJob(::Unity::Jobs::JobHandle  value) ;

static inline void setStaticF_s_hReactorJob(::Unity::Jobs::JobHandle  value) ;

static inline void setStaticF_s_reactorJobNeedsGather(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingWorkAsynchronous() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingWorkAsynchronous", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingWorkAsynchronous(BoingWorkAsynchronous && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingWorkAsynchronous", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingWorkAsynchronous(BoingWorkAsynchronous const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingWorkAsynchronous) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
