#pragma once
// IWYU pragma private; include "Oculus/Interaction/VersionTextVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__VersionTextVisual_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)()>(&::Oculus::Interaction::VersionTextVisual::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48e5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)()>(&::Oculus::Interaction::VersionTextVisual::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa48e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual.InjectAllVersionTextVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)(::TMPro::TMP_Text*, ::StringW)>(&::Oculus::Interaction::VersionTextVisual::InjectAllVersionTextVisual)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa48e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectAllVersionTextVisual", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual.InjectText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)(::TMPro::TMP_Text*)>(&::Oculus::Interaction::VersionTextVisual::InjectText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectText", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual.InjectFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)(::StringW)>(&::Oculus::Interaction::VersionTextVisual::InjectFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::VersionTextVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::VersionTextVisual::*)()>(&::Oculus::Interaction::VersionTextVisual::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48e6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Oculus::Interaction::VersionTextVisual::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Oculus::Interaction::VersionTextVisual::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Oculus::Interaction::VersionTextVisual::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::StringW& Oculus::Interaction::VersionTextVisual::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::StringW const& Oculus::Interaction::VersionTextVisual::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Oculus::Interaction::VersionTextVisual::__cordl_internal_set__format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
inline void Oculus::Interaction::VersionTextVisual::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::VersionTextVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::VersionTextVisual::InjectAllVersionTextVisual(::TMPro::TMP_Text*  text, ::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectAllVersionTextVisual", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, format);
}
inline void Oculus::Interaction::VersionTextVisual::InjectText(::TMPro::TMP_Text*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectText", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Oculus::Interaction::VersionTextVisual::InjectFormat(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {"InjectFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void Oculus::Interaction::VersionTextVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VersionTextVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::VersionTextVisual* Oculus::Interaction::VersionTextVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::VersionTextVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::VersionTextVisual::VersionTextVisual()   {
}
