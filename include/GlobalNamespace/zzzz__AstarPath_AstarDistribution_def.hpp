#pragma once
// IWYU pragma private; include "GlobalNamespace/AstarPath_AstarDistribution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AstarPath_AstarDistribution)
// Forward declare root types
namespace GlobalNamespace {
struct AstarPath_AstarDistribution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AstarPath_AstarDistribution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath_AstarDistribution, "", "AstarPath/AstarDistribution");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AstarPath/AstarDistribution
struct CORDL_TYPE AstarPath_AstarDistribution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AstarPath_AstarDistribution_Unwrapped
enum struct __AstarPath_AstarDistribution_Unwrapped : int32_t {
__E_WebsiteDownload = static_cast<int32_t>(0x0),
__E_AssetStore = static_cast<int32_t>(0x1),
__E_PackageManager = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AstarPath_AstarDistribution_Unwrapped () const noexcept {
return static_cast<__AstarPath_AstarDistribution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AstarPath_AstarDistribution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AstarPath_AstarDistribution(int32_t  value__) noexcept;

/// @brief Field AssetStore value: I32(1)
static ::GlobalNamespace::AstarPath_AstarDistribution const AssetStore;

/// @brief Field PackageManager value: I32(2)
static ::GlobalNamespace::AstarPath_AstarDistribution const PackageManager;

/// @brief Field WebsiteDownload value: I32(0)
static ::GlobalNamespace::AstarPath_AstarDistribution const WebsiteDownload;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21160};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath_AstarDistribution, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath_AstarDistribution) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
