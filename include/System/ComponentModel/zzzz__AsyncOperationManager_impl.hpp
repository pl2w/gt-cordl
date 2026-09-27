#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncOperationManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__AsyncOperationManager_def.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AsyncOperationManager.CreateOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AsyncOperation* (*)(::System::Object*)>(&::System::ComponentModel::AsyncOperationManager::CreateOperation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad453e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"CreateOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperationManager.get_SynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::System::ComponentModel::AsyncOperationManager::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad453fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperationManager.set_SynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&::System::ComponentModel::AsyncOperationManager::set_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"set_SynchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::AsyncOperation* System::ComponentModel::AsyncOperationManager::CreateOperation(::System::Object*  userSuppliedState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"CreateOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AsyncOperation*>(nullptr, ___internal_method, userSuppliedState);
}
inline ::System::Threading::SynchronizationContext* System::ComponentModel::AsyncOperationManager::get_SynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline void System::ComponentModel::AsyncOperationManager::set_SynchronizationContext(::System::Threading::SynchronizationContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperationManager*>(),
                        {"set_SynchronizationContext", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AsyncOperationManager::AsyncOperationManager()   {
}
