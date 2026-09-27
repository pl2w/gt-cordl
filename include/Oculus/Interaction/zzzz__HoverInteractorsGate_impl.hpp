#pragma once
// IWYU pragma private; include "Oculus/Interaction/HoverInteractorsGate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HoverInteractorsGate_def.hpp"
#include "Oculus/Interaction/zzzz__HoverInteractorsGate_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)()>(&::Oculus::Interaction::HoverInteractorsGate::Awake)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa4138c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)()>(&::Oculus::Interaction::HoverInteractorsGate::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa413bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)()>(&::Oculus::Interaction::HoverInteractorsGate::OnEnable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa413c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)()>(&::Oculus::Interaction::HoverInteractorsGate::OnDisable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa413f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.HandleInteractorAStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::HoverInteractorsGate::HandleInteractorAStateChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4142bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"HandleInteractorAStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.HandleInteractorBStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::HoverInteractorsGate::HandleInteractorBStateChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa41431c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"HandleInteractorBStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.ProcessInteractorsStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::Oculus::Interaction::InteractorStateChangeArgs, ::by_ref<int32_t>, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::HoverInteractorsGate::ProcessInteractorsStateChange)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4142c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"ProcessInteractorsStateChange", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.EnableAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*, bool)>(&::Oculus::Interaction::HoverInteractorsGate::EnableAll)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa414328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"EnableAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.InjectAllHoverInteractorsGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::HoverInteractorsGate::InjectAllHoverInteractorsGate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4144a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectAllHoverInteractorsGate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.InjectInteractorsA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::HoverInteractorsGate::InjectInteractorsA)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4144c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectInteractorsA", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate.InjectInteractorsB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::HoverInteractorsGate::InjectInteractorsB)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4145ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectInteractorsB", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate::*)()>(&::Oculus::Interaction::HoverInteractorsGate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa414710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__interactorsA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorsA;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__interactorsA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorsA;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set__interactorsA(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorsA = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get_InteractorsA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorsA;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>* const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get_InteractorsA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorsA;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set_InteractorsA(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractorsA = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__interactorsB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorsB;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__interactorsB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorsB;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set__interactorsB(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorsB = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get_InteractorsB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorsB;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>* const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get_InteractorsB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorsB;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set_InteractorsB(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractorsB = value;
}
constexpr int32_t& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__hoveringInteractorsACount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringInteractorsACount;
}
constexpr int32_t const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__hoveringInteractorsACount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringInteractorsACount;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set__hoveringInteractorsACount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoveringInteractorsACount = value;
}
constexpr int32_t& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__hoveringInteractorsBCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringInteractorsBCount;
}
constexpr int32_t const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__hoveringInteractorsBCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringInteractorsBCount;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set__hoveringInteractorsBCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoveringInteractorsBCount = value;
}
constexpr bool& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HoverInteractorsGate::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HoverInteractorsGate::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HoverInteractorsGate::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HoverInteractorsGate::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HoverInteractorsGate::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HoverInteractorsGate::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HoverInteractorsGate::HandleInteractorAStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"HandleInteractorAStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline void Oculus::Interaction::HoverInteractorsGate::HandleInteractorBStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"HandleInteractorBStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline void Oculus::Interaction::HoverInteractorsGate::ProcessInteractorsStateChange(::Oculus::Interaction::InteractorStateChangeArgs  stateChange, ::by_ref<int32_t>  hoveringCounter, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  oppositeInteractors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"ProcessInteractorsStateChange", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange, hoveringCounter, oppositeInteractors);
}
inline void Oculus::Interaction::HoverInteractorsGate::EnableAll(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"EnableAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors, enable);
}
inline void Oculus::Interaction::HoverInteractorsGate::InjectAllHoverInteractorsGate(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactorsA, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactorsB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectAllHoverInteractorsGate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorsA, interactorsB);
}
inline void Oculus::Interaction::HoverInteractorsGate::InjectInteractorsA(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectInteractorsA", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::HoverInteractorsGate::InjectInteractorsB(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {"InjectInteractorsB", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::HoverInteractorsGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HoverInteractorsGate* Oculus::Interaction::HoverInteractorsGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HoverInteractorsGate*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HoverInteractorsGate::HoverInteractorsGate()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HoverInteractorsGate___c::*)()>(&::Oculus::Interaction::HoverInteractorsGate___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa414780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._Awake_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HoverInteractorsGate___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa414788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._Awake_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::HoverInteractorsGate___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4147e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._Awake_b__7_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HoverInteractorsGate___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa41482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_2", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._Awake_b__7_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::HoverInteractorsGate___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa414888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_3", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._InjectInteractorsA_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::HoverInteractorsGate___c::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_InjectInteractorsA_b__16_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4148d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<InjectInteractorsA>b__16_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HoverInteractorsGate___c._InjectInteractorsB_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::HoverInteractorsGate___c::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::HoverInteractorsGate___c::_InjectInteractorsB_b__17_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa414948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<InjectInteractorsB>b__17_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9(::Oculus::Interaction::HoverInteractorsGate___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::HoverInteractorsGate___c*, "<>9", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::Oculus::Interaction::HoverInteractorsGate___c*>(value));
}
inline ::Oculus::Interaction::HoverInteractorsGate___c* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::HoverInteractorsGate___c*, "<>9", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__7_0(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__7_0", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__7_0", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__7_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__7_1", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__7_1", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__7_2(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__7_2", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__7_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__7_2", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__7_3(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__7_3", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__7_3()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__7_3", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__16_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__16_0", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__16_0", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::setStaticF___9__17_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__17_0", ::Oculus::Interaction::HoverInteractorsGate___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::HoverInteractorsGate___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__17_0", ::Oculus::Interaction::HoverInteractorsGate___c*>();
}
inline void Oculus::Interaction::HoverInteractorsGate___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_0(::UnityEngine::Object*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_1(::UnityEngine::Object*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method, i);
}
inline bool Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_2(::UnityEngine::Object*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_2", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::HoverInteractorsGate___c::_Awake_b__7_3(::UnityEngine::Object*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<Awake>b__7_3", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method, i);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::HoverInteractorsGate___c::_InjectInteractorsA_b__16_0(::Oculus::Interaction::IInteractor*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<InjectInteractorsA>b__16_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, i);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::HoverInteractorsGate___c::_InjectInteractorsB_b__17_0(::Oculus::Interaction::IInteractor*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HoverInteractorsGate___c*>(),
                        {"<InjectInteractorsB>b__17_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, i);
}
inline ::Oculus::Interaction::HoverInteractorsGate___c* Oculus::Interaction::HoverInteractorsGate___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HoverInteractorsGate___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HoverInteractorsGate___c::HoverInteractorsGate___c()   {
}
