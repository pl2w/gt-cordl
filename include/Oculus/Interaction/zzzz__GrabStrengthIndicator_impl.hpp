#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabStrengthIndicator.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__GrabStrengthIndicator_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_HandGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor* (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_HandGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_HandGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_HandGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::GrabStrengthIndicator::set_HandGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_HandGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_Interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::GrabStrengthIndicator::set_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_Interactor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_GlowLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_GlowLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_GlowLerpSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_GlowLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(float_t)>(&::Oculus::Interaction::GrabStrengthIndicator::set_GlowLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_GlowLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_GlowColorLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_GlowColorLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_GlowColorLerpSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_GlowColorLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(float_t)>(&::Oculus::Interaction::GrabStrengthIndicator::set_GlowColorLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_GlowColorLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_FingerGlowColorWithInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithInteractable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorWithInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_FingerGlowColorWithInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&::Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithInteractable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorWithInteractable", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_FingerGlowColorWithNoInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithNoInteractable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorWithNoInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_FingerGlowColorWithNoInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&::Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithNoInteractable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorWithNoInteractable", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.get_FingerGlowColorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorHover)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.set_FingerGlowColorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::UnityEngine::Color)>(&::Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorHover)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4031dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorHover", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4031e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa403278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa40329c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa40339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::UpdateVisual)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0xa40349c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.UpdateGlowValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(int32_t, float_t)>(&::Oculus::Interaction::GrabStrengthIndicator::UpdateGlowValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa403de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"UpdateGlowValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.InjectAllGrabStrengthIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::GrabStrengthIndicator::InjectAllGrabStrengthIndicator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa403ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectAllGrabStrengthIndicator", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.InjectHandGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::GrabStrengthIndicator::InjectHandGrab)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa403ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectHandGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator.InjectHandMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::GrabStrengthIndicator::InjectHandMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa403ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectHandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabStrengthIndicator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabStrengthIndicator::*)()>(&::Oculus::Interaction::GrabStrengthIndicator::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa403ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractor = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__HandGrab_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrab_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__HandGrab_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrab_k__BackingField;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__HandGrab_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrab_k__BackingField = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__Interactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__Interactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Interactor_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handMaterialPropertyBlockEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handMaterialPropertyBlockEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handMaterialPropertyBlockEditor = value;
}
constexpr float_t& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__glowLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowLerpSpeed;
}
constexpr float_t const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__glowLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowLerpSpeed;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__glowLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowLerpSpeed = value;
}
constexpr float_t& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__glowColorLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorLerpSpeed;
}
constexpr float_t const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__glowColorLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowColorLerpSpeed;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__glowColorLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowColorLerpSpeed = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorWithInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorWithInteractable;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorWithInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorWithInteractable;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__fingerGlowColorWithInteractable(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColorWithInteractable = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorWithNoInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorWithNoInteractable;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorWithNoInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorWithNoInteractable;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__fingerGlowColorWithNoInteractable(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColorWithNoInteractable = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorHover;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorHover;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__fingerGlowColorHover(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColorHover = value;
}
constexpr ::ArrayW<int32_t>& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handShaderGlowPropertyIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handShaderGlowPropertyIds;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__handShaderGlowPropertyIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handShaderGlowPropertyIds;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__handShaderGlowPropertyIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handShaderGlowPropertyIds = value;
}
constexpr int32_t& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorPropertyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorPropertyId;
}
constexpr int32_t const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__fingerGlowColorPropertyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorPropertyId;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__fingerGlowColorPropertyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColorPropertyId = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__currentGlowColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGlowColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__currentGlowColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGlowColor;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__currentGlowColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGlowColor = value;
}
constexpr bool& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::GrabStrengthIndicator::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* Oculus::Interaction::GrabStrengthIndicator::get_HandGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_HandGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_HandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_HandGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::GrabStrengthIndicator::get_Interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_Interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_Interactor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabStrengthIndicator::get_GlowLerpSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_GlowLerpSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_GlowLerpSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_GlowLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabStrengthIndicator::get_GlowColorLerpSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_GlowColorLerpSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_GlowColorLerpSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_GlowColorLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorWithInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithInteractable(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorWithInteractable", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorWithNoInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorWithNoInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorWithNoInteractable(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorWithNoInteractable", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::GrabStrengthIndicator::get_FingerGlowColorHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"get_FingerGlowColorHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::set_FingerGlowColorHover(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"set_FingerGlowColorHover", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabStrengthIndicator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabStrengthIndicator::UpdateGlowValue(int32_t  fingerIndex, float_t  glowValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"UpdateGlowValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIndex, glowValue);
}
inline void Oculus::Interaction::GrabStrengthIndicator::InjectAllGrabStrengthIndicator(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectAllGrabStrengthIndicator", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor, handMaterialPropertyBlockEditor);
}
inline void Oculus::Interaction::GrabStrengthIndicator::InjectHandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectHandGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrab);
}
inline void Oculus::Interaction::GrabStrengthIndicator::InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {"InjectHandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handMaterialPropertyBlockEditor);
}
inline void Oculus::Interaction::GrabStrengthIndicator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabStrengthIndicator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabStrengthIndicator* Oculus::Interaction::GrabStrengthIndicator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabStrengthIndicator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabStrengthIndicator::GrabStrengthIndicator()   {
}
