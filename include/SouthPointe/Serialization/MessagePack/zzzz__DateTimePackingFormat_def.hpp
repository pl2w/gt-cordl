#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimePackingFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimePackingFormat)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
struct DateTimePackingFormat;
}
// Write type traits
MARK_VAL_T(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat, "SouthPointe.Serialization.MessagePack", "DateTimePackingFormat");
// Dependencies 
namespace SouthPointe::Serialization::MessagePack {
// Is value type: true
// CS Name: SouthPointe.Serialization.MessagePack.DateTimePackingFormat
struct CORDL_TYPE DateTimePackingFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimePackingFormat_Unwrapped
enum struct __DateTimePackingFormat_Unwrapped : int32_t {
__E_Extension = static_cast<int32_t>(0x0),
__E_String = static_cast<int32_t>(0x1),
__E_Epoch = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimePackingFormat_Unwrapped () const noexcept {
return static_cast<__DateTimePackingFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DateTimePackingFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DateTimePackingFormat(int32_t  value__) noexcept;

/// @brief Field Epoch value: I32(2)
static ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat const Epoch;

/// @brief Field Extension value: I32(0)
static ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat const Extension;

/// @brief Field String value: I32(1)
static ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat) == 0x4, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
