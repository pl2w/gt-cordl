#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpacesEraseResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_EraseResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpacesEraseResultData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, "", "OVRDeserialize/SpacesEraseResultData");
// Dependencies OVRAnchor::EraseResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpacesEraseResultData
struct CORDL_TYPE OVRDeserialize_SpacesEraseResultData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpacesEraseResultData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_EraseResult", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpacesEraseResultData(uint64_t  RequestId, ::GlobalNamespace::OVRAnchor_EraseResult  Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRAnchor_EraseResult  Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData, Result) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
