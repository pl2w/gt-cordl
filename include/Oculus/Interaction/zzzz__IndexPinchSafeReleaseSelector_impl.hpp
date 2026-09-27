#pragma once
// IWYU pragma private; include "Oculus/Interaction/IndexPinchSafeReleaseSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__IndexPinchSafeReleaseSelector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__IndexPinchSafeReleaseSelector_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4801d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4801e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.get_SelectOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::get_SelectOnRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4801e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_SelectOnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.set_SelectOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(bool)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::set_SelectOnRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4801f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_SelectOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.get_SafeReleaseThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::get_SafeReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4801f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_SafeReleaseThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.set_SafeReleaseThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(float_t)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::set_SafeReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa480200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_SafeReleaseThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa480208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.add_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::add_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa480210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.remove_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::remove_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4802ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.add_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::add_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa480348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.remove_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::remove_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4803e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa480480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4804f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::OnEnable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa48051c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa480688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa4807a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.IsIndexExtended
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::IsIndexExtended)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xa480930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::Cancel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa480d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.InjectAllIndexPinchSafeReleaseSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectAllIndexPinchSafeReleaseSelector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa480d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectAllIndexPinchSafeReleaseSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.InjectSelectOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(bool)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectSelectOnRelease)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa480df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectSelectOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa480d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa480df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__selectOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnRelease;
}
constexpr bool const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__selectOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnRelease;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__selectOnRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectOnRelease = value;
}
constexpr float_t& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__safeReleaseThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeReleaseThreshold;
}
constexpr float_t const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__safeReleaseThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeReleaseThreshold;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__safeReleaseThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeReleaseThreshold = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__wasPinching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPinching;
}
constexpr bool const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__wasPinching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPinching;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__wasPinching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasPinching = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__pendingUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingUnselect;
}
constexpr bool const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__pendingUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingUnselect;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__pendingUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingUnselect = value;
}
constexpr ::System::Action*& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get_WhenSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr ::System::Action* const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get_WhenSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set_WhenSelected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelected = value;
}
constexpr ::System::Action*& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get_WhenUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr ::System::Action* const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get_WhenUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set_WhenUnselected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUnselected = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::IndexPinchSafeReleaseSelector::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::IndexPinchSafeReleaseSelector::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::IndexPinchSafeReleaseSelector::get_SelectOnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_SelectOnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::set_SelectOnRelease(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_SelectOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::IndexPinchSafeReleaseSelector::get_SafeReleaseThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_SafeReleaseThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::set_SafeReleaseThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"set_SafeReleaseThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::IndexPinchSafeReleaseSelector::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::add_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::remove_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::add_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::remove_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::IndexPinchSafeReleaseSelector::IsIndexExtended()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectAllIndexPinchSafeReleaseSelector(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectAllIndexPinchSafeReleaseSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectSelectOnRelease(bool  selectOnRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectSelectOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectOnRelease);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector* Oculus::Interaction::IndexPinchSafeReleaseSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::IndexPinchSafeReleaseSelector*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr  Oculus::Interaction::IndexPinchSafeReleaseSelector::operator ::Oculus::Interaction::ISelector*() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* Oculus::Interaction::IndexPinchSafeReleaseSelector::i___Oculus__Interaction__ISelector() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::IndexPinchSafeReleaseSelector::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::IndexPinchSafeReleaseSelector::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::IndexPinchSafeReleaseSelector::IndexPinchSafeReleaseSelector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa480ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c.__ctor_b__35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa480ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {"<.ctor>b__35_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c.__ctor_b__35_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::__ctor_b__35_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa480ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {"<.ctor>b__35_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::setStaticF___9(::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*, "<>9", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(std::forward<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(value));
}
inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c* Oculus::Interaction::IndexPinchSafeReleaseSelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*, "<>9", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::setStaticF___9__35_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__35_0", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::IndexPinchSafeReleaseSelector___c::getStaticF___9__35_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__35_0", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::setStaticF___9__35_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__35_1", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::IndexPinchSafeReleaseSelector___c::getStaticF___9__35_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__35_1", ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::__ctor_b__35_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {"<.ctor>b__35_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSafeReleaseSelector___c::__ctor_b__35_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>(),
                        {"<.ctor>b__35_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c* Oculus::Interaction::IndexPinchSafeReleaseSelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c::IndexPinchSafeReleaseSelector___c()   {
}
