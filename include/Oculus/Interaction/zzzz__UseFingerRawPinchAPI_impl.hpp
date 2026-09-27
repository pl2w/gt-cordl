#pragma once
// IWYU pragma private; include "Oculus/Interaction/UseFingerRawPinchAPI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UseFingerRawPinchAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::UseFingerRawPinchAPI::*)()>(&::Oculus::Interaction::UseFingerRawPinchAPI::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ac88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerRawPinchAPI::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)()>(&::Oculus::Interaction::UseFingerRawPinchAPI::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa46ac98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)()>(&::Oculus::Interaction::UseFingerRawPinchAPI::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.GetFingerUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UseFingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::UseFingerRawPinchAPI::GetFingerUseStrength)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa46ad1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.InjectAllUseFingerRawPinchAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerRawPinchAPI::InjectAllUseFingerRawPinchAPI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"InjectAllUseFingerRawPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerRawPinchAPI::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerRawPinchAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerRawPinchAPI::*)()>(&::Oculus::Interaction::UseFingerRawPinchAPI::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa46b004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::Oculus::Interaction::IFingerAPI*& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__grabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAPI;
}
constexpr ::Oculus::Interaction::IFingerAPI* const& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__grabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAPI;
}
constexpr void Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_set__grabAPI(::Oculus::Interaction::IFingerAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabAPI = value;
}
constexpr int32_t& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__lastDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDataVersion;
}
constexpr int32_t const& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__lastDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDataVersion;
}
constexpr void Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_set__lastDataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDataVersion = value;
}
constexpr bool& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::UseFingerRawPinchAPI::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::UseFingerRawPinchAPI::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::UseFingerRawPinchAPI::GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::InjectAllUseFingerRawPinchAPI(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"InjectAllUseFingerRawPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::UseFingerRawPinchAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerRawPinchAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UseFingerRawPinchAPI* Oculus::Interaction::UseFingerRawPinchAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UseFingerRawPinchAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr  Oculus::Interaction::UseFingerRawPinchAPI::operator ::Oculus::Interaction::IFingerUseAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* Oculus::Interaction::UseFingerRawPinchAPI::i___Oculus__Interaction__IFingerUseAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UseFingerRawPinchAPI::UseFingerRawPinchAPI()   {
}
