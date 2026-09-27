#pragma once
// IWYU pragma private; include "System/Security/Util/Tokenizer_TokenSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tokenizer_TokenSource)
// Forward declare root types
namespace GlobalNamespace {
struct Tokenizer_TokenSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tokenizer_TokenSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tokenizer_TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Security.Util.Tokenizer/TokenSource
struct CORDL_TYPE Tokenizer_TokenSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Tokenizer_TokenSource_Unwrapped
enum struct __Tokenizer_TokenSource_Unwrapped : int32_t {
__E_UnicodeByteArray = static_cast<int32_t>(0x0),
__E_UTF8ByteArray = static_cast<int32_t>(0x1),
__E_ASCIIByteArray = static_cast<int32_t>(0x2),
__E_CharArray = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x4),
__E_NestedStrings = static_cast<int32_t>(0x5),
__E_Other = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tokenizer_TokenSource_Unwrapped () const noexcept {
return static_cast<__Tokenizer_TokenSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Tokenizer_TokenSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Tokenizer_TokenSource(int32_t  value__) noexcept;

/// @brief Field ASCIIByteArray value: I32(2)
static ::GlobalNamespace::Tokenizer_TokenSource const ASCIIByteArray;

/// @brief Field CharArray value: I32(3)
static ::GlobalNamespace::Tokenizer_TokenSource const CharArray;

/// @brief Field NestedStrings value: I32(5)
static ::GlobalNamespace::Tokenizer_TokenSource const NestedStrings;

/// @brief Field Other value: I32(6)
static ::GlobalNamespace::Tokenizer_TokenSource const Other;

/// @brief Field String value: I32(4)
static ::GlobalNamespace::Tokenizer_TokenSource const String;

/// @brief Field UTF8ByteArray value: I32(1)
static ::GlobalNamespace::Tokenizer_TokenSource const UTF8ByteArray;

/// @brief Field UnicodeByteArray value: I32(0)
static ::GlobalNamespace::Tokenizer_TokenSource const UnicodeByteArray;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tokenizer_TokenSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tokenizer_TokenSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
