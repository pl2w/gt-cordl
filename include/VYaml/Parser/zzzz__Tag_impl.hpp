#pragma once
// IWYU pragma private; include "VYaml/Parser/Tag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Parser/zzzz__Tag_def.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Tag.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Tag::*)()>(&::VYaml::Parser::Tag::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95bd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Tag.get_Suffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Tag::*)()>(&::VYaml::Parser::Tag::get_Suffix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95bda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"get_Suffix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Tag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Tag::*)(::StringW, ::StringW)>(&::VYaml::Parser::Tag::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb95bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Tag.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Tag::*)()>(&::VYaml::Parser::Tag::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb95bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Tag*>(),
                    {::i2c::class_of<::VYaml::Parser::Tag*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Tag.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Tag::*)(::StringW)>(&::VYaml::Parser::Tag::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb95be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VYaml::Parser::Tag::__cordl_internal_get__Handle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handle_k__BackingField;
}
constexpr ::StringW const& VYaml::Parser::Tag::__cordl_internal_get__Handle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handle_k__BackingField;
}
constexpr void VYaml::Parser::Tag::__cordl_internal_set__Handle_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Handle_k__BackingField = value;
}
constexpr ::StringW& VYaml::Parser::Tag::__cordl_internal_get__Suffix_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Suffix_k__BackingField;
}
constexpr ::StringW const& VYaml::Parser::Tag::__cordl_internal_get__Suffix_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Suffix_k__BackingField;
}
constexpr void VYaml::Parser::Tag::__cordl_internal_set__Suffix_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Suffix_k__BackingField = value;
}
inline ::StringW VYaml::Parser::Tag::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW VYaml::Parser::Tag::get_Suffix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"get_Suffix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void VYaml::Parser::Tag::_ctor(::StringW  handle, ::StringW  suffix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, suffix);
}
inline ::StringW VYaml::Parser::Tag::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Tag*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool VYaml::Parser::Tag::Equals(::StringW  tagString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Tag*>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tagString);
}
inline ::VYaml::Parser::Tag* VYaml::Parser::Tag::New_ctor(::StringW  handle, ::StringW  suffix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::Tag*>(handle, suffix));
}
/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr  VYaml::Parser::Tag::operator ::VYaml::Parser::ITokenContent*() noexcept {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* VYaml::Parser::Tag::i___VYaml__Parser__ITokenContent() noexcept {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Tag::Tag()   {
}
