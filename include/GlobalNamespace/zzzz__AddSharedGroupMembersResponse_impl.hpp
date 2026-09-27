#pragma once
// IWYU pragma private; include "GlobalNamespace/AddSharedGroupMembersResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__AddSharedGroupMembersResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddSharedGroupMembersResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::AddSharedGroupMembersResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5263400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AddSharedGroupMembersResponse*)>(&::GlobalNamespace::AddSharedGroupMembersResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52634b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AddSharedGroupMembersResponse*)>(&::GlobalNamespace::AddSharedGroupMembersResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x52634f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddSharedGroupMembersResponse::*)(bool)>(&::GlobalNamespace::AddSharedGroupMembersResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5263590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AddSharedGroupMembersResponse::*)(::StringW)>(&::GlobalNamespace::AddSharedGroupMembersResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52636fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AddSharedGroupMembersResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::AddSharedGroupMembersResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x52637e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddSharedGroupMembersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddSharedGroupMembersResponse::*)()>(&::GlobalNamespace::AddSharedGroupMembersResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52638f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::AddSharedGroupMembersResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::AddSharedGroupMembersResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::AddSharedGroupMembersResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::AddSharedGroupMembersResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AddSharedGroupMembersResponse::getCPtr(::GlobalNamespace::AddSharedGroupMembersResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AddSharedGroupMembersResponse::swigRelease(::GlobalNamespace::AddSharedGroupMembersResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AddSharedGroupMembersResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::AddSharedGroupMembersResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::AddSharedGroupMembersResponse* GlobalNamespace::AddSharedGroupMembersResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AddSharedGroupMembersResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::AddSharedGroupMembersResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddSharedGroupMembersResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AddSharedGroupMembersResponse* GlobalNamespace::AddSharedGroupMembersResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddSharedGroupMembersResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::AddSharedGroupMembersResponse* GlobalNamespace::AddSharedGroupMembersResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddSharedGroupMembersResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddSharedGroupMembersResponse::AddSharedGroupMembersResponse()   {
}
