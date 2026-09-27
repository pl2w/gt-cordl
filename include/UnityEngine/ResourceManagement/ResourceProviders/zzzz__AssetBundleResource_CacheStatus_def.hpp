#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleResource_CacheStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleResource_CacheStatus)
// Forward declare root types
namespace GlobalNamespace {
struct AssetBundleResource_CacheStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AssetBundleResource_CacheStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssetBundleResource_CacheStatus, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource/CacheStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource/CacheStatus
struct CORDL_TYPE AssetBundleResource_CacheStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AssetBundleResource_CacheStatus_Unwrapped
enum struct __AssetBundleResource_CacheStatus_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Cached = static_cast<int32_t>(0x1),
__E_NotCached = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssetBundleResource_CacheStatus_Unwrapped () const noexcept {
return static_cast<__AssetBundleResource_CacheStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleResource_CacheStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AssetBundleResource_CacheStatus(int32_t  value__) noexcept;

/// @brief Field Cached value: I32(1)
static ::GlobalNamespace::AssetBundleResource_CacheStatus const Cached;

/// @brief Field NotCached value: I32(2)
static ::GlobalNamespace::AssetBundleResource_CacheStatus const NotCached;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::AssetBundleResource_CacheStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssetBundleResource_CacheStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssetBundleResource_CacheStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
