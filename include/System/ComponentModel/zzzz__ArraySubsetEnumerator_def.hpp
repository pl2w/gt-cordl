#pragma once
// IWYU pragma private; include "System/ComponentModel/ArraySubsetEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySubsetEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ArraySubsetEnumerator;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ArraySubsetEnumerator*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ArraySubsetEnumerator*, "System.ComponentModel", "ArraySubsetEnumerator");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ArraySubsetEnumerator
class CORDL_TYPE ArraySubsetEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::System::Array*  array;

/// @brief Field current, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) int32_t  current;

/// @brief Field total, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_total, put=__cordl_internal_set_total)) int32_t  total;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0xad6c418, size 0x24, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::ComponentModel::ArraySubsetEnumerator* New_ctor(::System::Array*  array, int32_t  count) ;

/// @brief Method Reset, addr 0xad6c43c, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::System::Array* const& __cordl_internal_get_array() const;

constexpr ::System::Array*& __cordl_internal_get_array() ;

constexpr int32_t const& __cordl_internal_get_current() const;

constexpr int32_t& __cordl_internal_get_current() ;

constexpr int32_t const& __cordl_internal_get_total() const;

constexpr int32_t& __cordl_internal_get_total() ;

constexpr void __cordl_internal_set_array(::System::Array*  value) ;

constexpr void __cordl_internal_set_current(int32_t  value) ;

constexpr void __cordl_internal_set_total(int32_t  value) ;

/// @brief Method .ctor, addr 0xad6c3d8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Array*  array, int32_t  count) ;

/// @brief Method get_Current, addr 0xad6c448, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySubsetEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySubsetEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySubsetEnumerator(ArraySubsetEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySubsetEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySubsetEnumerator(ArraySubsetEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10255};

/// @brief Field array, offset: 0x10, size: 0x8, def value: None
 ::System::Array*  ___array;

/// @brief Field total, offset: 0x18, size: 0x4, def value: None
 int32_t  ___total;

/// @brief Field current, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ArraySubsetEnumerator, ___array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ArraySubsetEnumerator, ___total) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ArraySubsetEnumerator, ___current) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ArraySubsetEnumerator) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
