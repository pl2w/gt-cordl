#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StickyHand)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class StickyHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickyHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyHand*, "", "StickyHand");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickyHand
class CORDL_TYPE StickyHand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field defaultLocalPosition, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultLocalPosition, put=__cordl_internal_set_defaultLocalPosition)) ::UnityEngine::Vector3  defaultLocalPosition;

/// @brief Field flatHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatHand, put=__cordl_internal_set_flatHand)) ::UnityW<::UnityEngine::MeshRenderer>  flatHand;

/// @brief Field isLocal, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field myRig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field regularHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_regularHand, put=__cordl_internal_set_regularHand)) ::UnityW<::UnityEngine::MeshRenderer>  regularHand;

/// @brief Field schlupSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_schlupSound, put=__cordl_internal_set_schlupSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  schlupSound;

/// @brief Field stateBitIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateBitIndex, put=__cordl_internal_set_stateBitIndex)) int32_t  stateBitIndex;

/// @brief Field stringDetachLength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringDetachLength, put=__cordl_internal_set_stringDetachLength)) float_t  stringDetachLength;

/// @brief Field stringMaxAttachLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringMaxAttachLength, put=__cordl_internal_set_stringMaxAttachLength)) float_t  stringMaxAttachLength;

/// @brief Field stringParent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringParent, put=__cordl_internal_set_stringParent)) ::UnityW<::UnityEngine::GameObject>  stringParent;

/// @brief Field stringTeleportLength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringTeleportLength, put=__cordl_internal_set_stringTeleportLength)) float_t  stringTeleportLength;

/// @brief Field surfaceOffsetDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceOffsetDistance, put=__cordl_internal_set_surfaceOffsetDistance)) float_t  surfaceOffsetDistance;

/// @brief Field thwackSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_thwackSound, put=__cordl_internal_set_thwackSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  thwackSound;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x565c6c0, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x565c59c, size 0x124, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x565c57c, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x565c584, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::StickyHand* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x565ca44, size 0x2b0, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method Stick, addr 0x565c9e8, size 0x5c, virtual false, abstract: false, final false
inline void Stick() ;

/// @brief Method Unstick, addr 0x565c98c, size 0x5c, virtual false, abstract: false, final false
inline void Unstick() ;

/// @brief Method Update, addr 0x565c6c4, size 0x2c8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalPosition() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_flatHand() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_flatHand() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_regularHand() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_regularHand() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_schlupSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_schlupSound() ;

constexpr int32_t const& __cordl_internal_get_stateBitIndex() const;

constexpr int32_t& __cordl_internal_get_stateBitIndex() ;

constexpr float_t const& __cordl_internal_get_stringDetachLength() const;

constexpr float_t& __cordl_internal_get_stringDetachLength() ;

constexpr float_t const& __cordl_internal_get_stringMaxAttachLength() const;

constexpr float_t& __cordl_internal_get_stringMaxAttachLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stringParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stringParent() ;

constexpr float_t const& __cordl_internal_get_stringTeleportLength() const;

constexpr float_t& __cordl_internal_get_stringTeleportLength() ;

constexpr float_t const& __cordl_internal_get_surfaceOffsetDistance() const;

constexpr float_t& __cordl_internal_get_surfaceOffsetDistance() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_thwackSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_thwackSound() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_flatHand(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_regularHand(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_schlupSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_stateBitIndex(int32_t  value) ;

constexpr void __cordl_internal_set_stringDetachLength(float_t  value) ;

constexpr void __cordl_internal_set_stringMaxAttachLength(float_t  value) ;

constexpr void __cordl_internal_set_stringParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stringTeleportLength(float_t  value) ;

constexpr void __cordl_internal_set_surfaceOffsetDistance(float_t  value) ;

constexpr void __cordl_internal_set_thwackSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x565ccf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x565c58c, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x565c594, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyHand(StickyHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyHand(StickyHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{768};

/// [SerializeField]
/// @brief Field flatHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___flatHand;

/// [SerializeField]
/// @brief Field regularHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___regularHand;

/// [SerializeField]
/// @brief Field rb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [SerializeField]
/// @brief Field stringParent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stringParent;

/// [SerializeField]
/// @brief Field surfaceOffsetDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___surfaceOffsetDistance;

/// [SerializeField]
/// @brief Field stringMaxAttachLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___stringMaxAttachLength;

/// [SerializeField]
/// @brief Field stringDetachLength, offset: 0x48, size: 0x4, def value: None
 float_t  ___stringDetachLength;

/// [SerializeField]
/// @brief Field stringTeleportLength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___stringTeleportLength;

/// [SerializeField]
/// @brief Field thwackSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___thwackSound;

/// [SerializeField]
/// @brief Field schlupSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___schlupSound;

/// @brief Field myRig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field isLocal, offset: 0x68, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field stateBitIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___stateBitIndex;

/// @brief Field defaultLocalPosition, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultLocalPosition;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x7c, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyHand, ___flatHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___regularHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___rb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___stringParent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___surfaceOffsetDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___stringMaxAttachLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___stringDetachLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___stringTeleportLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___thwackSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___schlupSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___myRig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___isLocal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___stateBitIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ___defaultLocalPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyHand, ____CosmeticSelectedSide_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyHand) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
