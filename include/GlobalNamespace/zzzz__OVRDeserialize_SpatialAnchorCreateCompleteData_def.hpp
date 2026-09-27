#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpatialAnchorCreateCompleteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpatialAnchorCreateCompleteData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpatialAnchorCreateCompleteData
struct CORDL_TYPE OVRDeserialize_SpatialAnchorCreateCompleteData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpatialAnchorCreateCompleteData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpatialAnchorCreateCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12611};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 int32_t  Result;

/// @brief Field Space, offset: 0x10, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  Uuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData, Uuid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
