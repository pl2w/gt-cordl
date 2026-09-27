#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpacesSaveResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_SaveResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpacesSaveResultData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, "", "OVRDeserialize/SpacesSaveResultData");
// Dependencies OVRAnchor::SaveResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpacesSaveResultData
struct CORDL_TYPE OVRDeserialize_SpacesSaveResultData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpacesSaveResultData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_SaveResult", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpacesSaveResultData(uint64_t  RequestId, ::GlobalNamespace::OVRAnchor_SaveResult  Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRAnchor_SaveResult  Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData, Result) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
