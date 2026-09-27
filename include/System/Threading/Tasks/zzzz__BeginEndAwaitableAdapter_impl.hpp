#pragma once
// IWYU pragma private; include "System/Threading/Tasks/BeginEndAwaitableAdapter.hpp"
#include "System/Threading/Tasks/zzzz__RendezvousAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__BeginEndAwaitableAdapter_def.hpp"
#include "System/Threading/Tasks/zzzz__BeginEndAwaitableAdapter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::BeginEndAwaitableAdapter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::BeginEndAwaitableAdapter::*)()>(&::System::Threading::Tasks::BeginEndAwaitableAdapter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa357b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::BeginEndAwaitableAdapter::setStaticF_Callback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "Callback", ::System::Threading::Tasks::BeginEndAwaitableAdapter*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Threading::Tasks::BeginEndAwaitableAdapter::getStaticF_Callback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "Callback", ::System::Threading::Tasks::BeginEndAwaitableAdapter*>();
}
inline void System::Threading::Tasks::BeginEndAwaitableAdapter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::BeginEndAwaitableAdapter* System::Threading::Tasks::BeginEndAwaitableAdapter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::BeginEndAwaitableAdapter*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::BeginEndAwaitableAdapter::BeginEndAwaitableAdapter()   {
}
//  Writing Method size for method: ::System::Threading::Tasks::BeginEndAwaitableAdapter___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::BeginEndAwaitableAdapter___c::*)()>(&::System::Threading::Tasks::BeginEndAwaitableAdapter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa357cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::BeginEndAwaitableAdapter___c.__cctor_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::BeginEndAwaitableAdapter___c::*)(::System::IAsyncResult*)>(&::System::Threading::Tasks::BeginEndAwaitableAdapter___c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa357cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(),
                        {"<.cctor>b__2_0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::BeginEndAwaitableAdapter___c::setStaticF___9(::System::Threading::Tasks::BeginEndAwaitableAdapter___c*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*, "<>9", ::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(std::forward<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(value));
}
inline ::System::Threading::Tasks::BeginEndAwaitableAdapter___c* System::Threading::Tasks::BeginEndAwaitableAdapter___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*, "<>9", ::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>();
}
inline void System::Threading::Tasks::BeginEndAwaitableAdapter___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::BeginEndAwaitableAdapter___c::__cctor_b__2_0(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>(),
                        {"<.cctor>b__2_0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::BeginEndAwaitableAdapter___c* System::Threading::Tasks::BeginEndAwaitableAdapter___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::BeginEndAwaitableAdapter___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::BeginEndAwaitableAdapter___c::BeginEndAwaitableAdapter___c()   {
}
