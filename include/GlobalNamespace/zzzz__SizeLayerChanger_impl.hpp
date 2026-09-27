#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeLayerChanger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SizeLayerChanger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SizeLayerChanger.get_SizeLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SizeLayerChanger::*)()>(&::GlobalNamespace::SizeLayerChanger::get_SizeLayerMask)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x595cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeLayerChanger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeLayerChanger::*)()>(&::GlobalNamespace::SizeLayerChanger::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595d01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeLayerChanger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeLayerChanger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SizeLayerChanger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x595d034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeLayerChanger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeLayerChanger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SizeLayerChanger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x595d37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeLayerChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeLayerChanger::*)()>(&::GlobalNamespace::SizeLayerChanger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x595d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_maxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr float_t const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_maxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_maxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxScale = value;
}
constexpr float_t& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr float_t const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScale = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_isAssurance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAssurance;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_isAssurance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAssurance;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_isAssurance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAssurance = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_affectLayerA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerA = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_affectLayerB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerB = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_affectLayerC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerC = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_affectLayerD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_affectLayerD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerD = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_applyOnTriggerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnTriggerEnter;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_applyOnTriggerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnTriggerEnter;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_applyOnTriggerEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyOnTriggerEnter = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_applyOnTriggerExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnTriggerExit;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_applyOnTriggerExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnTriggerExit;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_applyOnTriggerExit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyOnTriggerExit = value;
}
constexpr bool& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_triggerWithBodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerWithBodyCollider;
}
constexpr bool const& GlobalNamespace::SizeLayerChanger::__cordl_internal_get_triggerWithBodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerWithBodyCollider;
}
constexpr void GlobalNamespace::SizeLayerChanger::__cordl_internal_set_triggerWithBodyCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerWithBodyCollider = value;
}
inline int32_t GlobalNamespace::SizeLayerChanger::get_SizeLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SizeLayerChanger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeLayerChanger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SizeLayerChanger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SizeLayerChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SizeLayerChanger* GlobalNamespace::SizeLayerChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SizeLayerChanger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SizeLayerChanger::SizeLayerChanger()   {
}
