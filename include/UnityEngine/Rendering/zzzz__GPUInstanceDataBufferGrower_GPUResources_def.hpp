#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferGrower_GPUResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferGrower_GPUResources)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUInstanceDataBufferGrower_GPUResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower/GPUResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower/GPUResources
struct CORDL_TYPE GPUInstanceDataBufferGrower_GPUResources {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CreateResources, addr 0xb1fda84, size 0x4, virtual false, abstract: false, final false
inline void CreateResources() ;

/// @brief Method Dispose, addr 0xb1fddac, size 0xc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method LoadShaders, addr 0xb1fdcf4, size 0xb8, virtual false, abstract: false, final false
inline void LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferGrower_GPUResources() ;

// Ctor Parameters [CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBufferGrower_GPUResources(::UnityW<::UnityEngine::ComputeShader>  cs, int32_t  kernelId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field cs, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  cs;

/// @brief Field kernelId, offset: 0x8, size: 0x4, def value: None
 int32_t  kernelId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources, cs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources, kernelId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
