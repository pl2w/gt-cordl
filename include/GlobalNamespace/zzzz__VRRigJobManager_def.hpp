#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigJobManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformInput_def.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigJobManager)
namespace GlobalNamespace {
struct VRRigJobManager_VRRigTransformInput;
}
namespace GlobalNamespace {
struct VRRigJobManager_VRRigTransformJob;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigJobManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigJobManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigJobManager*, "", "VRRigJobManager");
// [DefaultExecutionOrder(0)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.Jobs.TransformAccessArray, UnityEngine.MonoBehaviour, VRRigJobManager::VRRigTransformInput, VRRigJobManager::VRRigTransformJob
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigJobManager
class CORDL_TYPE VRRigJobManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VRRigTransformInput = ::GlobalNamespace::VRRigJobManager_VRRigTransformInput;

using VRRigTransformJob = ::GlobalNamespace::VRRigJobManager_VRRigTransformJob;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::VRRigJobManager>  _instance;

/// @brief Field actualListSz, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_actualListSz, put=__cordl_internal_set_actualListSz)) int32_t  actualListSz;

/// @brief Field cachedInput, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_cachedInput, put=__cordl_internal_set_cachedInput)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  cachedInput;

/// @brief Field job, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::GlobalNamespace::VRRigJobManager_VRRigTransformJob  job;

/// @brief Field jobHandle, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field rigList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigList, put=__cordl_internal_set_rigList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigList;

/// @brief Field tAA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tAA, put=__cordl_internal_set_tAA)) ::UnityEngine::Jobs::TransformAccessArray  tAA;

/// @brief Method Awake, addr 0x5a10d08, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyInput, addr 0x5a11034, size 0x130, virtual false, abstract: false, final false
inline void CopyInput() ;

/// @brief Method DeregisterVRRig, addr 0x5a10f04, size 0x130, virtual false, abstract: false, final false
inline void DeregisterVRRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::VRRigJobManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a10dcc, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterVRRig, addr 0x5a10e2c, size 0xd8, virtual false, abstract: false, final false
inline void RegisterVRRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Update, addr 0x5a11164, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_actualListSz() const;

constexpr int32_t& __cordl_internal_get_actualListSz() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput> const& __cordl_internal_get_cachedInput() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>& __cordl_internal_get_cachedInput() ;

constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob const& __cordl_internal_get_job() const;

constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob& __cordl_internal_get_job() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigList() ;

constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get_tAA() const;

constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get_tAA() ;

constexpr void __cordl_internal_set_actualListSz(int32_t  value) ;

constexpr void __cordl_internal_set_cachedInput(::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  value) ;

constexpr void __cordl_internal_set_job(::GlobalNamespace::VRRigJobManager_VRRigTransformJob  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_rigList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_tAA(::UnityEngine::Jobs::TransformAccessArray  value) ;

/// @brief Method .ctor, addr 0x5a11244, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::VRRigJobManager> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5a10cc0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRigJobManager> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::VRRigJobManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigJobManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigJobManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigJobManager(VRRigJobManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigJobManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigJobManager(VRRigJobManager const& ) = delete;

/// @brief Field MaxSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxSize{static_cast<int32_t>(0x13)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2780};

/// @brief Field questJobThreads offset 0xffffffff size 0x4
static constexpr int32_t  questJobThreads{static_cast<int32_t>(0x2)};

/// @brief Field rigList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigList;

/// @brief Field cachedInput, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  ___cachedInput;

/// @brief Field tAA, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  ___tAA;

/// @brief Field actualListSz, offset: 0x40, size: 0x4, def value: None
 int32_t  ___actualListSz;

/// @brief Field jobHandle, offset: 0x48, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field job, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::VRRigJobManager_VRRigTransformJob  ___job;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___rigList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___cachedInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___tAA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___actualListSz) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___jobHandle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager, ___job) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigJobManager) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
