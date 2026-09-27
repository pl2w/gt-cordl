#pragma once
// IWYU pragma private; include "Fusion/SimulationInputList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationInputList)
namespace Fusion {
class SimulationInput;
}
// Forward declare root types
namespace Fusion {
class SimulationInputList;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationInputList*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInputList*, "Fusion", "SimulationInputList");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationInputList
class CORDL_TYPE SimulationInputList : public ::System::Object {
public:
// Declarations
/// @brief Field Count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) int32_t  Count;

/// @brief Field Head, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Head, put=__cordl_internal_set_Head)) ::Fusion::SimulationInput*  Head;

/// @brief Field Tail, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tail, put=__cordl_internal_set_Tail)) ::Fusion::SimulationInput*  Tail;

/// @brief Method AddAfter, addr 0x5fe057c, size 0x19c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::SimulationInput*  item, ::Fusion::SimulationInput*  after) ;

/// @brief Method AddBefore, addr 0x5fe03e0, size 0x19c, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::SimulationInput*  item, ::Fusion::SimulationInput*  before) ;

/// @brief Method AddFirst, addr 0x5fe0254, size 0xb8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::SimulationInput*  item) ;

/// @brief Method AddLast, addr 0x5fe0338, size 0xa8, virtual false, abstract: false, final false
inline void AddLast(::Fusion::SimulationInput*  item) ;

/// @brief Method Concat, addr 0x5fe08bc, size 0x140, virtual false, abstract: false, final false
inline void Concat(::Fusion::SimulationInputList*  other) ;

/// @brief Method IsInList, addr 0x5fe030c, size 0x2c, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::SimulationInput*  item) ;

static inline ::Fusion::SimulationInputList* New_ctor() ;

/// @brief Method Remove, addr 0x5fe079c, size 0xec, virtual false, abstract: false, final false
inline void Remove(::Fusion::SimulationInput*  item) ;

/// @brief Method RemoveAll, addr 0x5fe0888, size 0x34, virtual false, abstract: false, final false
inline ::Fusion::SimulationInputList* RemoveAll() ;

/// @brief Method RemoveHead, addr 0x5fe0718, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* RemoveHead() ;

constexpr int32_t const& __cordl_internal_get_Count() const;

constexpr int32_t& __cordl_internal_get_Count() ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get_Head() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get_Head() ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get_Tail() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get_Tail() ;

constexpr void __cordl_internal_set_Count(int32_t  value) ;

constexpr void __cordl_internal_set_Head(::Fusion::SimulationInput*  value) ;

constexpr void __cordl_internal_set_Tail(::Fusion::SimulationInput*  value) ;

/// @brief Method .ctor, addr 0x5fe09fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationInputList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationInputList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationInputList(SimulationInputList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationInputList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationInputList(SimulationInputList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19294};

/// @brief Field Count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Count;

/// @brief Field Head, offset: 0x18, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ___Head;

/// @brief Field Tail, offset: 0x20, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ___Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationInputList, ___Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInputList, ___Head) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInputList, ___Tail) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationInputList) == 0x28, "Size mismatch!");

} // namespace end def Fusion
