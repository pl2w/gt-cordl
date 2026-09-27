#pragma once
// IWYU pragma private; include "GlobalNamespace/TabletSpawnInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TabletSpawnInstance)
namespace GlobalNamespace {
class GameEvents;
}
namespace GlobalNamespace {
class LckDirectGrabbable;
}
namespace GlobalNamespace {
class LckSocialCameraManager;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TabletSpawnInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TabletSpawnInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TabletSpawnInstance*, "", "TabletSpawnInstance");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TabletSpawnInstance
class CORDL_TYPE TabletSpawnInstance : public ::System::Object {
public:
// Declarations
/// @brief Field Controller, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  Controller;

/// @brief Field _GtCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__GtCamera, put=__cordl_internal_set__GtCamera)) ::GlobalNamespace::GameEvents*  _GtCamera;

/// @brief Field _cameraActive, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__cameraActive, put=__cordl_internal_set__cameraActive)) bool  _cameraActive;

/// @brief Field _cameraGameObjectInstance, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraGameObjectInstance, put=__cordl_internal_set__cameraGameObjectInstance)) ::UnityW<::UnityEngine::GameObject>  _cameraGameObjectInstance;

/// @brief Field _cameraSpawnInstanceTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraSpawnInstanceTransform, put=__cordl_internal_set__cameraSpawnInstanceTransform)) ::UnityW<::UnityEngine::Transform>  _cameraSpawnInstanceTransform;

/// @brief Field _cameraSpawnParentTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraSpawnParentTransform, put=__cordl_internal_set__cameraSpawnParentTransform)) ::UnityW<::UnityEngine::Transform>  _cameraSpawnParentTransform;

/// @brief Field _cameraSpawnPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraSpawnPrefab, put=__cordl_internal_set__cameraSpawnPrefab)) ::UnityW<::UnityEngine::GameObject>  _cameraSpawnPrefab;

/// @brief Field _lckSocialCameraManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckSocialCameraManager, put=__cordl_internal_set__lckSocialCameraManager)) ::UnityW<::GlobalNamespace::LckSocialCameraManager>  _lckSocialCameraManager;

/// @brief Field _uiVisible, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__uiVisible, put=__cordl_internal_set__uiVisible)) bool  _uiVisible;

 __declspec(property(get=get_cameraActive, put=set_cameraActive)) bool  cameraActive;

