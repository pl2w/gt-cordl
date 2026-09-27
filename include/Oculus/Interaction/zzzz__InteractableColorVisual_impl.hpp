#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableColorVisual.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableColorVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractableView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableColorVisual_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.get_InteractableView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractableView* (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::get_InteractableView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47000c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"get_InteractableView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.set_InteractableView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::InteractableColorVisual::set_InteractableView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa470014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"set_InteractableView", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47001c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa470074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4700c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4701dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Oculus::Interaction::InteractableColorVisual::UpdateVisualState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4702dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::UpdateVisual)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4702e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.ColorForState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractableColorVisual_ColorState* (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableState)>(&::Oculus::Interaction::InteractableColorVisual::ColorForState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa47042c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"ColorForState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.ChangeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableColorVisual_ColorState*)>(&::Oculus::Interaction::InteractableColorVisual::ChangeColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4704b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"ChangeColor", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::InteractableColorVisual::SetColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa470568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.CancelRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::CancelRoutine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa470474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"CancelRoutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectAllInteractableColorVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::IInteractableView*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::InteractableColorVisual::InjectAllInteractableColorVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4705d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectAllInteractableColorVisual", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectInteractableView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::InteractableColorVisual::InjectInteractableView)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4705fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectInteractableView", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::InteractableColorVisual::InjectMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4706cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectOptionalColorShaderPropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::StringW)>(&::Oculus::Interaction::InteractableColorVisual::InjectOptionalColorShaderPropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4706d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalColorShaderPropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectOptionalNormalColorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableColorVisual_ColorState*)>(&::Oculus::Interaction::InteractableColorVisual::InjectOptionalNormalColorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4706dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalNormalColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectOptionalHoverColorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableColorVisual_ColorState*)>(&::Oculus::Interaction::InteractableColorVisual::InjectOptionalHoverColorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4706e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalHoverColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual.InjectOptionalSelectColorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)(::Oculus::Interaction::InteractableColorVisual_ColorState*)>(&::Oculus::Interaction::InteractableColorVisual::InjectOptionalSelectColorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4706ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalSelectColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual::*)()>(&::Oculus::Interaction::InteractableColorVisual::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa4706f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__interactableView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableView;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__interactableView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableView;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactableView = value;
}
constexpr ::Oculus::Interaction::IInteractableView*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__InteractableView_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InteractableView_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractableView* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__InteractableView_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InteractableView_k__BackingField;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__InteractableView_k__BackingField(::Oculus::Interaction::IInteractableView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InteractableView_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__editor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__editor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editor;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__editor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____editor = value;
}
constexpr ::StringW& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__colorShaderPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorShaderPropertyName;
}
constexpr ::StringW const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__colorShaderPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorShaderPropertyName;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__colorShaderPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorShaderPropertyName = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__normalColorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColorState;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__normalColorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColorState;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__normalColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColorState = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__hoverColorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColorState;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__hoverColorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColorState;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__hoverColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverColorState = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__selectColorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColorState;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__selectColorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColorState;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__selectColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectColorState = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__disabledColorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColorState;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__disabledColorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColorState;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__disabledColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledColorState = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__currentColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__currentColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__currentColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentColor = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__target(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr int32_t& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__colorShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorShaderID;
}
constexpr int32_t const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__colorShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorShaderID;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__colorShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorShaderID = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__routine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__routine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routine;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__routine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____routine = value;
}
constexpr bool& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::InteractableColorVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::InteractableColorVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::InteractableColorVisual::setStaticF__waiter(::UnityEngine::YieldInstruction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::YieldInstruction*, "_waiter", ::Oculus::Interaction::InteractableColorVisual*>(std::forward<::UnityEngine::YieldInstruction*>(value));
}
inline ::UnityEngine::YieldInstruction* Oculus::Interaction::InteractableColorVisual::getStaticF__waiter()  {
return ::cordl_internals::getStaticField<::UnityEngine::YieldInstruction*, "_waiter", ::Oculus::Interaction::InteractableColorVisual*>();
}
inline ::Oculus::Interaction::IInteractableView* Oculus::Interaction::InteractableColorVisual::get_InteractableView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"get_InteractableView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractableView*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::set_InteractableView(::Oculus::Interaction::IInteractableView*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"set_InteractableView", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableColorVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::UpdateVisualState(::Oculus::Interaction::InteractableStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::InteractableColorVisual::UpdateVisual()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableColorVisual_ColorState* Oculus::Interaction::InteractableColorVisual::ColorForState(::Oculus::Interaction::InteractableState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"ColorForState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableColorVisual_ColorState*>(this, ___internal_method, state);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::InteractableColorVisual::ChangeColor(::Oculus::Interaction::InteractableColorVisual_ColorState*  targetState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"ChangeColor", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, targetState);
}
inline void Oculus::Interaction::InteractableColorVisual::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Oculus::Interaction::InteractableColorVisual::CancelRoutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"CancelRoutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectAllInteractableColorVisual(::Oculus::Interaction::IInteractableView*  interactableView, ::Oculus::Interaction::MaterialPropertyBlockEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectAllInteractableColorVisual", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactableView, editor);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectInteractableView(::Oculus::Interaction::IInteractableView*  interactableview)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectInteractableView", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactableview);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editor);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectOptionalColorShaderPropertyName(::StringW  colorShaderPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalColorShaderPropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorShaderPropertyName);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectOptionalNormalColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  normalColorState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalNormalColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalColorState);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectOptionalHoverColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  hoverColorState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalHoverColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoverColorState);
}
inline void Oculus::Interaction::InteractableColorVisual::InjectOptionalSelectColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  selectColorState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {"InjectOptionalSelectColorState", {}, {::i2c::type_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectColorState);
}
inline void Oculus::Interaction::InteractableColorVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableColorVisual* Oculus::Interaction::InteractableColorVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableColorVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableColorVisual::InteractableColorVisual()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)(int32_t)>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa470540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)()>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4708fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)()>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa470900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)()>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa470a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)()>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa470a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::*)()>(&::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa470aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::InteractableColorVisual>& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::InteractableColorVisual> const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::InteractableColorVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get_targetState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetState;
}
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get_targetState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetState;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set_targetState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetState = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get__startColor_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__2;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get__startColor_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__2;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set__startColor_5__2(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startColor_5__2 = value;
}
constexpr float_t& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get__timer_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__3;
}
constexpr float_t const& Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_get__timer_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__3;
}
constexpr void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::__cordl_internal_set__timer_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timer_5__3 = value;
}
inline void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25::InteractableColorVisual__ChangeColor_d__25()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractableColorVisual_ColorState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableColorVisual_ColorState::*)()>(&::Oculus::Interaction::InteractableColorVisual_ColorState::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa47082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr void Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_set_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Color = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_ColorCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_ColorCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorCurve;
}
constexpr void Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_set_ColorCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColorCurve = value;
}
constexpr float_t& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_ColorTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorTime;
}
constexpr float_t const& Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_get_ColorTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorTime;
}
constexpr void Oculus::Interaction::InteractableColorVisual_ColorState::__cordl_internal_set_ColorTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColorTime = value;
}
inline void Oculus::Interaction::InteractableColorVisual_ColorState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableColorVisual_ColorState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableColorVisual_ColorState* Oculus::Interaction::InteractableColorVisual_ColorState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableColorVisual_ColorState*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState::InteractableColorVisual_ColorState()   {
}
