#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKConstantInput_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKInput_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKOutput_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIKMgr_IKJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIKMgr_IKJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIKMgr_IKJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr_IKJob, "", "GorillaIKMgr/IKJob");
// [BurstCompile]
// Dependencies GorillaIKMgr::IKConstantInput, GorillaIKMgr::IKInput, GorillaIKMgr::IKOutput, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaIKMgr/IKJob
struct CORDL_TYPE GorillaIKMgr_IKJob {
public:
// Declarations
/// @brief Field forearmLocalPos, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_forearmLocalPos, put=setStaticF_forearmLocalPos)) ::UnityEngine::Vector3  forearmLocalPos;

/// @brief Field handLocalPos, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_handLocalPos, put=setStaticF_handLocalPos)) ::UnityEngine::Vector3  handLocalPos;

/// @brief Field upperArmLocalPos, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_upperArmLocalPos, put=setStaticF_upperArmLocalPos)) ::UnityEngine::Vector3  upperArmLocalPos;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x591673c, size 0x13cc, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

static inline ::UnityEngine::Vector3 getStaticF_forearmLocalPos() ;

static inline ::UnityEngine::Vector3 getStaticF_handLocalPos() ;

static inline ::UnityEngine::Vector3 getStaticF_upperArmLocalPos() ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

static inline void setStaticF_forearmLocalPos(::UnityEngine::Vector3  value) ;

static inline void setStaticF_handLocalPos(::UnityEngine::Vector3  value) ;

static inline void setStaticF_upperArmLocalPos(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr_IKJob() ;

// Ctor Parameters [CppParam { name: "constantInput", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKConstantInput>", modifiers: "", def_value: None, comment: None }, CppParam { name: "input", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKInput>", modifiers: "", def_value: None, comment: None }, CppParam { name: "output", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKOutput>", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIKMgr_IKJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKConstantInput>  constantInput, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKInput>  input, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKOutput>  output) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field constantInput, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKConstantInput>  constantInput;

/// @brief Field input, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKInput>  input;

/// @brief Field output, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKOutput>  output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKJob, constantInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKJob, input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKJob, output) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr_IKJob) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
