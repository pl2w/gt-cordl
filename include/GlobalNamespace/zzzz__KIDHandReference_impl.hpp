#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDHandReference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDHandReference_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDHandReference.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)()>(&::GlobalNamespace::KIDHandReference::get_LeftHand)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a2c104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDHandReference.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)()>(&::GlobalNamespace::KIDHandReference::get_RightHand)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a2c14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDHandReference.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDHandReference::*)()>(&::GlobalNamespace::KIDHandReference::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a2c194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDHandReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDHandReference::*)()>(&::GlobalNamespace::KIDHandReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDHandReference::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDHandReference::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void GlobalNamespace::KIDHandReference::__cordl_internal_set__leftHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDHandReference::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDHandReference::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void GlobalNamespace::KIDHandReference::__cordl_internal_set__rightHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHand = value;
}
inline void GlobalNamespace::KIDHandReference::setStaticF__leftHandRef(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "_leftHandRef", ::GlobalNamespace::KIDHandReference*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::KIDHandReference::getStaticF__leftHandRef()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "_leftHandRef", ::GlobalNamespace::KIDHandReference*>();
}
inline void GlobalNamespace::KIDHandReference::setStaticF__rightHandRef(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "_rightHandRef", ::GlobalNamespace::KIDHandReference*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::KIDHandReference::getStaticF__rightHandRef()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "_rightHandRef", ::GlobalNamespace::KIDHandReference*>();
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::KIDHandReference::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::KIDHandReference::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDHandReference::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDHandReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDHandReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDHandReference* GlobalNamespace::KIDHandReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDHandReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDHandReference::KIDHandReference()   {
}
