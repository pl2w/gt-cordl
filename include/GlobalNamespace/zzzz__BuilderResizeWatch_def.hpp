#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResizeWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderResizeWatch_BuilderSizeChangeSettings_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderResizeWatch)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderResizeWatch_BuilderSizeChangeSettings;
}
namespace GlobalNamespace {
class HeldButton;
}
namespace GlobalNamespace {
class SizeManager;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderResizeWatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderResizeWatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResizeWatch*, "", "BuilderResizeWatch");
// Dependencies BuilderResizeWatch::BuilderSizeChangeSettings, UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderResizeWatch
class CORDL_TYPE BuilderResizeWatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BuilderSizeChangeSettings = ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings;

 __declspec(property(get=get_SizeLayerMaskGrow)) int32_t  SizeLayerMaskGrow;

 __declspec(property(get=get_SizeLayerMaskShrink)) int32_t  SizeLayerMaskShrink;

/// @brief Field collisionDisabledPieces, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionDisabledPieces, put=__cordl_internal_set_collisionDisabledPieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  collisionDisabledPieces;

/// @brief Field enableDist, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_enableDist, put=__cordl_internal_set_enableDist)) float_t  enableDist;

/// @brief Field enableDistSq, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_enableDistSq, put=__cordl_internal_set_enableDistSq)) float_t  enableDistSq;

/// @brief Field enlargeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enlargeButton, put=__cordl_internal_set_enlargeButton)) ::UnityW<::GlobalNamespace::HeldButton>  enlargeButton;

/// @brief Field fxForLayerChange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxForLayerChange, put=__cordl_internal_set_fxForLayerChange)) ::UnityW<::UnityEngine::GameObject>  fxForLayerChange;

/// @brief Field growDelay, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_growDelay, put=__cordl_internal_set_growDelay)) float_t  growDelay;

/// @brief Field growSettings, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_growSettings, put=__cordl_internal_set_growSettings)) ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  growSettings;

/// @brief Field ownerRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field shrinkButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_shrinkButton, put=__cordl_internal_set_shrinkButton)) ::UnityW<::GlobalNamespace::HeldButton>  shrinkButton;

/// @brief Field shrinkSettings, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_shrinkSettings, put=__cordl_internal_set_shrinkSettings)) ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  shrinkSettings;

/// @brief Field sizeManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizeManager, put=__cordl_internal_set_sizeManager)) ::UnityW<::GlobalNamespace::SizeManager>  sizeManager;

/// @brief Field tempDisableColliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempDisableColliders, put=__cordl_internal_set_tempDisableColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  tempDisableColliders;

/// @brief Field timeToCheckCollision, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeToCheckCollision, put=__cordl_internal_set_timeToCheckCollision)) double_t  timeToCheckCollision;

/// @brief Field updateCollision, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateCollision, put=__cordl_internal_set_updateCollision)) bool  updateCollision;

/// @brief Method DisableCollisionWithPieces, addr 0x57d6318, size 0x4e4, virtual false, abstract: false, final false
inline void DisableCollisionWithPieces() ;

/// @brief Method EnableCollisionWithPiece, addr 0x57d69e8, size 0x218, virtual false, abstract: false, final false
inline void EnableCollisionWithPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method EnableCollisionWithPieces, addr 0x57d67fc, size 0x1ec, virtual false, abstract: false, final false
inline void EnableCollisionWithPieces() ;

static inline ::GlobalNamespace::BuilderResizeWatch* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57d5f30, size 0x164, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnlargeButtonPressed, addr 0x57d6094, size 0x284, virtual false, abstract: false, final false
inline void OnEnlargeButtonPressed() ;

/// @brief Method OnShrinkButtonPressed, addr 0x57d6c7c, size 0x18c, virtual false, abstract: false, final false
inline void OnShrinkButtonPressed() ;

/// @brief Method Start, addr 0x57d5d2c, size 0x204, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x57d6c00, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_collisionDisabledPieces() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_collisionDisabledPieces() ;

constexpr float_t const& __cordl_internal_get_enableDist() const;

constexpr float_t& __cordl_internal_get_enableDist() ;

constexpr float_t const& __cordl_internal_get_enableDistSq() const;

constexpr float_t& __cordl_internal_get_enableDistSq() ;

constexpr ::UnityW<::GlobalNamespace::HeldButton> const& __cordl_internal_get_enlargeButton() const;

