#pragma once
// IWYU pragma private; include "System/ComponentModel/ParenthesizePropertyNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ParenthesizePropertyNameAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad97e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)(bool)>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad97e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute.get_NeedParenthesis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::get_NeedParenthesis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad97eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {"get_NeedParenthesis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)(::System::Object*)>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad97eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad97f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ParenthesizePropertyNameAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&::System::ComponentModel::ParenthesizePropertyNameAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad97f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::ParenthesizePropertyNameAttribute::__cordl_internal_get_needParenthesis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needParenthesis;
}
constexpr bool const& System::ComponentModel::ParenthesizePropertyNameAttribute::__cordl_internal_get_needParenthesis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needParenthesis;
}
constexpr void System::ComponentModel::ParenthesizePropertyNameAttribute::__cordl_internal_set_needParenthesis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needParenthesis = value;
}
inline void System::ComponentModel::ParenthesizePropertyNameAttribute::setStaticF_Default(::System::ComponentModel::ParenthesizePropertyNameAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ParenthesizePropertyNameAttribute*, "Default", ::System::ComponentModel::ParenthesizePropertyNameAttribute*>(std::forward<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(value));
}
inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* System::ComponentModel::ParenthesizePropertyNameAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ParenthesizePropertyNameAttribute*, "Default", ::System::ComponentModel::ParenthesizePropertyNameAttribute*>();
}
inline void System::ComponentModel::ParenthesizePropertyNameAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ParenthesizePropertyNameAttribute::_ctor(bool  needParenthesis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needParenthesis);
}
inline bool System::ComponentModel::ParenthesizePropertyNameAttribute::get_NeedParenthesis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(),
                        {"get_NeedParenthesis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ParenthesizePropertyNameAttribute::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::ComponentModel::ParenthesizePropertyNameAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ParenthesizePropertyNameAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* System::ComponentModel::ParenthesizePropertyNameAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ParenthesizePropertyNameAttribute*>());
}
inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* System::ComponentModel::ParenthesizePropertyNameAttribute::New_ctor(bool  needParenthesis)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ParenthesizePropertyNameAttribute*>(needParenthesis));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ParenthesizePropertyNameAttribute::ParenthesizePropertyNameAttribute()   {
}
