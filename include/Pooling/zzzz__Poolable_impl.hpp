#pragma once
// IWYU pragma private; include "Pooling/Poolable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pooling/zzzz__Poolable_def.hpp"
#include "Pooling/zzzz__IPoolable_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
//  Writing Method size for method: ::Pooling::Poolable.get_Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>* (::Pooling::Poolable::*)()>(&::Pooling::Poolable::get_Pool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"get_Pool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable.set_Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*)>(&::Pooling::Poolable::set_Pool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"set_Pool", {}, {::i2c::type_of<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable.OnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)()>(&::Pooling::Poolable::OnCreate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b70cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable.OnPreGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)()>(&::Pooling::Poolable::OnPreGet)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b70cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnPreGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable.OnPostGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)()>(&::Pooling::Poolable::OnPostGet)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b70d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnPostGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)()>(&::Pooling::Poolable::OnRelease)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b70d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Poolable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::Poolable::*)()>(&::Pooling::Poolable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Pooling::Poolable::__cordl_internal_get_onCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCreate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Pooling::Poolable::__cordl_internal_get_onCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCreate;
}
constexpr void Pooling::Poolable::__cordl_internal_set_onCreate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCreate = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Pooling::Poolable::__cordl_internal_get_onPreGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPreGet;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Pooling::Poolable::__cordl_internal_get_onPreGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPreGet;
}
constexpr void Pooling::Poolable::__cordl_internal_set_onPreGet(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPreGet = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Pooling::Poolable::__cordl_internal_get_onPostGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPostGet;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Pooling::Poolable::__cordl_internal_get_onPostGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPostGet;
}
constexpr void Pooling::Poolable::__cordl_internal_set_onPostGet(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPostGet = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Pooling::Poolable::__cordl_internal_get_onRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Pooling::Poolable::__cordl_internal_get_onRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr void Pooling::Poolable::__cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRelease = value;
}
constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*& Pooling::Poolable::__cordl_internal_get__Pool_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pool_k__BackingField;
}
constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>* const& Pooling::Poolable::__cordl_internal_get__Pool_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pool_k__BackingField;
}
constexpr void Pooling::Poolable::__cordl_internal_set__Pool_k__BackingField(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pool_k__BackingField = value;
}
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>* Pooling::Poolable::get_Pool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"get_Pool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*>(this, ___internal_method);
}
inline void Pooling::Poolable::set_Pool(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"set_Pool", {}, {::i2c::type_of<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pooling::Poolable::OnCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::Poolable::OnPreGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnPreGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::Poolable::OnPostGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnPostGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::Poolable::OnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {"OnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::Poolable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Poolable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pooling::Poolable* Pooling::Poolable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pooling::Poolable*>());
}
/// @brief Convert operator to "::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>"
constexpr  Pooling::Poolable::operator ::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>*() noexcept {
return static_cast<::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>"
constexpr ::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>* Pooling::Poolable::i___Pooling__IPoolable_1___UnityW___Pooling__Poolable__() noexcept {
return static_cast<::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pooling::Poolable::Poolable()   {
}
