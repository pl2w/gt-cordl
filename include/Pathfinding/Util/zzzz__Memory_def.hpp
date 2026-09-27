#pragma once
// IWYU pragma private; include "Pathfinding/Util/Memory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Memory)
// Forward declare root types
namespace Pathfinding::Util {
class Memory;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::Memory*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::Memory*, "Pathfinding.Util", "Memory");
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.Memory
class CORDL_TYPE Memory : public ::System::Object {
public:
// Declarations
/// @brief Method MemSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void MemSet(::ArrayW<T>  array, T  value, int32_t  byteSize) ;

/// @brief Method MemSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void MemSet(::ArrayW<T>  array, T  value, int32_t  totalSize, int32_t  byteSize) ;

/// @brief Method ShrinkArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ShrinkArray(::ArrayW<T>  arr, int32_t  newLength) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::by_ref<T>  a, ::by_ref<T>  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Memory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Memory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Memory(Memory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Memory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Memory(Memory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Util::Memory) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Util
