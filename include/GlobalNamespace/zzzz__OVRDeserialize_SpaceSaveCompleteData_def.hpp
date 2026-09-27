#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceSaveCompleteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpaceSaveCompleteData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSaveCompleteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceSaveCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceSaveCompleteData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpaceSaveCompleteData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpaceSaveCompleteData(uint64_t  RequestId, uint64_t  Space, int32_t  Result, ::System::Guid  Uuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12613};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Space, offset: 0x8, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Result, offset: 0x10, size: 0x4, def value: None
 int32_t  Result;

/// @brief Field Uuid, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  Uuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Space) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData, Uuid) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
