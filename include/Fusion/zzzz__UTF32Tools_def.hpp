#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF32Tools)
namespace GlobalNamespace {
struct UTF32Tools_CharEnumerator;
}
namespace GlobalNamespace {
struct UTF32Tools_ConversionResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class UTF32Tools;
}
// Write type traits
MARK_REF_T(::Fusion::UTF32Tools*);
DEFINE_IL2CPP_CLASS(::Fusion::UTF32Tools*, "Fusion", "UTF32Tools");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UTF32Tools
class CORDL_TYPE UTF32Tools : public ::System::Object {
public:
// Declarations
using CharEnumerator = ::GlobalNamespace::UTF32Tools_CharEnumerator;

using ConversionResult = ::GlobalNamespace::UTF32Tools_ConversionResult;

/// @brief Method CompareOrdinal, addr 0x5f40aa0, size 0x27c, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::StringW  strA, uint32_t*  strB, int32_t  bLength, bool  ignoreCase) ;

/// @brief Method CompareOrdinal, addr 0x5f40790, size 0x22c, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  strB, int32_t  bLength, bool  ignoreCase) ;

/// @brief Method Convert, addr 0x5f405ac, size 0x5c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UTF32Tools_ConversionResult Convert(::StringW  str, uint32_t*  dst, int32_t  dstCapacity) ;

/// @brief Method Convert, addr 0x5f40608, size 0x180, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UTF32Tools_ConversionResult Convert(char16_t*  str, int32_t  strLength, uint32_t*  dst, int32_t  dstCapacity) ;

/// @brief Method EndsWithOrdinal, addr 0x5f40e50, size 0x34, virtual false, abstract: false, final false
static inline bool EndsWithOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  bStr, int32_t  bLength, bool  ignoreCase) ;

/// @brief Method EndsWithOrdinal, addr 0x5f40e84, size 0xe8, virtual false, abstract: false, final false
static inline bool EndsWithOrdinal(uint32_t*  strA, int32_t  aLength, ::StringW  strB, bool  ignoreCase) ;

/// @brief Method GetHashDeterministic, addr 0x5f40f6c, size 0x88, virtual false, abstract: false, final false
static inline int32_t GetHashDeterministic(uint32_t*  str, int32_t  length) ;

/// @brief Method GetHighSurrogate, addr 0x5f41794, size 0x14, virtual false, abstract: false, final false
static inline char16_t GetHighSurrogate(uint32_t  scalar) ;

/// @brief Method GetLength, addr 0x5f417a8, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetLength(::StringW  str) ;

/// @brief Method GetLowSurrogate, addr 0x5f417fc, size 0x10, virtual false, abstract: false, final false
static inline char16_t GetLowSurrogate(uint32_t  scalar) ;

/// @brief Method IndexOf, addr 0x5f41108, size 0x1b8, virtual false, abstract: false, final false
static inline int32_t IndexOf(uint32_t*  str, int32_t  length, ::StringW  pattern) ;

/// @brief Method IndexOf, addr 0x5f413d0, size 0x148, virtual false, abstract: false, final false
static inline int32_t IndexOf(uint32_t*  str, int32_t  length, uint32_t*  pattern, int32_t  patternLength) ;

/// @brief Method IsValidCodePoint, addr 0x5f4180c, size 0x1c, virtual false, abstract: false, final false
static inline bool IsValidCodePoint(uint32_t  scalar) ;

/// @brief Method ReadNextCodePoint, addr 0x5f412c0, size 0x110, virtual false, abstract: false, final false
static inline uint32_t ReadNextCodePoint(::by_ref<char16_t*>  pstr, char16_t*  end) ;

/// @brief Method StartsWithOrdinal, addr 0x5f41024, size 0xe4, virtual false, abstract: false, final false
static inline bool StartsWithOrdinal(uint32_t*  strA, int32_t  aLength, ::StringW  strB, bool  ignoreCase) ;

/// @brief Method StartsWithOrdinal, addr 0x5f40ff4, size 0x30, virtual false, abstract: false, final false
static inline bool StartsWithOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  strB, int32_t  bLength, bool  ignoreCase) ;

/// @brief Method Swap, addr 0x5f41828, size 0x14, virtual false, abstract: false, final false
static inline void Swap(::by_ref<int32_t>  a, ::by_ref<int32_t>  b) ;

/// @brief Method ToLowerInvariant, addr 0x5f409bc, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t ToLowerInvariant(uint32_t  value) ;

/// @brief Method ToLowerInvariant, addr 0x5f41518, size 0xcc, virtual false, abstract: false, final false
static inline void ToLowerInvariant(uint32_t*  src, uint32_t*  dst, int32_t  length) ;

/// @brief Method ToUTF16, addr 0x5f40d1c, size 0x94, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<char16_t,char16_t> ToUTF16(uint32_t  scalar) ;

/// @brief Method ToUTF32, addr 0x5f40db0, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ToUTF32(char16_t  charOrHighSurrogate, char16_t  lowSurrogate) ;

/// @brief Method ToUpperInvariant, addr 0x5f416b0, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t ToUpperInvariant(uint32_t  value) ;

/// @brief Method ToUpperInvariant, addr 0x5f415e4, size 0xcc, virtual false, abstract: false, final false
static inline void ToUpperInvariant(uint32_t*  src, uint32_t*  dst, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF32Tools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF32Tools", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF32Tools(UTF32Tools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF32Tools", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF32Tools(UTF32Tools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UTF32Tools) == 0x10, "Size mismatch!");

} // namespace end def Fusion
