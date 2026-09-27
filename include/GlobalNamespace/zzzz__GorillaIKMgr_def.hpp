#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKJob_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKTransformJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIKMgr)
namespace GlobalNamespace {
struct GorillaIKMgr_IKConstantInput;
}
namespace GlobalNamespace {
struct GorillaIKMgr_IKInput;
}
namespace GlobalNamespace {
struct GorillaIKMgr_IKJob;
}
namespace GlobalNamespace {
struct GorillaIKMgr_IKOutput;
}
namespace GlobalNamespace {
struct GorillaIKMgr_IKTransformJob;
}
namespace GlobalNamespace {
class GorillaIKMgr___c__DisplayClass25_0;
}
namespace GlobalNamespace {
class GorillaIK;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaIKMgr;
}
namespace GlobalNamespace {
class GorillaIKMgr___c__DisplayClass25_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaIKMgr*);
MARK_REF_T(::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr*, "", "GorillaIKMgr");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*, "", "GorillaIKMgr/<>c__DisplayClass25_0");
// Dependencies GorillaIKMgr::IKJob, GorillaIKMgr::IKTransformJob, Unity.Jobs.JobHandle, UnityEngine.Jobs.TransformAccessArray, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIKMgr
class CORDL_TYPE GorillaIKMgr : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IKConstantInput = ::GlobalNamespace::GorillaIKMgr_IKConstantInput;

using IKInput = ::GlobalNamespace::GorillaIKMgr_IKInput;

using IKJob = ::GlobalNamespace::GorillaIKMgr_IKJob;

using IKOutput = ::GlobalNamespace::GorillaIKMgr_IKOutput;

using IKTransformJob = ::GlobalNamespace::GorillaIKMgr_IKTransformJob;

using __c__DisplayClass25_0 = ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GorillaIKMgr>  _instance;

/// @brief Field actualListSz, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_actualListSz, put=__cordl_internal_set_actualListSz)) int32_t  actualListSz;

/// @brief Field firstFrame, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstFrame, put=__cordl_internal_set_firstFrame)) bool  firstFrame;

/// @brief Field ikList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ikList, put=__cordl_internal_set_ikList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*  ikList;

/// @brief Field job, offset 0x70, size 0x30 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::GlobalNamespace::GorillaIKMgr_IKJob  job;

/// @brief Field jobHandle, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field jobXform, offset 0xa0, size 0x20 
 __declspec(property(get=__cordl_internal_get_jobXform, put=__cordl_internal_set_jobXform)) ::GlobalNamespace::GorillaIKMgr_IKTransformJob  jobXform;

/// @brief Field jobXformHandle, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobXformHandle, put=__cordl_internal_set_jobXformHandle)) ::Unity::Jobs::JobHandle  jobXformHandle;

/// @brief Field lerpValue, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field playerIK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerIK, put=setStaticF_playerIK)) ::UnityW<::GlobalNamespace::GorillaIK>  playerIK;

/// @brief Field tAA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tAA, put=__cordl_internal_set_tAA)) ::UnityEngine::Jobs::TransformAccessArray  tAA;

/// @brief Field transformList, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformList, put=__cordl_internal_set_transformList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  transformList;

/// @brief Field updatedSinceLastRun, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedSinceLastRun, put=__cordl_internal_set_updatedSinceLastRun)) bool  updatedSinceLastRun;

/// @brief Method AddPlayerIK, addr 0x5916624, size 0x50, virtual false, abstract: false, final false
static inline void AddPlayerIK(::GlobalNamespace::GorillaIK*  _playerIK) ;

/// @brief Method Awake, addr 0x5915824, size 0x22c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyInput, addr 0x5915c00, size 0x2c0, virtual false, abstract: false, final false
inline void CopyInput() ;

/// @brief Method CopyOutput, addr 0x5915ec0, size 0x650, virtual false, abstract: false, final false
inline void CopyOutput() ;

/// @brief Method DeregisterIK, addr 0x5913d78, size 0x194, virtual false, abstract: false, final false
inline void DeregisterIK(::GlobalNamespace::GorillaIK*  ik) ;

/// @brief Method LateUpdate, addr 0x5916510, size 0x114, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaIKMgr* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5915a50, size 0xfc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterIK, addr 0x5913c30, size 0xe8, virtual false, abstract: false, final false
inline void RegisterIK(::GlobalNamespace::GorillaIK*  ik) ;

/// @brief Method SetConstantData, addr 0x5915b4c, size 0xac, virtual false, abstract: false, final false
inline void SetConstantData(::GlobalNamespace::GorillaIK*  ik, int32_t  index) ;

