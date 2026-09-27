#pragma once
// IWYU pragma private; include "System/InternalSpanEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalSpanEx)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class InternalSpanEx;
}
// Write type traits
MARK_REF_T(::System::InternalSpanEx*);
DEFINE_IL2CPP_CLASS(::System::InternalSpanEx*, "System", "InternalSpanEx");
// [Extension]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.InternalSpanEx
class CORDL_TYPE InternalSpanEx : public ::System::Object {
public:
// Declarations
/// @brief Method AllCharsInUInt32AreAscii, addr 0xb9948b0, size 0xc, virtual false, abstract: false, final false
static inline bool AllCharsInUInt32AreAscii(uint32_t  value) ;

/// @brief Method AllCharsInUInt64AreAscii, addr 0xb9948bc, size 0xc, virtual false, abstract: false, final false
static inline bool AllCharsInUInt64AreAscii(uint64_t  value) ;

/// @brief Method EqualsOrdinalIgnoreCase, addr 0xb99468c, size 0x1a8, virtual false, abstract: false, final false
static inline bool EqualsOrdinalIgnoreCase(::by_ref<char16_t>  charA, ::by_ref<char16_t>  charB, int32_t  length) ;

/// [Extension]
/// @brief Method EqualsOrdinalIgnoreCase, addr 0xb9945d4, size 0xb8, virtual false, abstract: false, final false
static inline bool EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method EqualsOrdinalIgnoreCaseNonAscii, addr 0xb994834, size 0x7c, virtual false, abstract: false, final false
static inline bool EqualsOrdinalIgnoreCaseNonAscii(::by_ref<char16_t>  charA, ::by_ref<char16_t>  charB, int32_t  length) ;

/// @brief Method UInt32OrdinalIgnoreCaseAscii, addr 0xb9948c8, size 0x30, virtual false, abstract: false, final false
static inline bool UInt32OrdinalIgnoreCaseAscii(uint32_t  valueA, uint32_t  valueB) ;

/// @brief Method UInt64OrdinalIgnoreCaseAscii, addr 0xb9948f8, size 0x3c, virtual false, abstract: false, final false
static inline bool UInt64OrdinalIgnoreCaseAscii(uint64_t  valueA, uint64_t  valueB) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalSpanEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalSpanEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalSpanEx(InternalSpanEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalSpanEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalSpanEx(InternalSpanEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::InternalSpanEx) == 0x10, "Size mismatch!");

} // namespace end def System
