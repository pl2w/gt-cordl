#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandTrackingConfidenceProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandTrackingConfidenceProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa482574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandTrackingConfidenceProvider::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::Reset)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa482584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa482708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa482828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::OnEnable)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa482854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::OnDisable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa4829d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.TryGetTrackingConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<bool>)>(&::Oculus::Interaction::HandTrackingConfidenceProvider::TryGetTrackingConfidence)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa482b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"TryGetTrackingConfidence", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.InjectAllHandTrackingConfidenceProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)(::Oculus::Interaction::IInteractor*, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandTrackingConfidenceProvider::InjectAllHandTrackingConfidenceProvider)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa482cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectAllHandTrackingConfidenceProvider", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::HandTrackingConfidenceProvider::InjectInteractor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa482cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandTrackingConfidenceProvider::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa482dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTrackingConfidenceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandTrackingConfidenceProvider::*)()>(&::Oculus::Interaction::HandTrackingConfidenceProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa482e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr void Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactor = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandTrackingConfidenceProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::setStaticF__interactorTrackingConfidence(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*, "_interactorTrackingConfidence", ::Oculus::Interaction::HandTrackingConfidenceProvider*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>* Oculus::Interaction::HandTrackingConfidenceProvider::getStaticF__interactorTrackingConfidence()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*, "_interactorTrackingConfidence", ::Oculus::Interaction::HandTrackingConfidenceProvider*>();
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandTrackingConfidenceProvider::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandTrackingConfidenceProvider::TryGetTrackingConfidence(int32_t  key, ::by_ref<bool>  isTrackingHighConfidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"TryGetTrackingConfidence", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, isTrackingHighConfidence);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::InjectAllHandTrackingConfidenceProvider(::Oculus::Interaction::IInteractor*  interactor, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectAllHandTrackingConfidenceProvider", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, hand);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::InjectInteractor(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandTrackingConfidenceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTrackingConfidenceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandTrackingConfidenceProvider* Oculus::Interaction::HandTrackingConfidenceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandTrackingConfidenceProvider*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandTrackingConfidenceProvider::HandTrackingConfidenceProvider()   {
}
