#pragma once
// IWYU pragma private; include "Photon/Pun/PunLogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PunLogLevel)
// Forward declare root types
namespace Photon::Pun {
struct PunLogLevel;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::PunLogLevel);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PunLogLevel, "Photon.Pun", "PunLogLevel");
// Dependencies 
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.PunLogLevel
struct CORDL_TYPE PunLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PunLogLevel_Unwrapped
enum struct __PunLogLevel_Unwrapped : int32_t {
__E_ErrorsOnly = static_cast<int32_t>(0x0),
__E_Informational = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PunLogLevel_Unwrapped () const noexcept {
return static_cast<__PunLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PunLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PunLogLevel(int32_t  value__) noexcept;

/// @brief Field ErrorsOnly value: I32(0)
static ::Photon::Pun::PunLogLevel const ErrorsOnly;

/// @brief Field Full value: I32(2)
static ::Photon::Pun::PunLogLevel const Full;

/// @brief Field Informational value: I32(1)
static ::Photon::Pun::PunLogLevel const Informational;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PunLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PunLogLevel) == 0x4, "Size mismatch!");

} // namespace end def Photon::Pun
