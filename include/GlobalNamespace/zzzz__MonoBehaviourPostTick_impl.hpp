#pragma once
// IWYU pragma private; include "GlobalNamespace/MonoBehaviourPostTick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick.get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonoBehaviourPostTick::*)()>(&::GlobalNamespace::MonoBehaviourPostTick::get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick.set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourPostTick::*)(bool)>(&::GlobalNamespace::MonoBehaviourPostTick::set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourPostTick::*)()>(&::GlobalNamespace::MonoBehaviourPostTick::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                    {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourPostTick::*)()>(&::GlobalNamespace::MonoBehaviourPostTick::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                    {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourPostTick::*)()>(&::GlobalNamespace::MonoBehaviourPostTick::PostTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                    {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourPostTick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourPostTick::*)()>(&::GlobalNamespace::MonoBehaviourPostTick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MonoBehaviourPostTick::__cordl_internal_get__PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::MonoBehaviourPostTick::__cordl_internal_get__PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::MonoBehaviourPostTick::__cordl_internal_set__PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostTickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::MonoBehaviourPostTick::get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourPostTick::set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonoBehaviourPostTick::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourPostTick::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourPostTick::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourPostTick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourPostTick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonoBehaviourPostTick* GlobalNamespace::MonoBehaviourPostTick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonoBehaviourPostTick*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::MonoBehaviourPostTick::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::MonoBehaviourPostTick::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonoBehaviourPostTick::MonoBehaviourPostTick()   {
}
