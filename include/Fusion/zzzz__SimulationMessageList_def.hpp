#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageList)
namespace Fusion {
struct SimulationMessageEnvelope;
}
// Forward declare root types
namespace Fusion {
struct SimulationMessageList;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageList);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageList, "Fusion", "SimulationMessageList");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageList
struct CORDL_TYPE SimulationMessageList {
public:
// Declarations
/// @brief Method AddAfter, addr 0x5fdf6c4, size 0x15c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::SimulationMessageEnvelope*  item, ::Fusion::SimulationMessageEnvelope*  after) ;

/// @brief Method AddBefore, addr 0x5fdf568, size 0x15c, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::SimulationMessageEnvelope*  item, ::Fusion::SimulationMessageEnvelope*  before) ;

/// @brief Method AddFirst, addr 0x5fdf44c, size 0x74, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::SimulationMessageEnvelope*  item) ;

/// @brief Method AddLast, addr 0x5fdf4ec, size 0x7c, virtual false, abstract: false, final false
inline void AddLast(::Fusion::SimulationMessageEnvelope*  item) ;

/// @brief Method Concat, addr 0x5fdf960, size 0x10c, virtual false, abstract: false, final false
inline void Concat(::Fusion::SimulationMessageList  other) ;

/// @brief Method IsInList, addr 0x5fdf4c0, size 0x2c, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::SimulationMessageEnvelope*  item) ;

/// @brief Method Remove, addr 0x5fdf8a4, size 0x98, virtual false, abstract: false, final false
inline void Remove(::Fusion::SimulationMessageEnvelope*  item) ;

/// @brief Method RemoveAll, addr 0x5fdf93c, size 0x24, virtual false, abstract: false, final false
inline ::Fusion::SimulationMessageList RemoveAll() ;

/// @brief Method RemoveHead, addr 0x5fdf820, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::SimulationMessageEnvelope* RemoveHead() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageList(int32_t  Count, ::Fusion::SimulationMessageEnvelope*  Head, ::Fusion::SimulationMessageEnvelope*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::Fusion::SimulationMessageEnvelope*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::Fusion::SimulationMessageEnvelope*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationMessageList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationMessageList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationMessageList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationMessageList) == 0x18, "Size mismatch!");

} // namespace end def Fusion
