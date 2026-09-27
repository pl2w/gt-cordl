#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectScheduleGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GameObjectScheduling/zzzz__GameObjectSchedule_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectScheduleGenerator_ScheduleType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameObjectScheduleGenerator)
namespace GlobalNamespace {
struct GameObjectScheduleGenerator_ScheduleType;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectScheduleGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameObjectScheduleGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameObjectScheduleGenerator*, "", "GameObjectScheduleGenerator");
// [CreateAssetMenu(fileName = "New Game Object Schedule Generator", menuName = "Game Object Scheduling/Game Object Schedule Generator")]
// Dependencies GameObjectScheduleGenerator::ScheduleType, GameObjectScheduling.GameObjectSchedule, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameObjectScheduleGenerator
class CORDL_TYPE GameObjectScheduleGenerator : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ScheduleType = ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType;

/// @brief Field scheduleEnd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduleEnd, put=__cordl_internal_set_scheduleEnd)) ::StringW  scheduleEnd;

/// @brief Field scheduleStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduleStart, put=__cordl_internal_set_scheduleStart)) ::StringW  scheduleStart;

/// @brief Field scheduleType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scheduleType, put=__cordl_internal_set_scheduleType)) ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType  scheduleType;

/// @brief Field schedules, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedules, put=__cordl_internal_set_schedules)) ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>  schedules;

/// @brief Method GenerateSchedule, addr 0x57ec5e0, size 0x24c, virtual false, abstract: false, final false
inline void GenerateSchedule() ;

static inline ::GlobalNamespace::GameObjectScheduleGenerator* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_scheduleEnd() const;

constexpr ::StringW& __cordl_internal_get_scheduleEnd() ;

constexpr ::StringW const& __cordl_internal_get_scheduleStart() const;

constexpr ::StringW& __cordl_internal_get_scheduleStart() ;

constexpr ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType const& __cordl_internal_get_scheduleType() const;

constexpr ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType& __cordl_internal_get_scheduleType() ;

constexpr ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>> const& __cordl_internal_get_schedules() const;

constexpr ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>& __cordl_internal_get_schedules() ;

constexpr void __cordl_internal_set_scheduleEnd(::StringW  value) ;

constexpr void __cordl_internal_set_scheduleStart(::StringW  value) ;

constexpr void __cordl_internal_set_scheduleType(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType  value) ;

constexpr void __cordl_internal_set_schedules(::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>  value) ;

/// @brief Method .ctor, addr 0x57ec82c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectScheduleGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectScheduleGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectScheduleGenerator(GameObjectScheduleGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectScheduleGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectScheduleGenerator(GameObjectScheduleGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{174};

/// [SerializeField]
/// @brief Field schedules, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>  ___schedules;

/// [SerializeField]
/// @brief Field scheduleStart, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___scheduleStart;

/// [SerializeField]
/// @brief Field scheduleEnd, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___scheduleEnd;

/// [SerializeField]
/// @brief Field scheduleType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType  ___scheduleType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameObjectScheduleGenerator, ___schedules) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectScheduleGenerator, ___scheduleStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectScheduleGenerator, ___scheduleEnd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectScheduleGenerator, ___scheduleType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameObjectScheduleGenerator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
