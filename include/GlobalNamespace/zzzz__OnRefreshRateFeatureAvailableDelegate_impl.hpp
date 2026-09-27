#pragma once
// IWYU pragma private; include "GlobalNamespace/OnRefreshRateFeatureAvailableDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__OnRefreshRateFeatureAvailableDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb93a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::*)()>(&::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb93a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb93a6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb93a6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate* GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate::OnRefreshRateFeatureAvailableDelegate()   {
}
