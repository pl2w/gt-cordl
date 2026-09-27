#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Config)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Config;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Config);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Config, "Fusion", "DynamicHeap/Config");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Config
struct CORDL_TYPE DynamicHeap_Config {
public:
// Declarations
/// @brief Method get_Default, addr 0x5f9048c, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_Config get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Config() ;

// Ctor Parameters [CppParam { name: "BlockPageCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Config(int32_t  BlockPageCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BlockPageCount, offset: 0x0, size: 0x4, def value: None
 int32_t  BlockPageCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_Config, BlockPageCount) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_Config) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
