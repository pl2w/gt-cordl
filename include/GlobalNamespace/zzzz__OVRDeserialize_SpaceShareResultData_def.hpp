#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceShareResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpaceShareResultData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpaceShareResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceShareResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceShareResultData
struct CORDL_TYPE OVRDeserialize_SpaceShareResultData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpaceShareResultData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpaceShareResultData(uint64_t  RequestId, int32_t  Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 int32_t  Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceShareResultData, Result) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpaceShareResultData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
