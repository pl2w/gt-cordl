#pragma once
// IWYU pragma private; include "System/Xml/EncodingStreamWrapper_SupportedEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingStreamWrapper_SupportedEncoding)
// Forward declare root types
namespace GlobalNamespace {
struct EncodingStreamWrapper_SupportedEncoding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding, "System.Xml", "EncodingStreamWrapper/SupportedEncoding");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.EncodingStreamWrapper/SupportedEncoding
struct CORDL_TYPE EncodingStreamWrapper_SupportedEncoding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncodingStreamWrapper_SupportedEncoding_Unwrapped
enum struct __EncodingStreamWrapper_SupportedEncoding_Unwrapped : int32_t {
__E_UTF8 = static_cast<int32_t>(0x0),
__E_UTF16LE = static_cast<int32_t>(0x1),
__E_UTF16BE = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncodingStreamWrapper_SupportedEncoding_Unwrapped () const noexcept {
return static_cast<__EncodingStreamWrapper_SupportedEncoding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncodingStreamWrapper_SupportedEncoding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EncodingStreamWrapper_SupportedEncoding(int32_t  value__) noexcept;

/// @brief Field None value: I32(3)
static ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding const None;

/// @brief Field UTF16BE value: I32(2)
static ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding const UTF16BE;

/// @brief Field UTF16LE value: I32(1)
static ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding const UTF16LE;

/// @brief Field UTF8 value: I32(0)
static ::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding const UTF8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EncodingStreamWrapper_SupportedEncoding) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
