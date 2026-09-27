#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_TessellationJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_TessellationJobParameters_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerator_TessellationJob)
namespace GlobalNamespace {
struct MeshBuilderNative_NativeRectParams;
}
namespace GlobalNamespace {
struct MeshGenerator_BorderParams;
}
namespace System {
struct IntPtr;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::UIElements {
struct UnsafeMeshGenerationNode;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_TessellationJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_TessellationJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_TessellationJob, "UnityEngine.UIElements.UIR", "MeshGenerator/TessellationJob");
// Dependencies Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.TempMeshAllocator, UnityEngine.UIElements.UIR.MeshGenerator::TessellationJobParameters
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/TessellationJob
struct CORDL_TYPE MeshGenerator_TessellationJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method DrawBorder, addr 0xb7de4d4, size 0x2b0, virtual false, abstract: false, final false
inline void DrawBorder(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshGenerator_BorderParams>  borderParams) ;

/// @brief Method DrawRectangle, addr 0xb7deed4, size 0x998, virtual false, abstract: false, final false
inline void DrawRectangle(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::Texture*  tex) ;

/// @brief Method DrawSprite, addr 0xb7debe4, size 0x2f0, virtual false, abstract: false, final false
inline void DrawSprite(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::Sprite*  sprite) ;

/// @brief Method DrawVectorImage, addr 0xb7de784, size 0x460, virtual false, abstract: false, final false
inline void DrawVectorImage(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::UIElements::VectorImage*  vi) ;

/// @brief Method Execute, addr 0xb7de380, size 0x154, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Method ExtractHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T ExtractHandle(::System::IntPtr  handlePtr) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_TessellationJob() ;

// Ctor Parameters [CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobParameters", ty: "::Unity::Collections::NativeSlice_1<::GlobalNamespace::MeshGenerator_TessellationJobParameters>", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_TessellationJob(::UnityEngine::UIElements::TempMeshAllocator  allocator, ::Unity::Collections::NativeSlice_1<::GlobalNamespace::MeshGenerator_TessellationJobParameters>  jobParameters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [ReadOnly]
/// @brief Field allocator, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::TempMeshAllocator  allocator;

/// [ReadOnly]
/// @brief Field jobParameters, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::GlobalNamespace::MeshGenerator_TessellationJobParameters>  jobParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJob, allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJob, jobParameters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_TessellationJob) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
