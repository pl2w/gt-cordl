#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIToggleOutputSplitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIToggleOutputSplitter)
namespace UnityEngine::UI {
class Toggle_ToggleEvent;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIToggleOutputSplitter;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*, "Modio.Unity.UI.Components.Selectables", "ModioUIToggleOutputSplitter");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUIToggleOutputSplitter
class CORDL_TYPE ModioUIToggleOutputSplitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hasFiredEvent, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasFiredEvent, put=__cordl_internal_set__hasFiredEvent)) bool  _hasFiredEvent;

/// @brief Field _toggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Field onToggleOff, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggleOff, put=__cordl_internal_set_onToggleOff)) ::UnityEngine::UI::Toggle_ToggleEvent*  onToggleOff;

/// @brief Field onToggleOn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggleOn, put=__cordl_internal_set_onToggleOn)) ::UnityEngine::UI::Toggle_ToggleEvent*  onToggleOn;

/// @brief Method Awake, addr 0x9fc2b84, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter* New_ctor() ;

/// @brief Method Start, addr 0x9fc2c5c, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleValueChanged, addr 0x9fc2c88, size 0x78, virtual false, abstract: false, final false
inline void ToggleValueChanged(bool  isOn) ;

constexpr bool const& __cordl_internal_get__hasFiredEvent() const;

constexpr bool& __cordl_internal_get__hasFiredEvent() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& __cordl_internal_get_onToggleOff() const;

constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& __cordl_internal_get_onToggleOff() ;

constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& __cordl_internal_get_onToggleOn() const;

constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& __cordl_internal_get_onToggleOn() ;

constexpr void __cordl_internal_set__hasFiredEvent(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set_onToggleOff(::UnityEngine::UI::Toggle_ToggleEvent*  value) ;

constexpr void __cordl_internal_set_onToggleOn(::UnityEngine::UI::Toggle_ToggleEvent*  value) ;

/// @brief Method .ctor, addr 0x9fc2d00, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIToggleOutputSplitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggleOutputSplitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIToggleOutputSplitter(ModioUIToggleOutputSplitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggleOutputSplitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIToggleOutputSplitter(ModioUIToggleOutputSplitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27190};

/// @brief Field onToggleOn, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UI::Toggle_ToggleEvent*  ___onToggleOn;

/// @brief Field onToggleOff, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UI::Toggle_ToggleEvent*  ___onToggleOff;

/// @brief Field _toggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

/// @brief Field _hasFiredEvent, offset: 0x38, size: 0x1, def value: None
 bool  ____hasFiredEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter, ___onToggleOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter, ___onToggleOff) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter, ____toggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter, ____hasFiredEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
