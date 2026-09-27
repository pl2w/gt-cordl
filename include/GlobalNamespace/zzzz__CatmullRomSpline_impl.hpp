#pragma once
// IWYU pragma private; include "GlobalNamespace/CatmullRomSpline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__CatmullRomSpline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.RefreshControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CatmullRomSpline::*)()>(&::GlobalNamespace::CatmullRomSpline::RefreshControlPoints)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b136e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"RefreshControlPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CatmullRomSpline::*)()>(&::GlobalNamespace::CatmullRomSpline::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b138f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::GlobalNamespace::CatmullRomSpline::Evaluate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5b138f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CatmullRomSpline::*)(float_t)>(&::GlobalNamespace::CatmullRomSpline::Evaluate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b13d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.GetClosestEvaluationOnSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::CatmullRomSpline::GetClosestEvaluationOnSpline)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b13d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetClosestEvaluationOnSpline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.GetClosestEvaluationOnSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CatmullRomSpline::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::CatmullRomSpline::GetClosestEvaluationOnSpline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b13ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetClosestEvaluationOnSpline", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.GetForwardTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::GlobalNamespace::CatmullRomSpline::GetForwardTangent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b13ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.GetForwardTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CatmullRomSpline::*)(float_t, float_t)>(&::GlobalNamespace::CatmullRomSpline::GetForwardTangent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b14168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CatmullRomSpline::CatmullRom)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b13c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CatmullRomSpline::*)()>(&::GlobalNamespace::CatmullRomSpline::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5b142d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(float_t, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::CatmullRomSpline::CatmullRom)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b14a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, float_t)>(&::GlobalNamespace::CatmullRomSpline::Evaluate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5b147f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CatmullRomSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CatmullRomSpline::*)()>(&::GlobalNamespace::CatmullRomSpline::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b14c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointTransforms;
}
constexpr void GlobalNamespace::CatmullRomSpline::__cordl_internal_set_controlPointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPointTransforms = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_debugTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_debugTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTransform;
}
constexpr void GlobalNamespace::CatmullRomSpline::__cordl_internal_set_debugTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr void GlobalNamespace::CatmullRomSpline::__cordl_internal_set_controlPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPointsTransformationMatricies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsTransformationMatricies;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_controlPointsTransformationMatricies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsTransformationMatricies;
}
constexpr void GlobalNamespace::CatmullRomSpline::__cordl_internal_set_controlPointsTransformationMatricies(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPointsTransformationMatricies = value;
}
constexpr float_t& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_testFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testFloat;
}
constexpr float_t const& GlobalNamespace::CatmullRomSpline::__cordl_internal_get_testFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testFloat;
}
constexpr void GlobalNamespace::CatmullRomSpline::__cordl_internal_set_testFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testFloat = value;
}
inline void GlobalNamespace::CatmullRomSpline::RefreshControlPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"RefreshControlPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CatmullRomSpline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CatmullRomSpline::Evaluate(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controlPoints, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CatmullRomSpline::Evaluate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline float_t GlobalNamespace::CatmullRomSpline::GetClosestEvaluationOnSpline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, ::UnityEngine::Vector3  worldPoint, ::by_ref<::UnityEngine::Vector3>  linePoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetClosestEvaluationOnSpline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, controlPoints, worldPoint, linePoint);
}
inline float_t GlobalNamespace::CatmullRomSpline::GetClosestEvaluationOnSpline(::UnityEngine::Vector3  worldPoint, ::by_ref<::UnityEngine::Vector3>  linePoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetClosestEvaluationOnSpline", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPoint, linePoint);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CatmullRomSpline::GetForwardTangent(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, float_t  t, float_t  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controlPoints, t, step);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CatmullRomSpline::GetForwardTangent(float_t  t, float_t  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"GetForwardTangent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t, step);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CatmullRomSpline::CatmullRom(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline void GlobalNamespace::CatmullRomSpline::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::CatmullRomSpline::CatmullRom(float_t  t, ::UnityEngine::Matrix4x4  p0, ::UnityEngine::Matrix4x4  p1, ::UnityEngine::Matrix4x4  p2, ::UnityEngine::Matrix4x4  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, t, p0, p1, p2, p3);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::CatmullRomSpline::Evaluate(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  controlPoints, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {"Evaluate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, controlPoints, t);
}
inline void GlobalNamespace::CatmullRomSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CatmullRomSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CatmullRomSpline* GlobalNamespace::CatmullRomSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CatmullRomSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CatmullRomSpline::CatmullRomSpline()   {
}
