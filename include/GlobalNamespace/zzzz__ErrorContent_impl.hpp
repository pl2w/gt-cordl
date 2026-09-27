#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorContent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ErrorContent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ErrorContent.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ErrorContent::*)()>(&::GlobalNamespace::ErrorContent::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorContent.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorContent::*)(::StringW)>(&::GlobalNamespace::ErrorContent::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorContent.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ErrorContent::*)()>(&::GlobalNamespace::ErrorContent::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorContent.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorContent::*)(::StringW)>(&::GlobalNamespace::ErrorContent::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorContent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ErrorContent::*)()>(&::GlobalNamespace::ErrorContent::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a26230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                    {::i2c::class_of<::GlobalNamespace::ErrorContent*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorContent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorContent::*)()>(&::GlobalNamespace::ErrorContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ErrorContent::__cordl_internal_get__Message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::ErrorContent::__cordl_internal_get__Message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr void GlobalNamespace::ErrorContent::__cordl_internal_set__Message_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::ErrorContent::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::ErrorContent::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void GlobalNamespace::ErrorContent::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline ::StringW GlobalNamespace::ErrorContent::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ErrorContent::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ErrorContent::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ErrorContent::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ErrorContent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ErrorContent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ErrorContent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorContent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ErrorContent* GlobalNamespace::ErrorContent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ErrorContent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorContent::ErrorContent()   {
}
