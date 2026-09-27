#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/NativeClientFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__NativeClientFactory_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__INativeClient_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::NativeClientFactory.CreateNativeClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Runtime::Native::INativeClient* (*)(::Backtrace::Unity::Model::BacktraceConfiguration*, ::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Backtrace::Unity::Runtime::Native::NativeClientFactory::CreateNativeClient)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5efe8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::NativeClientFactory*>(),
                        {"CreateNativeClient", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Backtrace::Unity::Runtime::Native::INativeClient* Backtrace::Unity::Runtime::Native::NativeClientFactory::CreateNativeClient(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::StringW  gameObjectName, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes, ::System::Collections::Generic::ICollection_1<::StringW>*  attachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::NativeClientFactory*>(),
                        {"CreateNativeClient", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Runtime::Native::INativeClient*>(nullptr, ___internal_method, configuration, gameObjectName, breadcrumbs, attributes, attachments);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Runtime::Native::NativeClientFactory::NativeClientFactory()   {
}
