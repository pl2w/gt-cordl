#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Firework_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_ExplosionEvent_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FireworksController)
namespace GlobalNamespace {
class Firework;
}
namespace GlobalNamespace {
struct FireworksController_ExplosionEvent;
}
namespace GlobalNamespace {
class TimeEvent;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworksController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FireworksController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FireworksController*, "", "FireworksController");
// Dependencies Firework, FireworksController::ExplosionEvent, SRand, TimeSince, UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FireworksController
class CORDL_TYPE FireworksController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ExplosionEvent = ::GlobalNamespace::FireworksController_ExplosionEvent;

/// @brief Field _explosionQueue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__explosionQueue, put=__cordl_internal_set__explosionQueue)) ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>  _explosionQueue;

/// @brief Field _fireworksEvent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__fireworksEvent, put=__cordl_internal_set__fireworksEvent)) ::UnityW<::GlobalNamespace::TimeEvent>  _fireworksEvent;

/// @brief Field _lastBurst, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastBurst, put=__cordl_internal_set__lastBurst)) ::UnityW<::UnityEngine::AudioClip>  _lastBurst;

/// @brief Field _lastWhistle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastWhistle, put=__cordl_internal_set__lastWhistle)) ::UnityW<::UnityEngine::AudioClip>  _lastWhistle;

/// @brief Field _launchOrder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchOrder, put=__cordl_internal_set__launchOrder)) ::ArrayW<::UnityW<::GlobalNamespace::Firework>>  _launchOrder;

/// @brief Field _rnd, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rnd, put=__cordl_internal_set__rnd)) ::GlobalNamespace::SRand  _rnd;

/// @brief Field _timeSinceLastWhistle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSinceLastWhistle, put=__cordl_internal_set__timeSinceLastWhistle)) ::GlobalNamespace::TimeSince  _timeSinceLastWhistle;

/// @brief Field bursts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bursts, put=__cordl_internal_set_bursts)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  bursts;

/// @brief Field fireworks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireworks, put=__cordl_internal_set_fireworks)) ::ArrayW<::UnityW<::GlobalNamespace::Firework>>  fireworks;

/// @brief Field minWhistleDelay, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWhistleDelay, put=__cordl_internal_set_minWhistleDelay)) float_t  minWhistleDelay;

/// @brief Field roundLength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundLength, put=__cordl_internal_set_roundLength)) uint32_t  roundLength;

/// @brief Field roundNumVolleys, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundNumVolleys, put=__cordl_internal_set_roundNumVolleys)) uint32_t  roundNumVolleys;

/// @brief Field seed, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) ::StringW  seed;

/// @brief Field whistleVolumeMax, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_whistleVolumeMax, put=__cordl_internal_set_whistleVolumeMax)) float_t  whistleVolumeMax;

/// @brief Field whistleVolumeMin, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_whistleVolumeMin, put=__cordl_internal_set_whistleVolumeMin)) float_t  whistleVolumeMin;

/// @brief Field whistles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_whistles, put=__cordl_internal_set_whistles)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  whistles;

/// @brief Method Awake, addr 0x5b23060, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoExplosion, addr 0x5b23454, size 0x18c, virtual false, abstract: false, final false
inline void DoExplosion(::GlobalNamespace::FireworksController_ExplosionEvent  ev) ;

/// @brief Method Launch, addr 0x5b22540, size 0x450, virtual false, abstract: false, final false
inline void Launch(::GlobalNamespace::Firework*  fw) ;

/// @brief Method LaunchVolley, addr 0x5b230e0, size 0x104, virtual false, abstract: false, final false
inline void LaunchVolley() ;

/// @brief Method LaunchVolleyRound, addr 0x5b231e4, size 0x88, virtual false, abstract: false, final false
inline void LaunchVolleyRound() ;

static inline ::GlobalNamespace::FireworksController* New_ctor() ;

/// @brief Method PostExplosionEvent, addr 0x5b2326c, size 0x88, virtual false, abstract: false, final false
inline void PostExplosionEvent(::GlobalNamespace::FireworksController_ExplosionEvent  ev) ;

/// @brief Method ProcessEvents, addr 0x5b232f8, size 0x15c, virtual false, abstract: false, final false
inline void ProcessEvents() ;

/// @brief Method RenderGizmo, addr 0x5b22cb8, size 0x214, virtual false, abstract: false, final false
inline void RenderGizmo(::GlobalNamespace::Firework*  fw, ::UnityEngine::Color  c) ;

/// @brief Method Update, addr 0x5b232f4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent> const& __cordl_internal_get__explosionQueue() const;

constexpr ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>& __cordl_internal_get__explosionQueue() ;

constexpr ::UnityW<::GlobalNamespace::TimeEvent> const& __cordl_internal_get__fireworksEvent() const;

