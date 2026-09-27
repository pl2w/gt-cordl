#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonLoadSettings.hpp"
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__DuplicatePropertyNameHandling_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__DuplicatePropertyNameHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.get_CommentHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::CommentHandling (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&::Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_CommentHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.get_LineInfoHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::LineInfoHandling (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&::Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_LineInfoHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.get_DuplicatePropertyNameHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&::Newtonsoft::Json::Linq::JsonLoadSettings::get_DuplicatePropertyNameHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_DuplicatePropertyNameHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::CommentHandling& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__commentHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentHandling;
}
constexpr ::Newtonsoft::Json::Linq::CommentHandling const& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__commentHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentHandling;
}
constexpr void Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_set__commentHandling(::Newtonsoft::Json::Linq::CommentHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____commentHandling = value;
}
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__lineInfoHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineInfoHandling;
}
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling const& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__lineInfoHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineInfoHandling;
}
constexpr void Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_set__lineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineInfoHandling = value;
}
constexpr ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__duplicatePropertyNameHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicatePropertyNameHandling;
}
constexpr ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling const& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__duplicatePropertyNameHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicatePropertyNameHandling;
}
constexpr void Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_set__duplicatePropertyNameHandling(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duplicatePropertyNameHandling = value;
}
inline ::Newtonsoft::Json::Linq::CommentHandling Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_CommentHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::CommentHandling>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::LineInfoHandling Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_LineInfoHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::LineInfoHandling>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling Newtonsoft::Json::Linq::JsonLoadSettings::get_DuplicatePropertyNameHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(),
                        {"get_DuplicatePropertyNameHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonLoadSettings::JsonLoadSettings()   {
}
