#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_DefaultMeshAssignCustomizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_DefaultMeshAssignCustomizer)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer_SimpleAPI;
}
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
class MB_DefaultMeshAssignCustomizer;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer*, "DigitalOpus.MB.Core", "MB_DefaultMeshAssignCustomizer");
// Dependencies UnityEngine.ScriptableObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_DefaultMeshAssignCustomizer
class CORDL_TYPE MB_DefaultMeshAssignCustomizer : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*() noexcept;

/// @brief Convert operator to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI"
constexpr operator  ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI*() noexcept;

/// @brief Method DefaultDelegateAssignMeshColors, addr 0x9dbd99c, size 0x1c, virtual false, abstract: false, final false
static inline void DefaultDelegateAssignMeshColors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<float_t>  sliceIndexes) ;

static inline ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer* New_ctor() ;

/// @brief Method .ctor, addr 0x9dbd9b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer() noexcept;

/// @brief Convert to "::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI"
constexpr ::DigitalOpus::MB::Core::IAssignToMeshCustomizer_SimpleAPI* i___DigitalOpus__MB__Core__IAssignToMeshCustomizer_SimpleAPI() noexcept;

/// @brief Method meshAssign_UV0, addr 0x9dbd8a0, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV0(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV2, addr 0x9dbd8bc, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV2(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV3, addr 0x9dbd8d8, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV3(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV4, addr 0x9dbd8f4, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV4(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV5, addr 0x9dbd910, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV5(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV6, addr 0x9dbd92c, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV6(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV7, addr 0x9dbd948, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV7(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_UV8, addr 0x9dbd964, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_UV8(int32_t  channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<float_t>  sliceIndexes) ;

/// @brief Method meshAssign_colors, addr 0x9dbd980, size 0x1c, virtual true, abstract: false, final false
inline void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<float_t>  sliceIndexes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_DefaultMeshAssignCustomizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_DefaultMeshAssignCustomizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_DefaultMeshAssignCustomizer(MB_DefaultMeshAssignCustomizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_DefaultMeshAssignCustomizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_DefaultMeshAssignCustomizer(MB_DefaultMeshAssignCustomizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
