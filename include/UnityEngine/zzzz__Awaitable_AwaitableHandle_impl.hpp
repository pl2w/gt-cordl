#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaitableHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableHandle.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Awaitable_AwaitableHandle::*)()>(&::GlobalNamespace::Awaitable_AwaitableHandle::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5da52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableHandle.get_IsManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Awaitable_AwaitableHandle::*)()>(&::GlobalNamespace::Awaitable_AwaitableHandle::get_IsManaged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb5da4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"get_IsManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Awaitable_AwaitableHandle::*)(::System::IntPtr)>(&::GlobalNamespace::Awaitable_AwaitableHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5db388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableHandle.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::GlobalNamespace::Awaitable_AwaitableHandle)>(&::GlobalNamespace::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5db390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Awaitable_AwaitableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableHandle.op_Implicit___GlobalNamespace__Awaitable_AwaitableHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Awaitable_AwaitableHandle (*)(::System::IntPtr)>(&::GlobalNamespace::Awaitable_AwaitableHandle::op_Implicit___GlobalNamespace__Awaitable_AwaitableHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Awaitable_AwaitableHandle::setStaticF_ManagedHandle(::GlobalNamespace::Awaitable_AwaitableHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Awaitable_AwaitableHandle, "ManagedHandle", ::GlobalNamespace::Awaitable_AwaitableHandle>(std::forward<::GlobalNamespace::Awaitable_AwaitableHandle>(value));
}
inline ::GlobalNamespace::Awaitable_AwaitableHandle GlobalNamespace::Awaitable_AwaitableHandle::getStaticF_ManagedHandle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Awaitable_AwaitableHandle, "ManagedHandle", ::GlobalNamespace::Awaitable_AwaitableHandle>();
}
inline void GlobalNamespace::Awaitable_AwaitableHandle::setStaticF_NullHandle(::GlobalNamespace::Awaitable_AwaitableHandle  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Awaitable_AwaitableHandle, "NullHandle", ::GlobalNamespace::Awaitable_AwaitableHandle>(std::forward<::GlobalNamespace::Awaitable_AwaitableHandle>(value));
}
inline ::GlobalNamespace::Awaitable_AwaitableHandle GlobalNamespace::Awaitable_AwaitableHandle::getStaticF_NullHandle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Awaitable_AwaitableHandle, "NullHandle", ::GlobalNamespace::Awaitable_AwaitableHandle>();
}
inline bool GlobalNamespace::Awaitable_AwaitableHandle::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::Awaitable_AwaitableHandle::get_IsManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"get_IsManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::Awaitable_AwaitableHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::System::IntPtr GlobalNamespace::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr(::GlobalNamespace::Awaitable_AwaitableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Awaitable_AwaitableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline ::GlobalNamespace::Awaitable_AwaitableHandle GlobalNamespace::Awaitable_AwaitableHandle::op_Implicit___GlobalNamespace__Awaitable_AwaitableHandle(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Awaitable_AwaitableHandle>(nullptr, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle(::System::IntPtr  _handle) noexcept  {
this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle()   {
}
