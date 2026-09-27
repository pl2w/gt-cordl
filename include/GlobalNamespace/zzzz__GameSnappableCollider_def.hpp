#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappableCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameSnappableCollider)
namespace GlobalNamespace {
class GameSnappable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSnappableCollider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSnappableCollider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSnappableCollider*, "", "GameSnappableCollider");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSnappableCollider
class CORDL_TYPE GameSnappableCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gameSnappable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameSnappable, put=__cordl_internal_set_gameSnappable)) ::UnityW<::GlobalNamespace::GameSnappable>  gameSnappable;

static inline ::GlobalNamespace::GameSnappableCollider* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& __cordl_internal_get_gameSnappable() const;

constexpr ::UnityW<::GlobalNamespace::GameSnappable>& __cordl_internal_get_gameSnappable() ;

constexpr void __cordl_internal_set_gameSnappable(::UnityW<::GlobalNamespace::GameSnappable>  value) ;

/// @brief Method .ctor, addr 0x5841f00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameSnappableCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameSnappableCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameSnappableCollider(GameSnappableCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameSnappableCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameSnappableCollider(GameSnappableCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1795};

/// @brief Field gameSnappable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSnappable>  ___gameSnappable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSnappableCollider, ___gameSnappable) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSnappableCollider) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
