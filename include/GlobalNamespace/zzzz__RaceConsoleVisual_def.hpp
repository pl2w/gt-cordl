#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceConsoleVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaceConsoleVisual)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class RaceConsoleVisual;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RaceConsoleVisual*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaceConsoleVisual*, "", "RaceConsoleVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RaceConsoleVisual
class CORDL_TYPE RaceConsoleVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field button1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_button1, put=__cordl_internal_set_button1)) ::UnityW<::UnityEngine::MeshRenderer>  button1;

/// @brief Field button3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_button3, put=__cordl_internal_set_button3)) ::UnityW<::UnityEngine::MeshRenderer>  button3;

/// @brief Field button5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_button5, put=__cordl_internal_set_button5)) ::UnityW<::UnityEngine::MeshRenderer>  button5;

/// @brief Field buttonPressedOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_buttonPressedOffset, put=__cordl_internal_set_buttonPressedOffset)) ::UnityEngine::Vector3  buttonPressedOffset;

/// @brief Field inactiveButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_inactiveButton, put=__cordl_internal_set_inactiveButton)) ::UnityW<::UnityEngine::Material>  inactiveButton;

/// @brief Field pressableButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressableButton, put=__cordl_internal_set_pressableButton)) ::UnityW<::UnityEngine::Material>  pressableButton;

/// @brief Field selectedButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedButton, put=__cordl_internal_set_selectedButton)) ::UnityW<::UnityEngine::Material>  selectedButton;

static inline ::GlobalNamespace::RaceConsoleVisual* New_ctor() ;

/// @brief Method ShowCanStartRace, addr 0x568eb34, size 0x158, virtual false, abstract: false, final false
inline void ShowCanStartRace() ;

/// @brief Method ShowRaceInProgress, addr 0x568e950, size 0x1e4, virtual false, abstract: false, final false
inline void ShowRaceInProgress(int32_t  laps) ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_button1() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_button1() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_button3() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_button3() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_button5() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_button5() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_buttonPressedOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_buttonPressedOffset() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_inactiveButton() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_inactiveButton() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pressableButton() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pressableButton() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_selectedButton() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_selectedButton() ;

constexpr void __cordl_internal_set_button1(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_button3(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_button5(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_buttonPressedOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_inactiveButton(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_pressableButton(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_selectedButton(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x568ec8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaceConsoleVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaceConsoleVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaceConsoleVisual(RaceConsoleVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaceConsoleVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaceConsoleVisual(RaceConsoleVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{878};

/// [SerializeField]
/// @brief Field button1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___button1;

/// [SerializeField]
/// @brief Field button3, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___button3;

/// [SerializeField]
/// @brief Field button5, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___button5;

/// [SerializeField]
/// @brief Field buttonPressedOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___buttonPressedOffset;

/// [SerializeField]
/// @brief Field pressableButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pressableButton;

/// [SerializeField]
/// @brief Field selectedButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___selectedButton;

/// [SerializeField]
/// @brief Field inactiveButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___inactiveButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___button1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___button3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___button5) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___buttonPressedOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___pressableButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___selectedButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceConsoleVisual, ___inactiveButton) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaceConsoleVisual) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
