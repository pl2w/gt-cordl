#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateSelector_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateSelector_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.get_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::ActiveStateSelector::*)()>(&::Oculus::Interaction::ActiveStateSelector::get_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa409ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"get_ActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.set_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateSelector::set_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa409de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.add_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::System::Action*)>(&::Oculus::Interaction::ActiveStateSelector::add_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa409dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.remove_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::System::Action*)>(&::Oculus::Interaction::ActiveStateSelector::remove_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa409e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.add_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::System::Action*)>(&::Oculus::Interaction::ActiveStateSelector::add_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa409f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.remove_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::System::Action*)>(&::Oculus::Interaction::ActiveStateSelector::remove_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa409fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)()>(&::Oculus::Interaction::ActiveStateSelector::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa40a05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)()>(&::Oculus::Interaction::ActiveStateSelector::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40a0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)()>(&::Oculus::Interaction::ActiveStateSelector::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa40a0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.InjectAllActiveStateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateSelector::InjectAllActiveStateSelector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40a20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"InjectAllActiveStateSelector", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateSelector::InjectActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa40a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector::*)()>(&::Oculus::Interaction::ActiveStateSelector::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa40a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::ActiveStateSelector::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__ActiveState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__ActiveState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr void Oculus::Interaction::ActiveStateSelector::__cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveState_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__selecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selecting;
}
constexpr bool const& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get__selecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selecting;
}
constexpr void Oculus::Interaction::ActiveStateSelector::__cordl_internal_set__selecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selecting = value;
}
constexpr ::System::Action*& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get_WhenSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr ::System::Action* const& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get_WhenSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr void Oculus::Interaction::ActiveStateSelector::__cordl_internal_set_WhenSelected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelected = value;
}
constexpr ::System::Action*& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get_WhenUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr ::System::Action* const& Oculus::Interaction::ActiveStateSelector::__cordl_internal_get_WhenUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr void Oculus::Interaction::ActiveStateSelector::__cordl_internal_set_WhenUnselected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUnselected = value;
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateSelector::get_ActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"get_ActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector::set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateSelector::add_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateSelector::remove_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateSelector::add_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateSelector::remove_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateSelector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector::InjectAllActiveStateSelector(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"InjectAllActiveStateSelector", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateSelector::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateSelector* Oculus::Interaction::ActiveStateSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateSelector*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr  Oculus::Interaction::ActiveStateSelector::operator ::Oculus::Interaction::ISelector*() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* Oculus::Interaction::ActiveStateSelector::i___Oculus__Interaction__ISelector() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateSelector::ActiveStateSelector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector___c::*)()>(&::Oculus::Interaction::ActiveStateSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector___c.__ctor_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector___c::*)()>(&::Oculus::Interaction::ActiveStateSelector___c::__ctor_b__17_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40a4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {"<.ctor>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateSelector___c.__ctor_b__17_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateSelector___c::*)()>(&::Oculus::Interaction::ActiveStateSelector___c::__ctor_b__17_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {"<.ctor>b__17_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ActiveStateSelector___c::setStaticF___9(::Oculus::Interaction::ActiveStateSelector___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ActiveStateSelector___c*, "<>9", ::Oculus::Interaction::ActiveStateSelector___c*>(std::forward<::Oculus::Interaction::ActiveStateSelector___c*>(value));
}
inline ::Oculus::Interaction::ActiveStateSelector___c* Oculus::Interaction::ActiveStateSelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ActiveStateSelector___c*, "<>9", ::Oculus::Interaction::ActiveStateSelector___c*>();
}
inline void Oculus::Interaction::ActiveStateSelector___c::setStaticF___9__17_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__17_0", ::Oculus::Interaction::ActiveStateSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::ActiveStateSelector___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__17_0", ::Oculus::Interaction::ActiveStateSelector___c*>();
}
inline void Oculus::Interaction::ActiveStateSelector___c::setStaticF___9__17_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__17_1", ::Oculus::Interaction::ActiveStateSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::ActiveStateSelector___c::getStaticF___9__17_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__17_1", ::Oculus::Interaction::ActiveStateSelector___c*>();
}
inline void Oculus::Interaction::ActiveStateSelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector___c::__ctor_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {"<.ctor>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateSelector___c::__ctor_b__17_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateSelector___c*>(),
                        {"<.ctor>b__17_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateSelector___c* Oculus::Interaction::ActiveStateSelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateSelector___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateSelector___c::ActiveStateSelector___c()   {
}
