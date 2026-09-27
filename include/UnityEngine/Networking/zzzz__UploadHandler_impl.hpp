#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandler.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.ReleaseFromScripting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::ReleaseFromScripting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92c618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb92c6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::Finalize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb92c6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb92c738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::get_data)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb92c758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.get_contentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::get_contentType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb92c764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"get_contentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.set_contentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)(::StringW)>(&::UnityEngine::Networking::UploadHandler::set_contentType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb92b9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"set_contentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::GetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb92c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.GetContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::GetContentType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb92c778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.SetContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)(::StringW)>(&::UnityEngine::Networking::UploadHandler::SetContentType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb92c87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.InternalGetContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UploadHandler::*)()>(&::UnityEngine::Networking::UploadHandler::InternalGetContentType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb92c77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalGetContentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.InternalSetContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandler::*)(::StringW)>(&::UnityEngine::Networking::UploadHandler::InternalSetContentType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb92c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalSetContentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.ReleaseFromScripting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::UploadHandler::ReleaseFromScripting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92c668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.InternalGetContentType_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UploadHandler::InternalGetContentType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalGetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler.InternalSetContentType_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UploadHandler::InternalSetContentType_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalSetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Networking::UploadHandler::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Networking::UploadHandler::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::UploadHandler::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline void UnityEngine::Networking::UploadHandler::ReleaseFromScripting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"ReleaseFromScripting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::UploadHandler::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UploadHandler::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"get_contentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::set_contentType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"set_contentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::UploadHandler::GetData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UploadHandler::GetContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::SetContentType(::StringW  newContentType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newContentType);
}
inline ::StringW UnityEngine::Networking::UploadHandler::InternalGetContentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalGetContentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UploadHandler::InternalSetContentType(::StringW  newContentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalSetContentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newContentType);
}
inline void UnityEngine::Networking::UploadHandler::ReleaseFromScripting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"ReleaseFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UploadHandler::InternalGetContentType_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalGetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Networking::UploadHandler::InternalSetContentType_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  newContentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler*>(),
                        {"InternalSetContentType_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, newContentType);
}
inline ::UnityEngine::Networking::UploadHandler* UnityEngine::Networking::UploadHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UploadHandler*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Networking::UploadHandler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Networking::UploadHandler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UploadHandler::UploadHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandler_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UploadHandler_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb92ca98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::UploadHandler_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::UploadHandler*  uploadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandler_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, uploadHandler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UploadHandler_BindingsMarshaller::UploadHandler_BindingsMarshaller()   {
}
