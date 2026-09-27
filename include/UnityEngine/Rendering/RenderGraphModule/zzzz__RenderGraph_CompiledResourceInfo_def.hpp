#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_CompiledResourceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph_CompiledResourceInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraph_CompiledResourceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraph_CompiledResourceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraph_CompiledResourceInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledResourceInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo
struct CORDL_TYPE RenderGraph_CompiledResourceInfo {
public:
// Declarations
/// @brief Method Reset, addr 0xb1b3320, size 0x100, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraph_CompiledResourceInfo() ;

// Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "consumers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraph_CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>*  producers, ::System::Collections::Generic::List_1<int32_t>*  consumers, int32_t  refCount, bool  imported) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field producers, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  producers;

/// @brief Field consumers, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  consumers;

/// @brief Field refCount, offset: 0x10, size: 0x4, def value: None
 int32_t  refCount;

/// @brief Field imported, offset: 0x14, size: 0x1, def value: None
 bool  imported;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledResourceInfo, producers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledResourceInfo, consumers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledResourceInfo, refCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraph_CompiledResourceInfo, imported) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraph_CompiledResourceInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
