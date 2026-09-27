#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/OpacityIdAccelerator_OpacityIdUpdateJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpacityIdAccelerator_OpacityIdUpdateJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct OpacityIdAccelerator_OpacityIdUpdateJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob, "UnityEngine.UIElements.UIR", "OpacityIdAccelerator/OpacityIdUpdateJob");
// Dependencies Unity.Collections.NativeSlice`1<T>, UnityEngine.Color32, UnityEngine.UIElements.Vertex
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.OpacityIdAccelerator/OpacityIdUpdateJob
struct CORDL_TYPE OpacityIdAccelerator_OpacityIdUpdateJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb7dfb50, size 0xd8, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpacityIdAccelerator_OpacityIdUpdateJob() ;

// Ctor Parameters [CppParam { name: "oldVerts", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None, comment: None }, CppParam { name: "newVerts", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None, comment: None }, CppParam { name: "opacityData", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }]
constexpr OpacityIdAccelerator_OpacityIdUpdateJob(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  oldVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  newVerts, ::UnityEngine::Color32  opacityData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8550};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field oldVerts, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  oldVerts;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field newVerts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  newVerts;

/// @brief Field opacityData, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Color32  opacityData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob, oldVerts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob, newVerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob, opacityData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