constexpr ::UnityW<::GlobalNamespace::HeldButton>& __cordl_internal_get_enlargeButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxForLayerChange() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxForLayerChange() ;

constexpr float_t const& __cordl_internal_get_growDelay() const;

constexpr float_t& __cordl_internal_get_growDelay() ;

constexpr ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings const& __cordl_internal_get_growSettings() const;

constexpr ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings& __cordl_internal_get_growSettings() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityW<::GlobalNamespace::HeldButton> const& __cordl_internal_get_shrinkButton() const;

constexpr ::UnityW<::GlobalNamespace::HeldButton>& __cordl_internal_get_shrinkButton() ;

constexpr ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings const& __cordl_internal_get_shrinkSettings() const;

constexpr ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings& __cordl_internal_get_shrinkSettings() ;

constexpr ::UnityW<::GlobalNamespace::SizeManager> const& __cordl_internal_get_sizeManager() const;

constexpr ::UnityW<::GlobalNamespace::SizeManager>& __cordl_internal_get_sizeManager() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_tempDisableColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_tempDisableColliders() ;

constexpr double_t const& __cordl_internal_get_timeToCheckCollision() const;

constexpr double_t& __cordl_internal_get_timeToCheckCollision() ;

constexpr bool const& __cordl_internal_get_updateCollision() const;

constexpr bool& __cordl_internal_get_updateCollision() ;

constexpr void __cordl_internal_set_collisionDisabledPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_enableDist(float_t  value) ;

constexpr void __cordl_internal_set_enableDistSq(float_t  value) ;

constexpr void __cordl_internal_set_enlargeButton(::UnityW<::GlobalNamespace::HeldButton>  value) ;

constexpr void __cordl_internal_set_fxForLayerChange(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_growDelay(float_t  value) ;

constexpr void __cordl_internal_set_growSettings(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_shrinkButton(::UnityW<::GlobalNamespace::HeldButton>  value) ;

constexpr void __cordl_internal_set_shrinkSettings(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  value) ;

constexpr void __cordl_internal_set_sizeManager(::UnityW<::GlobalNamespace::SizeManager>  value) ;

constexpr void __cordl_internal_set_tempDisableColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_timeToCheckCollision(double_t  value) ;

constexpr void __cordl_internal_set_updateCollision(bool  value) ;

/// @brief Method .ctor, addr 0x57d6e08, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SizeLayerMaskGrow, addr 0x57d5cbc, size 0x38, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMaskGrow() ;

/// @brief Method get_SizeLayerMaskShrink, addr 0x57d5cf4, size 0x38, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMaskShrink() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResizeWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderResizeWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderResizeWatch(BuilderResizeWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderResizeWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderResizeWatch(BuilderResizeWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1625};

/// [SerializeField]
/// @brief Field enlargeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeldButton>  ___enlargeButton;

/// [SerializeField]
/// @brief Field shrinkButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeldButton>  ___shrinkButton;

/// [SerializeField]
/// @brief Field fxForLayerChange, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxForLayerChange;

/// @brief Field ownerRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field sizeManager, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeManager>  ___sizeManager;

/// [HideInInspector]
/// @brief Field tempDisableColliders, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___tempDisableColliders;

/// [HideInInspector]
/// @brief Field collisionDisabledPieces, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___collisionDisabledPieces;

/// @brief Field enableDist, offset: 0x58, size: 0x4, def value: None
 float_t  ___enableDist;

/// @brief Field enableDistSq, offset: 0x5c, size: 0x4, def value: None
 float_t  ___enableDistSq;

/// @brief Field updateCollision, offset: 0x60, size: 0x1, def value: None
 bool  ___updateCollision;

/// @brief Field growDelay, offset: 0x64, size: 0x4, def value: None
 float_t  ___growDelay;

/// @brief Field timeToCheckCollision, offset: 0x68, size: 0x8, def value: None
 double_t  ___timeToCheckCollision;

/// @brief Field growSettings, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  ___growSettings;

/// @brief Field shrinkSettings, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings  ___shrinkSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___enlargeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___shrinkButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___fxForLayerChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___ownerRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___sizeManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___tempDisableColliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___collisionDisabledPieces) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___enableDist) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___enableDistSq) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___updateCollision) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___growDelay) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___timeToCheckCollision) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___growSettings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch, ___shrinkSettings) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResizeWatch) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
