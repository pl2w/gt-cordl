#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCaveCrystalVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaCaveCrystalVisuals)
namespace GorillaTagScripts {
class CrystalVisualsPreset;
}
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCaveCrystalVisuals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCaveCrystalVisuals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCaveCrystalVisuals*, "", "GorillaCaveCrystalVisuals");
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCaveCrystalVisuals
class CORDL_TYPE GorillaCaveCrystalVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Color, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__Color, put=setStaticF__Color)) ::GlobalNamespace::ShaderHashId  _Color;

/// @brief Field _EmissionColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__EmissionColor, put=setStaticF__EmissionColor)) ::GlobalNamespace::ShaderHashId  _EmissionColor;

/// @brief Field _MainTex, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__MainTex, put=setStaticF__MainTex)) ::GlobalNamespace::ShaderHashId  _MainTex;

/// @brief Field _block, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__block, put=__cordl_internal_set__block)) ::UnityEngine::MaterialPropertyBlock*  _block;

/// @brief Field _initialized, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastState, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastState, put=__cordl_internal_set__lastState)) int32_t  _lastState;

/// @brief Field _lerp, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerp, put=__cordl_internal_set__lerp)) float_t  _lerp;

/// @brief Field _ranSetupOnce, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__ranSetupOnce, put=__cordl_internal_set__ranSetupOnce)) bool  _ranSetupOnce;

/// @brief Field _renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

/// @brief Field _setup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__setup, put=__cordl_internal_set__setup)) ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  _setup;

/// @brief Field _sharedMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedMaterial, put=__cordl_internal_set__sharedMaterial)) ::UnityW<::UnityEngine::Material>  _sharedMaterial;

/// @brief Field crysalPreset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_crysalPreset, put=__cordl_internal_set_crysalPreset)) ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  crysalPreset;

/// @brief Field instanceAlbedo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceAlbedo, put=__cordl_internal_set_instanceAlbedo)) ::UnityW<::UnityEngine::Texture2D>  instanceAlbedo;

 __declspec(property(get=get_lerp, put=set_lerp)) float_t  lerp;

/// @brief Method Awake, addr 0x5904018, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ForceUpdate, addr 0x5904010, size 0x8, virtual false, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method InitializeCrystals, addr 0x5904030, size 0xd8, virtual false, abstract: false, final false
static inline void InitializeCrystals() ;

static inline ::GlobalNamespace::GorillaCaveCrystalVisuals* New_ctor() ;

/// @brief Method Setup, addr 0x5903af4, size 0x198, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0x5903eb8, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5903c8c, size 0x22c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAlbedo, addr 0x5903ed4, size 0x13c, virtual false, abstract: false, final false
inline void UpdateAlbedo() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__block() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__block() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr int32_t const& __cordl_internal_get__lastState() const;

constexpr int32_t& __cordl_internal_get__lastState() ;

constexpr float_t const& __cordl_internal_get__lerp() const;

constexpr float_t& __cordl_internal_get__lerp() ;

constexpr bool const& __cordl_internal_get__ranSetupOnce() const;

constexpr bool& __cordl_internal_get__ranSetupOnce() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> const& __cordl_internal_get__setup() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>& __cordl_internal_get__setup() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__sharedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__sharedMaterial() ;

constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset> const& __cordl_internal_get_crysalPreset() const;

constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>& __cordl_internal_get_crysalPreset() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_instanceAlbedo() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_instanceAlbedo() ;

constexpr void __cordl_internal_set__block(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastState(int32_t  value) ;

constexpr void __cordl_internal_set__lerp(float_t  value) ;

constexpr void __cordl_internal_set__ranSetupOnce(bool  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__setup(::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  value) ;

constexpr void __cordl_internal_set__sharedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_crysalPreset(::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  value) ;

constexpr void __cordl_internal_set_instanceAlbedo(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5904108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__Color() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__EmissionColor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__MainTex() ;

/// @brief Method get_lerp, addr 0x5903ae4, size 0x8, virtual false, abstract: false, final false
inline float_t get_lerp() ;

static inline void setStaticF__Color(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__EmissionColor(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__MainTex(::GlobalNamespace::ShaderHashId  value) ;

/// @brief Method set_lerp, addr 0x5903aec, size 0x8, virtual false, abstract: false, final false
inline void set_lerp(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCaveCrystalVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCaveCrystalVisuals(GorillaCaveCrystalVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCaveCrystalVisuals(GorillaCaveCrystalVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2152};

/// @brief Field crysalPreset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  ___crysalPreset;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _lerp, offset: 0x28, size: 0x4, def value: None
 float_t  ____lerp;

/// [Space]
/// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// @brief Field _sharedMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____sharedMaterial;

/// [SerializeField]
/// @brief Field instanceAlbedo, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___instanceAlbedo;

/// [SerializeField]
/// @brief Field _initialized, offset: 0x48, size: 0x1, def value: None
 bool  ____initialized;

/// [SerializeField]
/// @brief Field _lastState, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____lastState;

/// [SerializeField]
/// @brief Field _setup, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  ____setup;

/// @brief Field _block, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____block;

/// @brief Field _ranSetupOnce, offset: 0x60, size: 0x1, def value: None
 bool  ____ranSetupOnce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ___crysalPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____lerp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____sharedMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ___instanceAlbedo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____initialized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____lastState) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____setup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____block) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystalVisuals, ____ranSetupOnce) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCaveCrystalVisuals) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
