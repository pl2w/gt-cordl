#pragma once
// IWYU pragma private; include "Oculus/Interaction/ToggleDeselect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(ToggleDeselect)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Oculus::Interaction {
class ToggleDeselect;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ToggleDeselect*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ToggleDeselect*, "Oculus.Interaction", "ToggleDeselect");
// Dependencies UnityEngine.UI.Toggle
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ToggleDeselect
class CORDL_TYPE ToggleDeselect : public ::UnityEngine::UI::Toggle {
public:
// Declarations
 __declspec(property(get=get_ClearStateOnDrag, put=set_ClearStateOnDrag)) bool  ClearStateOnDrag;

/// @brief Field _clearStateOnDrag, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearStateOnDrag, put=__cordl_internal_set__clearStateOnDrag)) bool  _clearStateOnDrag;

static inline ::Oculus::Interaction::ToggleDeselect* New_ctor() ;

/// @brief Method OnBeginDrag, addr 0xa48a2d4, size 0x130, virtual false, abstract: false, final false
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

constexpr bool const& __cordl_internal_get__clearStateOnDrag() const;

constexpr bool& __cordl_internal_get__clearStateOnDrag() ;

constexpr void __cordl_internal_set__clearStateOnDrag(bool  value) ;

/// @brief Method .ctor, addr 0xa48a404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClearStateOnDrag, addr 0xa48a2c4, size 0x8, virtual false, abstract: false, final false
inline bool get_ClearStateOnDrag() ;

/// @brief Method set_ClearStateOnDrag, addr 0xa48a2cc, size 0x8, virtual false, abstract: false, final false
inline void set_ClearStateOnDrag(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleDeselect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleDeselect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleDeselect(ToggleDeselect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleDeselect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleDeselect(ToggleDeselect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16007};

/// [SerializeField]
/// @brief Field _clearStateOnDrag, offset: 0x121, size: 0x1, def value: None
 bool  ____clearStateOnDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ToggleDeselect, ____clearStateOnDrag) == 0x121, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ToggleDeselect) == 0x128, "Size mismatch!");

} // namespace end def Oculus::Interaction
