#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceEraseCompleteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpaceEraseCompleteData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
// Dependencies OVRPlugin::SpaceStorageLocation, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceEraseCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceEraseCompleteData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpaceEraseCompleteData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpaceEraseCompleteData(uint64_t  RequestId, int32_t  Result, ::System::Guid  Uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 int32_t  Result;

/// @brief Field Uuid, offset: 0xc, size: 0x10, def value: None
 ::System::Guid  Uuid;

/// @brief Field Location, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Uuid) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData, Location) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
