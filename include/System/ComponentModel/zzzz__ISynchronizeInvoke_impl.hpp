#pragma once
// IWYU pragma private; include "System/ComponentModel/ISynchronizeInvoke.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ISynchronizeInvoke.get_InvokeRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ISynchronizeInvoke::*)()>(&::System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(),
                    {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISynchronizeInvoke.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::ComponentModel::ISynchronizeInvoke::*)(::System::Delegate*, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::ISynchronizeInvoke::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(),
                    {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISynchronizeInvoke.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ISynchronizeInvoke::*)(::System::IAsyncResult*)>(&::System::ComponentModel::ISynchronizeInvoke::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(),
                    {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISynchronizeInvoke.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ISynchronizeInvoke::*)(::System::Delegate*, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::ISynchronizeInvoke::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(),
                    {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::ComponentModel::ISynchronizeInvoke::BeginInvoke(::System::Delegate*  method, ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, method, args);
}
inline ::System::Object* System::ComponentModel::ISynchronizeInvoke::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::System::Object* System::ComponentModel::ISynchronizeInvoke::Invoke(::System::Delegate*  method, ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISynchronizeInvoke*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, method, args);
}
