#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStringMethods)
namespace Unity::Collections {
struct CopyError;
}
// Forward declare root types
namespace Unity::Collections {
class FixedStringMethods;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedStringMethods*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedStringMethods*, "Unity.Collections", "FixedStringMethods");
// [Extension]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object, Unity.Collections.INativeList`1<T>, Unity.Collections.IUTF8Bytes
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedStringMethods
class CORDL_TYPE FixedStringMethods : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t CompareTo(::by_ref<T>  fs, uint8_t*  bytes, int32_t  bytesLen) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename T2>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
static inline int32_t CompareTo(::by_ref<T>  fs, /* [IsReadOnly] */ ::by_ref<T2>  other) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
/// @brief Method ComputeHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t ComputeHashCode(::by_ref<T>  fs) ;

/// [Extension]
/// [ExcludeFromBurstCompatTesting("Returns managed string")]
/// @brief Method ConvertToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::StringW ConvertToString(::by_ref<T>  fs) ;

/// [Extension]
/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method CopyFromTruncated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::CopyError CopyFromTruncated(::by_ref<T>  fs, ::StringW  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedStringMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedStringMethods(FixedStringMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedStringMethods(FixedStringMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedStringMethods) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
