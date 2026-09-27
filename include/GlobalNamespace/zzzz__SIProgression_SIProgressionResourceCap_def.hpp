#pragma once
// IWYU pragma private; include "GlobalNamespace/SIProgression_SIProgressionResourceCap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIProgression_SIProgressionResourceCap)
// Forward declare root types
namespace GlobalNamespace {
struct SIProgression_SIProgressionResourceCap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIProgression_SIProgressionResourceCap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression_SIProgressionResourceCap, "", "SIProgression/SIProgressionResourceCap");
// Dependencies SIResource::ResourceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIProgression/SIProgressionResourceCap
struct CORDL_TYPE SIProgression_SIProgressionResourceCap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression_SIProgressionResourceCap() ;

// Ctor Parameters [CppParam { name: "resourceType", ty: "::GlobalNamespace::SIResource_ResourceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceMax", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIProgression_SIProgressionResourceCap(::GlobalNamespace::SIResource_ResourceType  resourceType, int32_t  resourceMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field resourceType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_ResourceType  resourceType;

/// @brief Field resourceMax, offset: 0x4, size: 0x4, def value: None
 int32_t  resourceMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression_SIProgressionResourceCap, resourceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression_SIProgressionResourceCap, resourceMax) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression_SIProgressionResourceCap) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
