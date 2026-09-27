#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/ProgressCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__ProgressCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::Acoustics::ProgressCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::ProgressCallback::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::Acoustics::ProgressCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ebf6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::ProgressCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::Acoustics::ProgressCallback::*)(::System::IntPtr, ::StringW, float_t)>(&::Meta::XR::Acoustics::ProgressCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ebf74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::ProgressCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::Acoustics::ProgressCallback::*)(::System::IntPtr, ::StringW, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::Acoustics::ProgressCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebf760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::ProgressCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::Acoustics::ProgressCallback::*)(::System::IAsyncResult*)>(&::Meta::XR::Acoustics::ProgressCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ebf7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::Acoustics::ProgressCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::Acoustics::ProgressCallback::Invoke(::System::IntPtr  userData, ::StringW  description, float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userData, description, progress);
}
inline ::System::IAsyncResult* Meta::XR::Acoustics::ProgressCallback::BeginInvoke(::System::IntPtr  userData, ::StringW  description, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, userData, description, progress, callback, object);
}
inline bool Meta::XR::Acoustics::ProgressCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::ProgressCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Meta::XR::Acoustics::ProgressCallback* Meta::XR::Acoustics::ProgressCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Acoustics::ProgressCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::ProgressCallback::ProgressCallback()   {
}
