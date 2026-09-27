#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugAutoNamePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugAutoNamePlayer)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class ZoneData;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugAutoNamePlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugAutoNamePlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugAutoNamePlayer*, "", "DebugAutoNamePlayer");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugAutoNamePlayer
class CORDL_TYPE DebugAutoNamePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_authorityPollTimer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_authorityPollTimer, put=__cordl_internal_set_m_authorityPollTimer)) float_t  m_authorityPollTimer;

/// @brief Field m_joinDelayTimer, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_joinDelayTimer, put=__cordl_internal_set_m_joinDelayTimer)) float_t  m_joinDelayTimer;

/// @brief Field m_lastIsZoneAuthority, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_lastIsZoneAuthority, put=__cordl_internal_set_m_lastIsZoneAuthority)) bool  m_lastIsZoneAuthority;

/// @brief Field m_lastZone, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lastZone, put=__cordl_internal_set_m_lastZone)) ::GlobalNamespace::GTZone  m_lastZone;

/// @brief Method ApplyAutoName, addr 0x5797fa8, size 0x688, virtual false, abstract: false, final false
inline void ApplyAutoName() ;

/// @brief Method GetIsZoneAuthority, addr 0x5797ea8, size 0x100, virtual false, abstract: false, final false
static inline bool GetIsZoneAuthority(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetPlatformCode, addr 0x5798710, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetPlatformCode() ;

/// @brief Method GetPrimaryZone, addr 0x5797dd4, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTZone GetPrimaryZone() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// @brief Method Init, addr 0x5797d98, size 0x4, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::GlobalNamespace::DebugAutoNamePlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5797da0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5797d9c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayersChanged, addr 0x5798630, size 0x64, virtual false, abstract: false, final false
inline void OnPlayersChanged() ;

/// @brief Method OnRoomJoined, addr 0x5797da8, size 0x2c, virtual false, abstract: false, final false
inline void OnRoomJoined() ;

/// @brief Method OnZoneChange, addr 0x5798694, size 0x7c, virtual false, abstract: false, final false
inline void OnZoneChange(::ArrayW<::GlobalNamespace::ZoneData*>  zones) ;

/// @brief Method Update, addr 0x5797da4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_authorityPollTimer() const;

constexpr float_t& __cordl_internal_get_m_authorityPollTimer() ;

constexpr float_t const& __cordl_internal_get_m_joinDelayTimer() const;

constexpr float_t& __cordl_internal_get_m_joinDelayTimer() ;

constexpr bool const& __cordl_internal_get_m_lastIsZoneAuthority() const;

constexpr bool& __cordl_internal_get_m_lastIsZoneAuthority() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_m_lastZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_m_lastZone() ;

constexpr void __cordl_internal_set_m_authorityPollTimer(float_t  value) ;

constexpr void __cordl_internal_set_m_joinDelayTimer(float_t  value) ;

constexpr void __cordl_internal_set_m_lastIsZoneAuthority(bool  value) ;

constexpr void __cordl_internal_set_m_lastZone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5798750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugAutoNamePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugAutoNamePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugAutoNamePlayer(DebugAutoNamePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugAutoNamePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugAutoNamePlayer(DebugAutoNamePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1463};

/// @brief Field m_authorityPollTimer, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_authorityPollTimer;

/// @brief Field m_joinDelayTimer, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_joinDelayTimer;

/// @brief Field m_lastIsZoneAuthority, offset: 0x28, size: 0x1, def value: None
 bool  ___m_lastIsZoneAuthority;

/// @brief Field m_lastZone, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___m_lastZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugAutoNamePlayer, ___m_authorityPollTimer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugAutoNamePlayer, ___m_joinDelayTimer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugAutoNamePlayer, ___m_lastIsZoneAuthority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugAutoNamePlayer, ___m_lastZone) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugAutoNamePlayer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
