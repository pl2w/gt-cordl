#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerScript.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerScript*)>(&::UnityEngine::Networking::DownloadHandlerScript::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9282f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandlerScript*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript.CreatePreallocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerScript*, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::DownloadHandlerScript::CreatePreallocated)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb928330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"CreatePreallocated", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandlerScript*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript.InternalCreateScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerScript::*)()>(&::UnityEngine::Networking::DownloadHandlerScript::InternalCreateScript)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb928374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"InternalCreateScript", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript.InternalCreateScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerScript::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Networking::DownloadHandlerScript::InternalCreateScript)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb9283b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"InternalCreateScript", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerScript::*)()>(&::UnityEngine::Networking::DownloadHandlerScript::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb928404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerScript._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerScript::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Networking::DownloadHandlerScript::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb928450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerScript::Create(/* [Unmarshalled] */ ::UnityEngine::Networking::DownloadHandlerScript*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandlerScript*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerScript::CreatePreallocated(/* [Unmarshalled] */ ::UnityEngine::Networking::DownloadHandlerScript*  obj, /* [Unmarshalled] */ ::ArrayW<uint8_t>  preallocatedBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"CreatePreallocated", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandlerScript*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, preallocatedBuffer);
}
inline void UnityEngine::Networking::DownloadHandlerScript::InternalCreateScript()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"InternalCreateScript", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerScript::InternalCreateScript(::ArrayW<uint8_t>  preallocatedBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {"InternalCreateScript", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preallocatedBuffer);
}
inline void UnityEngine::Networking::DownloadHandlerScript::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerScript::_ctor(::ArrayW<uint8_t>  preallocatedBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerScript*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preallocatedBuffer);
}
inline ::UnityEngine::Networking::DownloadHandlerScript* UnityEngine::Networking::DownloadHandlerScript::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerScript*>());
}
inline ::UnityEngine::Networking::DownloadHandlerScript* UnityEngine::Networking::DownloadHandlerScript::New_ctor(::ArrayW<uint8_t>  preallocatedBuffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerScript*>(preallocatedBuffer));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerScript::DownloadHandlerScript()   {
}
