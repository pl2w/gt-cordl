#pragma once
// IWYU pragma private; include "GlobalNamespace/InvalidType.hpp"
#include "GlobalNamespace/zzzz__ProxyType_impl.hpp"
#include "GlobalNamespace/zzzz__InvalidType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InvalidType.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InvalidType::*)()>(&::GlobalNamespace::InvalidType::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b20fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InvalidType*>(),
                    {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InvalidType.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InvalidType::*)()>(&::GlobalNamespace::InvalidType::get_FullName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b20fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InvalidType*>(),
                    {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InvalidType.get_AssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InvalidType::*)()>(&::GlobalNamespace::InvalidType::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b20ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InvalidType*>(),
                    {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InvalidType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InvalidType::*)()>(&::GlobalNamespace::InvalidType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b2101c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InvalidType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::InvalidType::__cordl_internal_get__self()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr ::System::Type* const& GlobalNamespace::InvalidType::__cordl_internal_get__self() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr void GlobalNamespace::InvalidType::__cordl_internal_set__self(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____self = value;
}
inline ::StringW GlobalNamespace::InvalidType::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::InvalidType::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::InvalidType::get_AssemblyQualifiedName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InvalidType*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::InvalidType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InvalidType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InvalidType* GlobalNamespace::InvalidType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InvalidType*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InvalidType::InvalidType()   {
}
