#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/zzzz__BurstString_NumberBufferKind_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_NumberBuffer)
namespace GlobalNamespace {
struct BurstString_NumberBufferKind;
}
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_NumberBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_NumberBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_NumberBuffer, "Unity.Burst", "BurstString/NumberBuffer");
// Dependencies Unity.Burst.BurstString::NumberBufferKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberBuffer
struct CORDL_TYPE BurstString_NumberBuffer {
public:
// Declarations
/// @brief Method GetDigitsPointer, addr 0xae84fd8, size 0x8, virtual false, abstract: false, final false
inline uint8_t* GetDigitsPointer() ;

/// @brief Method .ctor, addr 0xae8297c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BurstString_NumberBufferKind  kind, uint8_t*  buffer, int32_t  digitsCount, int32_t  scale, bool  isNegative) ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_NumberBuffer() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Kind", ty: "::GlobalNamespace::BurstString_NumberBufferKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_NumberBuffer(uint8_t*  _buffer, ::GlobalNamespace::BurstString_NumberBufferKind  Kind, int32_t  DigitsCount, int32_t  Scale, bool  IsNegative) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  _buffer;

/// @brief Field Kind, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::BurstString_NumberBufferKind  Kind;

/// @brief Field DigitsCount, offset: 0xc, size: 0x4, def value: None
 int32_t  DigitsCount;

/// @brief Field Scale, offset: 0x10, size: 0x4, def value: None
 int32_t  Scale;

/// @brief Field IsNegative, offset: 0x14, size: 0x1, def value: None
 bool  IsNegative;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_NumberBuffer, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_NumberBuffer, Kind) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_NumberBuffer, DigitsCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_NumberBuffer, Scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_NumberBuffer, IsNegative) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_NumberBuffer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
