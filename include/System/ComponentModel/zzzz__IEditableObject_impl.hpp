#pragma once
// IWYU pragma private; include "System/ComponentModel/IEditableObject.hpp"
#include "System/ComponentModel/zzzz__IEditableObject_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IEditableObject.BeginEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IEditableObject::*)()>(&::System::ComponentModel::IEditableObject::BeginEdit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IEditableObject*>(),
                    {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IEditableObject.EndEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IEditableObject::*)()>(&::System::ComponentModel::IEditableObject::EndEdit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IEditableObject*>(),
                    {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IEditableObject.CancelEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IEditableObject::*)()>(&::System::ComponentModel::IEditableObject::CancelEdit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IEditableObject*>(),
                    {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::IEditableObject::BeginEdit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::IEditableObject::EndEdit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::IEditableObject::CancelEdit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IEditableObject*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
