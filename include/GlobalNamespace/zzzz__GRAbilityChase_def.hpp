#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityChase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityChase)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityChase___c__DisplayClass11_0;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Random;
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
class GRAbilityChase;
}
namespace GlobalNamespace {
class GRAbilityChase___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityChase*);
MARK_REF_T(::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityChase*, "", "GRAbilityChase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*, "", "GRAbilityChase/<>c__DisplayClass11_0");
// Dependencies GRAbilityBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityChase
class CORDL_TYPE GRAbilityChase : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using __c__DisplayClass11_0 = ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0;

/// @brief Field animName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field chaseSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseSpeed, put=__cordl_internal_set_chaseSpeed)) float_t  chaseSpeed;

/// @brief Field giveUpDelay, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_giveUpDelay, put=__cordl_internal_set_giveUpDelay)) float_t  giveUpDelay;

/// @brief Field lastSeenTargetPosition, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetPosition, put=__cordl_internal_set_lastSeenTargetPosition)) ::UnityEngine::Vector3  lastSeenTargetPosition;

/// @brief Field lastSeenTargetTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetTime, put=__cordl_internal_set_lastSeenTargetTime)) double_t  lastSeenTargetTime;

/// @brief Field loseVisibilityDelay, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_loseVisibilityDelay, put=__cordl_internal_set_loseVisibilityDelay)) float_t  loseVisibilityDelay;

/// @brief Field maxTurnSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field movementSound, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_movementSound, put=__cordl_internal_set_movementSound)) ::GlobalNamespace::AbilitySound*  movementSound;

/// @brief Field targetOffsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetOffsets, put=setStaticF_targetOffsets)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  targetOffsets;

/// @brief Field targetPlayer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Method GetMoveTargetOffset, addr 0x5868e80, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetMoveTargetOffset(::UnityEngine::Vector3  targetPos, ::GlobalNamespace::GameEntity*  attackingEntity) ;

/// @brief Method IsDone, addr 0x5868cb8, size 0x40, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityChase* New_ctor() ;

/// @brief Method OnStart, addr 0x5868c44, size 0x70, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x5868cb4, size 0x4, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x5868cf8, size 0x188, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateShared, addr 0x5868f0c, size 0x2c, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x5868f38, size 0x8, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586887c, size 0x3c0, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_chaseSpeed() const;

constexpr float_t& __cordl_internal_get_chaseSpeed() ;

constexpr float_t const& __cordl_internal_get_giveUpDelay() const;

constexpr float_t& __cordl_internal_get_giveUpDelay() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenTargetPosition() ;

constexpr double_t const& __cordl_internal_get_lastSeenTargetTime() const;

constexpr double_t& __cordl_internal_get_lastSeenTargetTime() ;

constexpr float_t const& __cordl_internal_get_loseVisibilityDelay() const;

constexpr float_t& __cordl_internal_get_loseVisibilityDelay() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_movementSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_movementSound() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_chaseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_giveUpDelay(float_t  value) ;

constexpr void __cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenTargetTime(double_t  value) ;

constexpr void __cordl_internal_set_loseVisibilityDelay(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_movementSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5868f40, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_targetOffsets() ;

static inline void setStaticF_targetOffsets(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityChase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityChase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityChase(GRAbilityChase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityChase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityChase(GRAbilityChase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1854};

/// @brief Field chaseSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___chaseSpeed;

/// @brief Field animName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field maxTurnSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field loseVisibilityDelay, offset: 0x88, size: 0x4, def value: None
 float_t  ___loseVisibilityDelay;

/// @brief Field giveUpDelay, offset: 0x8c, size: 0x4, def value: None
 float_t  ___giveUpDelay;

/// @brief Field movementSound, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___movementSound;

/// @brief Field targetPlayer, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field lastSeenTargetTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___lastSeenTargetTime;

/// @brief Field lastSeenTargetPosition, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenTargetPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___chaseSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___animName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___animSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___maxTurnSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___loseVisibilityDelay) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___giveUpDelay) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___movementSound) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___targetPlayer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___lastSeenTargetTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityChase, ___lastSeenTargetPosition) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityChase) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityChase/<>c__DisplayClass11_0
class CORDL_TYPE GRAbilityChase___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field random, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::System::Random*  random;

static inline ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <Setup>b__0, addr 0x5868f50, size 0x1c, virtual false, abstract: false, final false
inline int32_t _Setup_b__0(::UnityEngine::Vector3  x) ;

constexpr ::System::Random* const& __cordl_internal_get_random() const;

constexpr ::System::Random*& __cordl_internal_get_random() ;

constexpr void __cordl_internal_set_random(::System::Random*  value) ;

/// @brief Method .ctor, addr 0x5868c3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityChase___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityChase___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityChase___c__DisplayClass11_0(GRAbilityChase___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityChase___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityChase___c__DisplayClass11_0(GRAbilityChase___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1853};

/// @brief Field random, offset: 0x10, size: 0x8, def value: None
 ::System::Random*  ___random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0, ___random) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
