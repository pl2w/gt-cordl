#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceQuantity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderResourceQuantity)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderResourceQuantity;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderResourceQuantity);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResourceQuantity, "", "BuilderResourceQuantity");
// Dependencies BuilderResourceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderResourceQuantity
struct CORDL_TYPE BuilderResourceQuantity {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResourceQuantity() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderResourceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderResourceQuantity(::GlobalNamespace::BuilderResourceType  type, int32_t  count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderResourceType  type;

/// @brief Field count, offset: 0x4, size: 0x4, def value: None
 int32_t  count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResourceQuantity, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceQuantity, count) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResourceQuantity) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
