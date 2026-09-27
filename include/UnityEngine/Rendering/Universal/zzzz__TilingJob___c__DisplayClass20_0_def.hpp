#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TilingJob___c__DisplayClass20_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TilingJob___c__DisplayClass20_0)
// Forward declare root types
namespace GlobalNamespace {
struct TilingJob___c__DisplayClass20_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TilingJob___c__DisplayClass20_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TilingJob___c__DisplayClass20_0, "UnityEngine.Rendering.Universal", "TilingJob/<>c__DisplayClass20_0");
// [CompilerGenerated]
// Dependencies Unity.Mathematics.float3, UnityEngine.Rendering.VisibleLight
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TilingJob/<>c__DisplayClass20_0
struct CORDL_TYPE TilingJob___c__DisplayClass20_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TilingJob___c__DisplayClass20_0() ;

// Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightPosVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightDirVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "cosHalfAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TilingJob___c__DisplayClass20_0(::UnityEngine::Rendering::VisibleLight  light, ::Unity::Mathematics::float3  lightPosVS, ::Unity::Mathematics::float3  lightDirVS, float_t  cosHalfAngle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field light, offset: 0x0, size: 0x74, def value: None
 ::UnityEngine::Rendering::VisibleLight  light;

/// @brief Field lightPosVS, offset: 0x74, size: 0xc, def value: None
 ::Unity::Mathematics::float3  lightPosVS;

/// @brief Field lightDirVS, offset: 0x80, size: 0xc, def value: None
 ::Unity::Mathematics::float3  lightDirVS;

/// @brief Field cosHalfAngle, offset: 0x8c, size: 0x4, def value: None
 float_t  cosHalfAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TilingJob___c__DisplayClass20_0, light) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TilingJob___c__DisplayClass20_0, lightPosVS) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TilingJob___c__DisplayClass20_0, lightDirVS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TilingJob___c__DisplayClass20_0, cosHalfAngle) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TilingJob___c__DisplayClass20_0) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
