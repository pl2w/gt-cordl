#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntHandFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PropHuntHandFollower)
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class PropHuntGrabbableProp;
}
namespace GlobalNamespace {
class PropHuntTaggableProp;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntHandFollower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntHandFollower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntHandFollower*, "", "PropHuntHandFollower");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntHandFollower
class CORDL_TYPE PropHuntHandFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsInstantiatingAsync, put=set_IsInstantiatingAsync)) bool  IsInstantiatingAsync;

 __declspec(property(get=get_IsLeftHand)) bool  IsLeftHand;

/// @brief Field <IsInstantiatingAsync>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInstantiatingAsync_k__BackingField, put=__cordl_internal_set__IsInstantiatingAsync_k__BackingField)) bool  _IsInstantiatingAsync_k__BackingField;

/// @brief Field <attachedToRig>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedToRig_k__BackingField, put=__cordl_internal_set__attachedToRig_k__BackingField)) ::UnityW<::GlobalNamespace::VRRig>  _attachedToRig_k__BackingField;

/// @brief Field _colliders, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  _colliders;

/// @brief Field _grabbableProp, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbableProp, put=__cordl_internal_set__grabbableProp)) ::UnityW<::GlobalNamespace::PropHuntGrabbableProp>  _grabbableProp;

/// @brief Field _hasProp, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasProp, put=__cordl_internal_set__hasProp)) bool  _hasProp;

/// @brief Field _interactionPoints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionPoints, put=__cordl_internal_set__interactionPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  _interactionPoints;

/// @brief Field _isLeftHand, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLeftHand, put=__cordl_internal_set__isLeftHand)) bool  _isLeftHand;

/// @brief Field _isLocal, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocal, put=__cordl_internal_set__isLocal)) bool  _isLocal;

/// @brief Field _lastRelativeAngle, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastRelativeAngle, put=__cordl_internal_set__lastRelativeAngle)) ::UnityEngine::Quaternion  _lastRelativeAngle;

/// @brief Field _lastRelativePos, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastRelativePos, put=__cordl_internal_set__lastRelativePos)) ::UnityEngine::Vector3  _lastRelativePos;

/// @brief Field _networkLastRelativeAngle, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__networkLastRelativeAngle, put=__cordl_internal_set__networkLastRelativeAngle)) ::UnityEngine::Quaternion  _networkLastRelativeAngle;

/// @brief Field _networkLastRelativePos, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__networkLastRelativePos, put=__cordl_internal_set__networkLastRelativePos)) ::UnityEngine::Vector3  _networkLastRelativePos;

/// @brief Field _prop, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__prop, put=__cordl_internal_set__prop)) ::UnityW<::UnityEngine::GameObject>  _prop;

/// @brief Field _propOffset, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__propOffset, put=__cordl_internal_set__propOffset)) ::UnityEngine::Vector3  _propOffset;

/// @brief Field _taggableProp, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__taggableProp, put=__cordl_internal_set__taggableProp)) ::UnityW<::GlobalNamespace::PropHuntTaggableProp>  _taggableProp;

 __declspec(property(get=get_attachedToRig, put=set_attachedToRig)) ::UnityW<::GlobalNamespace::VRRig>  attachedToRig;

/// @brief Field collisionLayers, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayers, put=__cordl_internal_set_collisionLayers)) ::UnityEngine::LayerMask  collisionLayers;

 __declspec(property(get=get_hasProp, put=set_hasProp)) bool  hasProp;

/// @brief Field raycastHits, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHits, put=__cordl_internal_set_raycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  raycastHits;

/// @brief Field targetPoint, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPoint, put=__cordl_internal_set_targetPoint)) ::UnityEngine::Vector3  targetPoint;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Method Awake, addr 0x5638260, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateProp, addr 0x563395c, size 0x354, virtual false, abstract: false, final false
inline void CreateProp() ;

/// @brief Method DestroyProp, addr 0x5633cb0, size 0x150, virtual false, abstract: false, final false
inline void DestroyProp() ;

/// @brief Method DestroyProp_NoPool, addr 0x5638428, size 0x228, virtual false, abstract: false, final false
static inline void DestroyProp_NoPool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  _colliders, ::by_ref<bool>  hasProp, ::by_ref<::UnityEngine::GameObject*>  _prop) ;

/// @brief Method GeoCollisionPoint, addr 0x56395c4, size 0x294, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GeoCollisionPoint(::UnityEngine::Vector3  sourcePos, ::UnityEngine::Vector3  targetPos) ;

/// @brief Method GetRelativePosRotLong, addr 0x5639870, size 0x158, virtual false, abstract: false, final false
inline int64_t GetRelativePosRotLong() ;

/// @brief Method ICallBack.CallBack, addr 0x5638ec8, size 0x6fc, virtual true, abstract: false, final true
inline void ICallBack_CallBack() ;

static inline ::GlobalNamespace::PropHuntHandFollower* New_ctor() ;

/// @brief Method OnDisable, addr 0x5638388, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5638334, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPropLoaded, addr 0x5638650, size 0x1ac, virtual false, abstract: false, final false
inline void OnPropLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle) ;

/// @brief Method OnRoundStart, addr 0x5635884, size 0x4, virtual false, abstract: false, final false
inline void OnRoundStart() ;

/// @brief Method SetProp, addr 0x5639858, size 0x18, virtual false, abstract: false, final false
inline void SetProp(bool  isLeftHand, ::UnityEngine::Vector3  propPos, ::UnityEngine::Quaternion  propRot) ;

/// @brief Method Start, addr 0x5638318, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchHand, addr 0x5637fbc, size 0x130, virtual false, abstract: false, final false
inline void SwitchHand(bool  newIsLeftHand) ;

