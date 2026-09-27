#pragma once
// IWYU pragma private; include "GlobalNamespace/LCKSocialCameraFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LCKSocialCameraFollower)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class LckSocialCamera;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace Liv::Lck::GorillaTag {
class IGtCameraVisuals;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LCKSocialCameraFollower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LCKSocialCameraFollower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LCKSocialCameraFollower*, "", "LCKSocialCameraFollower");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LCKSocialCameraFollower
class CORDL_TYPE LCKSocialCameraFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CameraVisualsRoot)) ::UnityW<::UnityEngine::GameObject>  CameraVisualsRoot;

 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

 __declspec(property(get=get_ScaleTransform)) ::UnityW<::UnityEngine::Transform>  ScaleTransform;

 __declspec(property(get=get_VisualObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  VisualObjects;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field _cameraVisualsRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraVisualsRoot, put=__cordl_internal_set__cameraVisualsRoot)) ::UnityW<::UnityEngine::GameObject>  _cameraVisualsRoot;

/// @brief Field _scaleTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleTransform, put=__cordl_internal_set__scaleTransform)) ::UnityW<::UnityEngine::Transform>  _scaleTransform;

/// @brief Field _visualObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualObjects, put=__cordl_internal_set__visualObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _visualObjects;

/// @brief Field isParentedToRig, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isParentedToRig, put=__cordl_internal_set_isParentedToRig)) bool  isParentedToRig;

/// @brief Field m_gtCameraVisuals, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtCameraVisuals, put=__cordl_internal_set_m_gtCameraVisuals)) ::Liv::Lck::GorillaTag::IGtCameraVisuals*  m_gtCameraVisuals;

/// @brief Field m_networkController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_networkController, put=__cordl_internal_set_m_networkController)) ::UnityW<::GlobalNamespace::LckSocialCamera>  m_networkController;

/// @brief Field m_rigContainer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rigContainer, put=__cordl_internal_set_m_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  m_rigContainer;

/// @brief Field m_transformToFollow, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_transformToFollow, put=__cordl_internal_set_m_transformToFollow)) ::UnityW<::UnityEngine::Transform>  m_transformToFollow;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x56cb414, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ITickSystemTick.Tick, addr 0x56cb728, size 0xf0, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x56cb718, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x56cb720, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

static inline ::GlobalNamespace::LCKSocialCameraFollower* New_ctor() ;

/// @brief Method PostRigEnable, addr 0x56cb5c8, size 0x12c, virtual false, abstract: false, final false
inline void PostRigEnable(::GlobalNamespace::RigContainer*  _) ;

/// @brief Method PreRigDisable, addr 0x56cb6f4, size 0x24, virtual false, abstract: false, final false
inline void PreRigDisable(::GlobalNamespace::RigContainer*  _) ;

/// @brief Method RemoveNetworkController, addr 0x56cb204, size 0xec, virtual false, abstract: false, final false
inline void RemoveNetworkController(::GlobalNamespace::LckSocialCamera*  networkController) ;

/// @brief Method SetNetworkController, addr 0x56cac74, size 0x130, virtual false, abstract: false, final false
inline void SetNetworkController(::GlobalNamespace::LckSocialCamera*  networkController) ;

/// @brief Method SetParentNull, addr 0x56ca3d4, size 0x28, virtual false, abstract: false, final false
inline void SetParentNull() ;

/// @brief Method SetParentToRig, addr 0x56ca2fc, size 0xd8, virtual false, abstract: false, final false
inline void SetParentToRig() ;

/// @brief Method Start, addr 0x56cb594, size 0x34, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraVisualsRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraVisualsRoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__scaleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__scaleTransform() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__visualObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__visualObjects() ;

constexpr bool const& __cordl_internal_get_isParentedToRig() const;

constexpr bool& __cordl_internal_get_isParentedToRig() ;

constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* const& __cordl_internal_get_m_gtCameraVisuals() const;

constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals*& __cordl_internal_get_m_gtCameraVisuals() ;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera> const& __cordl_internal_get_m_networkController() const;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera>& __cordl_internal_get_m_networkController() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_m_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_m_rigContainer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_transformToFollow() ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cameraVisualsRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__scaleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__visualObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_isParentedToRig(bool  value) ;

constexpr void __cordl_internal_set_m_gtCameraVisuals(::Liv::Lck::GorillaTag::IGtCameraVisuals*  value) ;

constexpr void __cordl_internal_set_m_networkController(::UnityW<::GlobalNamespace::LckSocialCamera>  value) ;

constexpr void __cordl_internal_set_m_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_m_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x56cb818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraVisualsRoot, addr 0x56cb404, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_CameraVisualsRoot() ;

/// @brief Method get_ScaleTransform, addr 0x56cb3fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_ScaleTransform() ;

/// @brief Method get_VisualObjects, addr 0x56cb40c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_VisualObjects() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKSocialCameraFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKSocialCameraFollower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKSocialCameraFollower(LCKSocialCameraFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKSocialCameraFollower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKSocialCameraFollower(LCKSocialCameraFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1040};

/// [SerializeField]
/// @brief Field _scaleTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____scaleTransform;

/// [FormerlySerializedAs("_coconutCamera")]
/// [SerializeField]
/// @brief Field _cameraVisualsRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraVisualsRoot;

/// [SerializeField]
/// @brief Field _visualObjects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____visualObjects;

/// [SerializeField]
/// @brief Field m_rigContainer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___m_rigContainer;

/// @brief Field m_transformToFollow, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_transformToFollow;

/// @brief Field m_networkController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckSocialCamera>  ___m_networkController;

/// @brief Field m_gtCameraVisuals, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::IGtCameraVisuals*  ___m_gtCameraVisuals;

/// @brief Field isParentedToRig, offset: 0x58, size: 0x1, def value: None
 bool  ___isParentedToRig;

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0x59, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ____scaleTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ____cameraVisualsRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ____visualObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ___m_rigContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ___m_transformToFollow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ___m_networkController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ___m_gtCameraVisuals) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ___isParentedToRig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKSocialCameraFollower, ____ITickSystemTick_TickRunning_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LCKSocialCameraFollower) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
