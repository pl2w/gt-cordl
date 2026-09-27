#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallBallResetTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MonkeBallBallResetTrigger)
namespace GlobalNamespace {
class GameBall;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallBallResetTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallBallResetTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallBallResetTrigger*, "", "MonkeBallBallResetTrigger");
// Dependencies UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallBallResetTrigger
class CORDL_TYPE MonkeBallBallResetTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastBall, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastBall, put=__cordl_internal_set__lastBall)) ::UnityW<::GlobalNamespace::GameBall>  _lastBall;

/// @brief Field neutralMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_neutralMaterial, put=__cordl_internal_set_neutralMaterial)) ::UnityW<::UnityEngine::Material>  neutralMaterial;

/// @brief Field teamMaterials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamMaterials, put=__cordl_internal_set_teamMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  teamMaterials;

/// @brief Field trigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) ::UnityW<::UnityEngine::Renderer>  trigger;

static inline ::GlobalNamespace::MonkeBallBallResetTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57aa894, size 0x1f0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57aabe4, size 0x168, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::GameBall> const& __cordl_internal_get__lastBall() const;

constexpr ::UnityW<::GlobalNamespace::GameBall>& __cordl_internal_get__lastBall() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_neutralMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_neutralMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_teamMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_teamMaterials() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_trigger() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set__lastBall(::UnityW<::GlobalNamespace::GameBall>  value) ;

constexpr void __cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_trigger(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x57aad4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallBallResetTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallResetTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallBallResetTrigger(MonkeBallBallResetTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallResetTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallBallResetTrigger(MonkeBallBallResetTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1548};

/// @brief Field trigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___trigger;

/// @brief Field teamMaterials, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___teamMaterials;

/// @brief Field neutralMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___neutralMaterial;

/// @brief Field _lastBall, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameBall>  ____lastBall;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallBallResetTrigger, ___trigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallBallResetTrigger, ___teamMaterials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallBallResetTrigger, ___neutralMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallBallResetTrigger, ____lastBall) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallBallResetTrigger) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
