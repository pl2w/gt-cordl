#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Complexity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Complexity)
// Forward declare root types
namespace POpusCodec::Enums {
struct Complexity;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::Complexity);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::Complexity, "POpusCodec.Enums", "Complexity");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.Complexity
struct CORDL_TYPE Complexity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Complexity_Unwrapped
enum struct __Complexity_Unwrapped : int32_t {
__E_Complexity0 = static_cast<int32_t>(0x0),
__E_Complexity1 = static_cast<int32_t>(0x1),
__E_Complexity2 = static_cast<int32_t>(0x2),
__E_Complexity3 = static_cast<int32_t>(0x3),
__E_Complexity4 = static_cast<int32_t>(0x4),
__E_Complexity5 = static_cast<int32_t>(0x5),
__E_Complexity6 = static_cast<int32_t>(0x6),
__E_Complexity7 = static_cast<int32_t>(0x7),
__E_Complexity8 = static_cast<int32_t>(0x8),
__E_Complexity9 = static_cast<int32_t>(0x9),
__E_Complexity10 = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Complexity_Unwrapped () const noexcept {
return static_cast<__Complexity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Complexity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Complexity(int32_t  value__) noexcept;

/// @brief Field Complexity0 value: I32(0)
static ::POpusCodec::Enums::Complexity const Complexity0;

/// @brief Field Complexity1 value: I32(1)
static ::POpusCodec::Enums::Complexity const Complexity1;

/// @brief Field Complexity10 value: I32(10)
static ::POpusCodec::Enums::Complexity const Complexity10;

/// @brief Field Complexity2 value: I32(2)
static ::POpusCodec::Enums::Complexity const Complexity2;

/// @brief Field Complexity3 value: I32(3)
static ::POpusCodec::Enums::Complexity const Complexity3;

/// @brief Field Complexity4 value: I32(4)
static ::POpusCodec::Enums::Complexity const Complexity4;

/// @brief Field Complexity5 value: I32(5)
static ::POpusCodec::Enums::Complexity const Complexity5;

/// @brief Field Complexity6 value: I32(6)
static ::POpusCodec::Enums::Complexity const Complexity6;

/// @brief Field Complexity7 value: I32(7)
static ::POpusCodec::Enums::Complexity const Complexity7;

/// @brief Field Complexity8 value: I32(8)
static ::POpusCodec::Enums::Complexity const Complexity8;

/// @brief Field Complexity9 value: I32(9)
static ::POpusCodec::Enums::Complexity const Complexity9;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::Complexity, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::Complexity) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
