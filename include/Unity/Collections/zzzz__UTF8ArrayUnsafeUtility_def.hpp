#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8ArrayUnsafeUtility)
namespace GlobalNamespace {
struct UTF8ArrayUnsafeUtility_Comparison;
}
namespace Unity::Collections {
struct CopyError;
}
// Forward declare root types
namespace Unity::Collections {
class UTF8ArrayUnsafeUtility;
}
// Write type traits
MARK_REF_T(::Unity::Collections::UTF8ArrayUnsafeUtility*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::UTF8ArrayUnsafeUtility*, "Unity.Collections", "UTF8ArrayUnsafeUtility");
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.UTF8ArrayUnsafeUtility
class CORDL_TYPE UTF8ArrayUnsafeUtility : public ::System::Object {
public:
// Declarations
using Comparison = ::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison;

/// @brief Method Copy, addr 0xaf0771c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Collections::CopyError Copy(uint8_t*  dest, ::by_ref<int32_t>  destLength, int32_t  destUTF8MaxLengthInBytes, char16_t*  src, int32_t  srcLength) ;

/// @brief Method EqualsUTF8Bytes, addr 0xaf03f54, size 0x2c, virtual false, abstract: false, final false
static inline bool EqualsUTF8Bytes(uint8_t*  aBytes, int32_t  aLength, uint8_t*  bBytes, int32_t  bLength) ;

/// @brief Method StrCmp, addr 0xaf03d70, size 0x88, virtual false, abstract: false, final false
static inline int32_t StrCmp(uint8_t*  utf8Buffer, int32_t  utf8LengthInBytes, char16_t*  utf16Buffer, int32_t  utf16LengthInChars) ;

/// @brief Method StrCmp, addr 0xaf07750, size 0x88, virtual false, abstract: false, final false
static inline int32_t StrCmp(uint8_t*  utf8BufferA, int32_t  utf8LengthInBytesA, uint8_t*  utf8BufferB, int32_t  utf8LengthInBytesB) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF8ArrayUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF8ArrayUnsafeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF8ArrayUnsafeUtility(UTF8ArrayUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF8ArrayUnsafeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF8ArrayUnsafeUtility(UTF8ArrayUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::UTF8ArrayUnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
