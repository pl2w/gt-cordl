#pragma once
// IWYU pragma private; include "Modio/Customizations/WssDeviceLoginRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(WssDeviceLoginRequest)
// Forward declare root types
namespace Modio::Customizations {
struct WssDeviceLoginRequest;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssDeviceLoginRequest);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssDeviceLoginRequest, "Modio.Customizations", "WssDeviceLoginRequest");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssDeviceLoginRequest
#pragma pack(push, 0)
struct CORDL_TYPE WssDeviceLoginRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WssDeviceLoginRequest() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::WssDeviceLoginRequest) == 0x1, "Size mismatch!");

} // namespace end def Modio::Customizations
