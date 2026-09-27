#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectSchedule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectSchedule)
namespace GameObjectScheduling {
class GameObjectSchedule_GameObjectScheduleNode;
}
namespace GameObjectScheduling {
class GameObjectSchedule___c;
}
namespace GameObjectScheduling {
class SchedulingOptions;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GameObjectScheduling {
class GameObjectSchedule;
}
namespace GameObjectScheduling {
class GameObjectSchedule_GameObjectScheduleNode;
}
namespace GameObjectScheduling {
class GameObjectSchedule___c;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::GameObjectSchedule*);
MARK_REF_T(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*);
MARK_REF_T(::GameObjectScheduling::GameObjectSchedule___c*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::GameObjectSchedule*, "GameObjectScheduling", "GameObjectSchedule");
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*, "GameObjectScheduling", "GameObjectSchedule/GameObjectScheduleNode");
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::GameObjectSchedule___c*, "GameObjectScheduling", "GameObjectSchedule/<>c");
// [CreateAssetMenu(fileName = "New Game Object Schedule", menuName = "Game Object Scheduling/Game Object Schedule", order = 0)]
// Dependencies GameObjectScheduling.GameObjectSchedule::GameObjectScheduleNode, UnityEngine.ScriptableObject
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.GameObjectSchedule
class CORDL_TYPE GameObjectSchedule : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using GameObjectScheduleNode = ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode;

using __c = ::GameObjectScheduling::GameObjectSchedule___c;

 __declspec(property(get=get_InitialState)) bool  InitialState;

 __declspec(property(get=get_Nodes)) ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>  Nodes;

/// @brief Field initialState, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialState, put=__cordl_internal_set_initialState)) bool  initialState;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>  nodes;

/// @brief Field options, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::UnityW<::GameObjectScheduling::SchedulingOptions>  options;

/// @brief Field validated, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_validated, put=__cordl_internal_set_validated)) bool  validated;

/// @brief Method GenerateDailyShuffle, addr 0x5ddfaa0, size 0x4f0, virtual false, abstract: false, final false
static inline void GenerateDailyShuffle(::System::DateTime  startDate, ::System::DateTime  endDate, ::ArrayW<::GameObjectScheduling::GameObjectSchedule*>  schedules) ;

/// @brief Method GetCurrentNodeIndex, addr 0x5ddf680, size 0xfc, virtual false, abstract: false, final false
inline int32_t GetCurrentNodeIndex(::System::DateTime  currentDate, ::by_ref<::System::DateTime>  startDate) ;

static inline ::GameObjectScheduling::GameObjectSchedule* New_ctor() ;

/// @brief Method Validate, addr 0x5ddf77c, size 0x28, virtual false, abstract: false, final false
inline void Validate() ;

constexpr bool const& __cordl_internal_get_initialState() const;

constexpr bool& __cordl_internal_get_initialState() ;

constexpr ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>& __cordl_internal_get_nodes() ;

constexpr ::UnityW<::GameObjectScheduling::SchedulingOptions> const& __cordl_internal_get_options() const;

constexpr ::UnityW<::GameObjectScheduling::SchedulingOptions>& __cordl_internal_get_options() ;

constexpr bool const& __cordl_internal_get_validated() const;

constexpr bool& __cordl_internal_get_validated() ;

constexpr void __cordl_internal_set_initialState(bool  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>  value) ;

constexpr void __cordl_internal_set_options(::UnityW<::GameObjectScheduling::SchedulingOptions>  value) ;

constexpr void __cordl_internal_set_validated(bool  value) ;

/// @brief Method .ctor, addr 0x5ddfff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _validate, addr 0x5ddf7a4, size 0x1c0, virtual false, abstract: false, final false
inline void _validate() ;

/// @brief Method get_InitialState, addr 0x5ddf678, size 0x8, virtual false, abstract: false, final false
inline bool get_InitialState() ;

/// @brief Method get_Nodes, addr 0x5ddf670, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*> get_Nodes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectSchedule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSchedule(GameObjectSchedule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSchedule(GameObjectSchedule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5126};

