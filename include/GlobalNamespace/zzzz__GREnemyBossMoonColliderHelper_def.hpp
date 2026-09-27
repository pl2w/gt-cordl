#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoonColliderHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GREnemyBossMoonColliderHelper)
namespace GlobalNamespace {
class GREnemyBossMoon;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GREnemyBossMoonColliderHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyBossMoonColliderHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoonColliderHelper*, "", "GREnemyBossMoonColliderHelper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoonColliderHelper
class CORDL_TYPE GREnemyBossMoonColliderHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ResizeCollider, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_ResizeCollider, put=__cordl_internal_set_ResizeCollider)) ::UnityEngine::Vector3  ResizeCollider;

/// @brief Field ResizeOnAwake, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ResizeOnAwake, put=__cordl_internal_set_ResizeOnAwake)) bool  ResizeOnAwake;

/// @brief Field boss, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_boss, put=__cordl_internal_set_boss)) ::UnityW<::GlobalNamespace::GREnemyBossMoon>  boss;

/// @brief Field lastTriggered, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggered, put=__cordl_internal_set_lastTriggered)) float_t  lastTriggered;

/// @brief Field localPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_localPlayer, put=__cordl_internal_set_localPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  localPlayer;

/// @brief Method Awake, addr 0x5885d5c, size 0x3c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GREnemyBossMoonColliderHelper* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5885d98, size 0x250, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ResizeCollider() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ResizeCollider() ;

constexpr bool const& __cordl_internal_get_ResizeOnAwake() const;

constexpr bool& __cordl_internal_get_ResizeOnAwake() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& __cordl_internal_get_boss() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& __cordl_internal_get_boss() ;

constexpr float_t const& __cordl_internal_get_lastTriggered() const;

constexpr float_t& __cordl_internal_get_lastTriggered() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_localPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_localPlayer() ;

constexpr void __cordl_internal_set_ResizeCollider(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ResizeOnAwake(bool  value) ;

constexpr void __cordl_internal_set_boss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value) ;

constexpr void __cordl_internal_set_lastTriggered(float_t  value) ;

constexpr void __cordl_internal_set_localPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

/// @brief Method .ctor, addr 0x5885fe8, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoonColliderHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonColliderHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoonColliderHelper(GREnemyBossMoonColliderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonColliderHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoonColliderHelper(GREnemyBossMoonColliderHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1942};

/// @brief Field ResizeOnAwake, offset: 0x20, size: 0x1, def value: None
 bool  ___ResizeOnAwake;

/// @brief Field ResizeCollider, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ResizeCollider;

/// [SerializeField]
/// @brief Field boss, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  ___boss;

/// [SerializeField]
/// @brief Field localPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___localPlayer;

/// @brief Field lastTriggered, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastTriggered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonColliderHelper, ___ResizeOnAwake) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonColliderHelper, ___ResizeCollider) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonColliderHelper, ___boss) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonColliderHelper, ___localPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonColliderHelper, ___lastTriggered) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoonColliderHelper) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
