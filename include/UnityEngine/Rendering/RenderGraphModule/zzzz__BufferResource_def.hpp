#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferResource)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class BufferResource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::BufferResource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::BufferResource*, "UnityEngine.Rendering.RenderGraphModule", "BufferResource");
// [DebuggerDisplay("BufferResource ({desc.name})")]
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferDesc, UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType, ResType>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferResource
class CORDL_TYPE BufferResource : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Rendering::RenderGraphModule::BufferDesc,::UnityEngine::GraphicsBuffer*> {
public:
// Declarations
/// @brief Method CreateGraphicsResource, addr 0xb1bb5ac, size 0x98, virtual true, abstract: false, final false
inline void CreateGraphicsResource() ;

/// @brief Method GetDescHashCode, addr 0xb1bb5a0, size 0xc, virtual true, abstract: false, final false
inline int32_t GetDescHashCode() ;

/// @brief Method GetName, addr 0xb1bb54c, size 0x54, virtual true, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method LogCreation, addr 0xb1bb6c4, size 0xe0, virtual true, abstract: false, final false
inline void LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*  logger) ;

/// @brief Method LogRelease, addr 0xb1bb7a4, size 0xe0, virtual true, abstract: false, final false
inline void LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*  logger) ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* New_ctor() ;

/// @brief Method ReleaseGraphicsResource, addr 0xb1bb678, size 0x4c, virtual true, abstract: false, final false
inline void ReleaseGraphicsResource() ;

/// @brief Method UpdateGraphicsResource, addr 0xb1bb644, size 0x34, virtual true, abstract: false, final false
inline void UpdateGraphicsResource() ;

/// @brief Method .ctor, addr 0xb1bb884, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferResource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferResource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferResource(BufferResource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferResource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferResource(BufferResource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::BufferResource) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::RenderGraphModule
