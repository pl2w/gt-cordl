#pragma once
// IWYU pragma private; include "Oculus/Interaction/UseFingerCurlAPI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UseFingerCurlAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::UseFingerCurlAPI::*)()>(&::Oculus::Interaction::UseFingerCurlAPI::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerCurlAPI::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)()>(&::Oculus::Interaction::UseFingerCurlAPI::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa46a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)()>(&::Oculus::Interaction::UseFingerCurlAPI::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46a900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.GetFingerUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::UseFingerCurlAPI::GetFingerUseStrength)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa46a92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.InjectAllUseFingerCurlAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerCurlAPI::InjectAllUseFingerCurlAPI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46ab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"InjectAllUseFingerCurlAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::UseFingerCurlAPI::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46ab44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerCurlAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerCurlAPI::*)()>(&::Oculus::Interaction::UseFingerCurlAPI::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa46ac14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::Oculus::Interaction::IFingerAPI*& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__grabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAPI;
}
constexpr ::Oculus::Interaction::IFingerAPI* const& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__grabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAPI;
}
constexpr void Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_set__grabAPI(::Oculus::Interaction::IFingerAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabAPI = value;
}
constexpr int32_t& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__lastDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDataVersion;
}
constexpr int32_t const& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__lastDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDataVersion;
}
constexpr void Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_set__lastDataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDataVersion = value;
}
constexpr bool& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::UseFingerCurlAPI::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::UseFingerCurlAPI::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerCurlAPI::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UseFingerCurlAPI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerCurlAPI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::UseFingerCurlAPI::GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::UseFingerCurlAPI::InjectAllUseFingerCurlAPI(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"InjectAllUseFingerCurlAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::UseFingerCurlAPI::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::UseFingerCurlAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerCurlAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UseFingerCurlAPI* Oculus::Interaction::UseFingerCurlAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UseFingerCurlAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr  Oculus::Interaction::UseFingerCurlAPI::operator ::Oculus::Interaction::IFingerUseAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* Oculus::Interaction::UseFingerCurlAPI::i___Oculus__Interaction__IFingerUseAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UseFingerCurlAPI::UseFingerCurlAPI()   {
}
