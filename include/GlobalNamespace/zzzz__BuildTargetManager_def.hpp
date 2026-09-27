#pragma once
// IWYU pragma private; include "GlobalNamespace/BuildTargetManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuildTargetManager_BuildTowards_def.hpp"
#include "GlobalNamespace/zzzz__BuildTargetManager_NetworkBackend_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BuildTargetManager)
namespace GlobalNamespace {
struct BuildTargetManager_BuildTowards;
}
namespace GlobalNamespace {
struct BuildTargetManager_NetworkBackend;
}
namespace GlobalNamespace {
class GorillaTagger;
}
namespace GlobalNamespace {
class OVRManager;
}
// Forward declare root types
namespace GlobalNamespace {
class BuildTargetManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuildTargetManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuildTargetManager*, "", "BuildTargetManager");
// Dependencies BuildTargetManager::BuildTowards, BuildTargetManager::NetworkBackend, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuildTargetManager
class CORDL_TYPE BuildTargetManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BuildTowards = ::GlobalNamespace::BuildTargetManager_BuildTowards;

using NetworkBackend = ::GlobalNamespace::BuildTargetManager_NetworkBackend;

/// @brief Field betaDisableObjects, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaDisableObjects, put=__cordl_internal_set_betaDisableObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  betaDisableObjects;

/// @brief Field betaEnableObjects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaEnableObjects, put=__cordl_internal_set_betaEnableObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  betaEnableObjects;

/// @brief Field currentBuildTargetDONOTCHANGE, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBuildTargetDONOTCHANGE, put=__cordl_internal_set_currentBuildTargetDONOTCHANGE)) ::GlobalNamespace::BuildTargetManager_BuildTowards  currentBuildTargetDONOTCHANGE;

/// @brief Field enableAllCosmetics, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableAllCosmetics, put=__cordl_internal_set_enableAllCosmetics)) bool  enableAllCosmetics;

/// @brief Field gorillaTagger, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaTagger, put=__cordl_internal_set_gorillaTagger)) ::UnityW<::GlobalNamespace::GorillaTagger>  gorillaTagger;

/// @brief Field isBeta, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBeta, put=__cordl_internal_set_isBeta)) bool  isBeta;

/// @brief Field isQA, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_isQA, put=__cordl_internal_set_isQA)) bool  isQA;

/// @brief Field networkBackend, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkBackend, put=__cordl_internal_set_networkBackend)) ::GlobalNamespace::BuildTargetManager_NetworkBackend  networkBackend;

/// @brief Field newBuildTarget, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_newBuildTarget, put=__cordl_internal_set_newBuildTarget)) ::GlobalNamespace::BuildTargetManager_BuildTowards  newBuildTarget;

/// @brief Field ovrManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ovrManager, put=__cordl_internal_set_ovrManager)) ::UnityW<::GlobalNamespace::OVRManager>  ovrManager;

/// @brief Field path, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field spoofChild, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_spoofChild, put=__cordl_internal_set_spoofChild)) bool  spoofChild;

/// @brief Field spoofIDs, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_spoofIDs, put=__cordl_internal_set_spoofIDs)) bool  spoofIDs;

/// @brief Method GetPath, addr 0x5adf5ac, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetPath() ;

static inline ::GlobalNamespace::BuildTargetManager* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_betaDisableObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_betaDisableObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_betaEnableObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_betaEnableObjects() ;

constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards const& __cordl_internal_get_currentBuildTargetDONOTCHANGE() const;

constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards& __cordl_internal_get_currentBuildTargetDONOTCHANGE() ;

constexpr bool const& __cordl_internal_get_enableAllCosmetics() const;

constexpr bool& __cordl_internal_get_enableAllCosmetics() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& __cordl_internal_get_gorillaTagger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& __cordl_internal_get_gorillaTagger() ;

constexpr bool const& __cordl_internal_get_isBeta() const;

