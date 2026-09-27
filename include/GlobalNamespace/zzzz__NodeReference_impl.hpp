#pragma once
// IWYU pragma private; include "GlobalNamespace/NodeReference.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NodeReference_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__Document_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__Value_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NodeReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)(::System::IntPtr, bool)>(&::GlobalNamespace::NodeReference::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x52d74a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::NodeReference*)>(&::GlobalNamespace::NodeReference::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52d7504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::NodeReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::NodeReference*)>(&::GlobalNamespace::NodeReference::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52d7544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::NodeReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)()>(&::GlobalNamespace::NodeReference::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x52d7648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                    {::i2c::class_of<::GlobalNamespace::NodeReference*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)()>(&::GlobalNamespace::NodeReference::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x52d75dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)(bool)>(&::GlobalNamespace::NodeReference::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x52d76d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                    {::i2c::class_of<::GlobalNamespace::NodeReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.set_node_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)(::StringW)>(&::GlobalNamespace::NodeReference::set_node_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52d7824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"set_node_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.get_node_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NodeReference::*)()>(&::GlobalNamespace::NodeReference::get_node_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52d78fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"get_node_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.ParseFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NodeReference::*)(::StringW)>(&::GlobalNamespace::NodeReference::ParseFromString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52d79d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"ParseFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NodeReference::*)(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*)>(&::GlobalNamespace::NodeReference::ToJson)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52d7ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"ToJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*>(), ::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodeReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodeReference::*)()>(&::GlobalNamespace::NodeReference::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52d7bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::NodeReference::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::NodeReference::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::NodeReference::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::NodeReference::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::NodeReference::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::NodeReference::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::NodeReference::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::NodeReference::getCPtr(::GlobalNamespace::NodeReference*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::NodeReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::NodeReference::swigRelease(::GlobalNamespace::NodeReference*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::NodeReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::NodeReference::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NodeReference*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NodeReference::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NodeReference::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NodeReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::NodeReference::set_node_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"set_node_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NodeReference::get_node_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"get_node_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NodeReference::ParseFromString(::StringW  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"ParseFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline bool GlobalNamespace::NodeReference::ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  nodeRef, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {"ToJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*>(), ::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeRef, body);
}
inline void GlobalNamespace::NodeReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NodeReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NodeReference* GlobalNamespace::NodeReference::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NodeReference*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::NodeReference* GlobalNamespace::NodeReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NodeReference*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::NodeReference::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NodeReference::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodeReference::NodeReference()   {
}
