#pragma once
// IWYU pragma private; include "BoingKit/BoingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingManager)
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
class BoingManager_BehaviorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_BehaviorUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_BonesRegisterDelegate;
}
namespace BoingKit {
class BoingManager_BonesUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_EffectorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_EffectorUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldCPUSamplerRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldCPUSamplerUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldGPUSamplerRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldGPUSamplerUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorUnregisterDelegate;
}
namespace BoingKit {
class BoingReactorFieldCPUSampler;
}
namespace BoingKit {
class BoingReactorFieldGPUSampler;
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
struct BoingManager_TranslationLockSpace;
}
namespace GlobalNamespace {
struct BoingManager_UpdateMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace BoingKit {
class BoingManager;
}
namespace BoingKit {
class BoingManager_BehaviorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_BehaviorUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_BonesRegisterDelegate;
}
namespace BoingKit {
class BoingManager_BonesUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_EffectorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_EffectorUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldCPUSamplerRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldCPUSamplerUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldGPUSamplerRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldGPUSamplerUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorFieldUnregisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorRegisterDelegate;
}
namespace BoingKit {
class BoingManager_ReactorUnregisterDelegate;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingManager*);
MARK_REF_T(::BoingKit::BoingManager_BehaviorRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_BehaviorUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_BonesRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_BonesUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_EffectorRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_EffectorUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorRegisterDelegate*);
MARK_REF_T(::BoingKit::BoingManager_ReactorUnregisterDelegate*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager*, "BoingKit", "BoingManager");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_BehaviorRegisterDelegate*, "BoingKit", "BoingManager/BehaviorRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_BehaviorUnregisterDelegate*, "BoingKit", "BoingManager/BehaviorUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_BonesRegisterDelegate*, "BoingKit", "BoingManager/BonesRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_BonesUnregisterDelegate*, "BoingKit", "BoingManager/BonesUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_EffectorRegisterDelegate*, "BoingKit", "BoingManager/EffectorRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_EffectorUnregisterDelegate*, "BoingKit", "BoingManager/EffectorUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*, "BoingKit", "BoingManager/ReactorFieldCPUSamplerRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*, "BoingKit", "BoingManager/ReactorFieldCPUSamplerUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*, "BoingKit", "BoingManager/ReactorFieldGPUSamplerRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*, "BoingKit", "BoingManager/ReactorFieldGPUSamplerUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldRegisterDelegate*, "BoingKit", "BoingManager/ReactorFieldRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*, "BoingKit", "BoingManager/ReactorFieldUnregisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorRegisterDelegate*, "BoingKit", "BoingManager/ReactorRegisterDelegate");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManager_ReactorUnregisterDelegate*, "BoingKit", "BoingManager/ReactorUnregisterDelegate");
// Dependencies BoingKit.BoingEffector::Params, System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager
class CORDL_TYPE BoingManager : public ::System::Object {
public:
// Declarations
using BehaviorRegisterDelegate = ::BoingKit::BoingManager_BehaviorRegisterDelegate;

using BehaviorUnregisterDelegate = ::BoingKit::BoingManager_BehaviorUnregisterDelegate;

using BonesRegisterDelegate = ::BoingKit::BoingManager_BonesRegisterDelegate;

using BonesUnregisterDelegate = ::BoingKit::BoingManager_BonesUnregisterDelegate;

using EffectorRegisterDelegate = ::BoingKit::BoingManager_EffectorRegisterDelegate;

using EffectorUnregisterDelegate = ::BoingKit::BoingManager_EffectorUnregisterDelegate;

using ReactorFieldCPUSamplerRegisterDelegate = ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate;

using ReactorFieldCPUSamplerUnregisterDelegate = ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate;

using ReactorFieldGPUSamplerRegisterDelegate = ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate;

using ReactorFieldGPUSamplerUnregisterDelegate = ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate;

using ReactorFieldRegisterDelegate = ::BoingKit::BoingManager_ReactorFieldRegisterDelegate;

using ReactorFieldUnregisterDelegate = ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate;

using ReactorRegisterDelegate = ::BoingKit::BoingManager_ReactorRegisterDelegate;

using ReactorUnregisterDelegate = ::BoingKit::BoingManager_ReactorUnregisterDelegate;

using TranslationLockSpace = ::GlobalNamespace::BoingManager_TranslationLockSpace;

using UpdateMode = ::GlobalNamespace::BoingManager_UpdateMode;

/// @brief Field OnBehaviorRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBehaviorRegister, put=setStaticF_OnBehaviorRegister)) ::BoingKit::BoingManager_BehaviorRegisterDelegate*  OnBehaviorRegister;

/// @brief Field OnBehaviorUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBehaviorUnregister, put=setStaticF_OnBehaviorUnregister)) ::BoingKit::BoingManager_BehaviorUnregisterDelegate*  OnBehaviorUnregister;

/// @brief Field OnBonesRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBonesRegister, put=setStaticF_OnBonesRegister)) ::BoingKit::BoingManager_BonesRegisterDelegate*  OnBonesRegister;

/// @brief Field OnBonesUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBonesUnregister, put=setStaticF_OnBonesUnregister)) ::BoingKit::BoingManager_BonesUnregisterDelegate*  OnBonesUnregister;

/// @brief Field OnEffectorRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEffectorRegister, put=setStaticF_OnEffectorRegister)) ::BoingKit::BoingManager_EffectorRegisterDelegate*  OnEffectorRegister;

/// @brief Field OnEffectorUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEffectorUnregister, put=setStaticF_OnEffectorUnregister)) ::BoingKit::BoingManager_EffectorUnregisterDelegate*  OnEffectorUnregister;

/// @brief Field OnFieldGPUSamplerUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnFieldGPUSamplerUnregister, put=setStaticF_OnFieldGPUSamplerUnregister)) ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*  OnFieldGPUSamplerUnregister;

/// @brief Field OnReactorFieldCPUSamplerRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorFieldCPUSamplerRegister, put=setStaticF_OnReactorFieldCPUSamplerRegister)) ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*  OnReactorFieldCPUSamplerRegister;

/// @brief Field OnReactorFieldCPUSamplerUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorFieldCPUSamplerUnregister, put=setStaticF_OnReactorFieldCPUSamplerUnregister)) ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*  OnReactorFieldCPUSamplerUnregister;

/// @brief Field OnReactorFieldGPUSamplerRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorFieldGPUSamplerRegister, put=setStaticF_OnReactorFieldGPUSamplerRegister)) ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*  OnReactorFieldGPUSamplerRegister;

/// @brief Field OnReactorFieldRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorFieldRegister, put=setStaticF_OnReactorFieldRegister)) ::BoingKit::BoingManager_ReactorFieldRegisterDelegate*  OnReactorFieldRegister;

/// @brief Field OnReactorFieldUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorFieldUnregister, put=setStaticF_OnReactorFieldUnregister)) ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*  OnReactorFieldUnregister;

/// @brief Field OnReactorRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorRegister, put=setStaticF_OnReactorRegister)) ::BoingKit::BoingManager_ReactorRegisterDelegate*  OnReactorRegister;

/// @brief Field OnReactorUnregister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReactorUnregister, put=setStaticF_OnReactorUnregister)) ::BoingKit::BoingManager_ReactorUnregisterDelegate*  OnReactorUnregister;

/// @brief Field UseAsynchronousJobs, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UseAsynchronousJobs, put=setStaticF_UseAsynchronousJobs)) bool  UseAsynchronousJobs;

/// @brief Field kEffectorParamsIncrement, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kEffectorParamsIncrement, put=setStaticF_kEffectorParamsIncrement)) int32_t  kEffectorParamsIncrement;

/// @brief Field s_aEffectorParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_aEffectorParams, put=setStaticF_s_aEffectorParams)) ::ArrayW<::GlobalNamespace::BoingEffector_Params>  s_aEffectorParams;

/// @brief Field s_behaviorMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_behaviorMap, put=setStaticF_s_behaviorMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  s_behaviorMap;

/// @brief Field s_bonesMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_bonesMap, put=setStaticF_s_bonesMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  s_bonesMap;

/// @brief Field s_cpuSamplerMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cpuSamplerMap, put=setStaticF_s_cpuSamplerMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  s_cpuSamplerMap;

/// @brief Field s_deltaTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_deltaTime, put=setStaticF_s_deltaTime)) float_t  s_deltaTime;

/// @brief Field s_effectorMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_effectorMap, put=setStaticF_s_effectorMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*  s_effectorMap;

/// @brief Field s_effectorParamsBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_effectorParamsBuffer, put=setStaticF_s_effectorParamsBuffer)) ::UnityEngine::ComputeBuffer*  s_effectorParamsBuffer;

/// @brief Field s_effectorParamsIndexMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_effectorParamsIndexMap, put=setStaticF_s_effectorParamsIndexMap)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  s_effectorParamsIndexMap;

/// @brief Field s_effectorParamsList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_effectorParamsList, put=setStaticF_s_effectorParamsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*  s_effectorParamsList;

/// @brief Field s_fieldMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_fieldMap, put=setStaticF_s_fieldMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  s_fieldMap;

/// @brief Field s_gpuSamplerMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_gpuSamplerMap, put=setStaticF_s_gpuSamplerMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*  s_gpuSamplerMap;

/// @brief Field s_managerGo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_managerGo, put=setStaticF_s_managerGo)) ::UnityW<::UnityEngine::GameObject>  s_managerGo;

/// @brief Field s_reactorMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_reactorMap, put=setStaticF_s_reactorMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  s_reactorMap;

/// @brief Method DispatchReactorFieldCompute, addr 0x5e196d0, size 0x1e0, virtual false, abstract: false, final false
static inline void DispatchReactorFieldCompute() ;

/// @brief Method Execute, addr 0x5e18230, size 0xa4, virtual false, abstract: false, final false
static inline void Execute(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteBehaviors, addr 0x5e18944, size 0x23c, virtual false, abstract: false, final false
static inline void ExecuteBehaviors(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteBones, addr 0x5e18700, size 0x244, virtual false, abstract: false, final false
static inline void ExecuteBones(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method ExecuteReactors, addr 0x5e18b80, size 0x308, virtual false, abstract: false, final false
static inline void ExecuteReactors(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method PostUnregisterBehavior, addr 0x5e17538, size 0x94, virtual false, abstract: false, final false
static inline void PostUnregisterBehavior() ;

/// @brief Method PostUnregisterBones, addr 0x5e1822c, size 0x4, virtual false, abstract: false, final false
static inline void PostUnregisterBones() ;

/// @brief Method PostUnregisterEffectorReactor, addr 0x5e178ac, size 0x1f4, virtual false, abstract: false, final false
static inline void PostUnregisterEffectorReactor() ;

/// @brief Method PreRegisterBehavior, addr 0x5e174ec, size 0x4c, virtual false, abstract: false, final false
static inline void PreRegisterBehavior() ;

/// @brief Method PreRegisterBones, addr 0x5e181e0, size 0x4c, virtual false, abstract: false, final false
static inline void PreRegisterBones() ;

/// @brief Method PreRegisterEffectorReactor, addr 0x5e175cc, size 0x2e0, virtual false, abstract: false, final false
static inline void PreRegisterEffectorReactor() ;

/// @brief Method PullBehaviorResults, addr 0x5e18e88, size 0x180, virtual false, abstract: false, final false
static inline void PullBehaviorResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method PullBonesResults, addr 0x5e19ba8, size 0x100, virtual false, abstract: false, final false
static inline void PullBonesResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method PullReactorResults, addr 0x5e19174, size 0x2bc, virtual false, abstract: false, final false
static inline void PullReactorResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method RefreshEffectorParams, addr 0x5e182d4, size 0x42c, virtual false, abstract: false, final false
static inline void RefreshEffectorParams() ;

/// @brief Method Register, addr 0x5e11974, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingBehavior*  behavior) ;

/// @brief Method Register, addr 0x5e134c8, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingBones*  bones) ;

/// @brief Method Register, addr 0x5e15f08, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingEffector*  effector) ;

/// @brief Method Register, addr 0x5e17c70, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingReactorField*  field) ;

/// @brief Method Register, addr 0x5e17aa0, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingReactor*  reactor) ;

/// @brief Method Register, addr 0x5e17e40, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingReactorFieldCPUSampler*  sampler) ;

/// @brief Method Register, addr 0x5e18010, size 0xe8, virtual false, abstract: false, final false
static inline void Register(::BoingKit::BoingReactorFieldGPUSampler*  sampler) ;

/// @brief Method RestoreBehaviors, addr 0x5e19008, size 0x16c, virtual false, abstract: false, final false
static inline void RestoreBehaviors() ;

/// @brief Method RestoreBones, addr 0x5e19ca8, size 0x16c, virtual false, abstract: false, final false
static inline void RestoreBones() ;

/// @brief Method RestoreReactors, addr 0x5e19430, size 0x2a0, virtual false, abstract: false, final false
static inline void RestoreReactors() ;

/// @brief Method Unregister, addr 0x5e11ab0, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingBehavior*  behavior) ;

/// @brief Method Unregister, addr 0x5e13604, size 0xe4, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingBones*  bones) ;

/// @brief Method Unregister, addr 0x5e16044, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingEffector*  effector) ;

/// @brief Method Unregister, addr 0x5e17d58, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingReactorField*  field) ;

/// @brief Method Unregister, addr 0x5e17b88, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingReactor*  reactor) ;

/// @brief Method Unregister, addr 0x5e17f28, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingReactorFieldCPUSampler*  sampler) ;

/// @brief Method Unregister, addr 0x5e180f8, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::BoingKit::BoingReactorFieldGPUSampler*  sampler) ;

/// @brief Method ValidateManager, addr 0x5e1724c, size 0x1c0, virtual false, abstract: false, final false
static inline void ValidateManager() ;

static inline ::BoingKit::BoingManager_BehaviorRegisterDelegate* getStaticF_OnBehaviorRegister() ;

static inline ::BoingKit::BoingManager_BehaviorUnregisterDelegate* getStaticF_OnBehaviorUnregister() ;

static inline ::BoingKit::BoingManager_BonesRegisterDelegate* getStaticF_OnBonesRegister() ;

static inline ::BoingKit::BoingManager_BonesUnregisterDelegate* getStaticF_OnBonesUnregister() ;

static inline ::BoingKit::BoingManager_EffectorRegisterDelegate* getStaticF_OnEffectorRegister() ;

static inline ::BoingKit::BoingManager_EffectorUnregisterDelegate* getStaticF_OnEffectorUnregister() ;

static inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* getStaticF_OnFieldGPUSamplerUnregister() ;

static inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* getStaticF_OnReactorFieldCPUSamplerRegister() ;

static inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* getStaticF_OnReactorFieldCPUSamplerUnregister() ;

static inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* getStaticF_OnReactorFieldGPUSamplerRegister() ;

static inline ::BoingKit::BoingManager_ReactorFieldRegisterDelegate* getStaticF_OnReactorFieldRegister() ;

static inline ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* getStaticF_OnReactorFieldUnregister() ;

static inline ::BoingKit::BoingManager_ReactorRegisterDelegate* getStaticF_OnReactorRegister() ;

static inline ::BoingKit::BoingManager_ReactorUnregisterDelegate* getStaticF_OnReactorUnregister() ;

static inline bool getStaticF_UseAsynchronousJobs() ;

static inline int32_t getStaticF_kEffectorParamsIncrement() ;

static inline ::ArrayW<::GlobalNamespace::BoingEffector_Params> getStaticF_s_aEffectorParams() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>* getStaticF_s_behaviorMap() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>* getStaticF_s_bonesMap() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>* getStaticF_s_cpuSamplerMap() ;

static inline float_t getStaticF_s_deltaTime() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>* getStaticF_s_effectorMap() ;

static inline ::UnityEngine::ComputeBuffer* getStaticF_s_effectorParamsBuffer() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_s_effectorParamsIndexMap() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>* getStaticF_s_effectorParamsList() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>* getStaticF_s_fieldMap() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>* getStaticF_s_gpuSamplerMap() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_s_managerGo() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>* getStaticF_s_reactorMap() ;

/// @brief Method get_Behaviors, addr 0x5e16c4c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingBehavior>>* get_Behaviors() ;

/// @brief Method get_DeltaTime, addr 0x5e16f1c, size 0x58, virtual false, abstract: false, final false
static inline float_t get_DeltaTime() ;

/// @brief Method get_Effectors, addr 0x5e16d3c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingEffector>>* get_Effectors() ;

/// @brief Method get_FixedDeltaTime, addr 0x5e16f74, size 0x8, virtual false, abstract: false, final false
static inline float_t get_FixedDeltaTime() ;

/// @brief Method get_NumBehaviors, addr 0x5e16f7c, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumBehaviors() ;

/// @brief Method get_NumCPUFieldSamplers, addr 0x5e1715c, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumCPUFieldSamplers() ;

/// @brief Method get_NumEffectors, addr 0x5e16ff4, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumEffectors() ;

/// @brief Method get_NumFields, addr 0x5e170e4, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumFields() ;

/// @brief Method get_NumGPUFieldSamplers, addr 0x5e171d4, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumGPUFieldSamplers() ;

/// @brief Method get_NumReactors, addr 0x5e1706c, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_NumReactors() ;

/// @brief Method get_ReactorFieldCPUSamlers, addr 0x5e16e2c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>* get_ReactorFieldCPUSamlers() ;

/// @brief Method get_ReactorFieldGPUSampler, addr 0x5e16ea4, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>* get_ReactorFieldGPUSampler() ;

/// @brief Method get_ReactorFields, addr 0x5e16db4, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorField>>* get_ReactorFields() ;

/// @brief Method get_Reactors, addr 0x5e16cc4, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactor>>* get_Reactors() ;

/// @brief Method get_SharedSphereCollider, addr 0x5e1740c, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::SphereCollider> get_SharedSphereCollider() ;

static inline void setStaticF_OnBehaviorRegister(::BoingKit::BoingManager_BehaviorRegisterDelegate*  value) ;

static inline void setStaticF_OnBehaviorUnregister(::BoingKit::BoingManager_BehaviorUnregisterDelegate*  value) ;

static inline void setStaticF_OnBonesRegister(::BoingKit::BoingManager_BonesRegisterDelegate*  value) ;

static inline void setStaticF_OnBonesUnregister(::BoingKit::BoingManager_BonesUnregisterDelegate*  value) ;

static inline void setStaticF_OnEffectorRegister(::BoingKit::BoingManager_EffectorRegisterDelegate*  value) ;

static inline void setStaticF_OnEffectorUnregister(::BoingKit::BoingManager_EffectorUnregisterDelegate*  value) ;

static inline void setStaticF_OnFieldGPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*  value) ;

static inline void setStaticF_OnReactorFieldCPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*  value) ;

static inline void setStaticF_OnReactorFieldCPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*  value) ;

static inline void setStaticF_OnReactorFieldGPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*  value) ;

static inline void setStaticF_OnReactorFieldRegister(::BoingKit::BoingManager_ReactorFieldRegisterDelegate*  value) ;

static inline void setStaticF_OnReactorFieldUnregister(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*  value) ;

static inline void setStaticF_OnReactorRegister(::BoingKit::BoingManager_ReactorRegisterDelegate*  value) ;

static inline void setStaticF_OnReactorUnregister(::BoingKit::BoingManager_ReactorUnregisterDelegate*  value) ;

static inline void setStaticF_UseAsynchronousJobs(bool  value) ;

static inline void setStaticF_kEffectorParamsIncrement(int32_t  value) ;

static inline void setStaticF_s_aEffectorParams(::ArrayW<::GlobalNamespace::BoingEffector_Params>  value) ;

static inline void setStaticF_s_behaviorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  value) ;

