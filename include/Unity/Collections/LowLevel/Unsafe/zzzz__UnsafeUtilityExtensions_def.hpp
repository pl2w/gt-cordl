#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtilityExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafeUtilityExtensions)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtilityExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtilityExtensions");
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions
class CORDL_TYPE UnsafeUtilityExtensions : public ::System::Object {
public:
// Declarations
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void* AddressOf(/* [IsReadOnly] */ ::by_ref<T>  value) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> AsRef(/* [IsReadOnly] */ ::by_ref<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtilityExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtilityExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtilityExtensions(UnsafeUtilityExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtilityExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtilityExtensions(UnsafeUtilityExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30258};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
