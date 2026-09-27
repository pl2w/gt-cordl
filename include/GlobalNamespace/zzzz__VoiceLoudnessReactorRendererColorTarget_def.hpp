#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorRendererColorTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorRendererColorTarget)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorRendererColorTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*, "", "VoiceLoudnessReactorRendererColorTarget");
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorRendererColorTarget
class CORDL_TYPE VoiceLoudnessReactorRendererColorTarget : public ::System::Object {
public:
// Declarations
/// @brief Field _lastColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastColor, put=__cordl_internal_set__lastColor)) ::UnityEngine::Color  _lastColor;

/// @brief Field _materials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__materials, put=__cordl_internal_set__materials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _materials;

/// @brief Field colorProperty, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorProperty, put=__cordl_internal_set_colorProperty)) ::StringW  colorProperty;

/// @brief Field gradient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gradient, put=__cordl_internal_set_gradient)) ::UnityEngine::Gradient*  gradient;

/// @brief Field materialIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Field renderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field scale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field useSmoothedLoudness, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSmoothedLoudness, put=__cordl_internal_set_useSmoothedLoudness)) bool  useSmoothedLoudness;

/// @brief Method Inititialize, addr 0x5b4028c, size 0x110, virtual false, abstract: false, final false
inline void Inititialize() ;

static inline ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget* New_ctor() ;

/// @brief Method UpdateMaterialColor, addr 0x5b40c40, size 0xfc, virtual false, abstract: false, final false
inline void UpdateMaterialColor(float_t  level) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__lastColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__lastColor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get__materials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get__materials() ;

constexpr ::StringW const& __cordl_internal_get_colorProperty() const;

constexpr ::StringW& __cordl_internal_get_colorProperty() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_gradient() ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_renderer() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr bool const& __cordl_internal_get_useSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_useSmoothedLoudness() ;

constexpr void __cordl_internal_set__lastColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_colorProperty(::StringW  value) ;

constexpr void __cordl_internal_set_gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_useSmoothedLoudness(bool  value) ;

/// @brief Method .ctor, addr 0x5b40efc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorRendererColorTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorRendererColorTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorRendererColorTarget(VoiceLoudnessReactorRendererColorTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorRendererColorTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorRendererColorTarget(VoiceLoudnessReactorRendererColorTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3717};

/// [SerializeField]
/// @brief Field colorProperty, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___colorProperty;

/// @brief Field renderer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___renderer;

/// @brief Field materialIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___materialIndex;

/// @brief Field gradient, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___gradient;

/// @brief Field useSmoothedLoudness, offset: 0x30, size: 0x1, def value: None
 bool  ___useSmoothedLoudness;

/// @brief Field scale, offset: 0x34, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field _materials, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ____materials;

/// @brief Field _lastColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____lastColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___colorProperty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___renderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___materialIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___gradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___useSmoothedLoudness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ___scale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ____materials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget, ____lastColor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
