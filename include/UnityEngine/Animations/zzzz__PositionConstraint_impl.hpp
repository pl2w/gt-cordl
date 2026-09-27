#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PositionConstraint.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Animations/zzzz__PositionConstraint_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Animations/zzzz__ConstraintSource_def.hpp"
#include "UnityEngine/Animations/zzzz__IConstraintInternal_def.hpp"
#include "UnityEngine/Animations/zzzz__IConstraint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::PositionConstraint::*)()>(&::UnityEngine::Animations::PositionConstraint::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::PositionConstraint*)>(&::UnityEngine::Animations::PositionConstraint::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb54e944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.set_translationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::PositionConstraint::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animations::PositionConstraint::set_translationOffset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb54e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_translationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.set_constraintActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::PositionConstraint::*)(bool)>(&::UnityEngine::Animations::PositionConstraint::set_constraintActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb54ea54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_constraintActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.AddSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::PositionConstraint::*)(::UnityEngine::Animations::ConstraintSource)>(&::UnityEngine::Animations::PositionConstraint::AddSource)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb54eb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"AddSource", {}, {::i2c::type_of<::UnityEngine::Animations::ConstraintSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.set_translationOffset_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animations::PositionConstraint::set_translationOffset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54ea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_translationOffset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.set_constraintActive_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animations::PositionConstraint::set_constraintActive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54ead4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_constraintActive_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::PositionConstraint.AddSource_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Animations::ConstraintSource>)>(&::UnityEngine::Animations::PositionConstraint::AddSource_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54eba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"AddSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::ConstraintSource>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::PositionConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::PositionConstraint::Internal_Create(/* [Writable] */ ::UnityEngine::Animations::PositionConstraint*  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Animations::PositionConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline void UnityEngine::Animations::PositionConstraint::set_translationOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_translationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animations::PositionConstraint::set_constraintActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_constraintActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Animations::PositionConstraint::AddSource(::UnityEngine::Animations::ConstraintSource  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"AddSource", {}, {::i2c::type_of<::UnityEngine::Animations::ConstraintSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source);
}
inline void UnityEngine::Animations::PositionConstraint::set_translationOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_translationOffset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animations::PositionConstraint::set_constraintActive_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"set_constraintActive_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Animations::PositionConstraint::AddSource_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Animations::ConstraintSource>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::PositionConstraint*>(),
                        {"AddSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::ConstraintSource>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, source);
}
inline ::UnityEngine::Animations::PositionConstraint* UnityEngine::Animations::PositionConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::PositionConstraint*>());
}
/// @brief Convert operator to "::UnityEngine::Animations::IConstraint"
constexpr  UnityEngine::Animations::PositionConstraint::operator ::UnityEngine::Animations::IConstraint*() noexcept {
return static_cast<::UnityEngine::Animations::IConstraint*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Animations::IConstraint"
constexpr ::UnityEngine::Animations::IConstraint* UnityEngine::Animations::PositionConstraint::i___UnityEngine__Animations__IConstraint() noexcept {
return static_cast<::UnityEngine::Animations::IConstraint*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Animations::IConstraintInternal"
constexpr  UnityEngine::Animations::PositionConstraint::operator ::UnityEngine::Animations::IConstraintInternal*() noexcept {
return static_cast<::UnityEngine::Animations::IConstraintInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Animations::IConstraintInternal"
constexpr ::UnityEngine::Animations::IConstraintInternal* UnityEngine::Animations::PositionConstraint::i___UnityEngine__Animations__IConstraintInternal() noexcept {
return static_cast<::UnityEngine::Animations::IConstraintInternal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::PositionConstraint::PositionConstraint()   {
}
