#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyXRayVisionEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GREnemyXRayVisionEffect)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GREnemyXRayVisionEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyXRayVisionEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyXRayVisionEffect*, "", "GREnemyXRayVisionEffect");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyXRayVisionEffect
class CORDL_TYPE GREnemyXRayVisionEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enemyXRayEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemyXRayEffect, put=__cordl_internal_set_enemyXRayEffect)) ::UnityW<::UnityEngine::GameObject>  enemyXRayEffect;

/// @brief Method Awake, addr 0x5899eec, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GREnemyXRayVisionEffect* New_ctor() ;

/// @brief Method ShouldShowEffect, addr 0x5899f44, size 0x60, virtual false, abstract: false, final false
inline bool ShouldShowEffect() ;

/// @brief Method Start, addr 0x5899ef0, size 0x54, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateEffect, addr 0x5899fa4, size 0x28, virtual false, abstract: false, final false
inline void UpdateEffect() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_enemyXRayEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_enemyXRayEffect() ;

constexpr void __cordl_internal_set_enemyXRayEffect(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5899fcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyXRayVisionEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyXRayVisionEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyXRayVisionEffect(GREnemyXRayVisionEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyXRayVisionEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyXRayVisionEffect(GREnemyXRayVisionEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1969};

/// @brief Field enemyXRayEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___enemyXRayEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyXRayVisionEffect, ___enemyXRayEffect) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyXRayVisionEffect) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
