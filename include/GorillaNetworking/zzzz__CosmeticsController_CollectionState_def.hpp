#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_CollectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_CollectionState)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_CollectionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_CollectionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_CollectionState, "GorillaNetworking", "CosmeticsController/CollectionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/CollectionState
struct CORDL_TYPE CosmeticsController_CollectionState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_CollectionState() ;

// Ctor Parameters [CppParam { name: "activeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_CollectionState(int32_t  activeIndex, int32_t  visibleMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field activeIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  activeIndex;

/// @brief Field visibleMask, offset: 0x4, size: 0x4, def value: None
 int32_t  visibleMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_CollectionState, activeIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CollectionState, visibleMask) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_CollectionState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
