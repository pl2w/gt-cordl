#pragma once
// IWYU pragma private; include "GlobalNamespace/CoconutMystic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoconutMystic)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
class GeodeItem;
}
namespace GlobalNamespace {
class RandomLocalizedStrings;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class CoconutMystic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CoconutMystic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoconutMystic*, "", "CoconutMystic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoconutMystic
class CORDL_TYPE CoconutMystic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field answers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_answers, put=__cordl_internal_set_answers)) ::UnityW<::GlobalNamespace::RandomLocalizedStrings>  answers;

/// @brief Field breakEffect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_breakEffect, put=__cordl_internal_set_breakEffect)) ::UnityW<::UnityEngine::ParticleSystem>  breakEffect;

/// @brief Field distinct, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_distinct, put=__cordl_internal_set_distinct)) bool  distinct;

/// @brief Field geodeItem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_geodeItem, put=__cordl_internal_set_geodeItem)) ::UnityW<::GlobalNamespace::GeodeItem>  geodeItem;

/// @brief Field kUpdateLabelEvent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kUpdateLabelEvent, put=setStaticF_kUpdateLabelEvent)) int32_t  kUpdateLabelEvent;

/// @brief Field label, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::UnityW<::TMPro::TMP_Text>  label;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field soundPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundPlayer, put=__cordl_internal_set_soundPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundPlayer;

/// @brief Method Awake, addr 0x5755290, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CoconutMystic* New_ctor() ;

/// @brief Method OnDisable, addr 0x57553a4, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57552e8, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonEvent, addr 0x5755460, size 0x220, virtual false, abstract: false, final false
inline void OnPhotonEvent(::ExitGames::Client::Photon::EventData*  evData) ;

/// @brief Method ShowAnswer, addr 0x57556e0, size 0x25c, virtual false, abstract: false, final false
inline void ShowAnswer() ;

/// @brief Method UpdateLabel, addr 0x5755680, size 0x60, virtual false, abstract: false, final false
inline void UpdateLabel() ;

constexpr ::UnityW<::GlobalNamespace::RandomLocalizedStrings> const& __cordl_internal_get_answers() const;

constexpr ::UnityW<::GlobalNamespace::RandomLocalizedStrings>& __cordl_internal_get_answers() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_breakEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_breakEffect() ;

constexpr bool const& __cordl_internal_get_distinct() const;

constexpr bool& __cordl_internal_get_distinct() ;

constexpr ::UnityW<::GlobalNamespace::GeodeItem> const& __cordl_internal_get_geodeItem() const;

constexpr ::UnityW<::GlobalNamespace::GeodeItem>& __cordl_internal_get_geodeItem() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundPlayer() ;

constexpr void __cordl_internal_set_answers(::UnityW<::GlobalNamespace::RandomLocalizedStrings>  value) ;

constexpr void __cordl_internal_set_breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_distinct(bool  value) ;

constexpr void __cordl_internal_set_geodeItem(::UnityW<::GlobalNamespace::GeodeItem>  value) ;

constexpr void __cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_soundPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x575593c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_kUpdateLabelEvent() ;

static inline void setStaticF_kUpdateLabelEvent(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoconutMystic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoconutMystic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoconutMystic(CoconutMystic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoconutMystic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoconutMystic(CoconutMystic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1317};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field geodeItem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GeodeItem>  ___geodeItem;

/// @brief Field soundPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundPlayer;

/// @brief Field breakEffect, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___breakEffect;

/// @brief Field answers, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RandomLocalizedStrings>  ___answers;

/// @brief Field label, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label;

/// @brief Field distinct, offset: 0x50, size: 0x1, def value: None
 bool  ___distinct;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___geodeItem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___soundPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___breakEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___answers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___label) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoconutMystic, ___distinct) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CoconutMystic) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
