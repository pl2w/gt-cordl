#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRElevator_ButtonType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRElevatorButton)
namespace GlobalNamespace {
class DisableGameObjectDelayed;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRElevatorButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRElevatorButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorButton*, "", "GRElevatorButton");
// Dependencies GRElevator::ButtonType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRElevatorButton
class CORDL_TYPE GRElevatorButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buttonLit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonLit, put=__cordl_internal_set_buttonLit)) ::UnityW<::UnityEngine::GameObject>  buttonLit;

/// @brief Field buttonType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::GRElevator_ButtonType  buttonType;

/// @brief Field disableDelayed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableDelayed, put=__cordl_internal_set_disableDelayed)) ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  disableDelayed;

/// @brief Field litUpTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_litUpTime, put=__cordl_internal_set_litUpTime)) float_t  litUpTime;

/// @brief Field tempLight, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_tempLight, put=__cordl_internal_set_tempLight)) bool  tempLight;

/// @brief Method Awake, addr 0x5878fd0, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Depressed, addr 0x58790a4, size 0x1c, virtual false, abstract: false, final false
inline void Depressed() ;

static inline ::GlobalNamespace::GRElevatorButton* New_ctor() ;

/// @brief Method Pressed, addr 0x58784e4, size 0x1c, virtual false, abstract: false, final false
inline void Pressed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buttonLit() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buttonLit() ;

constexpr ::GlobalNamespace::GRElevator_ButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::GRElevator_ButtonType& __cordl_internal_get_buttonType() ;

constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed> const& __cordl_internal_get_disableDelayed() const;

constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>& __cordl_internal_get_disableDelayed() ;

constexpr float_t const& __cordl_internal_get_litUpTime() const;

constexpr float_t& __cordl_internal_get_litUpTime() ;

constexpr bool const& __cordl_internal_get_tempLight() const;

constexpr bool& __cordl_internal_get_tempLight() ;

constexpr void __cordl_internal_set_buttonLit(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::GRElevator_ButtonType  value) ;

constexpr void __cordl_internal_set_disableDelayed(::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  value) ;

constexpr void __cordl_internal_set_litUpTime(float_t  value) ;

constexpr void __cordl_internal_set_tempLight(bool  value) ;

/// @brief Method .ctor, addr 0x58790c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRElevatorButton(GRElevatorButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRElevatorButton(GRElevatorButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1915};

/// @brief Field buttonType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GRElevator_ButtonType  ___buttonType;

/// @brief Field buttonLit, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___buttonLit;

/// @brief Field litUpTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___litUpTime;

/// @brief Field disableDelayed, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  ___disableDelayed;

/// @brief Field tempLight, offset: 0x40, size: 0x1, def value: None
 bool  ___tempLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorButton, ___buttonType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorButton, ___buttonLit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorButton, ___litUpTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorButton, ___disableDelayed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorButton, ___tempLight) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorButton) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
