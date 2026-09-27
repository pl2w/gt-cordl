#pragma once
// IWYU pragma private; include "Fusion/ServerTimeProviderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ServerTimeProviderSettings)
// Forward declare root types
namespace Fusion {
struct ServerTimeProviderSettings;
}
// Write type traits
MARK_VAL_T(::Fusion::ServerTimeProviderSettings);
DEFINE_IL2CPP_CLASS(::Fusion::ServerTimeProviderSettings, "Fusion", "ServerTimeProviderSettings");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ServerTimeProviderSettings
struct CORDL_TYPE ServerTimeProviderSettings {
public:
// Declarations
/// @brief Method Default, addr 0x600b084, size 0x98, virtual false, abstract: false, final false
static inline ::Fusion::ServerTimeProviderSettings Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeProviderSettings() ;

// Ctor Parameters [CppParam { name: "SimDeltaTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr ServerTimeProviderSettings(double_t  SimDeltaTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field SimDeltaTime, offset: 0x0, size: 0x8, def value: None
 double_t  SimDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ServerTimeProviderSettings, SimDeltaTime) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::ServerTimeProviderSettings) == 0x8, "Size mismatch!");

} // namespace end def Fusion
