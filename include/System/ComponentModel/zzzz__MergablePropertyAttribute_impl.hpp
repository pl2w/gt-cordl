#pragma once
// IWYU pragma private; include "System/ComponentModel/MergablePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__MergablePropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MergablePropertyAttribute::*)(bool)>(&::System::ComponentModel::MergablePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad47e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.get_AllowMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)()>(&::System::ComponentModel::MergablePropertyAttribute::get_AllowMerge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                        {"get_AllowMerge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)(::System::Object*)>(&::System::ComponentModel::MergablePropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xad47e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::MergablePropertyAttribute::*)()>(&::System::ComponentModel::MergablePropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)()>(&::System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad47f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::MergablePropertyAttribute::__cordl_internal_get__AllowMerge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMerge_k__BackingField;
}
constexpr bool const& System::ComponentModel::MergablePropertyAttribute::__cordl_internal_get__AllowMerge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMerge_k__BackingField;
}
constexpr void System::ComponentModel::MergablePropertyAttribute::__cordl_internal_set__AllowMerge_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowMerge_k__BackingField = value;
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_Yes(::System::ComponentModel::MergablePropertyAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Yes", ::System::ComponentModel::MergablePropertyAttribute*>(std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Yes", ::System::ComponentModel::MergablePropertyAttribute*>();
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_No(::System::ComponentModel::MergablePropertyAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "No", ::System::ComponentModel::MergablePropertyAttribute*>(std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "No", ::System::ComponentModel::MergablePropertyAttribute*>();
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_Default(::System::ComponentModel::MergablePropertyAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Default", ::System::ComponentModel::MergablePropertyAttribute*>(std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Default", ::System::ComponentModel::MergablePropertyAttribute*>();
}
inline void System::ComponentModel::MergablePropertyAttribute::_ctor(bool  allowMerge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowMerge);
}
inline bool System::ComponentModel::MergablePropertyAttribute::get_AllowMerge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(),
                        {"get_AllowMerge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::MergablePropertyAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::MergablePropertyAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MergablePropertyAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::New_ctor(bool  allowMerge)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::MergablePropertyAttribute*>(allowMerge));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MergablePropertyAttribute::MergablePropertyAttribute()   {
}
