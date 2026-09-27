#pragma once
// IWYU pragma private; include "emotitron/Compression/ArrayPackBitsExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPackBitsExt)
// Forward declare root types
namespace emotitron::Compression {
class ArrayPackBitsExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ArrayPackBitsExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ArrayPackBitsExt*, "emotitron.Compression", "ArrayPackBitsExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ArrayPackBitsExt
class CORDL_TYPE ArrayPackBitsExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd2978, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd2838, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd2ab0, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method ReadPackedBits, addr 0x5dd2720, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd2c44, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBits(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd2c1c, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBits(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd2c6c, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBits(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method ReadSignedPackedBits, addr 0x5dd2bf4, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBits(uint64_t*  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits64, addr 0x5dd2c94, size 0x1c, virtual false, abstract: false, final false
static inline int64_t ReadSignedPackedBits64(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd240c, size 0xb0, virtual false, abstract: false, final false
static inline void WritePackedBits(::ArrayW<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd2294, size 0xb0, virtual false, abstract: false, final false
static inline void WritePackedBits(::ArrayW<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd2588, size 0xa4, virtual false, abstract: false, final false
static inline void WritePackedBits(::ArrayW<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method WritePackedBits, addr 0x5dd2004, size 0xb0, virtual false, abstract: false, final false
static inline void WritePackedBits(uint64_t*  uPtr, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd2c38, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBits(::ArrayW<uint32_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd2c10, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBits(::ArrayW<uint64_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd2c60, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBits(::ArrayW<uint8_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method WriteSignedPackedBits, addr 0x5dd2be8, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBits(uint64_t*  uPtr, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits64, addr 0x5dd2c88, size 0xc, virtual false, abstract: false, final false
static inline void WriteSignedPackedBits64(::ArrayW<uint8_t>  buffer, int64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPackBitsExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPackBitsExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPackBitsExt(ArrayPackBitsExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPackBitsExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPackBitsExt(ArrayPackBitsExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ArrayPackBitsExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
