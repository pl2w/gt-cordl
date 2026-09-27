#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCompositionLayer)
namespace Liv::Lck::Rendering {
class ILckCompositionLayer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionLayer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionLayer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionLayer*, "Liv.Lck.Rendering", "LckCompositionLayer");
// Dependencies System.Object
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionLayer
class CORDL_TYPE LckCompositionLayer : public ::System::Object {
public:
// Declarations
/// @brief Field BlendMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendMaterial, put=__cordl_internal_set_BlendMaterial)) ::UnityW<::UnityEngine::Material>  BlendMaterial;

 __declspec(property(get=get_CurrentTexture)) ::UnityW<::UnityEngine::Texture>  CurrentTexture;

/// @brief Field IsActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsActive, put=__cordl_internal_set_IsActive)) bool  IsActive;

 __declspec(property(get=Liv_Lck_Rendering_ILckCompositionLayer_get_BlendMaterial, put=Liv_Lck_Rendering_ILckCompositionLayer_set_BlendMaterial)) ::UnityW<::UnityEngine::Material>  Liv_Lck_Rendering_ILckCompositionLayer_BlendMaterial;

 __declspec(property(get=Liv_Lck_Rendering_ILckCompositionLayer_get_IsActive, put=Liv_Lck_Rendering_ILckCompositionLayer_set_IsActive)) bool  Liv_Lck_Rendering_ILckCompositionLayer_IsActive;

 __declspec(property(get=Liv_Lck_Rendering_ILckCompositionLayer_get_Name, put=Liv_Lck_Rendering_ILckCompositionLayer_set_Name)) ::StringW  Liv_Lck_Rendering_ILckCompositionLayer_Name;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Convert operator to "::Liv::Lck::Rendering::ILckCompositionLayer"
constexpr operator  ::Liv::Lck::Rendering::ILckCompositionLayer*() noexcept;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.get_BlendMaterial, addr 0x9d3f190, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Material> Liv_Lck_Rendering_ILckCompositionLayer_get_BlendMaterial() ;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.get_IsActive, addr 0x9d3f1a0, size 0x8, virtual true, abstract: false, final true
inline bool Liv_Lck_Rendering_ILckCompositionLayer_get_IsActive() ;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.get_Name, addr 0x9d3f180, size 0x8, virtual true, abstract: false, final true
inline ::StringW Liv_Lck_Rendering_ILckCompositionLayer_get_Name() ;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.set_BlendMaterial, addr 0x9d3f198, size 0x8, virtual true, abstract: false, final true
inline void Liv_Lck_Rendering_ILckCompositionLayer_set_BlendMaterial(::UnityEngine::Material*  value) ;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.set_IsActive, addr 0x9d3f1a8, size 0x8, virtual true, abstract: false, final true
inline void Liv_Lck_Rendering_ILckCompositionLayer_set_IsActive(bool  value) ;

/// @brief Method Liv.Lck.Rendering.ILckCompositionLayer.set_Name, addr 0x9d3f188, size 0x8, virtual true, abstract: false, final true
inline void Liv_Lck_Rendering_ILckCompositionLayer_set_Name(::StringW  value) ;

static inline ::Liv::Lck::Rendering::LckCompositionLayer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_BlendMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_BlendMaterial() ;

constexpr bool const& __cordl_internal_get_IsActive() const;

constexpr bool& __cordl_internal_get_IsActive() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_BlendMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_IsActive(bool  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d3f1b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentTexture, addr 0x9d3f178, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_CurrentTexture() ;

/// @brief Convert to "::Liv::Lck::Rendering::ILckCompositionLayer"
constexpr ::Liv::Lck::Rendering::ILckCompositionLayer* i___Liv__Lck__Rendering__ILckCompositionLayer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionLayer(LckCompositionLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionLayer(LckCompositionLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24854};

/// [Tooltip("A descriptive name for this layer. Can be used to find and control it at runtime.")]
/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// [Tooltip("The material used to perform the blend.")]
/// @brief Field BlendMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___BlendMaterial;

/// @brief Field IsActive, offset: 0x20, size: 0x1, def value: None
 bool  ___IsActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionLayer, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionLayer, ___BlendMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionLayer, ___IsActive) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionLayer) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
