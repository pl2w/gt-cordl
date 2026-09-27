#pragma once
// IWYU pragma private; include "System/Net/FtpControlStream_GetPathOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpControlStream_GetPathOption)
// Forward declare root types
namespace GlobalNamespace {
struct FtpControlStream_GetPathOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FtpControlStream_GetPathOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FtpControlStream_GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.FtpControlStream/GetPathOption
struct CORDL_TYPE FtpControlStream_GetPathOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FtpControlStream_GetPathOption_Unwrapped
enum struct __FtpControlStream_GetPathOption_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_AssumeFilename = static_cast<int32_t>(0x1),
__E_AssumeNoFilename = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpControlStream_GetPathOption_Unwrapped () const noexcept {
return static_cast<__FtpControlStream_GetPathOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FtpControlStream_GetPathOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FtpControlStream_GetPathOption(int32_t  value__) noexcept;

/// @brief Field AssumeFilename value: I32(1)
static ::GlobalNamespace::FtpControlStream_GetPathOption const AssumeFilename;

/// @brief Field AssumeNoFilename value: I32(2)
static ::GlobalNamespace::FtpControlStream_GetPathOption const AssumeNoFilename;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::FtpControlStream_GetPathOption const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FtpControlStream_GetPathOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FtpControlStream_GetPathOption) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