constexpr int32_t const& __cordl_internal_get_actualListSz() const;

constexpr int32_t& __cordl_internal_get_actualListSz() ;

constexpr bool const& __cordl_internal_get_firstFrame() const;

constexpr bool& __cordl_internal_get_firstFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>* const& __cordl_internal_get_ikList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*& __cordl_internal_get_ikList() ;

constexpr ::GlobalNamespace::GorillaIKMgr_IKJob const& __cordl_internal_get_job() const;

constexpr ::GlobalNamespace::GorillaIKMgr_IKJob& __cordl_internal_get_job() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob const& __cordl_internal_get_jobXform() const;

constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob& __cordl_internal_get_jobXform() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobXformHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobXformHandle() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get_tAA() const;

constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get_tAA() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_transformList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_transformList() ;

constexpr bool const& __cordl_internal_get_updatedSinceLastRun() const;

constexpr bool& __cordl_internal_get_updatedSinceLastRun() ;

constexpr void __cordl_internal_set_actualListSz(int32_t  value) ;

constexpr void __cordl_internal_set_firstFrame(bool  value) ;

constexpr void __cordl_internal_set_ikList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*  value) ;

constexpr void __cordl_internal_set_job(::GlobalNamespace::GorillaIKMgr_IKJob  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_jobXform(::GlobalNamespace::GorillaIKMgr_IKTransformJob  value) ;

constexpr void __cordl_internal_set_jobXformHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_tAA(::UnityEngine::Jobs::TransformAccessArray  value) ;

constexpr void __cordl_internal_set_transformList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_updatedSinceLastRun(bool  value) ;

/// @brief Method .ctor, addr 0x5916674, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaIKMgr> getStaticF__instance() ;

static inline ::UnityW<::GlobalNamespace::GorillaIK> getStaticF_playerIK() ;

/// @brief Method get_Instance, addr 0x59157dc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaIKMgr> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GorillaIKMgr>  value) ;

static inline void setStaticF_playerIK(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKMgr", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIKMgr(GorillaIKMgr && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKMgr", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIKMgr(GorillaIKMgr const& ) = delete;

/// @brief Field MaxSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxSize{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2192};

/// @brief Field tFormCount offset 0xffffffff size 0x4
static constexpr int32_t  tFormCount{static_cast<int32_t>(0x8)};

/// @brief Field ikList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*  ___ikList;

/// @brief Field actualListSz, offset: 0x28, size: 0x4, def value: None
 int32_t  ___actualListSz;

/// @brief Field jobHandle, offset: 0x30, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field jobXformHandle, offset: 0x40, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobXformHandle;

/// @brief Field firstFrame, offset: 0x50, size: 0x1, def value: None
 bool  ___firstFrame;

/// @brief Field tAA, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  ___tAA;

/// @brief Field transformList, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___transformList;

/// @brief Field updatedSinceLastRun, offset: 0x68, size: 0x1, def value: None
 bool  ___updatedSinceLastRun;

/// @brief Field lerpValue, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lerpValue;

/// @brief Field job, offset: 0x70, size: 0x30, def value: None
 ::GlobalNamespace::GorillaIKMgr_IKJob  ___job;

/// @brief Field jobXform, offset: 0xa0, size: 0x20, def value: None
 ::GlobalNamespace::GorillaIKMgr_IKTransformJob  ___jobXform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___ikList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___actualListSz) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___jobHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___jobXformHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___firstFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___tAA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___transformList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___updatedSinceLastRun) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___lerpValue) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___job) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr, ___jobXform) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIKMgr/<>c__DisplayClass25_0
class CORDL_TYPE GorillaIKMgr___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field ik, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ik, put=__cordl_internal_set_ik)) ::UnityW<::GlobalNamespace::GorillaIK>  ik;

static inline ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <DeregisterIK>b__0, addr 0x5917c28, size 0x6c, virtual false, abstract: false, final false
inline bool _DeregisterIK_b__0(::GlobalNamespace::GorillaIK*  curr) ;

constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& __cordl_internal_get_ik() const;

constexpr ::UnityW<::GlobalNamespace::GorillaIK>& __cordl_internal_get_ik() ;

constexpr void __cordl_internal_set_ik(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

/// @brief Method .ctor, addr 0x5915bf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKMgr___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIKMgr___c__DisplayClass25_0(GorillaIKMgr___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKMgr___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIKMgr___c__DisplayClass25_0(GorillaIKMgr___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2191};

/// @brief Field ik, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaIK>  ___ik;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0, ___ik) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
