#pragma once
// IWYU pragma private; include "GlobalNamespace/FirstPersonToggleOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FirstPersonToggleOverride)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonToggleOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FirstPersonToggleOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FirstPersonToggleOverride*, "", "FirstPersonToggleOverride");
// [RequireComponent(typeof(UnityEngine.Renderer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirstPersonToggleOverride
class CORDL_TYPE FirstPersonToggleOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

 __declspec(property(get=get_Toggle)) bool  Toggle;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field doNotToggle, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_doNotToggle, put=__cordl_internal_set_doNotToggle)) bool  doNotToggle;

/// @brief Field toggle, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_toggle, put=__cordl_internal_set_toggle)) bool  toggle;

static inline ::GlobalNamespace::FirstPersonToggleOverride* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get_doNotToggle() const;

constexpr bool& __cordl_internal_get_doNotToggle() ;

constexpr bool const& __cordl_internal_get_toggle() const;

constexpr bool& __cordl_internal_get_toggle() ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_doNotToggle(bool  value) ;

constexpr void __cordl_internal_set_toggle(bool  value) ;

/// @brief Method .ctor, addr 0x57059ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Renderer, addr 0x57059a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

/// @brief Method get_Toggle, addr 0x570599c, size 0x8, virtual false, abstract: false, final false
inline bool get_Toggle() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstPersonToggleOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonToggleOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonToggleOverride(FirstPersonToggleOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonToggleOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonToggleOverride(FirstPersonToggleOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{161};

/// [SerializeField]
/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field toggle, offset: 0x28, size: 0x1, def value: None
 bool  ___toggle;

/// [SerializeField]
/// @brief Field doNotToggle, offset: 0x29, size: 0x1, def value: None
 bool  ___doNotToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirstPersonToggleOverride, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonToggleOverride, ___toggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonToggleOverride, ___doNotToggle) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FirstPersonToggleOverride) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
