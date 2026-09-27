#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransformExtensions_TransformParallelForLoopStruct`1_TransformJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransformExtensions_TransformParallelForLoopStruct`1_TransformJobData)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData, "UnityEngine.Jobs", "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<T>
struct CORDL_TYPE TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData() ;

// Ctor Parameters [CppParam { name: "TransformAccessArray", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsReadOnly", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_TransformJobData(::System::IntPtr  TransformAccessArray, int32_t  IsReadOnly) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field TransformAccessArray, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  TransformAccessArray;

/// @brief Field IsReadOnly, offset: 0x8, size: 0x4, def value: None
 int32_t  IsReadOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
