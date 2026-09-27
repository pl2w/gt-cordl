#pragma once
// IWYU pragma private; include "VYaml/Parser/Anchor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Parser/zzzz__Anchor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Anchor.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Anchor::*)()>(&::VYaml::Parser::Anchor::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95bb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::Anchor::*)()>(&::VYaml::Parser::Anchor::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95bb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Anchor::*)(::StringW, int32_t)>(&::VYaml::Parser::Anchor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb95bb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Anchor::*)(::VYaml::Parser::Anchor*)>(&::VYaml::Parser::Anchor::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb95bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"Equals", {}, {::i2c::type_of<::VYaml::Parser::Anchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Anchor::*)(::System::Object*)>(&::VYaml::Parser::Anchor::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb95bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                    {::i2c::class_of<::VYaml::Parser::Anchor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::Anchor::*)()>(&::VYaml::Parser::Anchor::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                    {::i2c::class_of<::VYaml::Parser::Anchor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Anchor.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Anchor::*)()>(&::VYaml::Parser::Anchor::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb95bc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                    {::i2c::class_of<::VYaml::Parser::Anchor*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& VYaml::Parser::Anchor::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& VYaml::Parser::Anchor::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void VYaml::Parser::Anchor::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr int32_t& VYaml::Parser::Anchor::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr int32_t const& VYaml::Parser::Anchor::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void VYaml::Parser::Anchor::__cordl_internal_set__Id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
inline ::StringW VYaml::Parser::Anchor::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t VYaml::Parser::Anchor::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void VYaml::Parser::Anchor::_ctor(::StringW  name, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, id);
}
inline bool VYaml::Parser::Anchor::Equals(::VYaml::Parser::Anchor*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Anchor*>(),
                        {"Equals", {}, {::i2c::type_of<::VYaml::Parser::Anchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool VYaml::Parser::Anchor::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Anchor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t VYaml::Parser::Anchor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Anchor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW VYaml::Parser::Anchor::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Anchor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::VYaml::Parser::Anchor* VYaml::Parser::Anchor::New_ctor(::StringW  name, int32_t  id)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::Anchor*>(name, id));
}
/// @brief Convert operator to "::System::IEquatable_1<::VYaml::Parser::Anchor*>"
constexpr  VYaml::Parser::Anchor::operator ::System::IEquatable_1<::VYaml::Parser::Anchor*>*() noexcept {
return static_cast<::System::IEquatable_1<::VYaml::Parser::Anchor*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::VYaml::Parser::Anchor*>"
constexpr ::System::IEquatable_1<::VYaml::Parser::Anchor*>* VYaml::Parser::Anchor::i___System__IEquatable_1___VYaml__Parser__Anchor__() noexcept {
return static_cast<::System::IEquatable_1<::VYaml::Parser::Anchor*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Anchor::Anchor()   {
}
