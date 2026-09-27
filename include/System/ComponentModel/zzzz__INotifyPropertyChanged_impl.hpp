#pragma once
// IWYU pragma private; include "System/ComponentModel/INotifyPropertyChanged.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanged.add_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::INotifyPropertyChanged::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::System::ComponentModel::INotifyPropertyChanged::add_PropertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(),
                    {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanged.remove_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::INotifyPropertyChanged::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::System::ComponentModel::INotifyPropertyChanged::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(),
                    {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::INotifyPropertyChanged::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::INotifyPropertyChanged::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::INotifyPropertyChanged*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
