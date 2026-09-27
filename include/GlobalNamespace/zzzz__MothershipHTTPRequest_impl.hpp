#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHTTPRequest.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPRequest_def.hpp"
#include "GlobalNamespace/zzzz__HeadersVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPVerbs_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_void_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipHTTPRequest::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x52a5244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipHTTPRequest*)>(&::GlobalNamespace::MothershipHTTPRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52a52a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipHTTPRequest*)>(&::GlobalNamespace::MothershipHTTPRequest::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52a52e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52a53e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x52a537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(bool)>(&::GlobalNamespace::MothershipHTTPRequest::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x52a5478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.set_RequestHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::GlobalNamespace::HeadersVector*)>(&::GlobalNamespace::MothershipHTTPRequest::set_RequestHeaders)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52a55c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_RequestHeaders", {}, {::i2c::type_of<::GlobalNamespace::HeadersVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.get_RequestHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HeadersVector* (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::get_RequestHeaders)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52a56b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_RequestHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.set_Body
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::StringW)>(&::GlobalNamespace::MothershipHTTPRequest::set_Body)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52a57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Body", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.get_Body
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::get_Body)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52a5898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Body", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.set_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::StringW)>(&::GlobalNamespace::MothershipHTTPRequest::set_Path)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52a596c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::get_Path)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52a5a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.set_Verb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::GlobalNamespace::MothershipHTTPVerbs)>(&::GlobalNamespace::MothershipHTTPRequest::set_Verb)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52a5b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Verb", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPVerbs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.get_Verb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipHTTPVerbs (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::get_Verb)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52a5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Verb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.set_cbData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)(::GlobalNamespace::SWIGTYPE_p_void*)>(&::GlobalNamespace::MothershipHTTPRequest::set_cbData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52a5cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_cbData", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest.get_cbData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_void* (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::get_cbData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52a5db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_cbData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHTTPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHTTPRequest::*)()>(&::GlobalNamespace::MothershipHTTPRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52a5ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipHTTPRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipHTTPRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipHTTPRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MothershipHTTPRequest::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MothershipHTTPRequest::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MothershipHTTPRequest::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MothershipHTTPRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipHTTPRequest::getCPtr(::GlobalNamespace::MothershipHTTPRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipHTTPRequest::swigRelease(::GlobalNamespace::MothershipHTTPRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipHTTPRequest::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipHTTPRequest::set_RequestHeaders(::GlobalNamespace::HeadersVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_RequestHeaders", {}, {::i2c::type_of<::GlobalNamespace::HeadersVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HeadersVector* GlobalNamespace::MothershipHTTPRequest::get_RequestHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_RequestHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HeadersVector*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::set_Body(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Body", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipHTTPRequest::get_Body()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Body", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::set_Path(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipHTTPRequest::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::set_Verb(::GlobalNamespace::MothershipHTTPVerbs  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_Verb", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPVerbs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipHTTPVerbs GlobalNamespace::MothershipHTTPRequest::get_Verb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_Verb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipHTTPVerbs>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::set_cbData(::GlobalNamespace::SWIGTYPE_p_void*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"set_cbData", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_void* GlobalNamespace::MothershipHTTPRequest::get_cbData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {"get_cbData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_void*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHTTPRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHTTPRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipHTTPRequest* GlobalNamespace::MothershipHTTPRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHTTPRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipHTTPRequest* GlobalNamespace::MothershipHTTPRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHTTPRequest*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipHTTPRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipHTTPRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHTTPRequest::MothershipHTTPRequest()   {
}
