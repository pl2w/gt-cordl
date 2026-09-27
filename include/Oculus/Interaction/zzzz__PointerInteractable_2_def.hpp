#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerInteractable_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointerInteractable_2)
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class PointerInteractable_2___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class PointerInteractable_2;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class PointerInteractable_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PointerInteractable_2);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PointerInteractable_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PointerInteractable_2, "Oculus.Interaction", "PointerInteractable`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PointerInteractable_2___c, "Oculus.Interaction", "PointerInteractable`2/<>c");
// Dependencies Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.PointerInteractable`2<TInteractor,TInteractable>
class CORDL_TYPE PointerInteractable_2 : public ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable> {
public:
// Declarations
using __c = ::Oculus::Interaction::PointerInteractable_2___c<TInteractor, TInteractable>;

 __declspec(property(get=get_PointableElement, put=set_PointableElement)) ::Oculus::Interaction::IPointableElement*  PointableElement;

/// @brief Field WhenPointerEventRaised, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPointerEventRaised, put=__cordl_internal_set_WhenPointerEventRaised)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  WhenPointerEventRaised;

/// @brief Field <PointableElement>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PointableElement_k__BackingField, put=__cordl_internal_set__PointableElement_k__BackingField)) ::Oculus::Interaction::IPointableElement*  _PointableElement_k__BackingField;

/// @brief Field _pointableElement, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointableElement, put=__cordl_internal_set__pointableElement)) ::UnityW<::UnityEngine::Object>  _pointableElement;

/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectOptionalPointableElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalPointableElement(::Oculus::Interaction::IPointableElement*  pointableElement) ;

static inline ::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method PublishPointerEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PublishPointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Start_b__10_0() ;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get_WhenPointerEventRaised() const;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get_WhenPointerEventRaised() ;

constexpr ::Oculus::Interaction::IPointableElement* const& __cordl_internal_get__PointableElement_k__BackingField() const;

constexpr ::Oculus::Interaction::IPointableElement*& __cordl_internal_get__PointableElement_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointableElement() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointableElement() ;

constexpr void __cordl_internal_set_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__PointableElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value) ;

constexpr void __cordl_internal_set__pointableElement(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPointerEventRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_PointableElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPointableElement* get_PointableElement() ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenPointerEventRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PointableElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_PointableElement(::Oculus::Interaction::IPointableElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerInteractable_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractable_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerInteractable_2(PointerInteractable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractable_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerInteractable_2(PointerInteractable_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15911};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointableElement), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _pointableElement, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointableElement;

/// [CompilerGenerated]
/// @brief Field <PointableElement>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableElement*  ____PointableElement_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenPointerEventRaised, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::PointerEvent>*  ___WhenPointerEventRaised;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.PointerInteractable`2/<>c<TInteractor,TInteractable>
class CORDL_TYPE PointerInteractable_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  __9__12_0;

static inline ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method <.ctor>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_0(::Oculus::Interaction::PointerEvent  _p0_) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::PointerEvent>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*  value) ;

static inline void setStaticF___9__12_0(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerInteractable_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractable_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerInteractable_2___c(PointerInteractable_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractable_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerInteractable_2___c(PointerInteractable_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15910};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
