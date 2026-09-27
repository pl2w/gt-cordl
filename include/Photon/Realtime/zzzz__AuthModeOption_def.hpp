#pragma once
// IWYU pragma private; include "Photon/Realtime/AuthModeOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthModeOption)
// Forward declare root types
namespace Photon::Realtime {
struct AuthModeOption;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::AuthModeOption);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::AuthModeOption, "Photon.Realtime", "AuthModeOption");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.AuthModeOption
struct CORDL_TYPE AuthModeOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthModeOption_Unwrapped
enum struct __AuthModeOption_Unwrapped : int32_t {
__E_Auth = static_cast<int32_t>(0x0),
__E_AuthOnce = static_cast<int32_t>(0x1),
__E_AuthOnceWss = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthModeOption_Unwrapped () const noexcept {
return static_cast<__AuthModeOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthModeOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AuthModeOption(int32_t  value__) noexcept;

/// @brief Field Auth value: I32(0)
static ::Photon::Realtime::AuthModeOption const Auth;

/// @brief Field AuthOnce value: I32(1)
static ::Photon::Realtime::AuthModeOption const AuthOnce;

/// @brief Field AuthOnceWss value: I32(2)
static ::Photon::Realtime::AuthModeOption const AuthOnceWss;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::AuthModeOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::AuthModeOption) == 0x4, "Size mismatch!");

} // namespace end def Photon::Realtime
