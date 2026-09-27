#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequestUriBuilder_EncodingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequestUriBuilder_EncodingType)
// Forward declare root types
namespace GlobalNamespace {
struct HttpListenerRequestUriBuilder_EncodingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpListenerRequestUriBuilder/EncodingType
struct CORDL_TYPE HttpListenerRequestUriBuilder_EncodingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpListenerRequestUriBuilder_EncodingType_Unwrapped
enum struct __HttpListenerRequestUriBuilder_EncodingType_Unwrapped : int32_t {
__E_Primary = static_cast<int32_t>(0x0),
__E_Secondary = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpListenerRequestUriBuilder_EncodingType_Unwrapped () const noexcept {
return static_cast<__HttpListenerRequestUriBuilder_EncodingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequestUriBuilder_EncodingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpListenerRequestUriBuilder_EncodingType(int32_t  value__) noexcept;

/// @brief Field Primary value: I32(0)
static ::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType const Primary;

/// @brief Field Secondary value: I32(1)
static ::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType const Secondary;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
