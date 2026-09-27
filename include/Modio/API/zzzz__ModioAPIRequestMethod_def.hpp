#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIRequestMethod)
// Forward declare root types
namespace Modio::API {
struct ModioAPIRequestMethod;
}
// Write type traits
MARK_VAL_T(::Modio::API::ModioAPIRequestMethod);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIRequestMethod, "Modio.API", "ModioAPIRequestMethod");
// Dependencies 
namespace Modio::API {
// Is value type: true
// CS Name: Modio.API.ModioAPIRequestMethod
struct CORDL_TYPE ModioAPIRequestMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioAPIRequestMethod_Unwrapped
enum struct __ModioAPIRequestMethod_Unwrapped : int32_t {
__E_Get = static_cast<int32_t>(0x0),
__E_Delete = static_cast<int32_t>(0x1),
__E_Post = static_cast<int32_t>(0x2),
__E_Put = static_cast<int32_t>(0x3),
__E_Head = static_cast<int32_t>(0x4),
__E_Options = static_cast<int32_t>(0x5),
__E_Trace = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioAPIRequestMethod_Unwrapped () const noexcept {
return static_cast<__ModioAPIRequestMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIRequestMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIRequestMethod(int32_t  value__) noexcept;

/// @brief Field Delete value: I32(1)
static ::Modio::API::ModioAPIRequestMethod const Delete;

/// @brief Field Get value: I32(0)
static ::Modio::API::ModioAPIRequestMethod const Get;

/// @brief Field Head value: I32(4)
static ::Modio::API::ModioAPIRequestMethod const Head;

/// @brief Field Options value: I32(5)
static ::Modio::API::ModioAPIRequestMethod const Options;

/// @brief Field Post value: I32(2)
static ::Modio::API::ModioAPIRequestMethod const Post;

/// @brief Field Put value: I32(3)
static ::Modio::API::ModioAPIRequestMethod const Put;

/// @brief Field Trace value: I32(6)
static ::Modio::API::ModioAPIRequestMethod const Trace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPIRequestMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPIRequestMethod) == 0x4, "Size mismatch!");

} // namespace end def Modio::API
