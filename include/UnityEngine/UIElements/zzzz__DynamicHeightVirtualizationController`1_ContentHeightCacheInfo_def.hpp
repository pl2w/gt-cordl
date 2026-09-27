#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController`1_ContentHeightCacheInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeightVirtualizationController`1_ContentHeightCacheInfo)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct DynamicHeightVirtualizationController_1_ContentHeightCacheInfo;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DynamicHeightVirtualizationController_1_ContentHeightCacheInfo, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1/ContentHeightCacheInfo");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.DynamicHeightVirtualizationController`1/ContentHeightCacheInfo<T>
struct CORDL_TYPE DynamicHeightVirtualizationController_1_ContentHeightCacheInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(float_t  sum, int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeightVirtualizationController_1_ContentHeightCacheInfo() ;

// Ctor Parameters [CppParam { name: "sum", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeightVirtualizationController_1_ContentHeightCacheInfo(float_t  sum, int32_t  count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field sum, offset: 0x0, size: 0x4, def value: None
 float_t  sum;

/// @brief Field count, offset: 0x4, size: 0x4, def value: None
 int32_t  count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
