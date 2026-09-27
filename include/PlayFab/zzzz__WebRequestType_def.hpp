#pragma once
// IWYU pragma private; include "PlayFab/WebRequestType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestType)
// Forward declare root types
namespace PlayFab {
struct WebRequestType;
}
// Write type traits
MARK_VAL_T(::PlayFab::WebRequestType);
DEFINE_IL2CPP_CLASS(::PlayFab::WebRequestType, "PlayFab", "WebRequestType");
// Dependencies 
namespace PlayFab {
// Is value type: true
// CS Name: PlayFab.WebRequestType
struct CORDL_TYPE WebRequestType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebRequestType_Unwrapped
enum struct __WebRequestType_Unwrapped : int32_t {
__E_UnityWebRequest = static_cast<int32_t>(0x0),
__E_HttpWebRequest = static_cast<int32_t>(0x1),
__E_CustomHttp = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebRequestType_Unwrapped () const noexcept {
return static_cast<__WebRequestType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebRequestType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebRequestType(int32_t  value__) noexcept;

/// @brief Field CustomHttp value: I32(2)
static ::PlayFab::WebRequestType const CustomHttp;

/// @brief Field HttpWebRequest value: I32(1)
static ::PlayFab::WebRequestType const HttpWebRequest;

/// @brief Field UnityWebRequest value: I32(0)
static ::PlayFab::WebRequestType const UnityWebRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::WebRequestType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::WebRequestType) == 0x4, "Size mismatch!");

} // namespace end def PlayFab
