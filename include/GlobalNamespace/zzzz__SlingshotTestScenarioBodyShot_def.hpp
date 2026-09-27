#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioBodyShot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenarioBodyShot)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenarioBodyShot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenarioBodyShot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenarioBodyShot*, "", "SlingshotTestScenarioBodyShot");
// Dependencies SlingshotTestScenario, UnityEngine.Collider
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenarioBodyShot
class CORDL_TYPE SlingshotTestScenarioBodyShot : public ::GlobalNamespace::SlingshotTestScenario {
public:
// Declarations
/// @brief Field anchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::GameObject>  anchor;

/// @brief Field projectilePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field targetColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetColliders, put=__cordl_internal_set_targetColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  targetColliders;

/// @brief Field targetRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

static inline ::GlobalNamespace::SlingshotTestScenarioBodyShot* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_anchor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_targetColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_targetColliders() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x573d1f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenarioBodyShot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBodyShot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenarioBodyShot(SlingshotTestScenarioBodyShot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBodyShot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenarioBodyShot(SlingshotTestScenarioBodyShot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1230};

/// @brief Field projectilePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// @brief Field targetRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field targetColliders, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___targetColliders;

/// @brief Field anchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBodyShot, ___projectilePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBodyShot, ___targetRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBodyShot, ___targetColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBodyShot, ___anchor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotTestScenarioBodyShot) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
