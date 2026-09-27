#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderPassDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer_RenderPassDescriptor)
// Forward declare root types
namespace GlobalNamespace {
struct ScriptableRenderer_RenderPassDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassDescriptor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassDescriptor
struct CORDL_TYPE ScriptableRenderer_RenderPassDescriptor {
public:
// Declarations
/// @brief Method .ctor, addr 0xb24e744, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  sampleCount, int32_t  rtID) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_RenderPassDescriptor() ;

// Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "samples", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "depthID", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScriptableRenderer_RenderPassDescriptor(int32_t  w, int32_t  h, int32_t  samples, int32_t  depthID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field w, offset: 0x0, size: 0x4, def value: None
 int32_t  w;

/// @brief Field h, offset: 0x4, size: 0x4, def value: None
 int32_t  h;

/// @brief Field samples, offset: 0x8, size: 0x4, def value: None
 int32_t  samples;

/// @brief Field depthID, offset: 0xc, size: 0x4, def value: None
 int32_t  depthID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, h) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, depthID) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
