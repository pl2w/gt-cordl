#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckToggle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckToggle_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButtonColors_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.get_IsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::get_IsDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d51de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"get_IsDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.set_IsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(bool)>(&::Liv::Lck::UI::LckToggle::set_IsDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d51dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"set_IsDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d51df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d51edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(bool)>(&::Liv::Lck::UI::LckToggle::OnToggleValueChanged)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d520c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggle::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d52800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggle::OnPointerDown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d52988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggle::OnPointerUp)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9d52a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggle::OnPointerExit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d52c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckToggle::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d52d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckToggle::OnTriggerExit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d52fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.IsValidTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::Vector3)>(&::Liv::Lck::UI::LckToggle::IsValidTap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9d52e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(bool)>(&::Liv::Lck::UI::LckToggle::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d53058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(bool)>(&::Liv::Lck::UI::LckToggle::SetDisabledState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d4d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.RestoreToggleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::RestoreToggleState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d4d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreToggleState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetToggleVisualsOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::SetToggleVisualsOff)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d5314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetToggleVisualsOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetToggleVisualsOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::SetToggleVisualsOn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d4d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetToggleVisualsOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetCustomColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::Liv::Lck::UI::LckButtonColors*, ::Liv::Lck::UI::LckButtonColors*)>(&::Liv::Lck::UI::LckToggle::SetCustomColors)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4dac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetCustomColors", {}, {::i2c::type_of<::Liv::Lck::UI::LckButtonColors*>(), ::i2c::type_of<::Liv::Lck::UI::LckButtonColors*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.RestoreDefaultColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::RestoreDefaultColors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d4d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreDefaultColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetCustomIcons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::Sprite*, ::UnityEngine::Sprite*)>(&::Liv::Lck::UI::LckToggle::SetCustomIcons)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetCustomIcons", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.RestoreDefaultIcons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::RestoreDefaultIcons)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d4d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreDefaultIcons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.ValidateColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::ValidateColors)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x9d523ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.ValidateIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::ValidateIcon)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x9d52180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateIcon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.ValidateMeshColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::ValidateMeshColors)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9d51f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateMeshColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::OnValidate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d53190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle.SetMeshColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)(::UnityEngine::Color)>(&::Liv::Lck::UI::LckToggle::SetMeshColor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9d528c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetMeshColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggle::*)()>(&::Liv::Lck::UI::LckToggle::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d53290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::UI::LckToggle::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::UI::LckToggle::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Liv::Lck::UI::LckToggle::__cordl_internal_get__icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____icon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Liv::Lck::UI::LckToggle::__cordl_internal_get__iconOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconOn;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__iconOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconOn;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__iconOn(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconOn = value;
}
constexpr ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*& Liv::Lck::UI::LckToggle::__cordl_internal_get__defaultIcons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultIcons;
}
constexpr ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* const& Liv::Lck::UI::LckToggle::__cordl_internal_get__defaultIcons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultIcons;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__defaultIcons(::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultIcons = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::UI::LckToggle::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::UI::LckToggle::__cordl_internal_get__colorsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorsOn;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__colorsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorsOn;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__colorsOn(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorsOn = value;
}
constexpr ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*& Liv::Lck::UI::LckToggle::__cordl_internal_get__defaultColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColors;
}
constexpr ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>* const& Liv::Lck::UI::LckToggle::__cordl_internal_get__defaultColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColors;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__defaultColors(::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultColors = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::UI::LckToggle::__cordl_internal_get__togglePressedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____togglePressedPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::UI::LckToggle::__cordl_internal_get__togglePressedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____togglePressedPosition;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__togglePressedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____togglePressedPosition = value;
}
constexpr bool& Liv::Lck::UI::LckToggle::__cordl_internal_get__stayPressedDownWhenToggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayPressedDownWhenToggled;
}
constexpr bool const& Liv::Lck::UI::LckToggle::__cordl_internal_get__stayPressedDownWhenToggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayPressedDownWhenToggled;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__stayPressedDownWhenToggled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stayPressedDownWhenToggled = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Liv::Lck::UI::LckToggle::__cordl_internal_get__labelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__labelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelText;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labelText = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Liv::Lck::UI::LckToggle::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::UI::LckToggle::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Liv::Lck::UI::LckToggle::__cordl_internal_get__iconImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__iconImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::UI::LckToggle::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::UI::LckToggle::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr bool& Liv::Lck::UI::LckToggle::__cordl_internal_get__collided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collided;
}
constexpr bool const& Liv::Lck::UI::LckToggle::__cordl_internal_get__collided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collided;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__collided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collided = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::UI::LckToggle::__cordl_internal_get__clickedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::UI::LckToggle::__cordl_internal_get__clickedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickedObject = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Liv::Lck::UI::LckToggle::__cordl_internal_get__propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Liv::Lck::UI::LckToggle::__cordl_internal_get__propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyBlock = value;
}
constexpr int32_t& Liv::Lck::UI::LckToggle::__cordl_internal_get__colorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorId;
}
constexpr int32_t const& Liv::Lck::UI::LckToggle::__cordl_internal_get__colorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorId;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__colorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorId = value;
}
constexpr bool& Liv::Lck::UI::LckToggle::__cordl_internal_get__IsDisabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisabled_k__BackingField;
}
constexpr bool const& Liv::Lck::UI::LckToggle::__cordl_internal_get__IsDisabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisabled_k__BackingField;
}
constexpr void Liv::Lck::UI::LckToggle::__cordl_internal_set__IsDisabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDisabled_k__BackingField = value;
}
inline bool Liv::Lck::UI::LckToggle::get_IsDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"get_IsDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::set_IsDisabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"set_IsDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::UI::LckToggle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::OnToggleValueChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::UI::LckToggle::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggle::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggle::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggle::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggle::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::UI::LckToggle::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Liv::Lck::UI::LckToggle::IsValidTap(::UnityEngine::Vector3  tapPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapPosition);
}
inline void Liv::Lck::UI::LckToggle::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void Liv::Lck::UI::LckToggle::SetDisabledState(bool  usePressedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usePressedPosition);
}
inline void Liv::Lck::UI::LckToggle::RestoreToggleState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreToggleState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::SetToggleVisualsOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetToggleVisualsOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::SetToggleVisualsOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetToggleVisualsOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::SetCustomColors(::Liv::Lck::UI::LckButtonColors*  colors, ::Liv::Lck::UI::LckButtonColors*  colorsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetCustomColors", {}, {::i2c::type_of<::Liv::Lck::UI::LckButtonColors*>(), ::i2c::type_of<::Liv::Lck::UI::LckButtonColors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, colorsOn);
}
inline void Liv::Lck::UI::LckToggle::RestoreDefaultColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreDefaultColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::SetCustomIcons(::UnityEngine::Sprite*  icon, ::UnityEngine::Sprite*  iconOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetCustomIcons", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, icon, iconOn);
}
inline void Liv::Lck::UI::LckToggle::RestoreDefaultIcons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"RestoreDefaultIcons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::ValidateColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::ValidateIcon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateIcon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::ValidateMeshColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"ValidateMeshColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckToggle::SetMeshColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {"SetMeshColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Liv::Lck::UI::LckToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckToggle* Liv::Lck::UI::LckToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckToggle*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Liv::Lck::UI::LckToggle::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Liv::Lck::UI::LckToggle::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Liv::Lck::UI::LckToggle::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Liv::Lck::UI::LckToggle::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Liv::Lck::UI::LckToggle::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Liv::Lck::UI::LckToggle::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Liv::Lck::UI::LckToggle::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Liv::Lck::UI::LckToggle::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Liv::Lck::UI::LckToggle::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Liv::Lck::UI::LckToggle::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckToggle::LckToggle()   {
}
