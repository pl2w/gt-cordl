#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Shaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Shaders)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Shaders;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::Shaders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::Shaders*, "UnityEngine.UIElements.UIR", "Shaders");
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Shaders
class CORDL_TYPE Shaders : public ::System::Object {
public:
// Declarations
/// @brief Field k_AtlasBlit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_AtlasBlit, put=setStaticF_k_AtlasBlit)) ::StringW  k_AtlasBlit;

/// @brief Field k_ColorConversionBlit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_ColorConversionBlit, put=setStaticF_k_ColorConversionBlit)) ::StringW  k_ColorConversionBlit;

/// @brief Field k_Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Default, put=setStaticF_k_Default)) ::StringW  k_Default;

/// @brief Field k_ForceGammaKeyword, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_ForceGammaKeyword, put=setStaticF_k_ForceGammaKeyword)) ::StringW  k_ForceGammaKeyword;

/// @brief Field k_RuntimeColorEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_RuntimeColorEffect, put=setStaticF_k_RuntimeColorEffect)) ::StringW  k_RuntimeColorEffect;

/// @brief Field k_RuntimeGaussianBlur, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_RuntimeGaussianBlur, put=setStaticF_k_RuntimeGaussianBlur)) ::StringW  k_RuntimeGaussianBlur;

/// @brief Field s_DefaultMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultMaterial, put=setStaticF_s_DefaultMaterial)) ::UnityW<::UnityEngine::Material>  s_DefaultMaterial;

/// @brief Field s_RefCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RefCount, put=setStaticF_s_RefCount)) int32_t  s_RefCount;

/// @brief Method Acquire, addr 0xb7eb7b0, size 0x60, virtual false, abstract: false, final false
static inline void Acquire() ;

/// @brief Method GetOrCreateMaterial, addr 0xb7f1b20, size 0x180, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetOrCreateMaterial(::by_ref<::UnityEngine::Material*>  material, ::StringW  shaderName) ;

/// @brief Method Release, addr 0xb7ebdc0, size 0x128, virtual false, abstract: false, final false
static inline void Release() ;

static inline ::StringW getStaticF_k_AtlasBlit() ;

static inline ::StringW getStaticF_k_ColorConversionBlit() ;

static inline ::StringW getStaticF_k_Default() ;

static inline ::StringW getStaticF_k_ForceGammaKeyword() ;

static inline ::StringW getStaticF_k_RuntimeColorEffect() ;

static inline ::StringW getStaticF_k_RuntimeGaussianBlur() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DefaultMaterial() ;

static inline int32_t getStaticF_s_RefCount() ;

/// @brief Method get_defaultMaterial, addr 0xb7eaea8, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_defaultMaterial() ;

static inline void setStaticF_k_AtlasBlit(::StringW  value) ;

static inline void setStaticF_k_ColorConversionBlit(::StringW  value) ;

static inline void setStaticF_k_Default(::StringW  value) ;

static inline void setStaticF_k_ForceGammaKeyword(::StringW  value) ;

static inline void setStaticF_k_RuntimeColorEffect(::StringW  value) ;

static inline void setStaticF_k_RuntimeGaussianBlur(::StringW  value) ;

static inline void setStaticF_s_DefaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_RefCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Shaders(Shaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shaders(Shaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::Shaders) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
