#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/BufferPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferPool)
// Forward declare root types
namespace K4os::Compression::LZ4::Internal {
class BufferPool;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Internal::BufferPool*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Internal::BufferPool*, "K4os.Compression.LZ4.Internal", "BufferPool");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace K4os::Compression::LZ4::Internal {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Internal.BufferPool
class CORDL_TYPE BufferPool : public ::System::Object {
public:
// Declarations
/// @brief Method Alloc, addr 0x9cba7e8, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Alloc(int32_t  size, bool  zero) ;

/// [NullableContext(2)]
/// @brief Method Free, addr 0x9cba870, size 0x108, virtual false, abstract: false, final false
static inline void Free(::ArrayW<uint8_t>  buffer) ;

/// @brief Method IsPooled, addr 0x9cba854, size 0x1c, virtual false, abstract: false, final false
static inline bool IsPooled(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Rent, addr 0x9cba670, size 0x178, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Rent(int32_t  size, bool  zero) ;

/// @brief Method ShouldBePooled, addr 0x9cba664, size 0xc, virtual false, abstract: false, final false
static inline bool ShouldBePooled(int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferPool(BufferPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferPool(BufferPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Internal::BufferPool) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Internal
