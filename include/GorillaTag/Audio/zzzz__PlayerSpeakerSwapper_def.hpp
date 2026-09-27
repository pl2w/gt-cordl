#pragma once
// IWYU pragma private; include "GorillaTag/Audio/PlayerSpeakerSwapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerSpeakerSwapper)
namespace GlobalNamespace {
class NetPlayer;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GorillaTag::Audio {
class PlayerSpeakerSwapper;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::PlayerSpeakerSwapper*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::PlayerSpeakerSwapper*, "GorillaTag.Audio", "PlayerSpeakerSwapper");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.PlayerSpeakerSwapper
class CORDL_TYPE PlayerSpeakerSwapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lowPassFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lowPassFilter, put=__cordl_internal_set__lowPassFilter)) ::UnityW<::UnityEngine::Behaviour>  _lowPassFilter;

static inline ::GorillaTag::Audio::PlayerSpeakerSwapper* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d54560, size 0x144, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d54380, size 0x14c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerCountChanged, addr 0x5d544cc, size 0x94, virtual false, abstract: false, final false
inline void OnPlayerCountChanged(::GlobalNamespace::NetPlayer*  _) ;

constexpr ::UnityW<::UnityEngine::Behaviour> const& __cordl_internal_get__lowPassFilter() const;

constexpr ::UnityW<::UnityEngine::Behaviour>& __cordl_internal_get__lowPassFilter() ;

constexpr void __cordl_internal_set__lowPassFilter(::UnityW<::UnityEngine::Behaviour>  value) ;

/// @brief Method .ctor, addr 0x5d546a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSpeakerSwapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeakerSwapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSpeakerSwapper(PlayerSpeakerSwapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeakerSwapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSpeakerSwapper(PlayerSpeakerSwapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4797};

/// [SerializeField]
/// @brief Field _lowPassFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Behaviour>  ____lowPassFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::PlayerSpeakerSwapper, ____lowPassFilter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::PlayerSpeakerSwapper) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Audio
