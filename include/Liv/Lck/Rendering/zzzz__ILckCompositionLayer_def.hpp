#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/ILckCompositionLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckCompositionLayer)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class ILckCompositionLayer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::ILckCompositionLayer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::ILckCompositionLayer*, "Liv.Lck.Rendering", "ILckCompositionLayer");
// Dependencies 
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.ILckCompositionLayer
class CORDL_TYPE ILckCompositionLayer {
public:
// Declarations
 __declspec(property(get=get_BlendMaterial, put=set_BlendMaterial)) ::UnityW<::UnityEngine::Material>  BlendMaterial;

 __declspec(property(get=get_CurrentTexture)) ::UnityW<::UnityEngine::Texture>  CurrentTexture;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Method get_BlendMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Material> get_BlendMaterial() ;

/// @brief Method get_CurrentTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Texture> get_CurrentTexture() ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsActive() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

/// @brief Method set_BlendMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_BlendMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_IsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IsActive(bool  value) ;

/// @brief Method set_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Name(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCompositionLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCompositionLayer(ILckCompositionLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Rendering
