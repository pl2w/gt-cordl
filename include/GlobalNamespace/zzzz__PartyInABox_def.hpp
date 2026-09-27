#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyInABox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PartyInABox_ForceTransform_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PartyInABox)
namespace GlobalNamespace {
struct PartyInABox_ForceTransform;
}
namespace GlobalNamespace {
class SpringyWobbler;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class PartyInABox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PartyInABox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyInABox*, "", "PartyInABox");
// Dependencies PartyInABox::ForceTransform, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyInABox
class CORDL_TYPE PartyInABox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ForceTransform = ::GlobalNamespace::PartyInABox_ForceTransform;

/// @brief Field anim, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field forceTransforms, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceTransforms, put=__cordl_internal_set_forceTransforms)) ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>  forceTransforms;

/// @brief Field isReleased, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReleased, put=__cordl_internal_set_isReleased)) bool  isReleased;

/// @brief Field parentHoldable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHoldable, put=__cordl_internal_set_parentHoldable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentHoldable;

/// @brief Field particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field partyAudio, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_partyAudio, put=__cordl_internal_set_partyAudio)) ::UnityW<::UnityEngine::AudioSource>  partyAudio;

/// @brief Field partyHapticDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_partyHapticDuration, put=__cordl_internal_set_partyHapticDuration)) float_t  partyHapticDuration;

/// @brief Field partyHapticStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_partyHapticStrength, put=__cordl_internal_set_partyHapticStrength)) float_t  partyHapticStrength;

/// @brief Field spring, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spring, put=__cordl_internal_set_spring)) ::UnityW<::GlobalNamespace::SpringyWobbler>  spring;

/// @brief Method Awake, addr 0x56583b0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Cranked_ReleaseParty, addr 0x565847c, size 0x34, virtual false, abstract: false, final false
inline void Cranked_ReleaseParty() ;

static inline ::GlobalNamespace::PartyInABox* New_ctor() ;

/// @brief Method OnEnable, addr 0x5658478, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReleaseParty, addr 0x56584b0, size 0x180, virtual false, abstract: false, final false
inline void ReleaseParty() ;

/// @brief Method Reset, addr 0x56583b4, size 0xc4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x5658630, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform> const& __cordl_internal_get_forceTransforms() const;

constexpr ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>& __cordl_internal_get_forceTransforms() ;

constexpr bool const& __cordl_internal_get_isReleased() const;

constexpr bool& __cordl_internal_get_isReleased() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentHoldable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentHoldable() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_partyAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_partyAudio() ;

constexpr float_t const& __cordl_internal_get_partyHapticDuration() const;

constexpr float_t& __cordl_internal_get_partyHapticDuration() ;

constexpr float_t const& __cordl_internal_get_partyHapticStrength() const;

constexpr float_t& __cordl_internal_get_partyHapticStrength() ;

constexpr ::UnityW<::GlobalNamespace::SpringyWobbler> const& __cordl_internal_get_spring() const;

constexpr ::UnityW<::GlobalNamespace::SpringyWobbler>& __cordl_internal_get_spring() ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_forceTransforms(::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>  value) ;

constexpr void __cordl_internal_set_isReleased(bool  value) ;

constexpr void __cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_partyAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_partyHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_partyHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_spring(::UnityW<::GlobalNamespace::SpringyWobbler>  value) ;

/// @brief Method .ctor, addr 0x56586cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PartyInABox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PartyInABox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyInABox(PartyInABox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyInABox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyInABox(PartyInABox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{755};

/// [SerializeField]
/// @brief Field parentHoldable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentHoldable;

/// [SerializeField]
/// @brief Field particles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [SerializeField]
/// @brief Field anim, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// [SerializeField]
/// @brief Field spring, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpringyWobbler>  ___spring;

/// [SerializeField]
/// @brief Field partyAudio, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___partyAudio;

/// [SerializeField]
/// @brief Field partyHapticStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___partyHapticStrength;

/// [SerializeField]
/// @brief Field partyHapticDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ___partyHapticDuration;

/// @brief Field isReleased, offset: 0x50, size: 0x1, def value: None
 bool  ___isReleased;

/// [SerializeField]
/// @brief Field forceTransforms, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>  ___forceTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyInABox, ___parentHoldable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___anim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___spring) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___partyAudio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___partyHapticStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___partyHapticDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___isReleased) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox, ___forceTransforms) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyInABox) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
