#pragma once
// IWYU pragma private; include "GlobalNamespace/StringVertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StringVertex)
// Forward declare root types
namespace GlobalNamespace {
struct StringVertex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StringVertex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringVertex, "", "StringVertex");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: StringVertex
struct CORDL_TYPE StringVertex {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StringVertex() ;

// Ctor Parameters [CppParam { name: "p", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr StringVertex(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  prevp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field p, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  p;

/// @brief Field prevp, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  prevp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringVertex, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringVertex, prevp) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringVertex) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
