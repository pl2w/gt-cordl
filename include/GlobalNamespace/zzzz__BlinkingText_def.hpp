#pragma once
// IWYU pragma private; include "GlobalNamespace/BlinkingText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BlinkingText)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class BlinkingText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlinkingText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlinkingText*, "", "BlinkingText");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlinkingText
class CORDL_TYPE BlinkingText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cycleTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleTime, put=__cordl_internal_set_cycleTime)) float_t  cycleTime;

/// @brief Field dutyCycle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_dutyCycle, put=__cordl_internal_set_dutyCycle)) float_t  dutyCycle;

/// @brief Field isOn, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field lastTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field textComponent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_textComponent, put=__cordl_internal_set_textComponent)) ::UnityW<::UnityEngine::UI::Text>  textComponent;

/// @brief Method Awake, addr 0x5d09b40, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BlinkingText* New_ctor() ;

/// @brief Method Update, addr 0x5d09b98, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_cycleTime() const;

constexpr float_t& __cordl_internal_get_cycleTime() ;

constexpr float_t const& __cordl_internal_get_dutyCycle() const;

constexpr float_t& __cordl_internal_get_dutyCycle() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_textComponent() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_textComponent() ;

constexpr void __cordl_internal_set_cycleTime(float_t  value) ;

constexpr void __cordl_internal_set_dutyCycle(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_textComponent(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x5d09c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlinkingText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlinkingText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlinkingText(BlinkingText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlinkingText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlinkingText(BlinkingText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{453};

/// @brief Field cycleTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___cycleTime;

/// @brief Field dutyCycle, offset: 0x24, size: 0x4, def value: None
 float_t  ___dutyCycle;

/// @brief Field isOn, offset: 0x28, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field lastTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field textComponent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___textComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlinkingText, ___cycleTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlinkingText, ___dutyCycle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlinkingText, ___isOn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlinkingText, ___lastTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlinkingText, ___textComponent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlinkingText) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
