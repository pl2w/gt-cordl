#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAppendBuffer_Reader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeAppendBuffer_Reader)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnsafeAppendBuffer_Reader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnsafeAppendBuffer_Reader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeAppendBuffer_Reader, "Unity.Collections.LowLevel.Unsafe", "UnsafeAppendBuffer/Reader");
// [GenerateTestsForBurstCompatibility]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader
struct CORDL_TYPE UnsafeAppendBuffer_Reader {
public:
// Declarations
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method ReadNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T ReadNext() ;

/// @brief Method ReadNext, addr 0xaf079a8, size 0x48, virtual false, abstract: false, final false
inline void* ReadNext(int32_t  structSize) ;

/// @brief Method .ctor, addr 0xaf07994, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  buffer) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeAppendBuffer_Reader() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeAppendBuffer_Reader(uint8_t*  Ptr, int32_t  Size, int32_t  Offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Ptr;

/// @brief Field Size, offset: 0x8, size: 0x4, def value: None
 int32_t  Size;

/// @brief Field Offset, offset: 0xc, size: 0x4, def value: None
 int32_t  Offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeAppendBuffer_Reader, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeAppendBuffer_Reader, Size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeAppendBuffer_Reader, Offset) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeAppendBuffer_Reader) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
