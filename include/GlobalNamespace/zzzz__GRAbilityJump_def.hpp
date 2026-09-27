#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityJump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityJump)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace UnityEngine::AI {
struct OffMeshLinkData;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityJump;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityJump*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityJump*, "", "GRAbilityJump");
// Dependencies GRAbilityBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityJump
class CORDL_TYPE GRAbilityJump : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animationData, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationData, put=__cordl_internal_set_animationData)) ::GlobalNamespace::AnimationData*  animationData;

/// @brief Field controlPoint, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get_controlPoint, put=__cordl_internal_set_controlPoint)) ::UnityEngine::Vector3  controlPoint;

/// @brief Field elapsedTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedTime, put=__cordl_internal_set_elapsedTime)) float_t  elapsedTime;

/// @brief Field endPos, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPos, put=__cordl_internal_set_endPos)) ::UnityEngine::Vector3  endPos;

/// @brief Field isActive, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field jumpSpeed, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpSpeed, put=__cordl_internal_set_jumpSpeed)) float_t  jumpSpeed;

/// @brief Field jumpTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpTime, put=__cordl_internal_set_jumpTime)) float_t  jumpTime;

/// @brief Field soundJump, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundJump, put=__cordl_internal_set_soundJump)) ::GlobalNamespace::AbilitySound*  soundJump;

/// @brief Field startPos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPos, put=__cordl_internal_set_startPos)) ::UnityEngine::Vector3  startPos;

/// @brief Method EvaluateQuadratic, addr 0x586826c, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 EvaluateQuadratic(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  t) ;

/// @brief Method IsActive, addr 0x586802c, size 0x8, virtual false, abstract: false, final false
inline bool IsActive() ;

/// @brief Method IsDone, addr 0x586801c, size 0x10, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityJump* New_ctor() ;

/// @brief Method OnStart, addr 0x5867f24, size 0x84, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x5867fa8, size 0x74, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x5868034, size 0x238, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method Setup, addr 0x5867d18, size 0x18, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method SetupJump, addr 0x5867d30, size 0x118, virtual false, abstract: false, final false
inline void SetupJump(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method SetupJumpFromLinkData, addr 0x5867e48, size 0xdc, virtual false, abstract: false, final false
inline void SetupJumpFromLinkData(::UnityEngine::AI::OffMeshLinkData  linkData) ;

constexpr ::GlobalNamespace::AnimationData* const& __cordl_internal_get_animationData() const;

constexpr ::GlobalNamespace::AnimationData*& __cordl_internal_get_animationData() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_controlPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_controlPoint() ;

constexpr float_t const& __cordl_internal_get_elapsedTime() const;

constexpr float_t& __cordl_internal_get_elapsedTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPos() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr float_t const& __cordl_internal_get_jumpSpeed() const;

constexpr float_t& __cordl_internal_get_jumpSpeed() ;

constexpr float_t const& __cordl_internal_get_jumpTime() const;

constexpr float_t& __cordl_internal_get_jumpTime() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundJump() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundJump() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPos() ;

constexpr void __cordl_internal_set_animationData(::GlobalNamespace::AnimationData*  value) ;

constexpr void __cordl_internal_set_controlPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_elapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_endPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_jumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_jumpTime(float_t  value) ;

constexpr void __cordl_internal_set_soundJump(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_startPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x58682f0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityJump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityJump", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityJump(GRAbilityJump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityJump", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityJump(GRAbilityJump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1850};

/// @brief Field startPos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPos;

/// @brief Field endPos, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPos;

/// @brief Field controlPoint, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___controlPoint;

/// [ReadOnly]
/// @brief Field jumpTime, offset: 0x98, size: 0x4, def value: None
 float_t  ___jumpTime;

/// [ReadOnly]
/// @brief Field elapsedTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___elapsedTime;

/// @brief Field isActive, offset: 0xa0, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field animationData, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AnimationData*  ___animationData;

/// @brief Field jumpSpeed, offset: 0xb0, size: 0x4, def value: None
 float_t  ___jumpSpeed;

/// @brief Field soundJump, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundJump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___startPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___endPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___controlPoint) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___jumpTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___elapsedTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___isActive) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___animationData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___jumpSpeed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityJump, ___soundJump) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityJump) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
