#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_PassthroughLayerResumedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_PassthroughLayerResumedData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_PassthroughLayerResumedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData, "", "OVRDeserialize/PassthroughLayerResumedData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/PassthroughLayerResumedData
struct CORDL_TYPE OVRDeserialize_PassthroughLayerResumedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_PassthroughLayerResumedData() ;

// Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_PassthroughLayerResumedData(int32_t  LayerId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12630};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  LayerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData, LayerId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
