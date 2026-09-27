#pragma once
// IWYU pragma private; include "UnityEngine/ResourceRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceRequest.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::GetResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5d5c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                    {::i2c::class_of<::UnityEngine::ResourceRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceRequest.get_asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::get_asset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5d5ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {"get_asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5d5cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceRequest::*)(::System::IntPtr)>(&::UnityEngine::ResourceRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5d5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ResourceRequest::__cordl_internal_get_m_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr ::StringW const& UnityEngine::ResourceRequest::__cordl_internal_get_m_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr void UnityEngine::ResourceRequest::__cordl_internal_set_m_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Path = value;
}
constexpr ::System::Type*& UnityEngine::ResourceRequest::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::System::Type* const& UnityEngine::ResourceRequest::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::ResourceRequest::__cordl_internal_set_m_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::ResourceRequest::GetResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourceRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::ResourceRequest::get_asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {"get_asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::ResourceRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceRequest::_ctor(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline ::UnityEngine::ResourceRequest* UnityEngine::ResourceRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceRequest*>());
}
inline ::UnityEngine::ResourceRequest* UnityEngine::ResourceRequest::New_ctor(::System::IntPtr  ptr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceRequest*>(ptr));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceRequest::ResourceRequest()   {
}
//  Writing Method size for method: ::UnityEngine::ResourceRequest_BindingsMarshaller.ConvertToManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceRequest* (*)(::System::IntPtr)>(&::UnityEngine::ResourceRequest_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb5d5d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest_BindingsMarshaller*>(),
                        {"ConvertToManaged", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceRequest* UnityEngine::ResourceRequest_BindingsMarshaller::ConvertToManaged(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceRequest_BindingsMarshaller*>(),
                        {"ConvertToManaged", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceRequest*>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceRequest_BindingsMarshaller::ResourceRequest_BindingsMarshaller()   {
}
