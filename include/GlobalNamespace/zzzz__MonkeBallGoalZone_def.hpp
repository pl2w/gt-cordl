#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGoalZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallGoalZone)
namespace GlobalNamespace {
class MonkeBallPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallGoalZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallGoalZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallGoalZone*, "", "MonkeBallGoalZone");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallGoalZone
class CORDL_TYPE MonkeBallGoalZone : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field playersInGoalZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInGoalZone, put=__cordl_internal_set_playersInGoalZone)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*  playersInGoalZone;

/// @brief Field teamId, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_teamId, put=__cordl_internal_set_teamId)) int32_t  teamId;

/// @brief Method CleanupPlayer, addr 0x57a6fc0, size 0x58, virtual false, abstract: false, final false
inline void CleanupPlayer(::GlobalNamespace::MonkeBallPlayer*  player) ;

static inline ::GlobalNamespace::MonkeBallGoalZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57b04a4, size 0x188, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57b062c, size 0x130, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Tick, addr 0x57b0298, size 0x20c, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>* const& __cordl_internal_get_playersInGoalZone() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*& __cordl_internal_get_playersInGoalZone() ;

constexpr int32_t const& __cordl_internal_get_teamId() const;

constexpr int32_t& __cordl_internal_get_teamId() ;

constexpr void __cordl_internal_set_playersInGoalZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*  value) ;

constexpr void __cordl_internal_set_teamId(int32_t  value) ;

/// @brief Method .ctor, addr 0x57b075c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallGoalZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallGoalZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallGoalZone(MonkeBallGoalZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallGoalZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallGoalZone(MonkeBallGoalZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1553};

/// @brief Field teamId, offset: 0x24, size: 0x4, def value: None
 int32_t  ___teamId;

/// @brief Field playersInGoalZone, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*  ___playersInGoalZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallGoalZone, ___teamId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGoalZone, ___playersInGoalZone) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallGoalZone) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
