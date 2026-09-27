#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler_RenderGraphInputInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativePassCompiler_RenderGraphInputInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativePassCompiler_RenderGraphInputInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassCompiler/RenderGraphInputInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler/RenderGraphInputInfo
struct CORDL_TYPE NativePassCompiler_RenderGraphInputInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativePassCompiler_RenderGraphInputInfo() ;

// Ctor Parameters [CppParam { name: "m_ResourcesForDebugOnly", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RenderPasses", ty: "::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "debugName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "disablePassCulling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "disablePassMerging", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NativePassCompiler_RenderGraphInputInfo(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  m_ResourcesForDebugOnly, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*  m_RenderPasses, ::StringW  debugName, bool  disablePassCulling, bool  disablePassMerging) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ResourcesForDebugOnly, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  m_ResourcesForDebugOnly;

/// @brief Field m_RenderPasses, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*  m_RenderPasses;

/// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
 ::StringW  debugName;

/// @brief Field disablePassCulling, offset: 0x18, size: 0x1, def value: None
 bool  disablePassCulling;

/// @brief Field disablePassMerging, offset: 0x19, size: 0x1, def value: None
 bool  disablePassMerging;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, m_ResourcesForDebugOnly) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, m_RenderPasses) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, debugName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, disablePassCulling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo, disablePassMerging) == 0x19, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
