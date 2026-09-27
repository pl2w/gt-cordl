#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTriggerRegistry_HandEffectsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandEffectsTriggerRegistry_HandEffectsJob)
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandEffectsTriggerRegistry_HandEffectsJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob, "", "HandEffectsTriggerRegistry/HandEffectsJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandEffectsTriggerRegistry/HandEffectsJob
struct CORDL_TYPE HandEffectsTriggerRegistry_HandEffectsJob {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Dispose, addr 0x56bed9c, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Execute, addr 0x56bf4ac, size 0x104, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsTriggerRegistry_HandEffectsJob() ;

// Ctor Parameters [CppParam { name: "positionInput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "closeOutput", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "actualListSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandEffectsTriggerRegistry_HandEffectsJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positionInput, ::Unity::Collections::NativeArray_1<bool>  closeOutput, int32_t  actualListSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [NativeDisableParallelForRestriction]
/// @brief Field positionInput, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positionInput;

/// [NativeDisableParallelForRestriction]
/// @brief Field closeOutput, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<bool>  closeOutput;

/// @brief Field actualListSize, offset: 0x20, size: 0x4, def value: None
 int32_t  actualListSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob, positionInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob, closeOutput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob, actualListSize) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
