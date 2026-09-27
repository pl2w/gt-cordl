#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MemoryHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryHelpers)
namespace GlobalNamespace {
struct MemoryHelpers_BitRegion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class MemoryHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::MemoryHelpers*, "UnityEngine.InputSystem.Utilities", "MemoryHelpers");
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers
class CORDL_TYPE MemoryHelpers : public ::System::Object {
public:
// Declarations
using BitRegion = ::GlobalNamespace::MemoryHelpers_BitRegion;

/// @brief Method AlignNatural, addr 0xaf3fda0, size 0x84, virtual false, abstract: false, final false
static inline uint32_t AlignNatural(uint32_t  offset, uint32_t  sizeInBytes) ;

/// @brief Method Compare, addr 0xaf3f598, size 0x44, virtual false, abstract: false, final false
static inline bool Compare(void*  ptr1, void*  ptr2, ::GlobalNamespace::MemoryHelpers_BitRegion  region) ;

/// @brief Method ComputeFollowingByteOffset, addr 0xaf3f75c, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ComputeFollowingByteOffset(uint32_t  byteOffset, uint32_t  sizeInBits) ;

/// @brief Method MemCmpBitRegion, addr 0xaf3f5f8, size 0x164, virtual false, abstract: false, final false
static inline bool MemCmpBitRegion(void*  ptr1, void*  ptr2, uint32_t  bitOffset, uint32_t  bitCount, void*  mask) ;

/// @brief Method MemCpyBitRegion, addr 0xaf3f79c, size 0xf4, virtual false, abstract: false, final false
static inline void MemCpyBitRegion(void*  destination, void*  source, uint32_t  bitOffset, uint32_t  bitCount) ;

/// @brief Method MemCpyMasked, addr 0xaf3f8e0, size 0x84, virtual false, abstract: false, final false
static inline void MemCpyMasked(void*  destination, void*  source, int32_t  numBytes, void*  mask) ;

/// @brief Method MemSet, addr 0xaf3f890, size 0x50, virtual false, abstract: false, final false
static inline void MemSet(void*  destination, int32_t  numBytes, uint8_t  value) ;

/// @brief Method ReadExcessKMultipleBitsAsInt, addr 0xaf3fb08, size 0x24, virtual false, abstract: false, final false
static inline int32_t ReadExcessKMultipleBitsAsInt(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount) ;

/// @brief Method ReadMultipleBitsAsNormalizedUInt, addr 0xaf3fb40, size 0x48, virtual false, abstract: false, final false
static inline float_t ReadMultipleBitsAsNormalizedUInt(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount) ;

/// @brief Method ReadMultipleBitsAsUInt, addr 0xaf382d4, size 0x164, virtual false, abstract: false, final false
static inline uint32_t ReadMultipleBitsAsUInt(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount) ;

/// @brief Method ReadSingleBit, addr 0xaf3f5dc, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadSingleBit(void*  ptr, uint32_t  bitOffset) ;

/// @brief Method ReadTwosComplementMultipleBitsAsInt, addr 0xaf36140, size 0x4, virtual false, abstract: false, final false
static inline int32_t ReadTwosComplementMultipleBitsAsInt(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount) ;

/// @brief Method SetBitsInBuffer, addr 0xaf3fbd8, size 0x1c8, virtual false, abstract: false, final false
static inline void SetBitsInBuffer(void*  buffer, int32_t  byteOffset, int32_t  bitOffset, int32_t  sizeInBits, bool  value) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void Swap(::by_ref<TValue>  a, ::by_ref<TValue>  b) ;

/// @brief Method WriteIntAsExcessKMultipleBits, addr 0xaf3fb2c, size 0x14, virtual false, abstract: false, final false
static inline void WriteIntAsExcessKMultipleBits(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount, int32_t  value) ;

/// @brief Method WriteIntAsTwosComplementMultipleBits, addr 0xaf36274, size 0x4, virtual false, abstract: false, final false
static inline void WriteIntAsTwosComplementMultipleBits(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount, int32_t  value) ;

/// @brief Method WriteNormalizedUIntAsMultipleBits, addr 0xaf3fb88, size 0x50, virtual false, abstract: false, final false
static inline void WriteNormalizedUIntAsMultipleBits(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount, float_t  value) ;

/// @brief Method WriteSingleBit, addr 0xaf3f76c, size 0x30, virtual false, abstract: false, final false
static inline void WriteSingleBit(void*  ptr, uint32_t  bitOffset, bool  value) ;

/// @brief Method WriteUIntAsMultipleBits, addr 0xaf3f964, size 0x1a4, virtual false, abstract: false, final false
static inline void WriteUIntAsMultipleBits(void*  ptr, uint32_t  bitOffset, uint32_t  bitCount, uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryHelpers(MemoryHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryHelpers(MemoryHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::MemoryHelpers) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
