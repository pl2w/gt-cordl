#pragma once
// IWYU pragma private; include "UnityEngine/Avatar.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Avatar_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__HumanDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::Avatar.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Avatar::*)()>(&::UnityEngine::Avatar::get_isValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb54631c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Avatar.get_isHuman
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Avatar::*)()>(&::UnityEngine::Avatar::get_isHuman)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb546394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isHuman", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Avatar.get_humanDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HumanDescription (::UnityEngine::Avatar::*)()>(&::UnityEngine::Avatar::get_humanDescription)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb549164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_humanDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Avatar.get_isValid_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Avatar::get_isValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5490ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isValid_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Avatar.get_isHuman_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Avatar::get_isHuman_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb549128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isHuman_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Avatar.get_humanDescription_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::HumanDescription>)>(&::UnityEngine::Avatar::get_humanDescription_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_humanDescription_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::HumanDescription>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Avatar::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Avatar::get_isHuman()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isHuman", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::HumanDescription UnityEngine::Avatar::get_humanDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_humanDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::HumanDescription>(this, ___internal_method);
}
inline bool UnityEngine::Avatar::get_isValid_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isValid_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Avatar::get_isHuman_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_isHuman_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Avatar::get_humanDescription_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::HumanDescription>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Avatar*>(),
                        {"get_humanDescription_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::HumanDescription>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Avatar::Avatar()   {
}