/// [SerializeField]
/// @brief Field initialState, offset: 0x18, size: 0x1, def value: None
 bool  ___initialState;

/// [SerializeField]
/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>  ___nodes;

/// [SerializeField]
/// @brief Field options, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::SchedulingOptions>  ___options;

/// @brief Field validated, offset: 0x30, size: 0x1, def value: None
 bool  ___validated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule, ___initialState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule, ___options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule, ___validated) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::GameObjectSchedule) == 0x38, "Size mismatch!");

} // namespace end def GameObjectScheduling
// [CompilerGenerated]
// Dependencies System.Object
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.GameObjectSchedule/<>c
class CORDL_TYPE GameObjectSchedule___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GameObjectScheduling::GameObjectSchedule___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*  __9__11_0;

static inline ::GameObjectScheduling::GameObjectSchedule___c* New_ctor() ;

/// @brief Method <_validate>b__11_0, addr 0x5de0078, size 0x88, virtual false, abstract: false, final false
inline int32_t __validate_b__11_0(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*  e1, ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*  e2) ;

/// @brief Method .ctor, addr 0x5de0070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GameObjectScheduling::GameObjectSchedule___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::GameObjectScheduling::GameObjectSchedule___c*  value) ;

static inline void setStaticF___9__11_0(::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectSchedule___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSchedule___c(GameObjectSchedule___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSchedule___c(GameObjectSchedule___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GameObjectScheduling::GameObjectSchedule___c) == 0x10, "Size mismatch!");

} // namespace end def GameObjectScheduling
// Dependencies System.DateTime, System.Object
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.GameObjectSchedule/GameObjectScheduleNode
class CORDL_TYPE GameObjectSchedule_GameObjectScheduleNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActiveState)) bool  ActiveState;

 __declspec(property(get=get_DateTime)) ::System::DateTime  DateTime;

/// @brief Field activeDateTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeDateTime, put=__cordl_internal_set_activeDateTime)) ::StringW  activeDateTime;

/// @brief Field activeState, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_activeState, put=__cordl_internal_set_activeState)) bool  activeState;

/// @brief Field dateTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateTime, put=__cordl_internal_set_dateTime)) ::System::DateTime  dateTime;

static inline ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode* New_ctor() ;

/// @brief Method Validate, addr 0x5ddf964, size 0x13c, virtual false, abstract: false, final false
inline void Validate() ;

constexpr ::StringW const& __cordl_internal_get_activeDateTime() const;

constexpr ::StringW& __cordl_internal_get_activeDateTime() ;

constexpr bool const& __cordl_internal_get_activeState() const;

constexpr bool& __cordl_internal_get_activeState() ;

constexpr ::System::DateTime const& __cordl_internal_get_dateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_dateTime() ;

constexpr void __cordl_internal_set_activeDateTime(::StringW  value) ;

constexpr void __cordl_internal_set_activeState(bool  value) ;

constexpr void __cordl_internal_set_dateTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x5ddff90, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveState, addr 0x5ddfff8, size 0x8, virtual false, abstract: false, final false
inline bool get_ActiveState() ;

/// @brief Method get_DateTime, addr 0x5de0000, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectSchedule_GameObjectScheduleNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule_GameObjectScheduleNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSchedule_GameObjectScheduleNode(GameObjectSchedule_GameObjectScheduleNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedule_GameObjectScheduleNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSchedule_GameObjectScheduleNode(GameObjectSchedule_GameObjectScheduleNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5124};

/// [SerializeField]
/// @brief Field activeDateTime, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___activeDateTime;

/// [SerializeField]
/// [Tooltip("Check to turn on. Uncheck to turn off.")]
/// @brief Field activeState, offset: 0x18, size: 0x1, def value: None
 bool  ___activeState;

/// @brief Field dateTime, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___dateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode, ___activeDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode, ___activeState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode, ___dateTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode) == 0x28, "Size mismatch!");

} // namespace end def GameObjectScheduling
