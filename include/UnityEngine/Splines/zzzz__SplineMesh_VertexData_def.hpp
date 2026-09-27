#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh_VertexData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SplineMesh_VertexData)
namespace UnityEngine::Splines {
class SplineMesh_ISplineVertexData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineMesh_VertexData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineMesh_VertexData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineMesh_VertexData, "UnityEngine.Splines", "SplineMesh/VertexData");
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineMesh/VertexData
struct CORDL_TYPE SplineMesh_VertexData {
public:
// Declarations
 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Vector2  texture;

/// @brief Convert operator to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr operator  ::UnityEngine::Splines::SplineMesh_ISplineVertexData*() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_normal, addr 0xb3268f0, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_normal() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_position, addr 0xb3268d8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_texture, addr 0xb326908, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_texture() ;

/// @brief Convert to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr ::UnityEngine::Splines::SplineMesh_ISplineVertexData* i___UnityEngine__Splines__SplineMesh_ISplineVertexData() ;

/// [CompilerGenerated]
/// @brief Method set_normal, addr 0xb3268fc, size 0xc, virtual true, abstract: false, final true
inline void set_normal(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_position, addr 0xb3268e4, size 0xc, virtual true, abstract: false, final true
inline void set_position(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_texture, addr 0xb326910, size 0x8, virtual true, abstract: false, final true
inline void set_texture(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh_VertexData() ;

// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_texture_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr SplineMesh_VertexData(::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Vector3  _normal_k__BackingField, ::UnityEngine::Vector2  _texture_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27986};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// @brief Field <position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <normal>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  _normal_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <texture>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  _texture_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineMesh_VertexData, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineMesh_VertexData, _normal_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineMesh_VertexData, _texture_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineMesh_VertexData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
