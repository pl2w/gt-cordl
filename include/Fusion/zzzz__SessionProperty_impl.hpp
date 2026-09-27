#pragma once
// IWYU pragma private; include "Fusion/SessionProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::SessionProperty.get_PropertyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::get_PropertyValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f47df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_PropertyValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.get_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::get_PropertyType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f47df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_PropertyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.get_IsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::get_IsInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f47e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_IsInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.get_IsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::get_IsString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f47e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_IsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.get_Isbool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::get_Isbool)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f47e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_Isbool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f47e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::SessionProperty*)>(&::Fusion::SessionProperty::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f47eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit___Fusion__SessionProperty_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionProperty* (*)(int32_t)>(&::Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f47f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Fusion::SessionProperty*)>(&::Fusion::SessionProperty::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f47fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit___Fusion__SessionProperty_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionProperty* (*)(::StringW)>(&::Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f48030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SessionProperty*)>(&::Fusion::SessionProperty::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f480b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.op_Implicit___Fusion__SessionProperty_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionProperty* (*)(bool)>(&::Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f48120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.Support
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Fusion::SessionProperty::Support)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f481c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"Support", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionProperty* (*)(::System::Object*)>(&::Fusion::SessionProperty::Convert)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f48200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SessionProperty.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SessionProperty::*)()>(&::Fusion::SessionProperty::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f482a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SessionProperty*>(),
                    {::i2c::class_of<::Fusion::SessionProperty*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Fusion::SessionProperty::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr ::System::Object* const& Fusion::SessionProperty::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void Fusion::SessionProperty::__cordl_internal_set__value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
inline ::System::Object* Fusion::SessionProperty::get_PropertyValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_PropertyValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* Fusion::SessionProperty::get_PropertyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_PropertyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool Fusion::SessionProperty::get_IsInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_IsInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::SessionProperty::get_IsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_IsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::SessionProperty::get_Isbool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"get_Isbool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::SessionProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::SessionProperty::op_Implicit_int32_t(::Fusion::SessionProperty*  sessionProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sessionProperty);
}
inline ::Fusion::SessionProperty* Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionProperty*>(nullptr, ___internal_method, v);
}
inline ::StringW Fusion::SessionProperty::op_Implicit___StringW(::Fusion::SessionProperty*  sessionProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sessionProperty);
}
inline ::Fusion::SessionProperty* Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_(::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionProperty*>(nullptr, ___internal_method, v);
}
inline bool Fusion::SessionProperty::op_Implicit_bool(::Fusion::SessionProperty*  sessionProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SessionProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sessionProperty);
}
inline ::Fusion::SessionProperty* Fusion::SessionProperty::op_Implicit___Fusion__SessionProperty_(bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionProperty*>(nullptr, ___internal_method, v);
}
inline bool Fusion::SessionProperty::Support(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"Support", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::Fusion::SessionProperty* Fusion::SessionProperty::Convert(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SessionProperty*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionProperty*>(nullptr, ___internal_method, obj);
}
inline ::StringW Fusion::SessionProperty::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SessionProperty*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::SessionProperty* Fusion::SessionProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SessionProperty*>());
}
// Ctor Parameters []
constexpr ::Fusion::SessionProperty::SessionProperty()   {
}
