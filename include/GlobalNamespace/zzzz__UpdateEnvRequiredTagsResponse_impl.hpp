#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateEnvRequiredTagsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateEnvRequiredTagsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipTitleEnvironment_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5377c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateEnvRequiredTagsResponse*)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5377cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateEnvRequiredTagsResponse*)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5377cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)(bool)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5377d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)(::StringW)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5377efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateEnvRequiredTagsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5377fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.set_env
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)(::GlobalNamespace::MothershipTitleEnvironment*)>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::set_env)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53780f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"set_env", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleEnvironment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse.get_env
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipTitleEnvironment* (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)()>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::get_env)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53781e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"get_env", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateEnvRequiredTagsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateEnvRequiredTagsResponse::*)()>(&::GlobalNamespace::UpdateEnvRequiredTagsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53782f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UpdateEnvRequiredTagsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UpdateEnvRequiredTagsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UpdateEnvRequiredTagsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UpdateEnvRequiredTagsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateEnvRequiredTagsResponse::getCPtr(::GlobalNamespace::UpdateEnvRequiredTagsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateEnvRequiredTagsResponse::swigRelease(::GlobalNamespace::UpdateEnvRequiredTagsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UpdateEnvRequiredTagsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::UpdateEnvRequiredTagsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UpdateEnvRequiredTagsResponse* GlobalNamespace::UpdateEnvRequiredTagsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UpdateEnvRequiredTagsResponse::set_env(::GlobalNamespace::MothershipTitleEnvironment*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"set_env", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleEnvironment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipTitleEnvironment* GlobalNamespace::UpdateEnvRequiredTagsResponse::get_env()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {"get_env", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipTitleEnvironment*>(this, ___internal_method);
}
inline void GlobalNamespace::UpdateEnvRequiredTagsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpdateEnvRequiredTagsResponse* GlobalNamespace::UpdateEnvRequiredTagsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UpdateEnvRequiredTagsResponse* GlobalNamespace::UpdateEnvRequiredTagsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateEnvRequiredTagsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateEnvRequiredTagsResponse::UpdateEnvRequiredTagsResponse()   {
}
