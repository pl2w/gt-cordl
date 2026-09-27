#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ProgressUpdateCancelableDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateCancelableDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::System::Object*, ::System::IntPtr)>(&::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d7e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::StringW, float_t)>(&::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d7e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::StringW, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d7e96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::System::IAsyncResult*)>(&::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::Invoke(::StringW  msg, float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, msg, progress);
}
inline ::System::IAsyncResult* DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::BeginInvoke(::StringW  msg, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, msg, progress, callback, object);
}
inline bool DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::ProgressUpdateCancelableDelegate()   {
}
