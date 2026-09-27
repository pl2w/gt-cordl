#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/PreloadAssetTableMetadata_PreloadBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreloadAssetTableMetadata_PreloadBehaviour)
// Forward declare root types
namespace GlobalNamespace {
struct PreloadAssetTableMetadata_PreloadBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour, "UnityEngine.Localization.Metadata", "PreloadAssetTableMetadata/PreloadBehaviour");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Metadata.PreloadAssetTableMetadata/PreloadBehaviour
struct CORDL_TYPE PreloadAssetTableMetadata_PreloadBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PreloadAssetTableMetadata_PreloadBehaviour_Unwrapped
enum struct __PreloadAssetTableMetadata_PreloadBehaviour_Unwrapped : int32_t {
__E_NoPreload = static_cast<int32_t>(0x0),
__E_PreloadAll = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PreloadAssetTableMetadata_PreloadBehaviour_Unwrapped () const noexcept {
return static_cast<__PreloadAssetTableMetadata_PreloadBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PreloadAssetTableMetadata_PreloadBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PreloadAssetTableMetadata_PreloadBehaviour(int32_t  value__) noexcept;

/// @brief Field NoPreload value: I32(0)
static ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour const NoPreload;

/// @brief Field PreloadAll value: I32(1)
static ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour const PreloadAll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
