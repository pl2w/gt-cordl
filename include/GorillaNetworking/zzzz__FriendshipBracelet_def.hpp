#pragma once
// IWYU pragma private; include "GorillaNetworking/FriendshipBracelet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FriendshipBracelet)
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaNetworking {
class FriendshipBracelet;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::FriendshipBracelet*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::FriendshipBracelet*, "GorillaNetworking", "FriendshipBracelet");
// Dependencies UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour, UnityEngine.SkinnedMeshRenderer
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.FriendshipBracelet
class CORDL_TYPE FriendshipBracelet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field braceletBananas, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletBananas, put=__cordl_internal_set_braceletBananas)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  braceletBananas;

/// @brief Field braceletBeads, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletBeads, put=__cordl_internal_set_braceletBeads)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  braceletBeads;

/// @brief Field braceletBrokenParticle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletBrokenParticle, put=__cordl_internal_set_braceletBrokenParticle)) ::UnityW<::UnityEngine::ParticleSystem>  braceletBrokenParticle;

/// @brief Field braceletBrokenSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletBrokenSound, put=__cordl_internal_set_braceletBrokenSound)) ::UnityW<::UnityEngine::AudioClip>  braceletBrokenSound;

/// @brief Field braceletFormedParticle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletFormedParticle, put=__cordl_internal_set_braceletFormedParticle)) ::UnityW<::UnityEngine::ParticleSystem>  braceletFormedParticle;

/// @brief Field braceletFormedSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletFormedSound, put=__cordl_internal_set_braceletFormedSound)) ::UnityW<::UnityEngine::AudioClip>  braceletFormedSound;

/// @brief Field braceletStrings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletStrings, put=__cordl_internal_set_braceletStrings)) ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  braceletStrings;

/// @brief Field isLeftHand, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field ownerRig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Method Awake, addr 0x5c6ff44, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAudioSource, addr 0x5c6ff9c, size 0x34, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> GetAudioSource() ;

static inline ::GorillaNetworking::FriendshipBracelet* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c70070, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c6ffd0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAppearEffects, addr 0x5c6ffd4, size 0x9c, virtual false, abstract: false, final false
inline void PlayAppearEffects() ;

/// @brief Method UpdateBeads, addr 0x5c7012c, size 0x238, virtual false, abstract: false, final false
inline void UpdateBeads(::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors, int32_t  selfIndex) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_braceletBananas() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_braceletBananas() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_braceletBeads() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_braceletBeads() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_braceletBrokenParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_braceletBrokenParticle() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_braceletBrokenSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_braceletBrokenSound() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_braceletFormedParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_braceletFormedParticle() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_braceletFormedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_braceletFormedSound() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>> const& __cordl_internal_get_braceletStrings() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>& __cordl_internal_get_braceletStrings() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr void __cordl_internal_set_braceletBananas(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_braceletBeads(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_braceletBrokenParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_braceletBrokenSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_braceletFormedParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_braceletFormedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_braceletStrings(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5c70364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendshipBracelet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendshipBracelet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendshipBracelet(FriendshipBracelet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendshipBracelet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendshipBracelet(FriendshipBracelet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4308};

/// [SerializeField]
/// @brief Field braceletStrings, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  ___braceletStrings;

/// [SerializeField]
/// @brief Field braceletBeads, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___braceletBeads;

/// [SerializeField]
/// @brief Field braceletBananas, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___braceletBananas;

/// [SerializeField]
/// @brief Field isLeftHand, offset: 0x38, size: 0x1, def value: None
 bool  ___isLeftHand;

/// [SerializeField]
/// @brief Field braceletFormedSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___braceletFormedSound;

/// [SerializeField]
/// @brief Field braceletBrokenSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___braceletBrokenSound;

/// [SerializeField]
/// @brief Field braceletFormedParticle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___braceletFormedParticle;

/// [SerializeField]
/// @brief Field braceletBrokenParticle, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___braceletBrokenParticle;

/// @brief Field ownerRig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletStrings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletBeads) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletBananas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___isLeftHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletFormedSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletBrokenSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletFormedParticle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___braceletBrokenParticle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FriendshipBracelet, ___ownerRig) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::FriendshipBracelet) == 0x68, "Size mismatch!");

} // namespace end def GorillaNetworking
