#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtScreenButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GtScreenButton)
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessor;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtScreenButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtScreenButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtScreenButton*, "Liv.Lck.GorillaTag", "GtScreenButton");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtScreenButton
class CORDL_TYPE GtScreenButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

/// @brief Field _activeColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _currentActiveColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentActiveColor, put=__cordl_internal_set__currentActiveColor)) ::UnityEngine::Color  _currentActiveColor;

/// @brief Field _currentDefaultColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentDefaultColor, put=__cordl_internal_set__currentDefaultColor)) ::UnityEngine::Color  _currentDefaultColor;

/// @brief Field _defaultColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultColor, put=__cordl_internal_set__defaultColor)) ::UnityEngine::Color  _defaultColor;

/// @brief Field _iconRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconRenderer, put=__cordl_internal_set__iconRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _iconRenderer;

/// @brief Field _isActive, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isDisabled, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _triggerProcessor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerProcessor, put=__cordl_internal_set__triggerProcessor)) ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  _triggerProcessor;

/// @brief Field onTapEnded, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTapEnded, put=__cordl_internal_set_onTapEnded)) ::UnityEngine::Events::UnityEvent*  onTapEnded;

/// @brief Field onTapStarted, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTapStarted, put=__cordl_internal_set_onTapStarted)) ::UnityEngine::Events::UnityEvent*  onTapStarted;

/// @brief Method DisableForDuration, addr 0x9d2bcb0, size 0x8c, virtual false, abstract: false, final false
inline void DisableForDuration(float_t  duration) ;

static inline ::Liv::Lck::GorillaTag::GtScreenButton* New_ctor() ;

/// @brief Method OnTapEnded, addr 0x9d2bc68, size 0x48, virtual false, abstract: false, final false
inline void OnTapEnded() ;

/// @brief Method OnTapStarted, addr 0x9d2bc20, size 0x48, virtual false, abstract: false, final false
inline void OnTapStarted() ;

/// @brief Method ReEnableButton, addr 0x9d2bd3c, size 0x54, virtual false, abstract: false, final false
inline void ReEnableButton() ;

/// @brief Method Start, addr 0x9d2bbb8, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentActiveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentDefaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentDefaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__iconRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__iconRenderer() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& __cordl_internal_get__triggerProcessor() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& __cordl_internal_get__triggerProcessor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTapEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTapEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTapStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTapStarted() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__iconRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__triggerProcessor(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value) ;

constexpr void __cordl_internal_set_onTapEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onTapStarted(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9d2bd90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsActive, addr 0x9d2bbc4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method set_IsActive, addr 0x9d2bbcc, size 0x54, virtual false, abstract: false, final false
inline void set_IsActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtScreenButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtScreenButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtScreenButton(GtScreenButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtScreenButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtScreenButton(GtScreenButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29649};

/// [SerializeField]
/// @brief Field _defaultColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____defaultColor;

/// [SerializeField]
/// @brief Field _activeColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// [SerializeField]
/// @brief Field _iconRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____iconRenderer;

/// [SerializeField]
/// @brief Field _triggerProcessor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  ____triggerProcessor;

/// [Header("Events")]
/// @brief Field onTapStarted, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTapStarted;

/// @brief Field onTapEnded, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTapEnded;

/// @brief Field _currentDefaultColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentDefaultColor;

/// @brief Field _currentActiveColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentActiveColor;

/// @brief Field _isDisabled, offset: 0x80, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _isActive, offset: 0x81, size: 0x1, def value: None
 bool  ____isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____defaultColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____activeColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____iconRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____triggerProcessor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ___onTapStarted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ___onTapEnded) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____currentDefaultColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____currentActiveColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____isDisabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtScreenButton, ____isActive) == 0x81, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtScreenButton) == 0x88, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
