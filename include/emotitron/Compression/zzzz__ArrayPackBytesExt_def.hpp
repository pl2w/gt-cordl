#pragma once
// IWYU pragma private; include "emotitron/Compression/ArrayPackBytesExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPackBytesExt)
// Forward declare root types
namespace emotitron::Compression {
class ArrayPackBytesExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ArrayPackBytesExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ArrayPackBytesExt*, "emotitron.Compression", "ArrayPackBytesExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ArrayPackBytesExt
class CORDL_TYPE ArrayPackBytesExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ReadPackedBytes, addr 0x5dd3124, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBytes(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBytes, addr 0x5dd3084, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBytes(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBytes, addr 0x5dd31c4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBytes(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method ReadPackedBytes, addr 0x5dd2fe4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBytes(uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBytes, addr 0x5dd32c0, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBytes(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBytes, addr 0x5dd3298, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBytes(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBytes, addr 0x5dd32e8, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBytes(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method ReadSignedPackedBytes, addr 0x5dd3270, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBytes(uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBytes64, addr 0x5dd3310, size 0x1c, virtual false, abstract: false, final false
static inline int64_t ReadSignedPackedBytes64(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBytes, addr 0x5dd2e74, size 0xb8, virtual false, abstract: false, final false
static inline void WritePackedBytes(::ArrayW<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBytes, addr 0x5dd2dbc, size 0xb8, virtual false, abstract: false, final false
static inline void WritePackedBytes(::ArrayW<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBytes, addr 0x5dd2f2c, size 0xb8, virtual false, abstract: false, final false
static inline void WritePackedBytes(::ArrayW<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method WritePackedBytes, addr 0x5dd2cb0, size 0xb8, virtual false, abstract: false, final false
static inline void WritePackedBytes(uint64_t*  uPtr, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBytes, addr 0x5dd32b4, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBytes(::ArrayW<uint32_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBytes, addr 0x5dd328c, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBytes(::ArrayW<uint64_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBytes, addr 0x5dd32dc, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBytes(::ArrayW<uint8_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method WriteSignedPackedBytes, addr 0x5dd3264, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBytes(uint64_t*  uPtr, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBytes64, addr 0x5dd3304, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBytes64(::ArrayW<uint8_t>  buffer, int64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPackBytesExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPackBytesExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPackBytesExt(ArrayPackBytesExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPackBytesExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPackBytesExt(ArrayPackBytesExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ArrayPackBytesExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
