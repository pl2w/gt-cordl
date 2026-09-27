#pragma once
// IWYU pragma private; include "System/DefaultBinder_Primitives.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultBinder_Primitives)
// Forward declare root types
namespace GlobalNamespace {
struct DefaultBinder_Primitives;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DefaultBinder_Primitives);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DefaultBinder_Primitives, "System", "DefaultBinder/Primitives");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DefaultBinder/Primitives
struct CORDL_TYPE DefaultBinder_Primitives {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DefaultBinder_Primitives_Unwrapped
enum struct __DefaultBinder_Primitives_Unwrapped : int32_t {
__E_Boolean = static_cast<int32_t>(0x8),
__E_Char = static_cast<int32_t>(0x10),
__E_SByte = static_cast<int32_t>(0x20),
__E_Byte = static_cast<int32_t>(0x40),
__E_Int16 = static_cast<int32_t>(0x80),
__E_UInt16 = static_cast<int32_t>(0x100),
__E_Int32 = static_cast<int32_t>(0x200),
__E_UInt32 = static_cast<int32_t>(0x400),
__E_Int64 = static_cast<int32_t>(0x800),
__E_UInt64 = static_cast<int32_t>(0x1000),
__E_Single = static_cast<int32_t>(0x2000),
__E_Double = static_cast<int32_t>(0x4000),
__E_Decimal = static_cast<int32_t>(0x8000),
__E_DateTime = static_cast<int32_t>(0x10000),
__E_String = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DefaultBinder_Primitives_Unwrapped () const noexcept {
return static_cast<__DefaultBinder_Primitives_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DefaultBinder_Primitives() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DefaultBinder_Primitives(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(8)
static ::GlobalNamespace::DefaultBinder_Primitives const Boolean;

/// @brief Field Byte value: I32(64)
static ::GlobalNamespace::DefaultBinder_Primitives const Byte;

/// @brief Field Char value: I32(16)
static ::GlobalNamespace::DefaultBinder_Primitives const Char;

/// @brief Field DateTime value: I32(65536)
static ::GlobalNamespace::DefaultBinder_Primitives const DateTime;

/// @brief Field Decimal value: I32(32768)
static ::GlobalNamespace::DefaultBinder_Primitives const Decimal;

/// @brief Field Double value: I32(16384)
static ::GlobalNamespace::DefaultBinder_Primitives const Double;

/// @brief Field Int16 value: I32(128)
static ::GlobalNamespace::DefaultBinder_Primitives const Int16;

/// @brief Field Int32 value: I32(512)
static ::GlobalNamespace::DefaultBinder_Primitives const Int32;

/// @brief Field Int64 value: I32(2048)
static ::GlobalNamespace::DefaultBinder_Primitives const Int64;

/// @brief Field SByte value: I32(32)
static ::GlobalNamespace::DefaultBinder_Primitives const SByte;

/// @brief Field Single value: I32(8192)
static ::GlobalNamespace::DefaultBinder_Primitives const Single;

/// @brief Field String value: I32(262144)
static ::GlobalNamespace::DefaultBinder_Primitives const String;

/// @brief Field UInt16 value: I32(256)
static ::GlobalNamespace::DefaultBinder_Primitives const UInt16;

/// @brief Field UInt32 value: I32(1024)
static ::GlobalNamespace::DefaultBinder_Primitives const UInt32;

/// @brief Field UInt64 value: I32(4096)
static ::GlobalNamespace::DefaultBinder_Primitives const UInt64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultBinder_Primitives, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DefaultBinder_Primitives) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
