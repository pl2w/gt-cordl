#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageDepositShim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersCageDepositShim)
namespace GlobalNamespace {
class CrittersCageDeposit;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersCageDepositShim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersCageDepositShim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersCageDepositShim*, "", "CrittersCageDepositShim");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersCageDepositShim
class CORDL_TYPE CrittersCageDepositShim : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allowMultiAttach, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowMultiAttach, put=__cordl_internal_set_allowMultiAttach)) bool  allowMultiAttach;

/// @brief Field attachPointTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachPointTransform, put=__cordl_internal_set_attachPointTransform)) ::UnityW<::UnityEngine::Transform>  attachPointTransform;

/// @brief Field cageBoxCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cageBoxCollider, put=__cordl_internal_set_cageBoxCollider)) ::UnityW<::UnityEngine::BoxCollider>  cageBoxCollider;

/// @brief Field depositAudio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositAudio, put=__cordl_internal_set_depositAudio)) ::UnityW<::UnityEngine::AudioSource>  depositAudio;

/// @brief Field depositCritterSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositCritterSound, put=__cordl_internal_set_depositCritterSound)) ::UnityW<::UnityEngine::AudioClip>  depositCritterSound;

/// @brief Field depositEmptySound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositEmptySound, put=__cordl_internal_set_depositEmptySound)) ::UnityW<::UnityEngine::AudioClip>  depositEmptySound;

/// @brief Field depositStartSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositStartSound, put=__cordl_internal_set_depositStartSound)) ::UnityW<::UnityEngine::AudioClip>  depositStartSound;

/// @brief Field disableGrabOnAttach, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrabOnAttach, put=__cordl_internal_set_disableGrabOnAttach)) bool  disableGrabOnAttach;

/// @brief Field endLocation, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_endLocation, put=__cordl_internal_set_endLocation)) ::UnityEngine::Vector3  endLocation;

/// @brief Field returnDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnDuration, put=__cordl_internal_set_returnDuration)) float_t  returnDuration;

/// @brief Field snapOnAttach, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapOnAttach, put=__cordl_internal_set_snapOnAttach)) bool  snapOnAttach;

/// @brief Field startLocation, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_startLocation, put=__cordl_internal_set_startLocation)) ::UnityEngine::Vector3  startLocation;

/// @brief Field submitDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_submitDuration, put=__cordl_internal_set_submitDuration)) float_t  submitDuration;

/// @brief Field type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::CrittersActor_CrittersActorType  type;

/// @brief Field visiblePlatformTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_visiblePlatformTransform, put=__cordl_internal_set_visiblePlatformTransform)) ::UnityW<::UnityEngine::Transform>  visiblePlatformTransform;

/// [ContextMenu("Copy Deposit Data To Shim")]
/// @brief Method CopySpawnerDataInPrefab, addr 0x55fdf6c, size 0x218, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersCageDeposit> CopySpawnerDataInPrefab() ;

static inline ::GlobalNamespace::CrittersCageDepositShim* New_ctor() ;

/// [ContextMenu("Replace Deposit With Shim")]
/// @brief Method ReplaceSpawnerWithShim, addr 0x55fe184, size 0x108, virtual false, abstract: false, final false
inline void ReplaceSpawnerWithShim() ;

constexpr bool const& __cordl_internal_get_allowMultiAttach() const;

constexpr bool& __cordl_internal_get_allowMultiAttach() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_attachPointTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_attachPointTransform() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_cageBoxCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_cageBoxCollider() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_depositAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_depositAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositCritterSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositCritterSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositEmptySound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositEmptySound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositStartSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositStartSound() ;

constexpr bool const& __cordl_internal_get_disableGrabOnAttach() const;

constexpr bool& __cordl_internal_get_disableGrabOnAttach() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endLocation() ;

constexpr float_t const& __cordl_internal_get_returnDuration() const;

constexpr float_t& __cordl_internal_get_returnDuration() ;

constexpr bool const& __cordl_internal_get_snapOnAttach() const;

constexpr bool& __cordl_internal_get_snapOnAttach() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startLocation() ;

constexpr float_t const& __cordl_internal_get_submitDuration() const;

constexpr float_t& __cordl_internal_get_submitDuration() ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_type() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_visiblePlatformTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_visiblePlatformTransform() ;

constexpr void __cordl_internal_set_allowMultiAttach(bool  value) ;

constexpr void __cordl_internal_set_attachPointTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cageBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_depositAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_depositCritterSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_depositEmptySound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_depositStartSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_disableGrabOnAttach(bool  value) ;

constexpr void __cordl_internal_set_endLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_returnDuration(float_t  value) ;

constexpr void __cordl_internal_set_snapOnAttach(bool  value) ;

constexpr void __cordl_internal_set_startLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_submitDuration(float_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_visiblePlatformTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x55fe28c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersCageDepositShim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDepositShim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersCageDepositShim(CrittersCageDepositShim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDepositShim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersCageDepositShim(CrittersCageDepositShim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{93};

/// @brief Field cageBoxCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___cageBoxCollider;

/// @brief Field type, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___type;

/// @brief Field disableGrabOnAttach, offset: 0x2c, size: 0x1, def value: None
 bool  ___disableGrabOnAttach;

/// @brief Field allowMultiAttach, offset: 0x2d, size: 0x1, def value: None
 bool  ___allowMultiAttach;

/// @brief Field snapOnAttach, offset: 0x2e, size: 0x1, def value: None
 bool  ___snapOnAttach;

/// @brief Field startLocation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startLocation;

/// @brief Field endLocation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endLocation;

/// @brief Field submitDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___submitDuration;

/// @brief Field returnDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ___returnDuration;

/// @brief Field depositAudio, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___depositAudio;

/// @brief Field depositStartSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositStartSound;

/// @brief Field depositEmptySound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositEmptySound;

/// @brief Field depositCritterSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositCritterSound;

/// @brief Field attachPointTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___attachPointTransform;

/// @brief Field visiblePlatformTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___visiblePlatformTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___cageBoxCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___disableGrabOnAttach) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___allowMultiAttach) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___snapOnAttach) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___startLocation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___endLocation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___submitDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___returnDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___depositAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___depositStartSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___depositEmptySound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___depositCritterSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___attachPointTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDepositShim, ___visiblePlatformTransform) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersCageDepositShim) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
