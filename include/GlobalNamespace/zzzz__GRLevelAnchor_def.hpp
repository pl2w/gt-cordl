#pragma once
// IWYU pragma private; include "GlobalNamespace/GRLevelAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRLevelAnchor)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRLevelAnchor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRLevelAnchor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRLevelAnchor*, "", "GRLevelAnchor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRLevelAnchor
class CORDL_TYPE GRLevelAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field navigablePoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_navigablePoint, put=__cordl_internal_set_navigablePoint)) ::UnityW<::UnityEngine::Transform>  navigablePoint;

static inline ::GlobalNamespace::GRLevelAnchor* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_navigablePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_navigablePoint() ;

constexpr void __cordl_internal_set_navigablePoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x589e250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRLevelAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRLevelAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRLevelAnchor(GRLevelAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRLevelAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRLevelAnchor(GRLevelAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1986};

/// @brief Field navigablePoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___navigablePoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRLevelAnchor, ___navigablePoint) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRLevelAnchor) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