/// @brief Method TryPrepPropTemplate, addr 0x56387fc, size 0x6cc, virtual false, abstract: false, final false
static inline bool TryPrepPropTemplate(::UnityEngine::GameObject*  _prop, bool  _isLocal, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  _colliders, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ref_interactionPoints, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>  grabbableProp, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>  taggableProp) ;

constexpr bool const& __cordl_internal_get__IsInstantiatingAsync_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInstantiatingAsync_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__attachedToRig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__attachedToRig_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& __cordl_internal_get__colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& __cordl_internal_get__colliders() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntGrabbableProp> const& __cordl_internal_get__grabbableProp() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntGrabbableProp>& __cordl_internal_get__grabbableProp() ;

constexpr bool const& __cordl_internal_get__hasProp() const;

constexpr bool& __cordl_internal_get__hasProp() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& __cordl_internal_get__interactionPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& __cordl_internal_get__interactionPoints() ;

constexpr bool const& __cordl_internal_get__isLeftHand() const;

constexpr bool& __cordl_internal_get__isLeftHand() ;

constexpr bool const& __cordl_internal_get__isLocal() const;

constexpr bool& __cordl_internal_get__isLocal() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastRelativeAngle() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastRelativeAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastRelativePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastRelativePos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__networkLastRelativeAngle() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__networkLastRelativeAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__networkLastRelativePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__networkLastRelativePos() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prop() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prop() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__propOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__propOffset() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntTaggableProp> const& __cordl_internal_get__taggableProp() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntTaggableProp>& __cordl_internal_get__taggableProp() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayers() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_raycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_raycastHits() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPoint() ;

constexpr void __cordl_internal_set__IsInstantiatingAsync_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__attachedToRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value) ;

constexpr void __cordl_internal_set__grabbableProp(::UnityW<::GlobalNamespace::PropHuntGrabbableProp>  value) ;

constexpr void __cordl_internal_set__hasProp(bool  value) ;

constexpr void __cordl_internal_set__interactionPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value) ;

constexpr void __cordl_internal_set__isLeftHand(bool  value) ;

constexpr void __cordl_internal_set__isLocal(bool  value) ;

constexpr void __cordl_internal_set__lastRelativeAngle(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__lastRelativePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__networkLastRelativeAngle(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__networkLastRelativePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__prop(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__propOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__taggableProp(::UnityW<::GlobalNamespace::PropHuntTaggableProp>  value) ;

constexpr void __cordl_internal_set_collisionLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_targetPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x56399c8, size 0x800, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsInstantiatingAsync, addr 0x5638238, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInstantiatingAsync() ;

/// @brief Method get_IsLeftHand, addr 0x5638258, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeftHand() ;

/// [CompilerGenerated]
/// @brief Method get_attachedToRig, addr 0x5638248, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_attachedToRig() ;

/// @brief Method get_hasProp, addr 0x5638228, size 0x8, virtual false, abstract: false, final false
inline bool get_hasProp() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsInstantiatingAsync, addr 0x5638240, size 0x8, virtual false, abstract: false, final false
inline void set_IsInstantiatingAsync(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_attachedToRig, addr 0x5638250, size 0x8, virtual false, abstract: false, final false
inline void set_attachedToRig(::GlobalNamespace::VRRig*  value) ;

/// @brief Method set_hasProp, addr 0x5638230, size 0x8, virtual false, abstract: false, final false
inline void set_hasProp(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntHandFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntHandFollower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntHandFollower(PropHuntHandFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntHandFollower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntHandFollower(PropHuntHandFollower const& ) = delete;

/// @brief Field HandFollowDistance offset 0xffffffff size 0x4
static constexpr float_t  HandFollowDistance{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{635};

/// @brief Field _k__GT_PROP_HUNT__USE_POOLING__ offset 0xffffffff size 0x1
static constexpr bool  _k__GT_PROP_HUNT__USE_POOLING__{true};

/// @brief Field _k_isBetaOrEditor offset 0xffffffff size 0x1
static constexpr bool  _k_isBetaOrEditor{false};

/// @brief Field _hasProp, offset: 0x20, size: 0x1, def value: None
 bool  ____hasProp;

/// [CompilerGenerated]
/// @brief Field <IsInstantiatingAsync>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____IsInstantiatingAsync_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <attachedToRig>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____attachedToRig_k__BackingField;

/// @brief Field _isLocal, offset: 0x30, size: 0x1, def value: None
 bool  ____isLocal;

/// @brief Field _prop, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____prop;

/// @brief Field _isLeftHand, offset: 0x40, size: 0x1, def value: None
 bool  ____isLeftHand;

/// @brief Field _propOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____propOffset;

/// @brief Field _colliders, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  ____colliders;

/// @brief Field _interactionPoints, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ____interactionPoints;

/// @brief Field _lastRelativePos, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastRelativePos;

/// @brief Field _lastRelativeAngle, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastRelativeAngle;

/// @brief Field _networkLastRelativePos, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____networkLastRelativePos;

/// @brief Field _networkLastRelativeAngle, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____networkLastRelativeAngle;

/// @brief Field collisionLayers, offset: 0x98, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayers;

/// @brief Field targetPoint, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPoint;

/// @brief Field raycastHits, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___raycastHits;

/// @brief Field _grabbableProp, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntGrabbableProp>  ____grabbableProp;

/// @brief Field _taggableProp, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntTaggableProp>  ____taggableProp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____hasProp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____IsInstantiatingAsync_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____attachedToRig_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____isLocal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____prop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____isLeftHand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____propOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____colliders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____interactionPoints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____lastRelativePos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____lastRelativeAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____networkLastRelativePos) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____networkLastRelativeAngle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ___collisionLayers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ___targetPoint) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ___raycastHits) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____grabbableProp) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntHandFollower, ____taggableProp) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntHandFollower) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
