#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticCameraDisableNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticCameraDisableNotifier)
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRigCollection;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GorillaTag {
class CosmeticCameraDisableNotifier;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticCameraDisableNotifier*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticCameraDisableNotifier*, "GorillaTag", "CosmeticCameraDisableNotifier");
// [RequireComponent(typeof(VRRigCollection))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.CosmeticCameraDisableNotifier
class CORDL_TYPE CosmeticCameraDisableNotifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cosmeticCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticCamera, put=__cordl_internal_set__cosmeticCamera)) ::UnityW<::UnityEngine::Camera>  _cosmeticCamera;

/// @brief Field _vrrigCollection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrrigCollection, put=__cordl_internal_set__vrrigCollection)) ::UnityW<::GlobalNamespace::VRRigCollection>  _vrrigCollection;

/// @brief Method Awake, addr 0x5d2809c, size 0x1fc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::CosmeticCameraDisableNotifier* New_ctor() ;

/// @brief Method PlayerEnteredTryOnSpace, addr 0x5d28298, size 0x44, virtual false, abstract: false, final false
inline void PlayerEnteredTryOnSpace(::GlobalNamespace::RigContainer*  playerRig) ;

/// @brief Method PlayerLeftTryOnSpace, addr 0x5d282dc, size 0x44, virtual false, abstract: false, final false
inline void PlayerLeftTryOnSpace(::GlobalNamespace::RigContainer*  playerRig) ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__cosmeticCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__cosmeticCamera() ;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& __cordl_internal_get__vrrigCollection() const;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& __cordl_internal_get__vrrigCollection() ;

constexpr void __cordl_internal_set__cosmeticCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__vrrigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value) ;

/// @brief Method .ctor, addr 0x5d28320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCameraDisableNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCameraDisableNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCameraDisableNotifier(CosmeticCameraDisableNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCameraDisableNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCameraDisableNotifier(CosmeticCameraDisableNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4626};

/// @brief Field _vrrigCollection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigCollection>  ____vrrigCollection;

/// [SerializeField]
/// @brief Field _cosmeticCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____cosmeticCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticCameraDisableNotifier, ____vrrigCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticCameraDisableNotifier, ____cosmeticCamera) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticCameraDisableNotifier) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
