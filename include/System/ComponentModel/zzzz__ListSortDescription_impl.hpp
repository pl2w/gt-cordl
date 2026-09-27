#pragma once
// IWYU pragma private; include "System/ComponentModel/ListSortDescription.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ListSortDescription_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(&::System::ComponentModel::ListSortDescription::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad5b324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.get_PropertyDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ListSortDescription::*)()>(&::System::ComponentModel::ListSortDescription::get_PropertyDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"get_PropertyDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.set_PropertyDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::ComponentModel::ListSortDescription::set_PropertyDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"set_PropertyDescriptor", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.get_SortDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDirection (::System::ComponentModel::ListSortDescription::*)()>(&::System::ComponentModel::ListSortDescription::get_SortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"get_SortDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.set_SortDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(::System::ComponentModel::ListSortDirection)>(&::System::ComponentModel::ListSortDescription::set_SortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"set_SortDirection", {}, {::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::PropertyDescriptor*& System::ComponentModel::ListSortDescription::__cordl_internal_get__PropertyDescriptor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyDescriptor_k__BackingField;
}
constexpr ::System::ComponentModel::PropertyDescriptor* const& System::ComponentModel::ListSortDescription::__cordl_internal_get__PropertyDescriptor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyDescriptor_k__BackingField;
}
constexpr void System::ComponentModel::ListSortDescription::__cordl_internal_set__PropertyDescriptor_k__BackingField(::System::ComponentModel::PropertyDescriptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyDescriptor_k__BackingField = value;
}
constexpr ::System::ComponentModel::ListSortDirection& System::ComponentModel::ListSortDescription::__cordl_internal_get__SortDirection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortDirection_k__BackingField;
}
constexpr ::System::ComponentModel::ListSortDirection const& System::ComponentModel::ListSortDescription::__cordl_internal_get__SortDirection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortDirection_k__BackingField;
}
constexpr void System::ComponentModel::ListSortDescription::__cordl_internal_set__SortDirection_k__BackingField(::System::ComponentModel::ListSortDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortDirection_k__BackingField = value;
}
inline void System::ComponentModel::ListSortDescription::_ctor(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, direction);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ListSortDescription::get_PropertyDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"get_PropertyDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescription::set_PropertyDescriptor(::System::ComponentModel::PropertyDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"set_PropertyDescriptor", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ListSortDirection System::ComponentModel::ListSortDescription::get_SortDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"get_SortDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescription::set_SortDirection(::System::ComponentModel::ListSortDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescription*>(),
                        {"set_SortDirection", {}, {::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ListSortDescription* System::ComponentModel::ListSortDescription::New_ctor(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ListSortDescription*>(property, direction));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListSortDescription::ListSortDescription()   {
}
