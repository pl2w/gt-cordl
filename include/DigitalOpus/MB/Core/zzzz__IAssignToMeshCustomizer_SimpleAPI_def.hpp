#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/IAssignToMeshCustomizer_SimpleAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAssignToMeshCustomizer_SimpleAPI)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer_SimpleAPI;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI*, "DigitalOpus.MB.Core", "IAssignToMeshCustomizer_SimpleAPI");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.IAssignToMeshCustomizer_SimpleAPI
class CORDL_TYPE IAssignToMeshCustomizer_SimpleAPI {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept;

/// @brief Method meshAssign_UV0, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV0(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV2, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV2(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV3, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV3(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV4, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV4(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV5, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV5(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV6, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV6(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV7, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV7(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV8, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_UV8(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_colors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<float_t>  sliceIndexes) ;

// Ctor Parameters [CppParam { name: "", ty: "IAssignToMeshCustomizer_SimpleAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAssignToMeshCustomizer_SimpleAPI(IAssignToMeshCustomizer_SimpleAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22738};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
