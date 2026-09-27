#pragma once
// IWYU pragma private; include "GlobalNamespace/Arc.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Arc_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Arc.GetArcPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::Arc::*)(int32_t)>(&::GlobalNamespace::Arc::GetArcPoints)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a19b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"GetArcPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Arc.DrawGizmo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Arc::*)()>(&::GlobalNamespace::Arc::DrawGizmo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a19dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"DrawGizmo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Arc.From
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Arc (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::Arc::From)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a19dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"From", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Arc.ComputeArcPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::Arc::ComputeArcPoints)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5a19bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"ComputeArcPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Arc.BezierLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::Arc::BezierLerp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a1a10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"BezierLerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Arc.DeriveArcControlPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<float_t>)>(&::GlobalNamespace::Arc::DeriveArcControlPoint)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5a19e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"DeriveArcControlPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::Arc::GetArcPoints(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"GetArcPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(*this, ___internal_method, count);
}
inline void GlobalNamespace::Arc::DrawGizmo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"DrawGizmo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::GlobalNamespace::Arc GlobalNamespace::Arc::From(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"From", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Arc>(nullptr, ___internal_method, start, end);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::Arc::ComputeArcPoints(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::Nullable_1<::UnityEngine::Vector3>  c, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"ComputeArcPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, a, b, c, count);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Arc::BezierLerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"BezierLerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, c, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Arc::DeriveArcControlPoint(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::Nullable_1<::UnityEngine::Vector3>  dir, ::System::Nullable_1<float_t>  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Arc>(),
                        {"DeriveArcControlPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, dir, height);
}
// Ctor Parameters [CppParam { name: "start", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "control", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Arc::Arc(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  control) noexcept  {
this->start = start;
this->end = end;
this->control = control;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Arc::Arc()   {
}
