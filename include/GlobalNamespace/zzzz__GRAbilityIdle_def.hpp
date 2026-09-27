#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityIdle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityIdle)
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAbilityEvents;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityIdle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityIdle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityIdle*, "", "GRAbilityIdle");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityIdle
class CORDL_TYPE GRAbilityIdle : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animLoops, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_animLoops, put=__cordl_internal_set_animLoops)) int32_t  animLoops;

/// @brief Field animName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field cachedAnimSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedAnimSpeed, put=__cordl_internal_set_cachedAnimSpeed)) float_t  cachedAnimSpeed;

/// @brief Field cachedDuration, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedDuration, put=__cordl_internal_set_cachedDuration)) float_t  cachedDuration;

/// @brief Field coolDown, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field events, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::GlobalNamespace::GameAbilityEvents*  events;

/// @brief Field range, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Method GetRange, addr 0x5867874, size 0x8, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method IsCoolDownOver, addr 0x586783c, size 0x38, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x58677f8, size 0x44, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityIdle* New_ctor() ;

/// @brief Method OnStart, addr 0x5867584, size 0x88, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586760c, size 0x54, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x5867660, size 0x198, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method Setup, addr 0x5867560, size 0x24, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method SpeedUp, addr 0x586787c, size 0x18, virtual false, abstract: false, final false
inline void SpeedUp(float_t  mult) ;

constexpr int32_t const& __cordl_internal_get_animLoops() const;

constexpr int32_t& __cordl_internal_get_animLoops() ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_cachedAnimSpeed() const;

constexpr float_t& __cordl_internal_get_cachedAnimSpeed() ;

constexpr float_t const& __cordl_internal_get_cachedDuration() const;

constexpr float_t& __cordl_internal_get_cachedDuration() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::GlobalNamespace::GameAbilityEvents* const& __cordl_internal_get_events() const;

constexpr ::GlobalNamespace::GameAbilityEvents*& __cordl_internal_get_events() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr void __cordl_internal_set_animLoops(int32_t  value) ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cachedAnimSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cachedDuration(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_events(::GlobalNamespace::GameAbilityEvents*  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

/// @brief Method .ctor, addr 0x5867894, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityIdle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityIdle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityIdle(GRAbilityIdle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityIdle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityIdle(GRAbilityIdle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1847};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field animName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field coolDown, offset: 0x84, size: 0x4, def value: None
 float_t  ___coolDown;

/// @brief Field range, offset: 0x88, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field cachedDuration, offset: 0x8c, size: 0x4, def value: None
 float_t  ___cachedDuration;

/// @brief Field cachedAnimSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___cachedAnimSpeed;

/// @brief Field events, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GameAbilityEvents*  ___events;

/// [ReadOnly]
/// @brief Field animLoops, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___animLoops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___animName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___animSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___coolDown) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___range) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___cachedDuration) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___cachedAnimSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___events) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityIdle, ___animLoops) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityIdle) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
