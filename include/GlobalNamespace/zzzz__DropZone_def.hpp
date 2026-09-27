#pragma once
// IWYU pragma private; include "GlobalNamespace/DropZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DropZone)
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class DropZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DropZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DropZone*, "", "DropZone");
// Dependencies BodyDockPositions::DropPositions, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DropZone
class CORDL_TYPE DropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field anchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::Transform>  anchor;

/// @brief Field dropPosition, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropPosition, put=__cordl_internal_set_dropPosition)) ::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition;

/// @brief Field forBodyDock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_forBodyDock, put=__cordl_internal_set_forBodyDock)) ::UnityW<::GlobalNamespace::BodyDockPositions>  forBodyDock;

static inline ::GlobalNamespace::DropZone* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchor() ;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& __cordl_internal_get_dropPosition() const;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& __cordl_internal_get_dropPosition() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get_forBodyDock() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get_forBodyDock() ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dropPosition(::GlobalNamespace::BodyDockPositions_DropPositions  value) ;

constexpr void __cordl_internal_set_forBodyDock(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

/// @brief Method .ctor, addr 0x571aed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropZone(DropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropZone(DropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1198};

/// @brief Field forBodyDock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ___forBodyDock;

/// @brief Field dropPosition, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::BodyDockPositions_DropPositions  ___dropPosition;

/// @brief Field anchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DropZone, ___forBodyDock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropZone, ___dropPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropZone, ___anchor) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DropZone) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
