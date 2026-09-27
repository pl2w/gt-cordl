#pragma once
// IWYU pragma private; include "System/ComponentModel/ToolboxItemFilterAttribute.hpp"
#include "System/ComponentModel/zzzz__ToolboxItemFilterType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ToolboxItemFilterAttribute_def.hpp"
#include "System/ComponentModel/zzzz__ToolboxItemFilterType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ToolboxItemFilterAttribute::*)(::StringW)>(&::System::ComponentModel::ToolboxItemFilterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6a4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ToolboxItemFilterAttribute::*)(::StringW, ::System::ComponentModel::ToolboxItemFilterType)>(&::System::ComponentModel::ToolboxItemFilterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad6a4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::ToolboxItemFilterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.get_FilterString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&::System::ComponentModel::ToolboxItemFilterAttribute::get_FilterString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6a52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {"get_FilterString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.get_FilterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ToolboxItemFilterType (::System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&::System::ComponentModel::ToolboxItemFilterAttribute::get_FilterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {"get_FilterType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.get_TypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&::System::ComponentModel::ToolboxItemFilterAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad6a53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ToolboxItemFilterAttribute::*)(::System::Object*)>(&::System::ComponentModel::ToolboxItemFilterAttribute::Equals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xad6a5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&::System::ComponentModel::ToolboxItemFilterAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad6a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ToolboxItemFilterAttribute::*)(::System::Object*)>(&::System::ComponentModel::ToolboxItemFilterAttribute::Match)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad6a6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemFilterAttribute.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&::System::ComponentModel::ToolboxItemFilterAttribute::ToString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xad6a728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__typeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeId;
}
constexpr ::StringW const& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__typeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeId;
}
constexpr void System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_set__typeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeId = value;
}
constexpr ::StringW& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__FilterString_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterString_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__FilterString_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterString_k__BackingField;
}
constexpr void System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_set__FilterString_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FilterString_k__BackingField = value;
}
constexpr ::System::ComponentModel::ToolboxItemFilterType& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__FilterType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterType_k__BackingField;
}
constexpr ::System::ComponentModel::ToolboxItemFilterType const& System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_get__FilterType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterType_k__BackingField;
}
constexpr void System::ComponentModel::ToolboxItemFilterAttribute::__cordl_internal_set__FilterType_k__BackingField(::System::ComponentModel::ToolboxItemFilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FilterType_k__BackingField = value;
}
inline void System::ComponentModel::ToolboxItemFilterAttribute::_ctor(::StringW  filterString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterString);
}
inline void System::ComponentModel::ToolboxItemFilterAttribute::_ctor(::StringW  filterString, ::System::ComponentModel::ToolboxItemFilterType  filterType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::ToolboxItemFilterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterString, filterType);
}
inline ::StringW System::ComponentModel::ToolboxItemFilterAttribute::get_FilterString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {"get_FilterString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::ToolboxItemFilterType System::ComponentModel::ToolboxItemFilterAttribute::get_FilterType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(),
                        {"get_FilterType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ToolboxItemFilterType>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ToolboxItemFilterAttribute::get_TypeId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::ComponentModel::ToolboxItemFilterAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ToolboxItemFilterAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ToolboxItemFilterAttribute::Match(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::StringW System::ComponentModel::ToolboxItemFilterAttribute::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ToolboxItemFilterAttribute*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::ToolboxItemFilterAttribute* System::ComponentModel::ToolboxItemFilterAttribute::New_ctor(::StringW  filterString)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ToolboxItemFilterAttribute*>(filterString));
}
inline ::System::ComponentModel::ToolboxItemFilterAttribute* System::ComponentModel::ToolboxItemFilterAttribute::New_ctor(::StringW  filterString, ::System::ComponentModel::ToolboxItemFilterType  filterType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ToolboxItemFilterAttribute*>(filterString, filterType));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ToolboxItemFilterAttribute::ToolboxItemFilterAttribute()   {
}
