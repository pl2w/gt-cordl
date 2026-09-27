#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenePreparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ScenePreparer)
namespace GlobalNamespace {
class OVRManager;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenePreparer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScenePreparer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScenePreparer*, "", "ScenePreparer");
// [DefaultExecutionOrder(-9999)]
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScenePreparer
class CORDL_TYPE ScenePreparer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field betaDisableObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaDisableObjects, put=__cordl_internal_set_betaDisableObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  betaDisableObjects;

/// @brief Field betaEnableObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaEnableObjects, put=__cordl_internal_set_betaEnableObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  betaEnableObjects;

/// @brief Field ovrManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ovrManager, put=__cordl_internal_set_ovrManager)) ::UnityW<::GlobalNamespace::OVRManager>  ovrManager;

/// @brief Method Awake, addr 0x56ad740, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ScenePreparer* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_betaDisableObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_betaDisableObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_betaEnableObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_betaEnableObjects() ;

constexpr ::UnityW<::GlobalNamespace::OVRManager> const& __cordl_internal_get_ovrManager() const;

constexpr ::UnityW<::GlobalNamespace::OVRManager>& __cordl_internal_get_ovrManager() ;

constexpr void __cordl_internal_set_betaDisableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_betaEnableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value) ;

/// @brief Method .ctor, addr 0x56ad7f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScenePreparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScenePreparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScenePreparer(ScenePreparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScenePreparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScenePreparer(ScenePreparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{926};

/// @brief Field ovrManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRManager>  ___ovrManager;

/// @brief Field betaDisableObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___betaDisableObjects;

/// @brief Field betaEnableObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___betaEnableObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScenePreparer, ___ovrManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePreparer, ___betaDisableObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePreparer, ___betaEnableObjects) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScenePreparer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
