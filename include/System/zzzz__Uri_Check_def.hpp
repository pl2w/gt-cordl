#pragma once
// IWYU pragma private; include "System/Uri_Check.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri_Check)
// Forward declare root types
namespace GlobalNamespace {
struct Uri_Check;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Uri_Check);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Uri_Check, "System", "Uri/Check");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Uri/Check
struct CORDL_TYPE Uri_Check {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Uri_Check_Unwrapped
enum struct __Uri_Check_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EscapedCanonical = static_cast<int32_t>(0x1),
__E_DisplayCanonical = static_cast<int32_t>(0x2),
__E_DotSlashAttn = static_cast<int32_t>(0x4),
__E_DotSlashEscaped = static_cast<int32_t>(0x80),
__E_BackslashInPath = static_cast<int32_t>(0x10),
__E_ReservedFound = static_cast<int32_t>(0x20),
__E_NotIriCanonical = static_cast<int32_t>(0x40),
__E_FoundNonAscii = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Uri_Check_Unwrapped () const noexcept {
return static_cast<__Uri_Check_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Uri_Check() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Uri_Check(int32_t  value__) noexcept;

/// @brief Field BackslashInPath value: I32(16)
static ::GlobalNamespace::Uri_Check const BackslashInPath;

/// @brief Field DisplayCanonical value: I32(2)
static ::GlobalNamespace::Uri_Check const DisplayCanonical;

/// @brief Field DotSlashAttn value: I32(4)
static ::GlobalNamespace::Uri_Check const DotSlashAttn;

/// @brief Field DotSlashEscaped value: I32(128)
static ::GlobalNamespace::Uri_Check const DotSlashEscaped;

/// @brief Field EscapedCanonical value: I32(1)
static ::GlobalNamespace::Uri_Check const EscapedCanonical;

/// @brief Field FoundNonAscii value: I32(8)
static ::GlobalNamespace::Uri_Check const FoundNonAscii;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Uri_Check const None;

/// @brief Field NotIriCanonical value: I32(64)
static ::GlobalNamespace::Uri_Check const NotIriCanonical;

/// @brief Field ReservedFound value: I32(32)
static ::GlobalNamespace::Uri_Check const ReservedFound;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Uri_Check, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Uri_Check) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
