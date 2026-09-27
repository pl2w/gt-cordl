#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool_DataLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickPool_DataLocation)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeBrickPool_DataLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeBrickPool_DataLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeBrickPool_DataLocation, "UnityEngine.Rendering", "ProbeBrickPool/DataLocation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickPool/DataLocation
struct CORDL_TYPE ProbeBrickPool_DataLocation {
public:
// Declarations
/// @brief Method Cleanup, addr 0xb15a4c0, size 0x1cc, virtual false, abstract: false, final false
inline void Cleanup() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickPool_DataLocation() ;

// Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL1_G_ry", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL2_0", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL2_2", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexL2_3", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexProbeOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexValidity", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexSkyOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TexSkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeBrickPool_DataLocation(::UnityW<::UnityEngine::Texture>  TexL0_L1rx, ::UnityW<::UnityEngine::Texture>  TexL1_G_ry, ::UnityW<::UnityEngine::Texture>  TexL1_B_rz, ::UnityW<::UnityEngine::Texture>  TexL2_0, ::UnityW<::UnityEngine::Texture>  TexL2_1, ::UnityW<::UnityEngine::Texture>  TexL2_2, ::UnityW<::UnityEngine::Texture>  TexL2_3, ::UnityW<::UnityEngine::Texture>  TexProbeOcclusion, ::UnityW<::UnityEngine::Texture>  TexValidity, ::UnityW<::UnityEngine::Texture>  TexSkyOcclusion, ::UnityW<::UnityEngine::Texture>  TexSkyShadingDirectionIndices, int32_t  width, int32_t  height, int32_t  depth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field TexL0_L1rx, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL0_L1rx;

/// @brief Field TexL1_G_ry, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL1_G_ry;

/// @brief Field TexL1_B_rz, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL1_B_rz;

/// @brief Field TexL2_0, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL2_0;

/// @brief Field TexL2_1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL2_1;

/// @brief Field TexL2_2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL2_2;

/// @brief Field TexL2_3, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexL2_3;

/// @brief Field TexProbeOcclusion, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexProbeOcclusion;

/// @brief Field TexValidity, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexValidity;

/// @brief Field TexSkyOcclusion, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexSkyOcclusion;

/// @brief Field TexSkyShadingDirectionIndices, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  TexSkyShadingDirectionIndices;

/// @brief Field width, offset: 0x58, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x5c, size: 0x4, def value: None
 int32_t  height;

/// @brief Field depth, offset: 0x60, size: 0x4, def value: None
 int32_t  depth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL0_L1rx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL1_G_ry) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL1_B_rz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL2_0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL2_1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL2_2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexL2_3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexProbeOcclusion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexValidity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexSkyOcclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, TexSkyShadingDirectionIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, width) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, height) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_DataLocation, depth) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeBrickPool_DataLocation) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
