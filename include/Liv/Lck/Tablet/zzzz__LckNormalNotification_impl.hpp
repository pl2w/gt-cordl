#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckNormalNotification.hpp"
#include "Liv/Lck/Tablet/zzzz__LckBaseNotification_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNormalNotification_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckNormalNotification.get_UI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Liv::Lck::Tablet::LckNormalNotification::*)()>(&::Liv::Lck::Tablet::LckNormalNotification::get_UI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"get_UI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckNormalNotification.set_UI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckNormalNotification::*)(::UnityEngine::GameObject*)>(&::Liv::Lck::Tablet::LckNormalNotification::set_UI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"set_UI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckNormalNotification.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Text> (::Liv::Lck::Tablet::LckNormalNotification::*)()>(&::Liv::Lck::Tablet::LckNormalNotification::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckNormalNotification.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckNormalNotification::*)(::TMPro::TMP_Text*)>(&::Liv::Lck::Tablet::LckNormalNotification::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"set_Text", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckNormalNotification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckNormalNotification::*)()>(&::Liv::Lck::Tablet::LckNormalNotification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d5fd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_get__UI_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UI_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_get__UI_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UI_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_set__UI_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UI_k__BackingField = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_get__Text_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_get__Text_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LckNormalNotification::__cordl_internal_set__Text_k__BackingField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::GameObject> Liv::Lck::Tablet::LckNormalNotification::get_UI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"get_UI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckNormalNotification::set_UI(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"set_UI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Text> Liv::Lck::Tablet::LckNormalNotification::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Text>>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckNormalNotification::set_Text(::TMPro::TMP_Text*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {"set_Text", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LckNormalNotification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckNormalNotification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckNormalNotification* Liv::Lck::Tablet::LckNormalNotification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckNormalNotification*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckNormalNotification::LckNormalNotification()   {
}
