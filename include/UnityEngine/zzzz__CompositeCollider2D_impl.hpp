#pragma once
// IWYU pragma private; include "UnityEngine/CompositeCollider2D.hpp"
#include "UnityEngine/zzzz__Collider2D_impl.hpp"
#include "UnityEngine/zzzz__CompositeCollider2D_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.get_pathCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CompositeCollider2D::*)()>(&::UnityEngine::CompositeCollider2D::get_pathCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67ddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pathCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.get_pointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CompositeCollider2D::*)()>(&::UnityEngine::CompositeCollider2D::get_pointCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pointCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CompositeCollider2D::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::CompositeCollider2D::GetPath)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb67df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPath", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.GetPathArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CompositeCollider2D::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::CompositeCollider2D::GetPathArray_Internal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb67e07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPathArray_Internal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.get_pathCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::CompositeCollider2D::get_pathCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67de4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pathCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.get_pointCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::CompositeCollider2D::get_pointCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pointCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CompositeCollider2D.GetPathArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::CompositeCollider2D::GetPathArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0xb67e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPathArray_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::CompositeCollider2D::get_pathCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pathCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::CompositeCollider2D::get_pointCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pointCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::CompositeCollider2D::GetPath(int32_t  index, ::ArrayW<::UnityEngine::Vector2>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPath", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, points);
}
inline int32_t UnityEngine::CompositeCollider2D::GetPathArray_Internal(int32_t  index, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector2>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPathArray_Internal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, points);
}
inline int32_t UnityEngine::CompositeCollider2D::get_pathCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pathCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::CompositeCollider2D::get_pointCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"get_pointCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::CompositeCollider2D::GetPathArray_Internal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CompositeCollider2D*>(),
                        {"GetPathArray_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, index, points);
}
// Ctor Parameters []
constexpr ::UnityEngine::CompositeCollider2D::CompositeCollider2D()   {
}
