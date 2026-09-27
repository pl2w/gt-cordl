#pragma once
// IWYU pragma private; include "Fusion/SimulationHistoryEntryList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationHistoryEntryList)
namespace Fusion {
class History_Simulation_Entry;
}
// Forward declare root types
namespace Fusion {
class SimulationHistoryEntryList;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationHistoryEntryList*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationHistoryEntryList*, "Fusion", "SimulationHistoryEntryList");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationHistoryEntryList
class CORDL_TYPE SimulationHistoryEntryList : public ::System::Object {
public:
// Declarations
/// @brief Field Count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) int32_t  Count;

/// @brief Field Head, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Head, put=__cordl_internal_set_Head)) ::Fusion::History_Simulation_Entry*  Head;

/// @brief Field Tail, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tail, put=__cordl_internal_set_Tail)) ::Fusion::History_Simulation_Entry*  Tail;

/// @brief Method AddAfter, addr 0x5fe0d3c, size 0x19c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::History_Simulation_Entry*  item, ::Fusion::History_Simulation_Entry*  after) ;

/// @brief Method AddBefore, addr 0x5fe0ba0, size 0x19c, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::History_Simulation_Entry*  item, ::Fusion::History_Simulation_Entry*  before) ;

/// @brief Method AddFirst, addr 0x5fe0a04, size 0xb8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::History_Simulation_Entry*  item) ;

/// @brief Method AddLast, addr 0x5fe0ae8, size 0xb8, virtual false, abstract: false, final false
inline void AddLast(::Fusion::History_Simulation_Entry*  item) ;

/// @brief Method Concat, addr 0x5fe107c, size 0x140, virtual false, abstract: false, final false
inline void Concat(::Fusion::SimulationHistoryEntryList*  other) ;

/// @brief Method IsInList, addr 0x5fe0abc, size 0x2c, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::History_Simulation_Entry*  item) ;

static inline ::Fusion::SimulationHistoryEntryList* New_ctor() ;

/// @brief Method Remove, addr 0x5fe0f5c, size 0xec, virtual false, abstract: false, final false
inline void Remove(::Fusion::History_Simulation_Entry*  item) ;

/// @brief Method RemoveAll, addr 0x5fe1048, size 0x34, virtual false, abstract: false, final false
inline ::Fusion::SimulationHistoryEntryList* RemoveAll() ;

/// @brief Method RemoveHead, addr 0x5fe0ed8, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::History_Simulation_Entry* RemoveHead() ;

constexpr int32_t const& __cordl_internal_get_Count() const;

constexpr int32_t& __cordl_internal_get_Count() ;

constexpr ::Fusion::History_Simulation_Entry* const& __cordl_internal_get_Head() const;

constexpr ::Fusion::History_Simulation_Entry*& __cordl_internal_get_Head() ;

constexpr ::Fusion::History_Simulation_Entry* const& __cordl_internal_get_Tail() const;

constexpr ::Fusion::History_Simulation_Entry*& __cordl_internal_get_Tail() ;

constexpr void __cordl_internal_set_Count(int32_t  value) ;

constexpr void __cordl_internal_set_Head(::Fusion::History_Simulation_Entry*  value) ;

constexpr void __cordl_internal_set_Tail(::Fusion::History_Simulation_Entry*  value) ;

/// @brief Method .ctor, addr 0x5fe11bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationHistoryEntryList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationHistoryEntryList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationHistoryEntryList(SimulationHistoryEntryList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationHistoryEntryList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationHistoryEntryList(SimulationHistoryEntryList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19295};

/// @brief Field Count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Count;

/// @brief Field Head, offset: 0x18, size: 0x8, def value: None
 ::Fusion::History_Simulation_Entry*  ___Head;

/// @brief Field Tail, offset: 0x20, size: 0x8, def value: None
 ::Fusion::History_Simulation_Entry*  ___Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationHistoryEntryList, ___Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationHistoryEntryList, ___Head) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationHistoryEntryList, ___Tail) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationHistoryEntryList) == 0x28, "Size mismatch!");

} // namespace end def Fusion
