#pragma once
// IWYU pragma private; include "GlobalNamespace/ChangeCommitStatusOfOfferBindingsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ChangeCommitStatusOfOfferBindingsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__OfferBindingVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5275f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x527602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x527606c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)(bool)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5276108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)(::StringW)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5276274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5276358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)(::GlobalNamespace::OfferBindingVector*)>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5276470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::OfferBindingVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OfferBindingVector* (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)()>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5276560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::*)()>(&::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x527666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::setStaticF_Results_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Results_name", ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::getStaticF_Results_name()  {
return ::cordl_internals::getStaticField<::StringW, "Results_name", ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>();
}
inline void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::getCPtr(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::swigRelease(::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse* GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::set_Results(::GlobalNamespace::OfferBindingVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::OfferBindingVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OfferBindingVector* GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OfferBindingVector*>(this, ___internal_method);
}
inline void GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse* GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse* GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChangeCommitStatusOfOfferBindingsResponse::ChangeCommitStatusOfOfferBindingsResponse()   {
}
