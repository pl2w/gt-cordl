#pragma once
// IWYU pragma private; include "System/ComponentModel/ISupportInitialize.hpp"
#include "System/ComponentModel/zzzz__ISupportInitialize_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ISupportInitialize.BeginInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ISupportInitialize::*)()>(&::System::ComponentModel::ISupportInitialize::BeginInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(),
                    {::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISupportInitialize.EndInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ISupportInitialize::*)()>(&::System::ComponentModel::ISupportInitialize::EndInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(),
                    {::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ISupportInitialize::BeginInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ISupportInitialize::EndInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISupportInitialize*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
