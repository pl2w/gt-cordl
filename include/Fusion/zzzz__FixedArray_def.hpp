#pragma once
// IWYU pragma private; include "Fusion/FixedArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray)
namespace Fusion {
template<typename T>
struct FixedArray_1;
}
// Forward declare root types
namespace Fusion {
class FixedArray;
}
// Write type traits
MARK_REF_T(::Fusion::FixedArray*);
DEFINE_IL2CPP_CLASS(::Fusion::FixedArray*, "Fusion", "FixedArray");
// [Extension]
// Dependencies System.IEquatable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FixedArray
class CORDL_TYPE FixedArray : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Fusion::FixedArray_1<T> Create(::by_ref<T>  firstField, int32_t  length) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TActual,typename TAdapted>
requires(::cordl_internals::value_type_constraint<TActual> && ::cordl_internals::default_constructor_constraint<TActual> && ::cordl_internals::value_type_constraint<TAdapted> && ::cordl_internals::default_constructor_constraint<TAdapted>)
static inline ::Fusion::FixedArray_1<TAdapted> Create(::by_ref<TActual>  firstField, int32_t  length) ;

/// @brief Method CreateFromFieldSequence, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Fusion::FixedArray_1<T> CreateFromFieldSequence(::by_ref<T>  firstField, ::by_ref<T>  lastField) ;

/// [Extension]
/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t IndexOf(::Fusion::FixedArray_1<T>  array, T  elem) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedArray(FixedArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedArray(FixedArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FixedArray) == 0x10, "Size mismatch!");

} // namespace end def Fusion
