#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_MapSortMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksManager_MapSortMethod)
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksManager_MapSortMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksManager_MapSortMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksManager_MapSortMethod, "GorillaTagScripts.Builder", "SharedBlocksManager/MapSortMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/MapSortMethod
struct CORDL_TYPE SharedBlocksManager_MapSortMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SharedBlocksManager_MapSortMethod_Unwrapped
enum struct __SharedBlocksManager_MapSortMethod_Unwrapped : int32_t {
__E_Top = static_cast<int32_t>(0x0),
__E_NewlyCreated = static_cast<int32_t>(0x1),
__E_RecentlyUpdated = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SharedBlocksManager_MapSortMethod_Unwrapped () const noexcept {
return static_cast<__SharedBlocksManager_MapSortMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_MapSortMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksManager_MapSortMethod(int32_t  value__) noexcept;

/// @brief Field NewlyCreated value: I32(1)
static ::GlobalNamespace::SharedBlocksManager_MapSortMethod const NewlyCreated;

/// @brief Field RecentlyUpdated value: I32(2)
static ::GlobalNamespace::SharedBlocksManager_MapSortMethod const RecentlyUpdated;

/// @brief Field Top value: I32(0)
static ::GlobalNamespace::SharedBlocksManager_MapSortMethod const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_MapSortMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksManager_MapSortMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
