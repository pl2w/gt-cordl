#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequestUriBuilder_ParsingResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequestUriBuilder_ParsingResult)
// Forward declare root types
namespace GlobalNamespace {
struct HttpListenerRequestUriBuilder_ParsingResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult, "System.Net", "HttpListenerRequestUriBuilder/ParsingResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpListenerRequestUriBuilder/ParsingResult
struct CORDL_TYPE HttpListenerRequestUriBuilder_ParsingResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped
enum struct __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_InvalidString = static_cast<int32_t>(0x1),
__E_EncodingError = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped () const noexcept {
return static_cast<__HttpListenerRequestUriBuilder_ParsingResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequestUriBuilder_ParsingResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpListenerRequestUriBuilder_ParsingResult(int32_t  value__) noexcept;

/// @brief Field EncodingError value: I32(2)
static ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult const EncodingError;

/// @brief Field InvalidString value: I32(1)
static ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult const InvalidString;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
