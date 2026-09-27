#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraSceneTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaCameraSceneTrigger)
namespace GlobalNamespace {
class GorillaCameraTriggerIndex;
}
namespace GlobalNamespace {
class GorillaSceneCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCameraSceneTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCameraSceneTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCameraSceneTrigger*, "", "GorillaCameraSceneTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCameraSceneTrigger
class CORDL_TYPE GorillaCameraSceneTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentSceneTrigger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSceneTrigger, put=__cordl_internal_set_currentSceneTrigger)) ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  currentSceneTrigger;

/// @brief Field mostRecentSceneTrigger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mostRecentSceneTrigger, put=__cordl_internal_set_mostRecentSceneTrigger)) ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  mostRecentSceneTrigger;

/// @brief Field sceneCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneCamera, put=__cordl_internal_set_sceneCamera)) ::UnityW<::GlobalNamespace::GorillaSceneCamera>  sceneCamera;

/// @brief Method ChangeScene, addr 0x579d5d8, size 0x104, virtual false, abstract: false, final false
inline void ChangeScene(::GlobalNamespace::GorillaCameraTriggerIndex*  triggerLeft) ;

static inline ::GlobalNamespace::GorillaCameraSceneTrigger* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex> const& __cordl_internal_get_currentSceneTrigger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>& __cordl_internal_get_currentSceneTrigger() ;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex> const& __cordl_internal_get_mostRecentSceneTrigger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>& __cordl_internal_get_mostRecentSceneTrigger() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSceneCamera> const& __cordl_internal_get_sceneCamera() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSceneCamera>& __cordl_internal_get_sceneCamera() ;

constexpr void __cordl_internal_set_currentSceneTrigger(::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  value) ;

constexpr void __cordl_internal_set_mostRecentSceneTrigger(::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  value) ;

constexpr void __cordl_internal_set_sceneCamera(::UnityW<::GlobalNamespace::GorillaSceneCamera>  value) ;

/// @brief Method .ctor, addr 0x579d77c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCameraSceneTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraSceneTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCameraSceneTrigger(GorillaCameraSceneTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraSceneTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCameraSceneTrigger(GorillaCameraSceneTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1499};

/// @brief Field sceneCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSceneCamera>  ___sceneCamera;

/// @brief Field currentSceneTrigger, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  ___currentSceneTrigger;

/// @brief Field mostRecentSceneTrigger, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaCameraTriggerIndex>  ___mostRecentSceneTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCameraSceneTrigger, ___sceneCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraSceneTrigger, ___currentSceneTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraSceneTrigger, ___mostRecentSceneTrigger) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCameraSceneTrigger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
