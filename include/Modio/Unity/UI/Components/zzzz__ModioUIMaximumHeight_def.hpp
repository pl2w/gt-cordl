#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIMaximumHeight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIMaximumHeight)
namespace Modio::Unity::UI::Components {
class ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIMaximumHeight;
}
namespace Modio::Unity::UI::Components {
class ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIMaximumHeight*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIMaximumHeight*, "Modio.Unity.UI.Components", "ModioUIMaximumHeight");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27*, "Modio.Unity.UI.Components", "ModioUIMaximumHeight/<SetButtonsActiveDelayed>d__27");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIMaximumHeight
class CORDL_TYPE ModioUIMaximumHeight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetButtonsActiveDelayed_d__27 = ::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27;

/// @brief Field _expandAnyway, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__expandAnyway, put=__cordl_internal_set__expandAnyway)) ::UnityW<::UnityEngine::UI::Toggle>  _expandAnyway;

/// @brief Field _graphic, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphic, put=__cordl_internal_set__graphic)) ::UnityW<::UnityEngine::UI::Graphic>  _graphic;

/// @brief Field _isRestrictingHeight, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRestrictingHeight, put=__cordl_internal_set__isRestrictingHeight)) bool  _isRestrictingHeight;

/// @brief Field _restrictHeightTo, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__restrictHeightTo, put=__cordl_internal_set__restrictHeightTo)) float_t  _restrictHeightTo;

/// @brief Field _showWhenRestrictingHeight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__showWhenRestrictingHeight, put=__cordl_internal_set__showWhenRestrictingHeight)) ::UnityW<::UnityEngine::GameObject>  _showWhenRestrictingHeight;

 __declspec(property(get=get_flexibleHeight)) float_t  flexibleHeight;

 __declspec(property(get=get_flexibleWidth)) float_t  flexibleWidth;

 __declspec(property(get=get_layoutPriority)) int32_t  layoutPriority;

 __declspec(property(get=get_minHeight)) float_t  minHeight;

 __declspec(property(get=get_minWidth)) float_t  minWidth;

 __declspec(property(get=get_preferredHeight)) float_t  preferredHeight;

 __declspec(property(get=get_preferredWidth)) float_t  preferredWidth;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr operator  ::UnityEngine::UI::ILayoutElement*() noexcept;

/// @brief Method Awake, addr 0x9fb9e40, size 0x1b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateLayoutInputHorizontal, addr 0x9fba204, size 0x4, virtual true, abstract: false, final true
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0x9fba208, size 0x8, virtual true, abstract: false, final true
inline void CalculateLayoutInputVertical() ;

/// @brief Method GraphicLayoutDirty, addr 0x9fba370, size 0x8, virtual false, abstract: false, final false
inline void GraphicLayoutDirty() ;

static inline ::Modio::Unity::UI::Components::ModioUIMaximumHeight* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fb9ff0, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x9fba0c0, size 0x88, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnExpandAnywayChanged, addr 0x9fba148, size 0x4, virtual false, abstract: false, final false
inline void OnExpandAnywayChanged(bool  isExpanded) ;

/// @brief Method RecalculateRestrictingHeight, addr 0x9fba210, size 0x160, virtual false, abstract: false, final false
inline void RecalculateRestrictingHeight(bool  delayButtonActivation) ;

/// @brief Method SetButtonsActive, addr 0x9fba3f8, size 0xe0, virtual false, abstract: false, final false
inline void SetButtonsActive(bool  shouldBeVisible) ;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Components.ModioUIMaximumHeight::<SetButtonsActiveDelayed>d__27))]
/// @brief Method SetButtonsActiveDelayed, addr 0x9fba378, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SetButtonsActiveDelayed(bool  shouldBeVisible) ;

/// @brief Method SetDirty, addr 0x9fba14c, size 0xb8, virtual false, abstract: false, final false
inline void SetDirty() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__expandAnyway() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__expandAnyway() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__graphic() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__graphic() ;

constexpr bool const& __cordl_internal_get__isRestrictingHeight() const;

constexpr bool& __cordl_internal_get__isRestrictingHeight() ;

constexpr float_t const& __cordl_internal_get__restrictHeightTo() const;

constexpr float_t& __cordl_internal_get__restrictHeightTo() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showWhenRestrictingHeight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showWhenRestrictingHeight() ;

constexpr void __cordl_internal_set__expandAnyway(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__graphic(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set__isRestrictingHeight(bool  value) ;

constexpr void __cordl_internal_set__restrictHeightTo(float_t  value) ;

constexpr void __cordl_internal_set__showWhenRestrictingHeight(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fba500, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_flexibleHeight, addr 0x9fb9e30, size 0x8, virtual true, abstract: false, final true
inline float_t get_flexibleHeight() ;

/// @brief Method get_flexibleWidth, addr 0x9fb9e08, size 0x8, virtual true, abstract: false, final true
inline float_t get_flexibleWidth() ;

/// @brief Method get_layoutPriority, addr 0x9fb9e38, size 0x8, virtual true, abstract: false, final true
inline int32_t get_layoutPriority() ;

/// @brief Method get_minHeight, addr 0x9fb9e10, size 0x8, virtual true, abstract: false, final true
inline float_t get_minHeight() ;

/// @brief Method get_minWidth, addr 0x9fb9df8, size 0x8, virtual true, abstract: false, final true
inline float_t get_minWidth() ;

/// @brief Method get_preferredHeight, addr 0x9fb9e18, size 0x18, virtual true, abstract: false, final true
inline float_t get_preferredHeight() ;

/// @brief Method get_preferredWidth, addr 0x9fb9e00, size 0x8, virtual true, abstract: false, final true
inline float_t get_preferredWidth() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIMaximumHeight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMaximumHeight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIMaximumHeight(ModioUIMaximumHeight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMaximumHeight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIMaximumHeight(ModioUIMaximumHeight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27147};

/// [SerializeField]
/// @brief Field _restrictHeightTo, offset: 0x20, size: 0x4, def value: None
 float_t  ____restrictHeightTo;

/// [SerializeField]
/// @brief Field _expandAnyway, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____expandAnyway;

/// [SerializeField]
/// @brief Field _showWhenRestrictingHeight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showWhenRestrictingHeight;

/// @brief Field _isRestrictingHeight, offset: 0x38, size: 0x1, def value: None
 bool  ____isRestrictingHeight;

/// @brief Field _graphic, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ____graphic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight, ____restrictHeightTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight, ____expandAnyway) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight, ____showWhenRestrictingHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight, ____isRestrictingHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight, ____graphic) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIMaximumHeight) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIMaximumHeight/<SetButtonsActiveDelayed>d__27
class CORDL_TYPE ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMaximumHeight>  __4__this;

/// @brief Field shouldBeVisible, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldBeVisible, put=__cordl_internal_set_shouldBeVisible)) bool  shouldBeVisible;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fba514, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fba5c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fba5c8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fba600, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fba510, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMaximumHeight> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMaximumHeight>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_shouldBeVisible() const;

constexpr bool& __cordl_internal_get_shouldBeVisible() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Components::ModioUIMaximumHeight>  value) ;

constexpr void __cordl_internal_set_shouldBeVisible(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fba4d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27(ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27(ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27146};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMaximumHeight>  _____4__this;

/// @brief Field shouldBeVisible, offset: 0x28, size: 0x1, def value: None
 bool  ___shouldBeVisible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27, ___shouldBeVisible) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIMaximumHeight__SetButtonsActiveDelayed_d__27) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
