#pragma once
// IWYU pragma private; include "Meta/Conduit/IConduitDispatcher.hpp"
#include "Meta/Conduit/zzzz__IConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__IParameterProvider_def.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::IConduitDispatcher.get_Manifest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Conduit::Manifest* (::Meta::Conduit::IConduitDispatcher::*)()>(&::Meta::Conduit::IConduitDispatcher::get_Manifest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(),
                    {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IConduitDispatcher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Conduit::IConduitDispatcher::*)(::StringW)>(&::Meta::Conduit::IConduitDispatcher::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(),
                    {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IConduitDispatcher.InvokeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::IConduitDispatcher::*)(::Meta::Conduit::IParameterProvider*, ::StringW, bool, float_t, bool)>(&::Meta::Conduit::IConduitDispatcher::InvokeAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(),
                    {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Conduit::Manifest* Meta::Conduit::IConduitDispatcher::get_Manifest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Conduit::Manifest*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Conduit::IConduitDispatcher::Initialize(::StringW  manifestFilePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, manifestFilePath);
}
inline bool Meta::Conduit::IConduitDispatcher::InvokeAction(::Meta::Conduit::IParameterProvider*  parameterProvider, ::StringW  actionId, bool  relaxed, float_t  confidence, bool  partial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IConduitDispatcher*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parameterProvider, actionId, relaxed, confidence, partial);
}
