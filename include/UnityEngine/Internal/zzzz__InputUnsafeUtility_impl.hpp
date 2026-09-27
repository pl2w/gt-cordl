#pragma once
// IWYU pragma private; include "UnityEngine/Internal/InputUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Internal/zzzz__InputUnsafeUtility_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetKeyString__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetKeyString__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb668228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetKeyUpString__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetKeyUpString__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyUpString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetKeyDownString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb66681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetKeyDownString__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb6682ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxis)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb665f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxis__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxis__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66836c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb66609c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxisRaw__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb6683ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButton)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb66620c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButton__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButton__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb66846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButtonDown)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb666384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButtonDown__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButtonDown__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb6684ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButtonUp__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButtonUp__Unmanaged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb668530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonUp__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetKeyDownString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6682b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxis_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxis_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb668330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetAxisRaw_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6683b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButton_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButton_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb668430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Internal::InputUnsafeUtility.GetButtonDown_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Internal::InputUnsafeUtility::GetButtonDown_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6684b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Internal::InputUnsafeUtility::GetKeyString__Unmanaged(uint8_t*  name, int32_t  nameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, nameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetKeyUpString__Unmanaged(uint8_t*  name, int32_t  nameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyUpString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, nameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString__Unmanaged(uint8_t*  name, int32_t  nameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, nameLen);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxis(::StringW  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxis__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName, axisNameLen);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw(::StringW  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName, axisNameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButton(::StringW  buttonName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButton__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName, buttonNameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButtonDown(::StringW  buttonName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
inline uint8_t UnityEngine::Internal::InputUnsafeUtility::GetButtonDown__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, buttonName, buttonNameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButtonUp__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonUp__Unmanaged", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName, buttonNameLen);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetKeyDownString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetKeyDownString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxis_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxis_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline float_t UnityEngine::Internal::InputUnsafeUtility::GetAxisRaw_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetAxisRaw_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButton_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButton_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
inline bool UnityEngine::Internal::InputUnsafeUtility::GetButtonDown_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Internal::InputUnsafeUtility*>(),
                        {"GetButtonDown_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal::InputUnsafeUtility::InputUnsafeUtility()   {
}
