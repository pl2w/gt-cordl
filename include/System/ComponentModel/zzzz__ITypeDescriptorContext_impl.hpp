#pragma once
// IWYU pragma private; include "System/ComponentModel/ITypeDescriptorContext.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::ITypeDescriptorContext::*)()>(&::System::ComponentModel::ITypeDescriptorContext::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(),
                    {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ITypeDescriptorContext::*)()>(&::System::ComponentModel::ITypeDescriptorContext::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(),
                    {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.get_PropertyDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ITypeDescriptorContext::*)()>(&::System::ComponentModel::ITypeDescriptorContext::get_PropertyDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(),
                    {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.OnComponentChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ITypeDescriptorContext::*)()>(&::System::ComponentModel::ITypeDescriptorContext::OnComponentChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(),
                    {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ITypeDescriptorContext.OnComponentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ITypeDescriptorContext::*)()>(&::System::ComponentModel::ITypeDescriptorContext::OnComponentChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(),
                    {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IContainer* System::ComponentModel::ITypeDescriptorContext::get_Container()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ITypeDescriptorContext::get_Instance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ITypeDescriptorContext::get_PropertyDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline bool System::ComponentModel::ITypeDescriptorContext::OnComponentChanging()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::ITypeDescriptorContext::OnComponentChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ITypeDescriptorContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr  System::ComponentModel::ITypeDescriptorContext::operator ::System::IServiceProvider*() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::ITypeDescriptorContext::i___System__IServiceProvider() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
