#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIScrollViewControllerInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ModioUIScrollViewControllerInput)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class ScrollRect;
}
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIScrollViewControllerInput;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*, "Modio.Unity.UI.Input", "ModioUIScrollViewControllerInput");
// Dependencies UnityEngine.UI.Selectable
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIScrollViewControllerInput
class CORDL_TYPE ModioUIScrollViewControllerInput : public ::UnityEngine::UI::Selectable {
public:
// Declarations
/// @brief Field _cachedPointerEventData, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedPointerEventData, put=__cordl_internal_set__cachedPointerEventData)) ::UnityEngine::EventSystems::PointerEventData*  _cachedPointerEventData;

/// @brief Field _inputSpeed, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputSpeed, put=__cordl_internal_set__inputSpeed)) float_t  _inputSpeed;

/// @brief Field _resetPositionOnEnable, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetPositionOnEnable, put=__cordl_internal_set__resetPositionOnEnable)) bool  _resetPositionOnEnable;

/// @brief Field _scrollRect, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollRect, put=__cordl_internal_set__scrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect>  _scrollRect;

/// @brief Method Awake, addr 0x9fb6994, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput* New_ctor() ;

/// @brief Method OnEnable, addr 0x9fb69f8, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x9fb6a34, size 0xb4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get__cachedPointerEventData() const;

constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get__cachedPointerEventData() ;

constexpr float_t const& __cordl_internal_get__inputSpeed() const;

constexpr float_t& __cordl_internal_get__inputSpeed() ;

constexpr bool const& __cordl_internal_get__resetPositionOnEnable() const;

constexpr bool& __cordl_internal_get__resetPositionOnEnable() ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get__scrollRect() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get__scrollRect() ;

constexpr void __cordl_internal_set__cachedPointerEventData(::UnityEngine::EventSystems::PointerEventData*  value) ;

constexpr void __cordl_internal_set__inputSpeed(float_t  value) ;

constexpr void __cordl_internal_set__resetPositionOnEnable(bool  value) ;

constexpr void __cordl_internal_set__scrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

/// @brief Method .ctor, addr 0x9fb6ae8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIScrollViewControllerInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIScrollViewControllerInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIScrollViewControllerInput(ModioUIScrollViewControllerInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIScrollViewControllerInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIScrollViewControllerInput(ModioUIScrollViewControllerInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27132};

/// @brief Field _scrollRect, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ____scrollRect;

/// @brief Field _cachedPointerEventData, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::EventSystems::PointerEventData*  ____cachedPointerEventData;

/// [SerializeField]
/// @brief Field _inputSpeed, offset: 0x110, size: 0x4, def value: None
 float_t  ____inputSpeed;

/// [SerializeField]
/// @brief Field _resetPositionOnEnable, offset: 0x114, size: 0x1, def value: None
 bool  ____resetPositionOnEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput, ____scrollRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput, ____cachedPointerEventData) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput, ____inputSpeed) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput, ____resetPositionOnEnable) == 0x114, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput) == 0x118, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
