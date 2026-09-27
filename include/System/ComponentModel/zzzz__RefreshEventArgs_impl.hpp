#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RefreshEventArgs::*)(::System::Object*)>(&::System::ComponentModel::RefreshEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xad692c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RefreshEventArgs::*)(::System::Type*)>(&::System::ComponentModel::RefreshEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad69360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs.get_ComponentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::RefreshEventArgs::*)()>(&::System::ComponentModel::RefreshEventArgs::get_ComponentChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad693d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {"get_ComponentChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs.get_TypeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::RefreshEventArgs::*)()>(&::System::ComponentModel::RefreshEventArgs::get_TypeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad693dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {"get_TypeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__ComponentChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComponentChanged_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__ComponentChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComponentChanged_k__BackingField;
}
constexpr void System::ComponentModel::RefreshEventArgs::__cordl_internal_set__ComponentChanged_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ComponentChanged_k__BackingField = value;
}
constexpr ::System::Type*& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeChanged_k__BackingField;
}
constexpr ::System::Type* const& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeChanged_k__BackingField;
}
constexpr void System::ComponentModel::RefreshEventArgs::__cordl_internal_set__TypeChanged_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TypeChanged_k__BackingField = value;
}
inline void System::ComponentModel::RefreshEventArgs::_ctor(::System::Object*  componentChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentChanged);
}
inline void System::ComponentModel::RefreshEventArgs::_ctor(::System::Type*  typeChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeChanged);
}
inline ::System::Object* System::ComponentModel::RefreshEventArgs::get_ComponentChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {"get_ComponentChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::RefreshEventArgs::get_TypeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(),
                        {"get_TypeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::ComponentModel::RefreshEventArgs* System::ComponentModel::RefreshEventArgs::New_ctor(::System::Object*  componentChanged)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RefreshEventArgs*>(componentChanged));
}
inline ::System::ComponentModel::RefreshEventArgs* System::ComponentModel::RefreshEventArgs::New_ctor(::System::Type*  typeChanged)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RefreshEventArgs*>(typeChanged));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshEventArgs::RefreshEventArgs()   {
}
