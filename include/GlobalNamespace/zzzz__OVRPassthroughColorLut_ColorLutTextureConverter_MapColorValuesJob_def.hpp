#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_ColorLutTextureConverter_TextureSettings_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, "", "OVRPassthroughColorLut/ColorLutTextureConverter/MapColorValuesJob");
// Dependencies OVRPassthroughColorLut::ColorLutTextureConverter::TextureSettings, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter/MapColorValuesJob
struct CORDL_TYPE ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xa67e918, size 0x98, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob() ;

// Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings  settings, ::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<uint8_t>  source) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field settings, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings  settings;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field target, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  target;

/// [NativeDisableParallelForRestriction]
/// [ReadOnly]
/// @brief Field source, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, settings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, source) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
