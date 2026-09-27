#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/CaptureErrorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CaptureErrorType)
// Forward declare root types
namespace Liv::Lck::ErrorHandling {
struct CaptureErrorType;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::ErrorHandling::CaptureErrorType);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::CaptureErrorType, "Liv.Lck.ErrorHandling", "CaptureErrorType");
// Dependencies 
namespace Liv::Lck::ErrorHandling {
// Is value type: true
// CS Name: Liv.Lck.ErrorHandling.CaptureErrorType
struct CORDL_TYPE CaptureErrorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CaptureErrorType_Unwrapped
enum struct __CaptureErrorType_Unwrapped : int32_t {
__E_EncoderError = static_cast<int32_t>(0x0),
__E_MuxerError = static_cast<int32_t>(0x1),
__E_StreamerError = static_cast<int32_t>(0x2),
__E_EchoError = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CaptureErrorType_Unwrapped () const noexcept {
return static_cast<__CaptureErrorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CaptureErrorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CaptureErrorType(int32_t  value__) noexcept;

/// @brief Field EchoError value: I32(3)
static ::Liv::Lck::ErrorHandling::CaptureErrorType const EchoError;

/// @brief Field EncoderError value: I32(0)
static ::Liv::Lck::ErrorHandling::CaptureErrorType const EncoderError;

/// @brief Field MuxerError value: I32(1)
static ::Liv::Lck::ErrorHandling::CaptureErrorType const MuxerError;

/// @brief Field StreamerError value: I32(2)
static ::Liv::Lck::ErrorHandling::CaptureErrorType const StreamerError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::ErrorHandling::CaptureErrorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::ErrorHandling::CaptureErrorType) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::ErrorHandling
