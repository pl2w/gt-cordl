#pragma once
// IWYU pragma private; include "System/ComponentModel/ICancelAddNew.hpp"
#include "System/ComponentModel/zzzz__ICancelAddNew_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ICancelAddNew.CancelNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ICancelAddNew::*)(int32_t)>(&::System::ComponentModel::ICancelAddNew::CancelNew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(),
                    {::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ICancelAddNew.EndNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ICancelAddNew::*)(int32_t)>(&::System::ComponentModel::ICancelAddNew::EndNew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(),
                    {::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ICancelAddNew::CancelNew(int32_t  itemIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemIndex);
}
inline void System::ComponentModel::ICancelAddNew::EndNew(int32_t  itemIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ICancelAddNew*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemIndex);
}
