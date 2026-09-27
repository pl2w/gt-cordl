#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__DebugGizmos_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__DebugGizmos_ColorScope_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__PolylineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ef8720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Root)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9ef87b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9ef8a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                    {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Renderer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9ef8b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ef90ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                    {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.ClearSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::ClearSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ef91fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"ClearSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.RenderSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::RenderSegments)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ef9204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"RenderSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::LateUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9ef94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                    {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.AddSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, ::UnityEngine::Color)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::AddSegment)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9ef9508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"AddSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_RenderSinglePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_RenderSinglePass)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ef9778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_RenderSinglePass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.set_RenderSinglePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::set_RenderSinglePass)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9ef97d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"set_RenderSinglePass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPoint)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9ef98d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawLine)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9ef99f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawWireCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Transform*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawWireCube)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9ef9b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9ef9ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9efa208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9efa2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x9efa3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, float_t, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9efa9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPlane", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t, bool)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x9efaa7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, float_t, float_t, float_t, bool)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9efb260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9efb34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedSegmentSinceLastUpdate;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedSegmentSinceLastUpdate;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__addedSegmentSinceLastUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addedSegmentSinceLastUpdate = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__polylineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polylineRenderer;
}
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__polylineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polylineRenderer;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__polylineRenderer(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polylineRenderer = value;
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF__root(::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>, "_root", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF__root()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>, "_root", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF__renderSinglePass(bool  value)  {
::cordl_internals::setStaticField<bool, "_renderSinglePass", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<bool>(value));
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF__renderSinglePass()  {
return ::cordl_internals::getStaticField<bool, "_renderSinglePass", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_Color(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Color", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_Color()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Color", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_LineWidth(float_t  value)  {
::cordl_internals::setStaticField<float_t, "LineWidth", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<float_t>(value));
}
inline float_t Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_LineWidth()  {
return ::cordl_internals::getStaticField<float_t, "LineWidth", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_PLANE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, "PLANE_POINTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_PLANE_POINTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, "PLANE_POINTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_PLANE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "PLANE_SEGMENTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_PLANE_SEGMENTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "PLANE_SEGMENTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_CUBE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_CUBE_POINTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_CUBE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_CUBE_SEGMENTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS", ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::ClearSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"ClearSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::RenderSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"RenderSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::AddSegment(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  width, ::UnityEngine::Color  color0, ::UnityEngine::Color  color1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"AddSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, width, color0, color1);
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_RenderSinglePass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"get_RenderSinglePass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::set_RenderSinglePass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"set_RenderSinglePass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPoint(::UnityEngine::Vector3  p0, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawLine(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawWireCube(::UnityEngine::Vector3  center, float_t  size, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Pose  pose, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pose, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Transform*  t, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  width, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, width, height);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane(::UnityEngine::Pose  pose, float_t  width, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawPlane", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pose, width, height);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  width, float_t  height, float_t  depth, bool  isPivotTopSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, width, height, depth, isPivotTopSurface);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox(::UnityEngine::Pose  pose, float_t  width, float_t  height, float_t  depth, bool  isPivotTopSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pose, width, height, depth, isPivotTopSurface);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DebugGizmos()   {
}
