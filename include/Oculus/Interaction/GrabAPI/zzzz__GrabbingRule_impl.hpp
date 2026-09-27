#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/GrabbingRule.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRequirement_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerUnselectMode_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRequirement_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerUnselectMode_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_UnselectMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::FingerUnselectMode (::Oculus::Interaction::GrabAPI::GrabbingRule::*)()>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_UnselectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_UnselectMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_SelectsWithOptionals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::GrabbingRule::*)()>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_SelectsWithOptionals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4fe3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_SelectsWithOptionals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::FingerRequirement (::Oculus::Interaction::GrabAPI::GrabbingRule::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4fe418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::GrabbingRule::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::GrabAPI::FingerRequirement)>(&::Oculus::Interaction::GrabAPI::GrabbingRule::set_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4fe470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"set_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::FingerRequirement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.StripIrrelevant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::GrabbingRule::*)(::by_ref<::Oculus::Interaction::Input::HandFingerFlags>)>(&::Oculus::Interaction::GrabAPI::GrabbingRule::StripIrrelevant)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4fe4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"StripIrrelevant", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFingerFlags>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::GrabbingRule::*)(::Oculus::Interaction::Input::HandFingerFlags, ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::GrabbingRule::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4fe5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_DefaultPalmRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPalmRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4fe67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_DefaultPalmRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_DefaultPinchRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPinchRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4fe6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_DefaultPinchRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::GrabbingRule.get_FullGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&::Oculus::Interaction::GrabAPI::GrabbingRule::get_FullGrab)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4fe74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_FullGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::GrabAPI::GrabbingRule::setStaticF__DefaultPalmRule_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<DefaultPalmRule>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>(std::forward<::Oculus::Interaction::GrabAPI::GrabbingRule>(value));
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::getStaticF__DefaultPalmRule_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<DefaultPalmRule>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>();
}
inline void Oculus::Interaction::GrabAPI::GrabbingRule::setStaticF__DefaultPinchRule_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<DefaultPinchRule>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>(std::forward<::Oculus::Interaction::GrabAPI::GrabbingRule>(value));
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::getStaticF__DefaultPinchRule_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<DefaultPinchRule>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>();
}
inline void Oculus::Interaction::GrabAPI::GrabbingRule::setStaticF__FullGrab_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<FullGrab>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>(std::forward<::Oculus::Interaction::GrabAPI::GrabbingRule>(value));
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::getStaticF__FullGrab_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::GrabAPI::GrabbingRule, "<FullGrab>k__BackingField", ::Oculus::Interaction::GrabAPI::GrabbingRule>();
}
inline ::Oculus::Interaction::GrabAPI::FingerUnselectMode Oculus::Interaction::GrabAPI::GrabbingRule::get_UnselectMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_UnselectMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::FingerUnselectMode>(*this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::GrabbingRule::get_SelectsWithOptionals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_SelectsWithOptionals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::FingerRequirement Oculus::Interaction::GrabAPI::GrabbingRule::get_Item(::Oculus::Interaction::Input::HandFinger  fingerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::FingerRequirement>(*this, ___internal_method, fingerID);
}
inline void Oculus::Interaction::GrabAPI::GrabbingRule::set_Item(::Oculus::Interaction::Input::HandFinger  fingerID, ::Oculus::Interaction::GrabAPI::FingerRequirement  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"set_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::FingerRequirement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fingerID, value);
}
inline void Oculus::Interaction::GrabAPI::GrabbingRule::StripIrrelevant(::by_ref<::Oculus::Interaction::Input::HandFingerFlags>  fingerFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"StripIrrelevant", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFingerFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fingerFlags);
}
inline void Oculus::Interaction::GrabAPI::GrabbingRule::_ctor(::Oculus::Interaction::Input::HandFingerFlags  mask, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  otherRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mask, otherRule);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPalmRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_DefaultPalmRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPinchRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_DefaultPinchRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::GrabAPI::GrabbingRule::get_FullGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(),
                        {"get_FullGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_thumbRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_indexRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_middleRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ringRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pinkyRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unselectMode", ty: "::Oculus::Interaction::GrabAPI::FingerUnselectMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule::GrabbingRule(::Oculus::Interaction::GrabAPI::FingerRequirement  _thumbRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _indexRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _middleRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _ringRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _pinkyRequirement, ::Oculus::Interaction::GrabAPI::FingerUnselectMode  _unselectMode) noexcept  {
this->_thumbRequirement = _thumbRequirement;
this->_indexRequirement = _indexRequirement;
this->_middleRequirement = _middleRequirement;
this->_ringRequirement = _ringRequirement;
this->_pinkyRequirement = _pinkyRequirement;
this->_unselectMode = _unselectMode;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule::GrabbingRule()   {
}
