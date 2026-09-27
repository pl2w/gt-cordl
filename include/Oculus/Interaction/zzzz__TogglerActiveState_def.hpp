#pragma once
// IWYU pragma private; include "Oculus/Interaction/TogglerActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TogglerActiveState)
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Oculus::Interaction {
class TogglerActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TogglerActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TogglerActiveState*, "Oculus.Interaction", "TogglerActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TogglerActiveState
class CORDL_TYPE TogglerActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field _started, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _toggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method InjectAllToggle, addr 0xa42c174, size 0x8, virtual false, abstract: false, final false
inline void InjectAllToggle(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method InjectAllTogglerActiveState, addr 0xa42c16c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllTogglerActiveState(::UnityEngine::UI::Toggle*  toggle) ;

static inline ::Oculus::Interaction::TogglerActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa42c140, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0xa42c17c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa42c128, size 0x18, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TogglerActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TogglerActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TogglerActiveState(TogglerActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TogglerActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TogglerActiveState(TogglerActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28260};

/// [SerializeField]
/// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

/// @brief Field _started, offset: 0x28, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TogglerActiveState, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TogglerActiveState, ____started) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TogglerActiveState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
