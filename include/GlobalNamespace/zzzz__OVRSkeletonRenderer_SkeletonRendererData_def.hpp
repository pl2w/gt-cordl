#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeletonRenderer_SkeletonRendererData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSkeletonRenderer_SkeletonRendererData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/SkeletonRendererData
struct CORDL_TYPE OVRSkeletonRenderer_SkeletonRendererData {
public:
// Declarations
 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_RootScale, put=set_RootScale)) float_t  RootScale;

 __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial)) bool  ShouldUseSystemGestureMaterial;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa678c98, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa678c88, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RootScale, addr 0xa678c78, size 0x8, virtual false, abstract: false, final false
inline float_t get_RootScale() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ShouldUseSystemGestureMaterial, addr 0xa678ca8, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldUseSystemGestureMaterial() ;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa678ca0, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa678c90, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_RootScale, addr 0xa678c80, size 0x8, virtual false, abstract: false, final false
inline void set_RootScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldUseSystemGestureMaterial, addr 0xa678cb0, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldUseSystemGestureMaterial(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonRenderer_SkeletonRendererData() ;

// Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRSkeletonRenderer_SkeletonRendererData(float_t  _RootScale_k__BackingField, bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, bool  _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <RootScale>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _RootScale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x5, size: 0x1, def value: None
 bool  _IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x6, size: 0x1, def value: None
 bool  _ShouldUseSystemGestureMaterial_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _RootScale_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _IsDataValid_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _IsDataHighConfidence_k__BackingField) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x6, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
