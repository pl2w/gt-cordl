#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshRenderer_MeshRendererData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRMeshRenderer_MeshRendererData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshRenderer_MeshRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_MeshRendererData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/MeshRendererData
struct CORDL_TYPE OVRMeshRenderer_MeshRendererData {
public:
// Declarations
 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial)) bool  ShouldUseSystemGestureMaterial;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa668a64, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa668a54, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ShouldUseSystemGestureMaterial, addr 0xa668a74, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldUseSystemGestureMaterial() ;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa668a6c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa668a5c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldUseSystemGestureMaterial, addr 0xa668a7c, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldUseSystemGestureMaterial(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshRenderer_MeshRendererData() ;

// Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshRenderer_MeshRendererData(bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, bool  _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x2, size: 0x1, def value: None
 bool  _ShouldUseSystemGestureMaterial_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _IsDataValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _IsDataHighConfidence_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData) == 0x3, "Size mismatch!");

} // namespace end def GlobalNamespace
