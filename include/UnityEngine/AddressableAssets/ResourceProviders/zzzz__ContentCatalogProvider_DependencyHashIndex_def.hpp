#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider_DependencyHashIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogProvider_DependencyHashIndex)
// Forward declare root types
namespace GlobalNamespace {
struct ContentCatalogProvider_DependencyHashIndex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/DependencyHashIndex");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex
struct CORDL_TYPE ContentCatalogProvider_DependencyHashIndex {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContentCatalogProvider_DependencyHashIndex_Unwrapped
enum struct __ContentCatalogProvider_DependencyHashIndex_Unwrapped : int32_t {
__E_Remote = static_cast<int32_t>(0x0),
__E_Cache = static_cast<int32_t>(0x1),
__E_Local = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContentCatalogProvider_DependencyHashIndex_Unwrapped () const noexcept {
return static_cast<__ContentCatalogProvider_DependencyHashIndex_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContentCatalogProvider_DependencyHashIndex() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContentCatalogProvider_DependencyHashIndex(int32_t  value__) noexcept;

/// @brief Field Cache value: I32(1)
static ::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex const Cache;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex const Count;

/// @brief Field Local value: I32(2)
static ::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex const Local;

/// @brief Field Remote value: I32(0)
static ::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex const Remote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContentCatalogProvider_DependencyHashIndex) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
