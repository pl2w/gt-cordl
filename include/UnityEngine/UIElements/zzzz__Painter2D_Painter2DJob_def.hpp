#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D_Painter2DJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_Painter2DJobData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Painter2D_Painter2DJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct Painter2D_Painter2DJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Painter2D_Painter2DJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Painter2D_Painter2DJob, "UnityEngine.UIElements", "Painter2D/Painter2DJob");
// Dependencies System.IntPtr, Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.Painter2D::Painter2DJobData, UnityEngine.UIElements.TempMeshAllocator
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Painter2D/Painter2DJob
struct CORDL_TYPE Painter2D_Painter2DJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb8c7a90, size 0x2e8, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr Painter2D_Painter2DJob() ;

// Ctor Parameters [CppParam { name: "painterHandle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobParameters", ty: "::Unity::Collections::NativeSlice_1<::GlobalNamespace::Painter2D_Painter2DJobData>", modifiers: "", def_value: None, comment: None }]
constexpr Painter2D_Painter2DJob(::System::IntPtr  painterHandle, ::UnityEngine::UIElements::TempMeshAllocator  allocator, ::Unity::Collections::NativeSlice_1<::GlobalNamespace::Painter2D_Painter2DJobData>  jobParameters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field painterHandle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  painterHandle;

/// [ReadOnly]
/// @brief Field allocator, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::TempMeshAllocator  allocator;

/// [ReadOnly]
/// @brief Field jobParameters, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::GlobalNamespace::Painter2D_Painter2DJobData>  jobParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Painter2D_Painter2DJob, painterHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Painter2D_Painter2DJob, allocator) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Painter2D_Painter2DJob, jobParameters) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Painter2D_Painter2DJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
