#pragma once
// IWYU pragma private; include "System/ComponentModel/IDataErrorInfo.hpp"
#include "System/ComponentModel/zzzz__IDataErrorInfo_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IDataErrorInfo.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::IDataErrorInfo::*)(::StringW)>(&::System::ComponentModel::IDataErrorInfo::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(),
                    {::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IDataErrorInfo.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::IDataErrorInfo::*)()>(&::System::ComponentModel::IDataErrorInfo::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(),
                    {::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::IDataErrorInfo::get_Item(::StringW  columnName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, columnName);
}
inline ::StringW System::ComponentModel::IDataErrorInfo::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IDataErrorInfo*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
