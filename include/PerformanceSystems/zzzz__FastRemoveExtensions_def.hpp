#pragma once
// IWYU pragma private; include "PerformanceSystems/FastRemoveExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastRemoveExtensions)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PerformanceSystems {
class FastRemoveExtensions;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::FastRemoveExtensions*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::FastRemoveExtensions*, "PerformanceSystems", "FastRemoveExtensions");
// [Extension]
// Dependencies System.Object
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.FastRemoveExtensions
class CORDL_TYPE FastRemoveExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method FastRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool FastRemove(::System::Collections::Generic::List_1<T>*  list, T  itemToRemove) ;

/// [Extension]
/// @brief Method FastRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool FastRemove(::System::Collections::Generic::List_1<T>*  list, ::System::Collections::Generic::HashSet_1<T>*  setToRemove) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastRemoveExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastRemoveExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastRemoveExtensions(FastRemoveExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastRemoveExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastRemoveExtensions(FastRemoveExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PerformanceSystems::FastRemoveExtensions) == 0x10, "Size mismatch!");

} // namespace end def PerformanceSystems
