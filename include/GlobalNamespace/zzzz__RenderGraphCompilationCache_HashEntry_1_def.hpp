#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderGraphCompilationCache_HashEntry_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphCompilationCache_HashEntry_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RenderGraphCompilationCache_HashEntry_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1, "", "RenderGraphCompilationCache/HashEntry`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: RenderGraphCompilationCache/HashEntry`1<T>
struct CORDL_TYPE RenderGraphCompilationCache_HashEntry_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphCompilationCache_HashEntry_1() ;

// Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastFrameUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "compiledGraph", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphCompilationCache_HashEntry_1(int32_t  hash, int32_t  lastFrameUsed, T  compiledGraph) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hash, offset: 0x0, size: 0x4, def value: None
 int32_t  hash;

/// @brief Field lastFrameUsed, offset: 0x4, size: 0x4, def value: None
 int32_t  lastFrameUsed;

/// @brief Field compiledGraph, offset: 0x8, size: 0x8, def value: None
 T  compiledGraph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
