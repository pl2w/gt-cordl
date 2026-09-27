#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ProgressUpdateDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ProgressUpdateDelegate::*)(::System::Object*, ::System::IntPtr)>(&::DigitalOpus::MB::Core::ProgressUpdateDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d7e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ProgressUpdateDelegate::*)(::StringW, float_t)>(&::DigitalOpus::MB::Core::ProgressUpdateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d7e824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::DigitalOpus::MB::Core::ProgressUpdateDelegate::*)(::StringW, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::DigitalOpus::MB::Core::ProgressUpdateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d7e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ProgressUpdateDelegate::*)(::System::IAsyncResult*)>(&::DigitalOpus::MB::Core::ProgressUpdateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d7e898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::ProgressUpdateDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void DigitalOpus::MB::Core::ProgressUpdateDelegate::Invoke(::StringW  msg, float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, progress);
}
inline ::System::IAsyncResult* DigitalOpus::MB::Core::ProgressUpdateDelegate::BeginInvoke(::StringW  msg, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, msg, progress, callback, object);
}
inline void DigitalOpus::MB::Core::ProgressUpdateDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::DigitalOpus::MB::Core::ProgressUpdateDelegate* DigitalOpus::MB::Core::ProgressUpdateDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate::ProgressUpdateDelegate()   {
}
