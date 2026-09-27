#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateInsecure1ConfigResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateInsecure1ConfigResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipTitleEnvironment_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x537f0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateInsecure1ConfigResponse*)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x537f188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateInsecure1ConfigResponse*)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x537f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)(bool)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x537f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)(::StringW)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x537f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateInsecure1ConfigResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x537f4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.set_env
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)(::GlobalNamespace::MothershipTitleEnvironment*)>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::set_env)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x537f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"set_env", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleEnvironment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse.get_env
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipTitleEnvironment* (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)()>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::get_env)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x537f6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"get_env", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateInsecure1ConfigResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateInsecure1ConfigResponse::*)()>(&::GlobalNamespace::UpdateInsecure1ConfigResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x537f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UpdateInsecure1ConfigResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UpdateInsecure1ConfigResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UpdateInsecure1ConfigResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UpdateInsecure1ConfigResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateInsecure1ConfigResponse::getCPtr(::GlobalNamespace::UpdateInsecure1ConfigResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateInsecure1ConfigResponse::swigRelease(::GlobalNamespace::UpdateInsecure1ConfigResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UpdateInsecure1ConfigResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::UpdateInsecure1ConfigResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* GlobalNamespace::UpdateInsecure1ConfigResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UpdateInsecure1ConfigResponse::set_env(::GlobalNamespace::MothershipTitleEnvironment*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"set_env", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleEnvironment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipTitleEnvironment* GlobalNamespace::UpdateInsecure1ConfigResponse::get_env()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {"get_env", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipTitleEnvironment*>(this, ___internal_method);
}
inline void GlobalNamespace::UpdateInsecure1ConfigResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* GlobalNamespace::UpdateInsecure1ConfigResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateInsecure1ConfigResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UpdateInsecure1ConfigResponse* GlobalNamespace::UpdateInsecure1ConfigResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateInsecure1ConfigResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateInsecure1ConfigResponse::UpdateInsecure1ConfigResponse()   {
}
