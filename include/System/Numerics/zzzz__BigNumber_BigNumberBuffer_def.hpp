#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber_BigNumberBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigNumber_BigNumberBuffer)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct BigNumber_BigNumberBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BigNumber_BigNumberBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigNumber_BigNumberBuffer, "System.Numerics", "BigNumber/BigNumberBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Numerics.BigNumber/BigNumberBuffer
struct CORDL_TYPE BigNumber_BigNumberBuffer {
public:
// Declarations
/// @brief Method Create, addr 0xa9fc8fc, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BigNumber_BigNumberBuffer Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr BigNumber_BigNumberBuffer() ;

// Ctor Parameters [CppParam { name: "digits", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BigNumber_BigNumberBuffer(::System::Text::StringBuilder*  digits, int32_t  precision, int32_t  scale, bool  sign) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31672};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field digits, offset: 0x0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  digits;

/// @brief Field precision, offset: 0x8, size: 0x4, def value: None
 int32_t  precision;

/// @brief Field scale, offset: 0xc, size: 0x4, def value: None
 int32_t  scale;

/// @brief Field sign, offset: 0x10, size: 0x1, def value: None
 bool  sign;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigNumber_BigNumberBuffer, digits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigNumber_BigNumberBuffer, precision) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigNumber_BigNumberBuffer, scale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigNumber_BigNumberBuffer, sign) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigNumber_BigNumberBuffer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
