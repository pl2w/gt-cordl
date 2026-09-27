#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityThrown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityThrown)
namespace GlobalNamespace {
class GRAbilityIdle;
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
class GRAbilityThrown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityThrown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityThrown*, "", "GRAbilityThrown");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityThrown
class CORDL_TYPE GRAbilityThrown : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field idleAbility, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleAbility, put=__cordl_internal_set_idleAbility)) ::GlobalNamespace::GRAbilityIdle*  idleAbility;

/// @brief Method IsDone, addr 0x586ad0c, size 0x1c, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityThrown* New_ctor() ;

/// @brief Method OnStart, addr 0x586ac6c, size 0x4c, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586acb8, size 0x54, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateAuthority, addr 0x586ad28, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586ad6c, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method Setup, addr 0x586abfc, size 0x70, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_idleAbility() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_idleAbility() ;

constexpr void __cordl_internal_set_idleAbility(::GlobalNamespace::GRAbilityIdle*  value) ;

/// @brief Method .ctor, addr 0x586adb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityThrown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityThrown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityThrown(GRAbilityThrown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityThrown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityThrown(GRAbilityThrown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1859};

/// @brief Field idleAbility, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___idleAbility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityThrown, ___idleAbility) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityThrown) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
