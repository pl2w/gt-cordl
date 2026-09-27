#pragma once
// IWYU pragma private; include "GlobalNamespace/TapInnerGlow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TapInnerGlow)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class TapInnerGlow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TapInnerGlow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TapInnerGlow*, "", "TapInnerGlow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TapInnerGlow
class CORDL_TYPE TapInnerGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::UnityW<::UnityEngine::Material>  _instance;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field tapLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapLength, put=__cordl_internal_set_tapLength)) float_t  tapLength;

 __declspec(property(get=get_targetMaterial)) ::UnityW<::UnityEngine::Material>  targetMaterial;

static inline ::GlobalNamespace::TapInnerGlow* New_ctor() ;

/// @brief Method Tap, addr 0x595f210, size 0x16c, virtual false, abstract: false, final false
inline void Tap() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__instance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__instance() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get_tapLength() const;

constexpr float_t& __cordl_internal_get_tapLength() ;

constexpr void __cordl_internal_set__instance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_tapLength(float_t  value) ;

/// @brief Method .ctor, addr 0x595f37c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_targetMaterial, addr 0x595f110, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_targetMaterial() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapInnerGlow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapInnerGlow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TapInnerGlow(TapInnerGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapInnerGlow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapInnerGlow(TapInnerGlow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2353};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field tapLength, offset: 0x28, size: 0x4, def value: None
 float_t  ___tapLength;

/// [Space]
/// @brief Field _instance, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TapInnerGlow, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapInnerGlow, ___tapLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapInnerGlow, ____instance) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TapInnerGlow) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
