#pragma once
// IWYU pragma private; include "Fusion/BinUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinUtils)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
class BinUtils;
}
// Write type traits
MARK_REF_T(::Fusion::BinUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::BinUtils*, "Fusion", "BinUtils");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.BinUtils
class CORDL_TYPE BinUtils : public ::System::Object {
public:
// Declarations
/// @brief Field _byteHexValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__byteHexValue, put=setStaticF__byteHexValue)) ::ArrayW<::StringW>  _byteHexValue;

/// [Extension]
/// @brief Method AsPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AsPointer(::System::Span_1<int32_t>  source) ;

/// [Extension]
/// @brief Method AsPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AsPointer(::System::Span_1<uint8_t>  source) ;

/// [Extension]
/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> AsRef(::System::Span_1<int32_t>  source) ;

/// [Extension]
/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> AsRef(::System::Span_1<uint8_t>  source) ;

/// @brief Method BytesToHex, addr 0x5f393dc, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW BytesToHex(::ArrayW<uint8_t>  buffer, int32_t  columns) ;

/// @brief Method BytesToHex, addr 0x5f394b4, size 0x100, virtual false, abstract: false, final false
static inline ::StringW BytesToHex(::System::ReadOnlySpan_1<uint8_t>  buffer, int32_t  columns) ;

/// @brief Method BytesToHex, addr 0x5f39008, size 0x130, virtual false, abstract: false, final false
static inline ::StringW BytesToHex(uint8_t*  buffer, int32_t  length, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator) ;

/// [Extension]
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T Read(::System::Span_1<int32_t>  source) ;

/// [Extension]
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T Read(::System::Span_1<uint8_t>  source) ;

/// [Extension]
/// @brief Method RepeatingCopyTo, addr 0x5f395b4, size 0x190, virtual false, abstract: false, final false
static inline void RepeatingCopyTo(::System::ReadOnlySpan_1<uint8_t>  src, ::System::Span_1<uint8_t>  dst) ;

/// [Extension]
/// @brief Method RepeatingSequenceEqualTo, addr 0x5f39744, size 0x16c, virtual false, abstract: false, final false
static inline bool RepeatingSequenceEqualTo(::System::ReadOnlySpan_1<uint8_t>  span, ::System::ReadOnlySpan_1<uint8_t>  other) ;

/// @brief Method WordsToHex, addr 0x5f39138, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW WordsToHex(::System::ReadOnlySpan_1<int32_t>  buffer, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator) ;

/// @brief Method WordsToHex, addr 0x5f39200, size 0x1dc, virtual false, abstract: false, final false
static inline ::StringW WordsToHex(::System::ReadOnlySpan_1<uint32_t>  buffer, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator) ;

static inline ::ArrayW<::StringW> getStaticF__byteHexValue() ;

static inline void setStaticF__byteHexValue(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinUtils(BinUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinUtils(BinUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::BinUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
