#pragma once
// IWYU pragma private; include "System/Net/DelayedRegex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__DelayedRegex_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::System::Net::DelayedRegex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelayedRegex::*)(::StringW)>(&::System::Net::DelayedRegex::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac63990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelayedRegex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelayedRegex::*)(::System::Text::RegularExpressions::Regex*)>(&::System::Net::DelayedRegex::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac64bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelayedRegex.get_AsRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Regex* (::System::Net::DelayedRegex::*)()>(&::System::Net::DelayedRegex::get_AsRegex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac64c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {"get_AsRegex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelayedRegex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DelayedRegex::*)()>(&::System::Net::DelayedRegex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xac64d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelayedRegex*>(),
                    {::i2c::class_of<::System::Net::DelayedRegex*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Regex*& System::Net::DelayedRegex::__cordl_internal_get__AsRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AsRegex;
}
constexpr ::System::Text::RegularExpressions::Regex* const& System::Net::DelayedRegex::__cordl_internal_get__AsRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AsRegex;
}
constexpr void System::Net::DelayedRegex::__cordl_internal_set__AsRegex(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AsRegex = value;
}
constexpr ::StringW& System::Net::DelayedRegex::__cordl_internal_get__AsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AsString;
}
constexpr ::StringW const& System::Net::DelayedRegex::__cordl_internal_get__AsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AsString;
}
constexpr void System::Net::DelayedRegex::__cordl_internal_set__AsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AsString = value;
}
inline void System::Net::DelayedRegex::_ctor(::StringW  regexString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regexString);
}
inline void System::Net::DelayedRegex::_ctor(::System::Text::RegularExpressions::Regex*  regex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regex);
}
inline ::System::Text::RegularExpressions::Regex* System::Net::DelayedRegex::get_AsRegex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelayedRegex*>(),
                        {"get_AsRegex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Regex*>(this, ___internal_method);
}
inline ::StringW System::Net::DelayedRegex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelayedRegex*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::DelayedRegex* System::Net::DelayedRegex::New_ctor(::StringW  regexString)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DelayedRegex*>(regexString));
}
inline ::System::Net::DelayedRegex* System::Net::DelayedRegex::New_ctor(::System::Text::RegularExpressions::Regex*  regex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DelayedRegex*>(regex));
}
// Ctor Parameters []
constexpr ::System::Net::DelayedRegex::DelayedRegex()   {
}
