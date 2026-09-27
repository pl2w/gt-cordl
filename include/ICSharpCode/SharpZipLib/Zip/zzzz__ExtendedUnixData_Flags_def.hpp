#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ExtendedUnixData_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedUnixData_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct ExtendedUnixData_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExtendedUnixData_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExtendedUnixData_Flags, "ICSharpCode.SharpZipLib.Zip", "ExtendedUnixData/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.ExtendedUnixData/Flags
struct CORDL_TYPE ExtendedUnixData_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ExtendedUnixData_Flags_Unwrapped
enum struct __ExtendedUnixData_Flags_Unwrapped : uint8_t {
__E_ModificationTime = static_cast<uint8_t>(0x1u),
__E_AccessTime = static_cast<uint8_t>(0x2u),
__E_CreateTime = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExtendedUnixData_Flags_Unwrapped () const noexcept {
return static_cast<__ExtendedUnixData_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExtendedUnixData_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ExtendedUnixData_Flags(uint8_t  value__) noexcept;

/// @brief Field AccessTime value: U8(2)
static ::GlobalNamespace::ExtendedUnixData_Flags const AccessTime;

/// @brief Field CreateTime value: U8(4)
static ::GlobalNamespace::ExtendedUnixData_Flags const CreateTime;

/// @brief Field ModificationTime value: U8(1)
static ::GlobalNamespace::ExtendedUnixData_Flags const ModificationTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExtendedUnixData_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExtendedUnixData_Flags) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
