#pragma once
// IWYU pragma private; include "Oculus/Interaction/IndexPinchSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__IndexPinchSelector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__IndexPinchSelector_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa481000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSelector::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa481008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.add_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSelector::add_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa481010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.remove_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSelector::remove_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4810ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.add_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSelector::add_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa481148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.remove_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::System::Action*)>(&::Oculus::Interaction::IndexPinchSelector::remove_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4811e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa481280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4812d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa481304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa481404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::HandleHandUpdated)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa481504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.InjectAllIndexPinchSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSelector::InjectAllIndexPinchSelector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4815ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"InjectAllIndexPinchSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::IndexPinchSelector::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4815f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector::*)()>(&::Oculus::Interaction::IndexPinchSelector::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4816c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__isIndexFingerPinching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIndexFingerPinching;
}
constexpr bool const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__isIndexFingerPinching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIndexFingerPinching;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set__isIndexFingerPinching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isIndexFingerPinching = value;
}
constexpr ::System::Action*& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get_WhenSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr ::System::Action* const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get_WhenSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set_WhenSelected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelected = value;
}
constexpr ::System::Action*& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get_WhenUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr ::System::Action* const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get_WhenUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set_WhenUnselected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUnselected = value;
}
constexpr bool& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::IndexPinchSelector::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::IndexPinchSelector::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::IndexPinchSelector::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSelector::add_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSelector::remove_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSelector::add_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSelector::remove_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IndexPinchSelector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector::InjectAllIndexPinchSelector(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"InjectAllIndexPinchSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::IndexPinchSelector::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::IndexPinchSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IndexPinchSelector* Oculus::Interaction::IndexPinchSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::IndexPinchSelector*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr  Oculus::Interaction::IndexPinchSelector::operator ::Oculus::Interaction::ISelector*() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* Oculus::Interaction::IndexPinchSelector::i___Oculus__Interaction__ISelector() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::IndexPinchSelector::IndexPinchSelector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4818b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector___c.__ctor_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSelector___c::__ctor_b__20_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4818bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {"<.ctor>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IndexPinchSelector___c.__ctor_b__20_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IndexPinchSelector___c::*)()>(&::Oculus::Interaction::IndexPinchSelector___c::__ctor_b__20_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4818c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {"<.ctor>b__20_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IndexPinchSelector___c::setStaticF___9(::Oculus::Interaction::IndexPinchSelector___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::IndexPinchSelector___c*, "<>9", ::Oculus::Interaction::IndexPinchSelector___c*>(std::forward<::Oculus::Interaction::IndexPinchSelector___c*>(value));
}
inline ::Oculus::Interaction::IndexPinchSelector___c* Oculus::Interaction::IndexPinchSelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::IndexPinchSelector___c*, "<>9", ::Oculus::Interaction::IndexPinchSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSelector___c::setStaticF___9__20_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__20_0", ::Oculus::Interaction::IndexPinchSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::IndexPinchSelector___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__20_0", ::Oculus::Interaction::IndexPinchSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSelector___c::setStaticF___9__20_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__20_1", ::Oculus::Interaction::IndexPinchSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::IndexPinchSelector___c::getStaticF___9__20_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__20_1", ::Oculus::Interaction::IndexPinchSelector___c*>();
}
inline void Oculus::Interaction::IndexPinchSelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector___c::__ctor_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {"<.ctor>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::IndexPinchSelector___c::__ctor_b__20_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::IndexPinchSelector___c*>(),
                        {"<.ctor>b__20_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IndexPinchSelector___c* Oculus::Interaction::IndexPinchSelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::IndexPinchSelector___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::IndexPinchSelector___c::IndexPinchSelector___c()   {
}
