#pragma once
// IWYU pragma private; include "Mono/RuntimeClassHandle.hpp"
#include "Mono/zzzz__RuntimeClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_MonoClass_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeClassHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::RuntimeClassHandle::*)(::GlobalNamespace::RuntimeStructs_MonoClass*)>(&::Mono::RuntimeClassHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa10e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RuntimeStructs_MonoClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::RuntimeClassHandle::*)(::System::IntPtr)>(&::Mono::RuntimeClassHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa10e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RuntimeStructs_MonoClass* (::Mono::RuntimeClassHandle::*)()>(&::Mono::RuntimeClassHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa10e0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::RuntimeClassHandle::*)(::System::Object*)>(&::Mono::RuntimeClassHandle::Equals)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa10e0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                    {::i2c::class_of<::Mono::RuntimeClassHandle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::RuntimeClassHandle::*)()>(&::Mono::RuntimeClassHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa10e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                    {::i2c::class_of<::Mono::RuntimeClassHandle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle.GetTypeFromClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::GlobalNamespace::RuntimeStructs_MonoClass*)>(&::Mono::RuntimeClassHandle::GetTypeFromClass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"GetTypeFromClass", {}, {::i2c::type_of<::GlobalNamespace::RuntimeStructs_MonoClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeClassHandle.GetTypeHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::Mono::RuntimeClassHandle::*)()>(&::Mono::RuntimeClassHandle::GetTypeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa10e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"GetTypeHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::RuntimeClassHandle::_ctor(::GlobalNamespace::RuntimeStructs_MonoClass*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RuntimeStructs_MonoClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Mono::RuntimeClassHandle::_ctor(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline ::GlobalNamespace::RuntimeStructs_MonoClass* Mono::RuntimeClassHandle::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RuntimeStructs_MonoClass*>(*this, ___internal_method);
}
inline bool Mono::RuntimeClassHandle::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::RuntimeClassHandle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Mono::RuntimeClassHandle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::RuntimeClassHandle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::IntPtr Mono::RuntimeClassHandle::GetTypeFromClass(::GlobalNamespace::RuntimeStructs_MonoClass*  klass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"GetTypeFromClass", {}, {::i2c::type_of<::GlobalNamespace::RuntimeStructs_MonoClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, klass);
}
inline ::System::RuntimeTypeHandle Mono::RuntimeClassHandle::GetTypeHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::RuntimeClassHandle>(),
                        {"GetTypeHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Mono::RuntimeClassHandle::RuntimeClassHandle(::GlobalNamespace::RuntimeStructs_MonoClass*  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeClassHandle::RuntimeClassHandle()   {
}
