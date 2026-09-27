#pragma once
// IWYU pragma private; include "GlobalNamespace/ListProgressionTracksResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ListProgressionTracksResponse_def.hpp"
#include "GlobalNamespace/zzzz__HydratedTrackVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListProgressionTracksResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ListProgressionTracksResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x54720d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ListProgressionTracksResponse*)>(&::GlobalNamespace::ListProgressionTracksResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x547218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ListProgressionTracksResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ListProgressionTracksResponse*)>(&::GlobalNamespace::ListProgressionTracksResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x54721cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ListProgressionTracksResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListProgressionTracksResponse::*)(bool)>(&::GlobalNamespace::ListProgressionTracksResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5472268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ListProgressionTracksResponse::*)(::StringW)>(&::GlobalNamespace::ListProgressionTracksResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x54723d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ListProgressionTracksResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ListProgressionTracksResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x54724b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListProgressionTracksResponse::*)(::GlobalNamespace::HydratedTrackVector*)>(&::GlobalNamespace::ListProgressionTracksResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x54725d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::HydratedTrackVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HydratedTrackVector* (::GlobalNamespace::ListProgressionTracksResponse::*)()>(&::GlobalNamespace::ListProgressionTracksResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x54726c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListProgressionTracksResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListProgressionTracksResponse::*)()>(&::GlobalNamespace::ListProgressionTracksResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x54727cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ListProgressionTracksResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ListProgressionTracksResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ListProgressionTracksResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ListProgressionTracksResponse::setStaticF_Results_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Results_name", ::GlobalNamespace::ListProgressionTracksResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::ListProgressionTracksResponse::getStaticF_Results_name()  {
return ::cordl_internals::getStaticField<::StringW, "Results_name", ::GlobalNamespace::ListProgressionTracksResponse*>();
}
inline void GlobalNamespace::ListProgressionTracksResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ListProgressionTracksResponse::getCPtr(::GlobalNamespace::ListProgressionTracksResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ListProgressionTracksResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ListProgressionTracksResponse::swigRelease(::GlobalNamespace::ListProgressionTracksResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ListProgressionTracksResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ListProgressionTracksResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::ListProgressionTracksResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ListProgressionTracksResponse* GlobalNamespace::ListProgressionTracksResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ListProgressionTracksResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ListProgressionTracksResponse::set_Results(::GlobalNamespace::HydratedTrackVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::HydratedTrackVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HydratedTrackVector* GlobalNamespace::ListProgressionTracksResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HydratedTrackVector*>(this, ___internal_method);
}
inline void GlobalNamespace::ListProgressionTracksResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListProgressionTracksResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ListProgressionTracksResponse* GlobalNamespace::ListProgressionTracksResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListProgressionTracksResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ListProgressionTracksResponse* GlobalNamespace::ListProgressionTracksResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListProgressionTracksResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListProgressionTracksResponse::ListProgressionTracksResponse()   {
}
