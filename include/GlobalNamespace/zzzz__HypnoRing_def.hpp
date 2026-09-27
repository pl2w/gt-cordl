#pragma once
// IWYU pragma private; include "GlobalNamespace/HypnoRing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HypnoRing)
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
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class HypnoRing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HypnoRing*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HypnoRing*, "", "HypnoRing");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HypnoRing
class CORDL_TYPE HypnoRing : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field attachedToLeftHand, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachedToLeftHand, put=__cordl_internal_set_attachedToLeftHand)) bool  attachedToLeftHand;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentVolume, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentVolume, put=__cordl_internal_set_currentVolume)) float_t  currentVolume;

/// @brief Field fadeInDuration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeInDuration, put=__cordl_internal_set_fadeInDuration)) float_t  fadeInDuration;

/// @brief Field fadeOutDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutDuration, put=__cordl_internal_set_fadeOutDuration)) float_t  fadeOutDuration;

/// @brief Field maxVolume, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rotationSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x578adfc, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x578ae00, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x578adec, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x578addc, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x578adf4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x578ade4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::HypnoRing* New_ctor() ;

/// @brief Method Update, addr 0x578ae08, size 0x28c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get_attachedToLeftHand() const;

constexpr bool& __cordl_internal_get_attachedToLeftHand() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_currentVolume() const;

constexpr float_t& __cordl_internal_get_currentVolume() ;

constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

constexpr float_t& __cordl_internal_get_fadeInDuration() ;

constexpr float_t const& __cordl_internal_get_fadeOutDuration() const;

constexpr float_t& __cordl_internal_get_fadeOutDuration() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_attachedToLeftHand(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentVolume(float_t  value) ;

constexpr void __cordl_internal_set_fadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x578b094, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HypnoRing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HypnoRing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HypnoRing(HypnoRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HypnoRing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HypnoRing(HypnoRing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1433};

/// [SerializeField]
/// @brief Field attachedToLeftHand, offset: 0x20, size: 0x1, def value: None
 bool  ___attachedToLeftHand;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field rotationSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field maxVolume, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxVolume;

/// [SerializeField]
/// @brief Field fadeInDuration, offset: 0x44, size: 0x4, def value: None
 float_t  ___fadeInDuration;

/// [SerializeField]
/// @brief Field fadeOutDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___fadeOutDuration;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field currentVolume, offset: 0x54, size: 0x4, def value: None
 float_t  ___currentVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HypnoRing, ___attachedToLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___rotationSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___maxVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___fadeInDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___fadeOutDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HypnoRing, ___currentVolume) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HypnoRing) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
