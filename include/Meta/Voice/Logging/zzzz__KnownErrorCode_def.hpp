#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/KnownErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KnownErrorCode)
// Forward declare root types
namespace Meta::Voice::Logging {
struct KnownErrorCode;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::KnownErrorCode);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::KnownErrorCode, "Meta.Voice.Logging", "KnownErrorCode");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.KnownErrorCode
struct CORDL_TYPE KnownErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KnownErrorCode_Unwrapped
enum struct __KnownErrorCode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Logging = static_cast<int32_t>(0x1),
__E_AssemblyMinerNullEnum = static_cast<int32_t>(0x2),
__E_KnownErrorMissingDescription = static_cast<int32_t>(0x3),
__E_NullMethodInAssembly = static_cast<int32_t>(0x4),
__E_NullDeclaringTypeInAssembly = static_cast<int32_t>(0x5),
__E_InvalidErrorHandlerParameter = static_cast<int32_t>(0x6),
__E_TtsStreamError = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KnownErrorCode_Unwrapped () const noexcept {
return static_cast<__KnownErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KnownErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KnownErrorCode(int32_t  value__) noexcept;

/// @brief Field AssemblyMinerNullEnum value: I32(2)
static ::Meta::Voice::Logging::KnownErrorCode const AssemblyMinerNullEnum;

/// @brief Field InvalidErrorHandlerParameter value: I32(6)
static ::Meta::Voice::Logging::KnownErrorCode const InvalidErrorHandlerParameter;

/// @brief Field KnownErrorMissingDescription value: I32(3)
static ::Meta::Voice::Logging::KnownErrorCode const KnownErrorMissingDescription;

/// @brief Field Logging value: I32(1)
static ::Meta::Voice::Logging::KnownErrorCode const Logging;

/// @brief Field NullDeclaringTypeInAssembly value: I32(5)
static ::Meta::Voice::Logging::KnownErrorCode const NullDeclaringTypeInAssembly;

/// @brief Field NullMethodInAssembly value: I32(4)
static ::Meta::Voice::Logging::KnownErrorCode const NullMethodInAssembly;

/// @brief Field TtsStreamError value: I32(7)
static ::Meta::Voice::Logging::KnownErrorCode const TtsStreamError;

/// @brief Field Unknown value: I32(0)
static ::Meta::Voice::Logging::KnownErrorCode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::KnownErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::KnownErrorCode) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
