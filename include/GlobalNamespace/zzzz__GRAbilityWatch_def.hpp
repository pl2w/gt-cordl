#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityWatch)
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class NetPlayer;
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
class GRAbilityWatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityWatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityWatch*, "", "GRAbilityWatch");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityWatch
class CORDL_TYPE GRAbilityWatch : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field endTime, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) double_t  endTime;

/// @brief Field maxTurnSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field target, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method IsDone, addr 0x58683b4, size 0x38, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityWatch* New_ctor() ;

/// @brief Method OnStart, addr 0x5868328, size 0x70, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x5868398, size 0x1c, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x58683ec, size 0x2c, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x5868418, size 0x10c, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x5868308, size 0x20, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr double_t const& __cordl_internal_get_endTime() const;

constexpr double_t& __cordl_internal_get_endTime() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_endTime(double_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5868524, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityWatch(GRAbilityWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityWatch(GRAbilityWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1851};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field animName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field maxTurnSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field target, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field endTime, offset: 0x90, size: 0x8, def value: None
 double_t  ___endTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___animName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___animSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___maxTurnSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___target) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityWatch, ___endTime) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityWatch) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
