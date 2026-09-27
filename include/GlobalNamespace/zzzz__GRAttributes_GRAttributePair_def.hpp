#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAttributes_GRAttributePair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GRAttributes_GRAttributePair)
// Forward declare root types
namespace GlobalNamespace {
struct GRAttributes_GRAttributePair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRAttributes_GRAttributePair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAttributes_GRAttributePair, "", "GRAttributes/GRAttributePair");
// Dependencies GRAttributeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRAttributes/GRAttributePair
struct CORDL_TYPE GRAttributes_GRAttributePair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRAttributes_GRAttributePair() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::GRAttributeType", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GRAttributes_GRAttributePair(::GlobalNamespace::GRAttributeType  type, float_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  type;

/// @brief Field value, offset: 0x4, size: 0x4, def value: None
 float_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAttributes_GRAttributePair, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAttributes_GRAttributePair, value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAttributes_GRAttributePair) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
