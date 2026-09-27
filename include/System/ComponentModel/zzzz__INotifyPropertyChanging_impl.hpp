#pragma once
// IWYU pragma private; include "System/ComponentModel/INotifyPropertyChanging.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanging_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangingEventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanging.add_PropertyChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::INotifyPropertyChanging::*)(::System::ComponentModel::PropertyChangingEventHandler*)>(&::System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(),
                    {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanging.remove_PropertyChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::INotifyPropertyChanging::*)(::System::ComponentModel::PropertyChangingEventHandler*)>(&::System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(),
                    {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanging*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