constexpr bool& __cordl_internal_get_isBeta() ;

constexpr bool const& __cordl_internal_get_isQA() const;

constexpr bool& __cordl_internal_get_isQA() ;

constexpr ::GlobalNamespace::BuildTargetManager_NetworkBackend const& __cordl_internal_get_networkBackend() const;

constexpr ::GlobalNamespace::BuildTargetManager_NetworkBackend& __cordl_internal_get_networkBackend() ;

constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards const& __cordl_internal_get_newBuildTarget() const;

constexpr ::GlobalNamespace::BuildTargetManager_BuildTowards& __cordl_internal_get_newBuildTarget() ;

constexpr ::UnityW<::GlobalNamespace::OVRManager> const& __cordl_internal_get_ovrManager() const;

constexpr ::UnityW<::GlobalNamespace::OVRManager>& __cordl_internal_get_ovrManager() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr bool const& __cordl_internal_get_spoofChild() const;

constexpr bool& __cordl_internal_get_spoofChild() ;

constexpr bool const& __cordl_internal_get_spoofIDs() const;

constexpr bool& __cordl_internal_get_spoofIDs() ;

constexpr void __cordl_internal_set_betaDisableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_betaEnableObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_currentBuildTargetDONOTCHANGE(::GlobalNamespace::BuildTargetManager_BuildTowards  value) ;

constexpr void __cordl_internal_set_enableAllCosmetics(bool  value) ;

constexpr void __cordl_internal_set_gorillaTagger(::UnityW<::GlobalNamespace::GorillaTagger>  value) ;

constexpr void __cordl_internal_set_isBeta(bool  value) ;

constexpr void __cordl_internal_set_isQA(bool  value) ;

constexpr void __cordl_internal_set_networkBackend(::GlobalNamespace::BuildTargetManager_NetworkBackend  value) ;

constexpr void __cordl_internal_set_newBuildTarget(::GlobalNamespace::BuildTargetManager_BuildTowards  value) ;

constexpr void __cordl_internal_set_ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_spoofChild(bool  value) ;

constexpr void __cordl_internal_set_spoofIDs(bool  value) ;

/// @brief Method .ctor, addr 0x5adf5b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildTargetManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildTargetManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildTargetManager(BuildTargetManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildTargetManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildTargetManager(BuildTargetManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3435};

/// @brief Field newBuildTarget, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BuildTargetManager_BuildTowards  ___newBuildTarget;

/// @brief Field isBeta, offset: 0x24, size: 0x1, def value: None
 bool  ___isBeta;

/// @brief Field isQA, offset: 0x25, size: 0x1, def value: None
 bool  ___isQA;

/// @brief Field spoofIDs, offset: 0x26, size: 0x1, def value: None
 bool  ___spoofIDs;

/// @brief Field spoofChild, offset: 0x27, size: 0x1, def value: None
 bool  ___spoofChild;

/// @brief Field enableAllCosmetics, offset: 0x28, size: 0x1, def value: None
 bool  ___enableAllCosmetics;

/// @brief Field ovrManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRManager>  ___ovrManager;

/// @brief Field path, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field currentBuildTargetDONOTCHANGE, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::BuildTargetManager_BuildTowards  ___currentBuildTargetDONOTCHANGE;

/// @brief Field gorillaTagger, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagger>  ___gorillaTagger;

/// @brief Field betaDisableObjects, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___betaDisableObjects;

/// @brief Field betaEnableObjects, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___betaEnableObjects;

/// @brief Field networkBackend, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::BuildTargetManager_NetworkBackend  ___networkBackend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___newBuildTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___isBeta) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___isQA) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___spoofIDs) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___spoofChild) == 0x27, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___enableAllCosmetics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___ovrManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___path) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___currentBuildTargetDONOTCHANGE) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___gorillaTagger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___betaDisableObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___betaEnableObjects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuildTargetManager, ___networkBackend) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuildTargetManager) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
