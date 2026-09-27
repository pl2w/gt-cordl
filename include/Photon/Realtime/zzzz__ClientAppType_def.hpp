#pragma once
// IWYU pragma private; include "Photon/Realtime/ClientAppType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientAppType)
// Forward declare root types
namespace Photon::Realtime {
struct ClientAppType;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::ClientAppType);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ClientAppType, "Photon.Realtime", "ClientAppType");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.ClientAppType
struct CORDL_TYPE ClientAppType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClientAppType_Unwrapped
enum struct __ClientAppType_Unwrapped : int32_t {
__E_Realtime = static_cast<int32_t>(0x0),
__E_Voice = static_cast<int32_t>(0x1),
__E_Fusion = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientAppType_Unwrapped () const noexcept {
return static_cast<__ClientAppType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClientAppType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClientAppType(int32_t  value__) noexcept;

/// @brief Field Fusion value: I32(2)
static ::Photon::Realtime::ClientAppType const Fusion;

/// @brief Field Realtime value: I32(0)
static ::Photon::Realtime::ClientAppType const Realtime;

/// @brief Field Voice value: I32(1)
static ::Photon::Realtime::ClientAppType const Voice;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ClientAppType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ClientAppType) == 0x4, "Size mismatch!");

} // namespace end def Photon::Realtime
