#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestContentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIRequestContentType)
// Forward declare root types
namespace Modio::API {
struct ModioAPIRequestContentType;
}
// Write type traits
MARK_VAL_T(::Modio::API::ModioAPIRequestContentType);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequestContentType, "Modio.API", "ModioAPIRequestContentType");
// Dependencies 
namespace Modio::API {
// Is value type: true
// CS Name: Modio.API.ModioAPIRequestContentType
struct CORDL_TYPE ModioAPIRequestContentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioAPIRequestContentType_Unwrapped
enum struct __ModioAPIRequestContentType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Multipart = static_cast<int32_t>(0x1),
__E_Stream = static_cast<int32_t>(0x2),
__E_String = static_cast<int32_t>(0x3),
__E_FormUrlEncoded = static_cast<int32_t>(0x4),
__E_ByteArray = static_cast<int32_t>(0x5),
__E_MultipartFormData = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioAPIRequestContentType_Unwrapped () const noexcept {
return static_cast<__ModioAPIRequestContentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequestContentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIRequestContentType(int32_t  value__) noexcept;

/// @brief Field ByteArray value: I32(5)
static ::Modio::API::ModioAPIRequestContentType const ByteArray;

/// @brief Field FormUrlEncoded value: I32(4)
static ::Modio::API::ModioAPIRequestContentType const FormUrlEncoded;

/// @brief Field Multipart value: I32(1)
static ::Modio::API::ModioAPIRequestContentType const Multipart;

/// @brief Field MultipartFormData value: I32(6)
static ::Modio::API::ModioAPIRequestContentType const MultipartFormData;

/// @brief Field None value: I32(0)
static ::Modio::API::ModioAPIRequestContentType const None;

/// @brief Field Stream value: I32(2)
static ::Modio::API::ModioAPIRequestContentType const Stream;

/// @brief Field String value: I32(3)
static ::Modio::API::ModioAPIRequestContentType const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPIRequestContentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPIRequestContentType) == 0x4, "Size mismatch!");

} // namespace end def Modio::API
