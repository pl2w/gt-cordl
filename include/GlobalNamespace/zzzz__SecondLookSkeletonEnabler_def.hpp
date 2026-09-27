#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeletonEnabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SecondLookSkeletonEnabler)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class SecondLookSkeleton;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SecondLookSkeletonEnabler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SecondLookSkeletonEnabler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SecondLookSkeletonEnabler*, "", "SecondLookSkeletonEnabler");
// Dependencies Tappable
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecondLookSkeletonEnabler
class CORDL_TYPE SecondLookSkeletonEnabler : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field isTapped, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTapped, put=__cordl_internal_set_isTapped)) bool  isTapped;

/// @brief Field particles, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field playOnDisappear, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playOnDisappear, put=__cordl_internal_set_playOnDisappear)) ::UnityW<::UnityEngine::AudioSource>  playOnDisappear;

/// @brief Field skele, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_skele, put=__cordl_internal_set_skele)) ::UnityW<::GlobalNamespace::SecondLookSkeleton>  skele;

/// @brief Field spookyText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_spookyText, put=__cordl_internal_set_spookyText)) ::UnityW<::UnityEngine::GameObject>  spookyText;

/// @brief Method Awake, addr 0x5d101d8, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SecondLookSkeletonEnabler* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x5d10270, size 0x10c, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr bool const& __cordl_internal_get_isTapped() const;

constexpr bool& __cordl_internal_get_isTapped() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_playOnDisappear() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_playOnDisappear() ;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton> const& __cordl_internal_get_skele() const;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton>& __cordl_internal_get_skele() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spookyText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spookyText() ;

constexpr void __cordl_internal_set_isTapped(bool  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_playOnDisappear(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_skele(::UnityW<::GlobalNamespace::SecondLookSkeleton>  value) ;

constexpr void __cordl_internal_set_spookyText(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5d1037c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondLookSkeletonEnabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeletonEnabler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondLookSkeletonEnabler(SecondLookSkeletonEnabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeletonEnabler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondLookSkeletonEnabler(SecondLookSkeletonEnabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{466};

/// @brief Field isTapped, offset: 0x45, size: 0x1, def value: None
 bool  ___isTapped;

/// @brief Field playOnDisappear, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___playOnDisappear;

/// @brief Field particles, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// @brief Field spookyText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spookyText;

/// @brief Field skele, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SecondLookSkeleton>  ___skele;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonEnabler, ___isTapped) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonEnabler, ___playOnDisappear) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonEnabler, ___particles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonEnabler, ___spookyText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonEnabler, ___skele) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SecondLookSkeletonEnabler) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
