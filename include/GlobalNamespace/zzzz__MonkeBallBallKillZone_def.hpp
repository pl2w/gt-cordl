#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallBallKillZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonkeBallBallKillZone)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallBallKillZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallBallKillZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallBallKillZone*, "", "MonkeBallBallKillZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallBallKillZone
class CORDL_TYPE MonkeBallBallKillZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MonkeBallBallKillZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57aa600, size 0x150, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x57aa88c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallBallKillZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallKillZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallBallKillZone(MonkeBallBallKillZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallKillZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallBallKillZone(MonkeBallBallKillZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MonkeBallBallKillZone) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
