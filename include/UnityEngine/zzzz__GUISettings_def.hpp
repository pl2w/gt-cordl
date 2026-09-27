#pragma once
// IWYU pragma private; include "UnityEngine/GUISettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUISettings)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class GUISettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUISettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUISettings*, "UnityEngine", "GUISettings");
// [NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUISettings
class CORDL_TYPE GUISettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_cursorColor)) ::UnityEngine::Color  cursorColor;

 __declspec(property(get=get_cursorFlashSpeed)) float_t  cursorFlashSpeed;

 __declspec(property(get=get_doubleClickSelectsWord)) bool  doubleClickSelectsWord;

/// @brief Field m_CursorColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CursorColor, put=__cordl_internal_set_m_CursorColor)) ::UnityEngine::Color  m_CursorColor;

/// @brief Field m_CursorFlashSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CursorFlashSpeed, put=__cordl_internal_set_m_CursorFlashSpeed)) float_t  m_CursorFlashSpeed;

/// @brief Field m_DoubleClickSelectsWord, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DoubleClickSelectsWord, put=__cordl_internal_set_m_DoubleClickSelectsWord)) bool  m_DoubleClickSelectsWord;

/// @brief Field m_SelectionColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_SelectionColor, put=__cordl_internal_set_m_SelectionColor)) ::UnityEngine::Color  m_SelectionColor;

/// @brief Field m_TripleClickSelectsLine, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TripleClickSelectsLine, put=__cordl_internal_set_m_TripleClickSelectsLine)) bool  m_TripleClickSelectsLine;

 __declspec(property(get=get_selectionColor)) ::UnityEngine::Color  selectionColor;

 __declspec(property(get=get_tripleClickSelectsLine)) bool  tripleClickSelectsLine;

/// @brief Method Internal_GetCursorFlashSpeed, addr 0xb648304, size 0x28, virtual false, abstract: false, final false
static inline float_t Internal_GetCursorFlashSpeed() ;

static inline ::UnityEngine::GUISettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CursorColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_CursorColor() ;

constexpr float_t const& __cordl_internal_get_m_CursorFlashSpeed() const;

constexpr float_t& __cordl_internal_get_m_CursorFlashSpeed() ;

constexpr bool const& __cordl_internal_get_m_DoubleClickSelectsWord() const;

constexpr bool& __cordl_internal_get_m_DoubleClickSelectsWord() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor() ;

constexpr bool const& __cordl_internal_get_m_TripleClickSelectsLine() const;

constexpr bool& __cordl_internal_get_m_TripleClickSelectsLine() ;

constexpr void __cordl_internal_set_m_CursorColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_CursorFlashSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_DoubleClickSelectsWord(bool  value) ;

constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_TripleClickSelectsLine(bool  value) ;

/// @brief Method .ctor, addr 0xb64837c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cursorColor, addr 0xb64832c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_cursorColor() ;

/// @brief Method get_cursorFlashSpeed, addr 0xb648338, size 0x38, virtual false, abstract: false, final false
inline float_t get_cursorFlashSpeed() ;

/// @brief Method get_doubleClickSelectsWord, addr 0xb640fc4, size 0x8, virtual false, abstract: false, final false
inline bool get_doubleClickSelectsWord() ;

/// @brief Method get_selectionColor, addr 0xb648370, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_selectionColor() ;

/// @brief Method get_tripleClickSelectsLine, addr 0xb640fcc, size 0x8, virtual false, abstract: false, final false
inline bool get_tripleClickSelectsLine() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUISettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GUISettings(GUISettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUISettings(GUISettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28823};

/// [SerializeField]
/// @brief Field m_DoubleClickSelectsWord, offset: 0x10, size: 0x1, def value: None
 bool  ___m_DoubleClickSelectsWord;

/// [SerializeField]
/// @brief Field m_TripleClickSelectsLine, offset: 0x11, size: 0x1, def value: None
 bool  ___m_TripleClickSelectsLine;

/// [SerializeField]
/// @brief Field m_CursorColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_CursorColor;

/// [SerializeField]
/// @brief Field m_CursorFlashSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_CursorFlashSpeed;

/// [SerializeField]
/// @brief Field m_SelectionColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_SelectionColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUISettings, ___m_DoubleClickSelectsWord) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISettings, ___m_TripleClickSelectsLine) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISettings, ___m_CursorColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISettings, ___m_CursorFlashSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISettings, ___m_SelectionColor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUISettings) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
