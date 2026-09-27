#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisColumns___c__DisplayClass37_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthesisColumns___c__DisplayClass37_0)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SynthesisColumns___c__DisplayClass37_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, "", "SynthesisColumns/<>c__DisplayClass37_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynthesisColumns/<>c__DisplayClass37_0
struct CORDL_TYPE SynthesisColumns___c__DisplayClass37_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns___c__DisplayClass37_0() ;

// Ctor Parameters [CppParam { name: "verts", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "vi", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvs", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tris", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ti", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SynthesisColumns___c__DisplayClass37_0(::ArrayW<::UnityEngine::Vector3>  verts, int32_t  vi, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<int32_t>  tris, int32_t  ti) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field verts, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  verts;

/// @brief Field vi, offset: 0x8, size: 0x4, def value: None
 int32_t  vi;

/// @brief Field uvs, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uvs;

/// @brief Field tris, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  tris;

/// @brief Field ti, offset: 0x20, size: 0x4, def value: None
 int32_t  ti;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, verts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, vi) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, uvs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, tris) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0, ti) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
