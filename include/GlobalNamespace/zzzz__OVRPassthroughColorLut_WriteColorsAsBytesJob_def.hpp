#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_WriteColorsAsBytesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut_WriteColorsAsBytesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughColorLut_WriteColorsAsBytesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, "", "OVRPassthroughColorLut/WriteColorsAsBytesJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/WriteColorsAsBytesJob
struct CORDL_TYPE OVRPassthroughColorLut_WriteColorsAsBytesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa67e5d8, size 0x9c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughColorLut_WriteColorsAsBytesJob() ;

// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughColorLut_WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  source, int32_t  channelCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field target, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  target;

/// [NativeDisableParallelForRestriction]
/// [ReadOnly]
/// @brief Field source, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  source;

/// @brief Field channelCount, offset: 0x20, size: 0x4, def value: None
 int32_t  channelCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, channelCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
