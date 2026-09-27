#pragma once
// IWYU pragma private; include "Viveport/Internal/ELocale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELocale)
// Forward declare root types
namespace Viveport::Internal {
struct ELocale;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::ELocale);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::ELocale, "Viveport.Internal", "ELocale");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.ELocale
struct CORDL_TYPE ELocale {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELocale_Unwrapped
enum struct __ELocale_Unwrapped : int32_t {
__E_k_ELocaleUS = static_cast<int32_t>(0x0),
__E_k_ELocaleDE = static_cast<int32_t>(0x1),
__E_k_ELocaleJP = static_cast<int32_t>(0x2),
__E_k_ELocaleKR = static_cast<int32_t>(0x3),
__E_k_ELocaleRU = static_cast<int32_t>(0x4),
__E_k_ELocaleCN = static_cast<int32_t>(0x5),
__E_k_ELocaleTW = static_cast<int32_t>(0x6),
__E_k_ELocaleFR = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELocale_Unwrapped () const noexcept {
return static_cast<__ELocale_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELocale() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ELocale(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELocaleCN value: I32(5)
static ::Viveport::Internal::ELocale const k_ELocaleCN;

/// @brief Field k_ELocaleDE value: I32(1)
static ::Viveport::Internal::ELocale const k_ELocaleDE;

/// @brief Field k_ELocaleFR value: I32(7)
static ::Viveport::Internal::ELocale const k_ELocaleFR;

/// @brief Field k_ELocaleJP value: I32(2)
static ::Viveport::Internal::ELocale const k_ELocaleJP;

/// @brief Field k_ELocaleKR value: I32(3)
static ::Viveport::Internal::ELocale const k_ELocaleKR;

/// @brief Field k_ELocaleRU value: I32(4)
static ::Viveport::Internal::ELocale const k_ELocaleRU;

/// @brief Field k_ELocaleTW value: I32(6)
static ::Viveport::Internal::ELocale const k_ELocaleTW;

/// @brief Field k_ELocaleUS value: I32(0)
static ::Viveport::Internal::ELocale const k_ELocaleUS;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::ELocale, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::ELocale) == 0x4, "Size mismatch!");

} // namespace end def Viveport::Internal