constexpr ::UnityW<::GlobalNamespace::TimeEvent>& __cordl_internal_get__fireworksEvent() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__lastBurst() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__lastBurst() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__lastWhistle() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__lastWhistle() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>> const& __cordl_internal_get__launchOrder() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>>& __cordl_internal_get__launchOrder() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get__rnd() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get__rnd() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__timeSinceLastWhistle() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__timeSinceLastWhistle() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_bursts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_bursts() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>> const& __cordl_internal_get_fireworks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Firework>>& __cordl_internal_get_fireworks() ;

constexpr float_t const& __cordl_internal_get_minWhistleDelay() const;

constexpr float_t& __cordl_internal_get_minWhistleDelay() ;

constexpr uint32_t const& __cordl_internal_get_roundLength() const;

constexpr uint32_t& __cordl_internal_get_roundLength() ;

constexpr uint32_t const& __cordl_internal_get_roundNumVolleys() const;

constexpr uint32_t& __cordl_internal_get_roundNumVolleys() ;

constexpr ::StringW const& __cordl_internal_get_seed() const;

constexpr ::StringW& __cordl_internal_get_seed() ;

constexpr float_t const& __cordl_internal_get_whistleVolumeMax() const;

constexpr float_t& __cordl_internal_get_whistleVolumeMax() ;

constexpr float_t const& __cordl_internal_get_whistleVolumeMin() const;

constexpr float_t& __cordl_internal_get_whistleVolumeMin() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_whistles() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_whistles() ;

constexpr void __cordl_internal_set__explosionQueue(::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>  value) ;

constexpr void __cordl_internal_set__fireworksEvent(::UnityW<::GlobalNamespace::TimeEvent>  value) ;

constexpr void __cordl_internal_set__lastBurst(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__lastWhistle(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__launchOrder(::ArrayW<::UnityW<::GlobalNamespace::Firework>>  value) ;

constexpr void __cordl_internal_set__rnd(::GlobalNamespace::SRand  value) ;

constexpr void __cordl_internal_set__timeSinceLastWhistle(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_bursts(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_fireworks(::ArrayW<::UnityW<::GlobalNamespace::Firework>>  value) ;

constexpr void __cordl_internal_set_minWhistleDelay(float_t  value) ;

constexpr void __cordl_internal_set_roundLength(uint32_t  value) ;

constexpr void __cordl_internal_set_roundNumVolleys(uint32_t  value) ;

constexpr void __cordl_internal_set_seed(::StringW  value) ;

constexpr void __cordl_internal_set_whistleVolumeMax(float_t  value) ;

constexpr void __cordl_internal_set_whistleVolumeMin(float_t  value) ;

constexpr void __cordl_internal_set_whistles(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

/// @brief Method .ctor, addr 0x5b235e0, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FireworksController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FireworksController(FireworksController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FireworksController(FireworksController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3616};

/// @brief Field fireworks, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::Firework>>  ___fireworks;

/// @brief Field whistles, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___whistles;

/// @brief Field bursts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___bursts;

/// [Space]
/// [Range(0, 1)]
/// @brief Field whistleVolumeMin, offset: 0x38, size: 0x4, def value: None
 float_t  ___whistleVolumeMin;

/// [Range(0, 1)]
/// @brief Field whistleVolumeMax, offset: 0x3c, size: 0x4, def value: None
 float_t  ___whistleVolumeMax;

/// @brief Field minWhistleDelay, offset: 0x40, size: 0x4, def value: None
 float_t  ___minWhistleDelay;

/// [Space]
/// @brief Field _lastWhistle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____lastWhistle;

/// @brief Field _lastBurst, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____lastBurst;

/// @brief Field _launchOrder, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::Firework>>  ____launchOrder;

/// @brief Field _rnd, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ____rnd;

/// @brief Field _explosionQueue, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FireworksController_ExplosionEvent>  ____explosionQueue;

/// @brief Field _timeSinceLastWhistle, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____timeSinceLastWhistle;

/// [Space]
/// @brief Field seed, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___seed;

/// [Space]
/// @brief Field roundNumVolleys, offset: 0x80, size: 0x4, def value: None
 uint32_t  ___roundNumVolleys;

/// @brief Field roundLength, offset: 0x84, size: 0x4, def value: None
 uint32_t  ___roundLength;

/// [FormerlySerializedAs("_timeOfDayEvent")]
/// [FormerlySerializedAs("_timeOfDay")]
/// [Space]
/// [SerializeField]
/// @brief Field _fireworksEvent, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TimeEvent>  ____fireworksEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FireworksController, ___fireworks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___whistles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___bursts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___whistleVolumeMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___whistleVolumeMax) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___minWhistleDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____lastWhistle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____lastBurst) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____launchOrder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____rnd) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____explosionQueue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____timeSinceLastWhistle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___seed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___roundNumVolleys) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ___roundLength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____fireworksEvent) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FireworksController) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
