#pragma once
// IWYU pragma private; include "GlobalNamespace/SIAutoPressButtonOnAwake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIAutoPressButtonOnAwake)
namespace GlobalNamespace {
class SICombinedTerminal;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
// Forward declare root types
namespace GlobalNamespace {
class SIAutoPressButtonOnAwake;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIAutoPressButtonOnAwake*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIAutoPressButtonOnAwake*, "", "SIAutoPressButtonOnAwake");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIAutoPressButtonOnAwake
class CORDL_TYPE SIAutoPressButtonOnAwake : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field awakeTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_awakeTime, put=__cordl_internal_set_awakeTime)) float_t  awakeTime;

/// @brief Field button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::SITouchscreenButton>  button;

/// @brief Field buttonPressed, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonPressed, put=__cordl_internal_set_buttonPressed)) bool  buttonPressed;

/// @brief Field delay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field terminalParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalParent, put=__cordl_internal_set_terminalParent)) ::UnityW<::GlobalNamespace::SICombinedTerminal>  terminalParent;

/// @brief Method Awake, addr 0x59d9aec, size 0x94, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIAutoPressButtonOnAwake* New_ctor() ;

/// @brief Method OnEnable, addr 0x59d9b80, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x59d9bf8, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_awakeTime() const;

constexpr float_t& __cordl_internal_get_awakeTime() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& __cordl_internal_get_button() ;

constexpr bool const& __cordl_internal_get_buttonPressed() const;

constexpr bool& __cordl_internal_get_buttonPressed() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& __cordl_internal_get_terminalParent() const;

constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& __cordl_internal_get_terminalParent() ;

constexpr void __cordl_internal_set_awakeTime(float_t  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value) ;

constexpr void __cordl_internal_set_buttonPressed(bool  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_terminalParent(::UnityW<::GlobalNamespace::SICombinedTerminal>  value) ;

/// @brief Method .ctor, addr 0x59d9d60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIAutoPressButtonOnAwake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIAutoPressButtonOnAwake", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIAutoPressButtonOnAwake(SIAutoPressButtonOnAwake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIAutoPressButtonOnAwake", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIAutoPressButtonOnAwake(SIAutoPressButtonOnAwake const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{313};

/// @brief Field terminalParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SICombinedTerminal>  ___terminalParent;

/// @brief Field button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButton>  ___button;

/// @brief Field awakeTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___awakeTime;

/// @brief Field buttonPressed, offset: 0x34, size: 0x1, def value: None
 bool  ___buttonPressed;

/// @brief Field delay, offset: 0x38, size: 0x4, def value: None
 float_t  ___delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIAutoPressButtonOnAwake, ___terminalParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIAutoPressButtonOnAwake, ___button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIAutoPressButtonOnAwake, ___awakeTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIAutoPressButtonOnAwake, ___buttonPressed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIAutoPressButtonOnAwake, ___delay) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIAutoPressButtonOnAwake) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