 __declspec(property(get=get_directGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  directGrabbable;

 __declspec(property(get=get_isSpawned)) bool  isSpawned;

/// @brief Field onGrabbed, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrabbed, put=__cordl_internal_set_onGrabbed)) ::System::Action*  onGrabbed;

/// @brief Field onReleased, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReleased, put=__cordl_internal_set_onReleased)) ::System::Action*  onReleased;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_uiVisible, put=set_uiVisible)) bool  uiVisible;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x56c3164, size 0xa0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::GlobalNamespace::TabletSpawnInstance* New_ctor(::UnityEngine::GameObject*  cameraSpawnPrefab, ::UnityEngine::Transform*  cameraSpawnParentTransform) ;

/// @brief Method ResetLocalPose, addr 0x56c2534, size 0x118, virtual false, abstract: false, final false
inline bool ResetLocalPose() ;

/// @brief Method ResetParent, addr 0x56c264c, size 0x8c, virtual false, abstract: false, final false
inline bool ResetParent() ;

/// @brief Method SetLocalScale, addr 0x56c30b0, size 0xb4, virtual false, abstract: false, final false
inline void SetLocalScale(::UnityEngine::Vector3  scale) ;

/// @brief Method SetParent, addr 0x56c26d8, size 0x98, virtual false, abstract: false, final false
inline bool SetParent(::UnityEngine::Transform*  transform) ;

/// @brief Method SetPositionAndRotation, addr 0x56c2fc4, size 0xec, virtual false, abstract: false, final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SpawnCamera, addr 0x56c2b14, size 0x200, virtual false, abstract: false, final false
inline void SpawnCamera() ;

/// @brief Method Update, addr 0x56c2a20, size 0xf4, virtual false, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <SpawnCamera>b__30_0, addr 0x56c3204, size 0x1c, virtual false, abstract: false, final false
inline void _SpawnCamera_b__30_0() ;

/// [CompilerGenerated]
/// @brief Method <SpawnCamera>b__30_1, addr 0x56c3220, size 0x1c, virtual false, abstract: false, final false
inline void _SpawnCamera_b__30_1() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get_Controller() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get_Controller() ;

constexpr ::GlobalNamespace::GameEvents* const& __cordl_internal_get__GtCamera() const;

constexpr ::GlobalNamespace::GameEvents*& __cordl_internal_get__GtCamera() ;

constexpr bool const& __cordl_internal_get__cameraActive() const;

constexpr bool& __cordl_internal_get__cameraActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraGameObjectInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraGameObjectInstance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraSpawnInstanceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraSpawnInstanceTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraSpawnParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraSpawnParentTransform() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraSpawnPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraSpawnPrefab() ;

constexpr ::UnityW<::GlobalNamespace::LckSocialCameraManager> const& __cordl_internal_get__lckSocialCameraManager() const;

constexpr ::UnityW<::GlobalNamespace::LckSocialCameraManager>& __cordl_internal_get__lckSocialCameraManager() ;

constexpr bool const& __cordl_internal_get__uiVisible() const;

constexpr bool& __cordl_internal_get__uiVisible() ;

constexpr ::System::Action* const& __cordl_internal_get_onGrabbed() const;

constexpr ::System::Action*& __cordl_internal_get_onGrabbed() ;

constexpr ::System::Action* const& __cordl_internal_get_onReleased() const;

constexpr ::System::Action*& __cordl_internal_get_onReleased() ;

constexpr void __cordl_internal_set_Controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__GtCamera(::GlobalNamespace::GameEvents*  value) ;

constexpr void __cordl_internal_set__cameraActive(bool  value) ;

constexpr void __cordl_internal_set__cameraGameObjectInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__cameraSpawnInstanceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraSpawnParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraSpawnPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__lckSocialCameraManager(::UnityW<::GlobalNamespace::LckSocialCameraManager>  value) ;

constexpr void __cordl_internal_set__uiVisible(bool  value) ;

constexpr void __cordl_internal_set_onGrabbed(::System::Action*  value) ;

constexpr void __cordl_internal_set_onReleased(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x56c29dc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  cameraSpawnPrefab, ::UnityEngine::Transform*  cameraSpawnParentTransform) ;

/// [CompilerGenerated]
/// @brief Method add_onGrabbed, addr 0x56c22ac, size 0x9c, virtual false, abstract: false, final false
inline void add_onGrabbed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onReleased, addr 0x56c23e4, size 0x9c, virtual false, abstract: false, final false
inline void add_onReleased(::System::Action*  value) ;

/// @brief Method get_cameraActive, addr 0x56c2770, size 0x8, virtual false, abstract: false, final false
inline bool get_cameraActive() ;

/// @brief Method get_directGrabbable, addr 0x56c251c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LckDirectGrabbable> get_directGrabbable() ;

/// @brief Method get_isSpawned, addr 0x56c297c, size 0x60, virtual false, abstract: false, final false
inline bool get_isSpawned() ;

/// @brief Method get_position, addr 0x56c2e4c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation, addr 0x56c2f08, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_uiVisible, addr 0x56c28ac, size 0x8, virtual false, abstract: false, final false
inline bool get_uiVisible() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onGrabbed, addr 0x56c2348, size 0x9c, virtual false, abstract: false, final false
inline void remove_onGrabbed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onReleased, addr 0x56c2480, size 0x9c, virtual false, abstract: false, final false
inline void remove_onReleased(::System::Action*  value) ;

/// @brief Method set_cameraActive, addr 0x56c2778, size 0xd8, virtual false, abstract: false, final false
inline void set_cameraActive(bool  value) ;

/// @brief Method set_uiVisible, addr 0x56c28b4, size 0xac, virtual false, abstract: false, final false
inline void set_uiVisible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabletSpawnInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabletSpawnInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TabletSpawnInstance(TabletSpawnInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabletSpawnInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabletSpawnInstance(TabletSpawnInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1010};

/// [CompilerGenerated]
/// @brief Field onGrabbed, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onGrabbed;

/// [CompilerGenerated]
/// @brief Field onReleased, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onReleased;

/// @brief Field _cameraGameObjectInstance, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraGameObjectInstance;

/// @brief Field _cameraSpawnPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraSpawnPrefab;

/// @brief Field _GtCamera, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::GameEvents*  ____GtCamera;

/// @brief Field _cameraSpawnParentTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraSpawnParentTransform;

/// @brief Field _cameraSpawnInstanceTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraSpawnInstanceTransform;

/// @brief Field Controller, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ___Controller;

/// @brief Field _lckSocialCameraManager, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckSocialCameraManager>  ____lckSocialCameraManager;

/// @brief Field _cameraActive, offset: 0x58, size: 0x1, def value: None
 bool  ____cameraActive;

/// @brief Field _uiVisible, offset: 0x59, size: 0x1, def value: None
 bool  ____uiVisible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ___onGrabbed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ___onReleased) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____cameraGameObjectInstance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____cameraSpawnPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____GtCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____cameraSpawnParentTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____cameraSpawnInstanceTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ___Controller) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____lckSocialCameraManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____cameraActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabletSpawnInstance, ____uiVisible) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TabletSpawnInstance) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
