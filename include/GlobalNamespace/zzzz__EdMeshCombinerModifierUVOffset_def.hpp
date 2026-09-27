#pragma once
// IWYU pragma private; include "GlobalNamespace/EdMeshCombinerModifierUVOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(EdMeshCombinerModifierUVOffset)
// Forward declare root types
namespace GlobalNamespace {
class EdMeshCombinerModifierUVOffset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EdMeshCombinerModifierUVOffset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdMeshCombinerModifierUVOffset*, "", "EdMeshCombinerModifierUVOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: EdMeshCombinerModifierUVOffset
class CORDL_TYPE EdMeshCombinerModifierUVOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxUvOffset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxUvOffset, put=__cordl_internal_set_maxUvOffset)) ::UnityEngine::Vector2  maxUvOffset;

/// @brief Field minUvOffset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_minUvOffset, put=__cordl_internal_set_minUvOffset)) ::UnityEngine::Vector2  minUvOffset;

static inline ::GlobalNamespace::EdMeshCombinerModifierUVOffset* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_maxUvOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_maxUvOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_minUvOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_minUvOffset() ;

constexpr void __cordl_internal_set_maxUvOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_minUvOffset(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5802e58, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerModifierUVOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerModifierUVOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdMeshCombinerModifierUVOffset(EdMeshCombinerModifierUVOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerModifierUVOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdMeshCombinerModifierUVOffset(EdMeshCombinerModifierUVOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1683};

/// @brief Field minUvOffset, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___minUvOffset;

/// @brief Field maxUvOffset, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___maxUvOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdMeshCombinerModifierUVOffset, ___minUvOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerModifierUVOffset, ___maxUvOffset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdMeshCombinerModifierUVOffset) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
