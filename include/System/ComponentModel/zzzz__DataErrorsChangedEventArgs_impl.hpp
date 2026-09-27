#pragma once
// IWYU pragma private; include "System/ComponentModel/DataErrorsChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__DataErrorsChangedEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DataErrorsChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DataErrorsChangedEventArgs::*)(::StringW)>(&::System::ComponentModel::DataErrorsChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad6bfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataErrorsChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataErrorsChangedEventArgs.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DataErrorsChangedEventArgs::*)()>(&::System::ComponentModel::DataErrorsChangedEventArgs::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataErrorsChangedEventArgs*>(),
                    {::i2c::class_of<::System::ComponentModel::DataErrorsChangedEventArgs*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DataErrorsChangedEventArgs::__cordl_internal_get__propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr ::StringW const& System::ComponentModel::DataErrorsChangedEventArgs::__cordl_internal_get__propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr void System::ComponentModel::DataErrorsChangedEventArgs::__cordl_internal_set__propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyName = value;
}
inline void System::ComponentModel::DataErrorsChangedEventArgs::_ctor(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataErrorsChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline ::StringW System::ComponentModel::DataErrorsChangedEventArgs::get_PropertyName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataErrorsChangedEventArgs*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::DataErrorsChangedEventArgs* System::ComponentModel::DataErrorsChangedEventArgs::New_ctor(::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DataErrorsChangedEventArgs*>(propertyName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DataErrorsChangedEventArgs::DataErrorsChangedEventArgs()   {
}
