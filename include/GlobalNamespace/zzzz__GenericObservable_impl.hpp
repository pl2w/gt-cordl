#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericObservable.hpp"
#include "GlobalNamespace/zzzz__ObservableBehavior_impl.hpp"
#include "GlobalNamespace/zzzz__GenericObservable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GenericObservable.ObservableSliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericObservable::*)()>(&::GlobalNamespace::GenericObservable::ObservableSliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ec894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GenericObservable*>(),
                    {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericObservable.OnBecameObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericObservable::*)()>(&::GlobalNamespace::GenericObservable::OnBecameObservable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57ec898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GenericObservable*>(),
                    {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericObservable.OnLostObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericObservable::*)()>(&::GlobalNamespace::GenericObservable::OnLostObservable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57ec8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GenericObservable*>(),
                    {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericObservable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GenericObservable::*)()>(&::GlobalNamespace::GenericObservable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ec8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericObservable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericObservable::__cordl_internal_get_OnObservable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObservable;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericObservable::__cordl_internal_get_OnObservable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObservable;
}
constexpr void GlobalNamespace::GenericObservable::__cordl_internal_set_OnObservable(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObservable = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GenericObservable::__cordl_internal_get_OnUnobservable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnobservable;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GenericObservable::__cordl_internal_get_OnUnobservable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnobservable;
}
constexpr void GlobalNamespace::GenericObservable::__cordl_internal_set_OnUnobservable(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUnobservable = value;
}
inline void GlobalNamespace::GenericObservable::ObservableSliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericObservable::OnBecameObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericObservable::OnLostObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GenericObservable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GenericObservable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GenericObservable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GenericObservable* GlobalNamespace::GenericObservable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GenericObservable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericObservable::GenericObservable()   {
}
