#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSimpleWander.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityAttackSimpleWander)
namespace GlobalNamespace {
class GRAbilityAttackSimple;
}
namespace GlobalNamespace {
class GRAbilityWander;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
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
class GRAbilityAttackSimpleWander;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackSimpleWander*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackSimpleWander*, "", "GRAbilityAttackSimpleWander");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackSimpleWander
class CORDL_TYPE GRAbilityAttackSimpleWander : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field attack, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_attack, put=__cordl_internal_set_attack)) ::GlobalNamespace::GRAbilityAttackSimple*  attack;

/// @brief Field wander, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_wander, put=__cordl_internal_set_wander)) ::GlobalNamespace::GRAbilityWander*  wander;

/// @brief Method GetRange, addr 0x586fee0, size 0x20, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method IsCoolDownOver, addr 0x586fec4, size 0x1c, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x586fea8, size 0x1c, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackSimpleWander* New_ctor() ;

/// @brief Method OnStart, addr 0x586fca0, size 0x60, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586fd00, size 0x60, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x586fd60, size 0x48, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x586fda8, size 0x80, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586fe28, size 0x80, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method Setup, addr 0x586fc04, size 0x9c, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::GlobalNamespace::GRAbilityAttackSimple* const& __cordl_internal_get_attack() const;

constexpr ::GlobalNamespace::GRAbilityAttackSimple*& __cordl_internal_get_attack() ;

constexpr ::GlobalNamespace::GRAbilityWander* const& __cordl_internal_get_wander() const;

constexpr ::GlobalNamespace::GRAbilityWander*& __cordl_internal_get_wander() ;

constexpr void __cordl_internal_set_attack(::GlobalNamespace::GRAbilityAttackSimple*  value) ;

constexpr void __cordl_internal_set_wander(::GlobalNamespace::GRAbilityWander*  value) ;

/// @brief Method .ctor, addr 0x586ff00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackSimpleWander() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSimpleWander", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackSimpleWander(GRAbilityAttackSimpleWander && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSimpleWander", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackSimpleWander(GRAbilityAttackSimpleWander const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1876};

/// @brief Field wander, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWander*  ___wander;

/// @brief Field attack, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackSimple*  ___attack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimpleWander, ___wander) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimpleWander, ___attack) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackSimpleWander) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
