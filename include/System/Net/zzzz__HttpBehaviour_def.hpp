#pragma once
// IWYU pragma private; include "System/Net/HttpBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpBehaviour)
// Forward declare root types
namespace System::Net {
struct HttpBehaviour;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpBehaviour);
DEFINE_IL2CPP_CLASS(::System::Net::HttpBehaviour, "System.Net", "HttpBehaviour");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpBehaviour
struct CORDL_TYPE HttpBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __HttpBehaviour_Unwrapped
enum struct __HttpBehaviour_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x0u),
__E_HTTP10 = static_cast<uint8_t>(0x1u),
__E_HTTP11PartiallyCompliant = static_cast<uint8_t>(0x2u),
__E_HTTP11 = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpBehaviour_Unwrapped () const noexcept {
return static_cast<__HttpBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpBehaviour(uint8_t  value__) noexcept;

/// @brief Field HTTP10 value: U8(1)
static ::System::Net::HttpBehaviour const HTTP10;

/// @brief Field HTTP11 value: U8(3)
static ::System::Net::HttpBehaviour const HTTP11;

/// @brief Field HTTP11PartiallyCompliant value: U8(2)
static ::System::Net::HttpBehaviour const HTTP11PartiallyCompliant;

/// @brief Field Unknown value: U8(0)
static ::System::Net::HttpBehaviour const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpBehaviour) == 0x1, "Size mismatch!");

} // namespace end def System::Net
