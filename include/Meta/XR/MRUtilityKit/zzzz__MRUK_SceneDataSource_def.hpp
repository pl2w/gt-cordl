#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SceneDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK_SceneDataSource)
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_SceneDataSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_SceneDataSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_SceneDataSource, "Meta.XR.MRUtilityKit", "MRUK/SceneDataSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/SceneDataSource
struct CORDL_TYPE MRUK_SceneDataSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUK_SceneDataSource_Unwrapped
enum struct __MRUK_SceneDataSource_Unwrapped : int32_t {
__E_Device = static_cast<int32_t>(0x0),
__E_Prefab = static_cast<int32_t>(0x1),
__E_DeviceWithPrefabFallback = static_cast<int32_t>(0x2),
__E_Json = static_cast<int32_t>(0x3),
__E_DeviceWithJsonFallback = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUK_SceneDataSource_Unwrapped () const noexcept {
return static_cast<__MRUK_SceneDataSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUK_SceneDataSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_SceneDataSource(int32_t  value__) noexcept;

/// @brief Field Device value: I32(0)
static ::GlobalNamespace::MRUK_SceneDataSource const Device;

/// @brief Field DeviceWithJsonFallback value: I32(4)
static ::GlobalNamespace::MRUK_SceneDataSource const DeviceWithJsonFallback;

/// @brief Field DeviceWithPrefabFallback value: I32(2)
static ::GlobalNamespace::MRUK_SceneDataSource const DeviceWithPrefabFallback;

/// @brief Field Json value: I32(3)
static ::GlobalNamespace::MRUK_SceneDataSource const Json;

/// @brief Field Prefab value: I32(1)
static ::GlobalNamespace::MRUK_SceneDataSource const Prefab;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_SceneDataSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_SceneDataSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
