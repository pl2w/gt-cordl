#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerQuestBeginLoginV2Response.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerQuestBeginLoginV2Response_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)(::System::IntPtr, bool)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x52f4fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PlayerQuestBeginLoginV2Response*)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52f505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::PlayerQuestBeginLoginV2Response*)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x52f509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)(bool)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52f5138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.set_AttestationNonce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)(::StringW)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::set_AttestationNonce)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52f52a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"set_AttestationNonce", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.get_AttestationNonce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)()>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::get_AttestationNonce)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52f537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"get_AttestationNonce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)(::StringW)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52f5450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerQuestBeginLoginV2Response* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x52f5534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerQuestBeginLoginV2Response._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerQuestBeginLoginV2Response::*)()>(&::GlobalNamespace::PlayerQuestBeginLoginV2Response::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52f564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::PlayerQuestBeginLoginV2Response::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::PlayerQuestBeginLoginV2Response::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::PlayerQuestBeginLoginV2Response::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::PlayerQuestBeginLoginV2Response::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PlayerQuestBeginLoginV2Response::getCPtr(::GlobalNamespace::PlayerQuestBeginLoginV2Response*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::PlayerQuestBeginLoginV2Response::swigRelease(::GlobalNamespace::PlayerQuestBeginLoginV2Response*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::PlayerQuestBeginLoginV2Response::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::PlayerQuestBeginLoginV2Response::set_AttestationNonce(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"set_AttestationNonce", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerQuestBeginLoginV2Response::get_AttestationNonce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"get_AttestationNonce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerQuestBeginLoginV2Response::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::PlayerQuestBeginLoginV2Response* GlobalNamespace::PlayerQuestBeginLoginV2Response::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::PlayerQuestBeginLoginV2Response::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerQuestBeginLoginV2Response* GlobalNamespace::PlayerQuestBeginLoginV2Response::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::PlayerQuestBeginLoginV2Response* GlobalNamespace::PlayerQuestBeginLoginV2Response::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerQuestBeginLoginV2Response::PlayerQuestBeginLoginV2Response()   {
}
