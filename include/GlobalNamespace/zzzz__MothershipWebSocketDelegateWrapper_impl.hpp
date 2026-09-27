#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketDelegateWrapper.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipCloseWebSocketEventArgs_def.hpp"
#include "GlobalNamespace/zzzz__MothershipOpenWebSocketEventArgs_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x52d03f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipWebSocketDelegateWrapper*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52d0454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipWebSocketDelegateWrapper*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d0494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52d0598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x52d052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)(bool)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x52d0628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.CreateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)(::GlobalNamespace::MothershipOpenWebSocketEventArgs*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::CreateConnection)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52d0774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)(::GlobalNamespace::MothershipCloseWebSocketEventArgs*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::CloseConnection)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52d0870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x52d096c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.SwigDirectorConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorConnect)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x52d0a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.SwigDerivedClassHasMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper::*)(::StringW, ::ArrayW<::System::Type*>)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDerivedClassHasMethod)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x52d0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDerivedClassHasMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.SwigDirectorMethodCreateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorMethodCreateConnection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x52d02ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorMethodCreateConnection", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper.SwigDirectorMethodCloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorMethodCloseConnection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x52d0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorMethodCloseConnection", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigDelegate0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigDelegate0;
}
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0* const& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigDelegate0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigDelegate0;
}
constexpr void GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_set_swigDelegate0(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigDelegate0 = value;
}
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigDelegate1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigDelegate1;
}
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1* const& GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_get_swigDelegate1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigDelegate1;
}
constexpr void GlobalNamespace::MothershipWebSocketDelegateWrapper::__cordl_internal_set_swigDelegate1(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigDelegate1 = value;
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::setStaticF_selfInstance(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipWebSocketDelegateWrapper*, "selfInstance", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(std::forward<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(value));
}
inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* GlobalNamespace::MothershipWebSocketDelegateWrapper::getStaticF_selfInstance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipWebSocketDelegateWrapper*, "selfInstance", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>();
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "swigMethodTypes0", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> GlobalNamespace::MothershipWebSocketDelegateWrapper::getStaticF_swigMethodTypes0()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "swigMethodTypes0", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>();
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::setStaticF_swigMethodTypes1(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "swigMethodTypes1", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> GlobalNamespace::MothershipWebSocketDelegateWrapper::getStaticF_swigMethodTypes1()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "swigMethodTypes1", ::GlobalNamespace::MothershipWebSocketDelegateWrapper*>();
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipWebSocketDelegateWrapper::getCPtr(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipWebSocketDelegateWrapper::swigRelease(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper::CreateConnection(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper::CloseConnection(::GlobalNamespace::MothershipCloseWebSocketEventArgs*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDerivedClassHasMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, methodName, methodTypes);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorMethodCreateConnection(::System::IntPtr  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorMethodCreateConnection", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, request);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper::SwigDirectorMethodCloseConnection(::System::IntPtr  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(),
                        {"SwigDirectorMethodCloseConnection", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, request);
}
inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* GlobalNamespace::MothershipWebSocketDelegateWrapper::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* GlobalNamespace::MothershipWebSocketDelegateWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketDelegateWrapper*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipWebSocketDelegateWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipWebSocketDelegateWrapper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper::MothershipWebSocketDelegateWrapper()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x52d0f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x52d1234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x52d1248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x52d12a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::Invoke(::System::IntPtr  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::BeginInvoke(::System::IntPtr  request, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, callback, object);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1* GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x52d0ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x52d119c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x52d11b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x52d120c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::Invoke(::System::IntPtr  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::BeginInvoke(::System::IntPtr  request, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, callback, object);
}
inline bool GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0* GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0()   {
}
