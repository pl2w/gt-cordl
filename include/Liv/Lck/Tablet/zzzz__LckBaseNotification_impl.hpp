#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckBaseNotification.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckBaseNotification_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.get_RemainOnScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::get_RemainOnScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_RemainOnScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.set_RemainOnScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)(bool)>(&::Liv::Lck::Tablet::LckBaseNotification::set_RemainOnScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_RemainOnScreen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.get_ShowDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::get_ShowDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_ShowDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.set_ShowDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)(float_t)>(&::Liv::Lck::Tablet::LckBaseNotification::set_ShowDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_ShowDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.get_SpawnedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::get_SpawnedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_SpawnedGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.set_SpawnedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)(::UnityEngine::GameObject*)>(&::Liv::Lck::Tablet::LckBaseNotification::set_SpawnedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_SpawnedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.ShowNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::ShowNotification)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d5fbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                    {::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.HideNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::HideNotification)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d5fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                    {::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification.SetSpawnedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)(::UnityEngine::GameObject*)>(&::Liv::Lck::Tablet::LckBaseNotification::SetSpawnedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d58e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"SetSpawnedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckBaseNotification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckBaseNotification::*)()>(&::Liv::Lck::Tablet::LckBaseNotification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d5fcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__RemainOnScreen_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainOnScreen_k__BackingField;
}
constexpr bool const& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__RemainOnScreen_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainOnScreen_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_set__RemainOnScreen_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RemainOnScreen_k__BackingField = value;
}
constexpr float_t& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__ShowDuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDuration_k__BackingField;
}
constexpr float_t const& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__ShowDuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDuration_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_set__ShowDuration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowDuration_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__SpawnedGameObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedGameObject_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_get__SpawnedGameObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedGameObject_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LckBaseNotification::__cordl_internal_set__SpawnedGameObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpawnedGameObject_k__BackingField = value;
}
inline bool Liv::Lck::Tablet::LckBaseNotification::get_RemainOnScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_RemainOnScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckBaseNotification::set_RemainOnScreen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_RemainOnScreen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::Tablet::LckBaseNotification::get_ShowDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_ShowDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckBaseNotification::set_ShowDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_ShowDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Liv::Lck::Tablet::LckBaseNotification::get_SpawnedGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"get_SpawnedGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckBaseNotification::set_SpawnedGameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"set_SpawnedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LckBaseNotification::ShowNotification()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckBaseNotification::HideNotification()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckBaseNotification::SetSpawnedGameObject(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {"SetSpawnedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void Liv::Lck::Tablet::LckBaseNotification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckBaseNotification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckBaseNotification* Liv::Lck::Tablet::LckBaseNotification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckBaseNotification*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckBaseNotification::LckBaseNotification()   {
}