static inline void setStaticF_s_bonesMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  value) ;

static inline void setStaticF_s_cpuSamplerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  value) ;

static inline void setStaticF_s_deltaTime(float_t  value) ;

static inline void setStaticF_s_effectorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*  value) ;

static inline void setStaticF_s_effectorParamsBuffer(::UnityEngine::ComputeBuffer*  value) ;

static inline void setStaticF_s_effectorParamsIndexMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_s_effectorParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*  value) ;

static inline void setStaticF_s_fieldMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  value) ;

static inline void setStaticF_s_gpuSamplerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*  value) ;

static inline void setStaticF_s_managerGo(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_s_reactorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager(BoingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager(BoingManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/BonesUnregisterDelegate
class CORDL_TYPE BoingManager_BonesUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1b334, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBones*  bones, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1b354, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1b320, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingBones*  bones) ;

static inline ::BoingKit::BoingManager_BonesUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1b218, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_BonesUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BonesUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_BonesUnregisterDelegate(BoingManager_BonesUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BonesUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_BonesUnregisterDelegate(BoingManager_BonesUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5190};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_BonesUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/BonesRegisterDelegate
class CORDL_TYPE BoingManager_BonesRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1b1ec, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBones*  bones, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1b20c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1b1d8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingBones*  bones) ;

static inline ::BoingKit::BoingManager_BonesRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1b0d0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_BonesRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BonesRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_BonesRegisterDelegate(BoingManager_BonesRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BonesRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_BonesRegisterDelegate(BoingManager_BonesRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5189};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_BonesRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldGPUSamplerUnregisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldGPUSamplerUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1b0a4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1b0c4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1b090, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler) ;

static inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1af88, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldGPUSamplerUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldGPUSamplerUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldGPUSamplerUnregisterDelegate(BoingManager_ReactorFieldGPUSamplerUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldGPUSamplerUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldGPUSamplerUnregisterDelegate(BoingManager_ReactorFieldGPUSamplerUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldGPUSamplerRegisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldGPUSamplerRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1af5c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1af7c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1af48, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler) ;

static inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1ae40, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldGPUSamplerRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldGPUSamplerRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldGPUSamplerRegisterDelegate(BoingManager_ReactorFieldGPUSamplerRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldGPUSamplerRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldGPUSamplerRegisterDelegate(BoingManager_ReactorFieldGPUSamplerRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldCPUSamplerUnregisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldCPUSamplerUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1ae14, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1ae34, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1ae00, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler) ;

static inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1acf8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldCPUSamplerUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldCPUSamplerUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldCPUSamplerUnregisterDelegate(BoingManager_ReactorFieldCPUSamplerUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldCPUSamplerUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldCPUSamplerUnregisterDelegate(BoingManager_ReactorFieldCPUSamplerUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5186};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldCPUSamplerRegisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldCPUSamplerRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1accc, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1acec, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1acb8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler) ;

static inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1abb0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldCPUSamplerRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldCPUSamplerRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldCPUSamplerRegisterDelegate(BoingManager_ReactorFieldCPUSamplerRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldCPUSamplerRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldCPUSamplerRegisterDelegate(BoingManager_ReactorFieldCPUSamplerRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldUnregisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1ab84, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorField*  field, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1aba4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1ab70, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorField*  field) ;

static inline ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1aa68, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldUnregisterDelegate(BoingManager_ReactorFieldUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldUnregisterDelegate(BoingManager_ReactorFieldUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorFieldRegisterDelegate
class CORDL_TYPE BoingManager_ReactorFieldRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1aa3c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactorField*  field, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1aa5c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1aa28, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactorField*  field) ;

static inline ::BoingKit::BoingManager_ReactorFieldRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a920, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorFieldRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorFieldRegisterDelegate(BoingManager_ReactorFieldRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorFieldRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorFieldRegisterDelegate(BoingManager_ReactorFieldRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorFieldRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorUnregisterDelegate
class CORDL_TYPE BoingManager_ReactorUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a8f4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactor*  reactor, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a914, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a8e0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactor*  reactor) ;

static inline ::BoingKit::BoingManager_ReactorUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a7d8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorUnregisterDelegate(BoingManager_ReactorUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorUnregisterDelegate(BoingManager_ReactorUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/ReactorRegisterDelegate
class CORDL_TYPE BoingManager_ReactorRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a7ac, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactor*  reactor, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a7cc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a798, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingReactor*  reactor) ;

static inline ::BoingKit::BoingManager_ReactorRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a690, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_ReactorRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_ReactorRegisterDelegate(BoingManager_ReactorRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_ReactorRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_ReactorRegisterDelegate(BoingManager_ReactorRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_ReactorRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/EffectorUnregisterDelegate
class CORDL_TYPE BoingManager_EffectorUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a664, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingEffector*  effector, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a684, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a650, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingEffector*  effector) ;

static inline ::BoingKit::BoingManager_EffectorUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a548, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_EffectorUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_EffectorUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_EffectorUnregisterDelegate(BoingManager_EffectorUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_EffectorUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_EffectorUnregisterDelegate(BoingManager_EffectorUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_EffectorUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/EffectorRegisterDelegate
class CORDL_TYPE BoingManager_EffectorRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a51c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingEffector*  effector, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a53c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a508, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingEffector*  effector) ;

static inline ::BoingKit::BoingManager_EffectorRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a400, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_EffectorRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_EffectorRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_EffectorRegisterDelegate(BoingManager_EffectorRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_EffectorRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_EffectorRegisterDelegate(BoingManager_EffectorRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_EffectorRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/BehaviorUnregisterDelegate
class CORDL_TYPE BoingManager_BehaviorUnregisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a3d4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBehavior*  behavior, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a3f4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a3c0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingBehavior*  behavior) ;

static inline ::BoingKit::BoingManager_BehaviorUnregisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a2b8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_BehaviorUnregisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BehaviorUnregisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_BehaviorUnregisterDelegate(BoingManager_BehaviorUnregisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BehaviorUnregisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_BehaviorUnregisterDelegate(BoingManager_BehaviorUnregisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_BehaviorUnregisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.MulticastDelegate
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManager/BehaviorRegisterDelegate
class CORDL_TYPE BoingManager_BehaviorRegisterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e1a28c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBehavior*  behavior, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e1a2ac, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e1a278, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::BoingKit::BoingBehavior*  behavior) ;

static inline ::BoingKit::BoingManager_BehaviorRegisterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e1a170, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_BehaviorRegisterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BehaviorRegisterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManager_BehaviorRegisterDelegate(BoingManager_BehaviorRegisterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManager_BehaviorRegisterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManager_BehaviorRegisterDelegate(BoingManager_BehaviorRegisterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManager_BehaviorRegisterDelegate) == 0x80, "Size mismatch!");

} // namespace end def BoingKit
