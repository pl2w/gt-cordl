#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtDroneModeTabletUIAppearance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtDroneModeTabletUIAppearance)
namespace Liv::Lck::GorillaTag {
class GtDisplay;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtDroneModeTabletUIAppearance;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance*, "Liv.Lck.GorillaTag", "GtDroneModeTabletUIAppearance");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtDroneModeTabletUIAppearance
class CORDL_TYPE GtDroneModeTabletUIAppearance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsDroneModeActive, put=set_IsDroneModeActive)) bool  IsDroneModeActive;

/// @brief Field _display, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__display, put=__cordl_internal_set__display)) ::UnityW<::Liv::Lck::GorillaTag::GtDisplay>  _display;

/// @brief Field _isDroneModeActive, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDroneModeActive, put=__cordl_internal_set__isDroneModeActive)) bool  _isDroneModeActive;

/// @brief Field _orientationButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__orientationButton, put=__cordl_internal_set__orientationButton)) ::UnityW<::UnityEngine::GameObject>  _orientationButton;

/// @brief Field _selectorsGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectorsGroup, put=__cordl_internal_set__selectorsGroup)) ::UnityW<::UnityEngine::GameObject>  _selectorsGroup;

/// @brief Field _settingsGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsGroup, put=__cordl_internal_set__settingsGroup)) ::UnityW<::UnityEngine::GameObject>  _settingsGroup;

/// @brief Method EvaluateMode, addr 0x9d22ef0, size 0x68, virtual false, abstract: false, final false
inline void EvaluateMode(bool  isDroneMode) ;

static inline ::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance* New_ctor() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDisplay> const& __cordl_internal_get__display() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDisplay>& __cordl_internal_get__display() ;

constexpr bool const& __cordl_internal_get__isDroneModeActive() const;

constexpr bool& __cordl_internal_get__isDroneModeActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__orientationButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__orientationButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__selectorsGroup() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__selectorsGroup() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__settingsGroup() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__settingsGroup() ;

constexpr void __cordl_internal_set__display(::UnityW<::Liv::Lck::GorillaTag::GtDisplay>  value) ;

constexpr void __cordl_internal_set__isDroneModeActive(bool  value) ;

constexpr void __cordl_internal_set__orientationButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__selectorsGroup(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__settingsGroup(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d22f58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsDroneModeActive, addr 0x9d22ee0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDroneModeActive() ;

/// @brief Method set_IsDroneModeActive, addr 0x9d22ee8, size 0x8, virtual false, abstract: false, final false
inline void set_IsDroneModeActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtDroneModeTabletUIAppearance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtDroneModeTabletUIAppearance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtDroneModeTabletUIAppearance(GtDroneModeTabletUIAppearance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtDroneModeTabletUIAppearance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtDroneModeTabletUIAppearance(GtDroneModeTabletUIAppearance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29630};

/// [Header("Tablet UI Elements")]
/// [SerializeField]
/// @brief Field _selectorsGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____selectorsGroup;

/// [SerializeField]
/// @brief Field _orientationButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____orientationButton;

/// [SerializeField]
/// @brief Field _settingsGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____settingsGroup;

/// [SerializeField]
/// @brief Field _display, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtDisplay>  ____display;

/// @brief Field _isDroneModeActive, offset: 0x40, size: 0x1, def value: None
 bool  ____isDroneModeActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance, ____selectorsGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance, ____orientationButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance, ____settingsGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance, ____display) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance, ____isDroneModeActive) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
