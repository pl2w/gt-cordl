#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugGizmos.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__DebugGizmos_def.hpp"
#include "Oculus/Interaction/zzzz__PolylineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::DebugGizmos> (*)()>(&::Oculus::Interaction::DebugGizmos::get_Root)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa475f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa476190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PolylineRenderer* (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::get_Renderer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa47629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4767f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.ClearSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::ClearSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa476940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"ClearSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.RenderSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::RenderSegments)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa476948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"RenderSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::LateUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa476be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.AddSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, ::UnityEngine::Color)>(&::Oculus::Interaction::DebugGizmos::AddSegment)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa476c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"AddSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.get_RenderSinglePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Interaction::DebugGizmos::get_RenderSinglePass)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa476ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_RenderSinglePass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.set_RenderSinglePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Oculus::Interaction::DebugGizmos::set_RenderSinglePass)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa476f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"set_RenderSinglePass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::DebugGizmos::DrawPoint)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa477018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::DebugGizmos::DrawLine)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa477138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::DebugGizmos::DrawQuad)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa477290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawCurvedQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, float_t, ::UnityEngine::Transform*, int32_t)>(&::Oculus::Interaction::DebugGizmos::DrawCurvedQuad)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa4773ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawCurvedQuad", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawWireCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::DebugGizmos::DrawWireCube)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa47762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa477988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa477bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos.DrawAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, float_t)>(&::Oculus::Interaction::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa477c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugGizmos::*)()>(&::Oculus::Interaction::DebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa477dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& Oculus::Interaction::DebugGizmos::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& Oculus::Interaction::DebugGizmos::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Oculus::Interaction::DebugGizmos::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& Oculus::Interaction::DebugGizmos::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& Oculus::Interaction::DebugGizmos::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Oculus::Interaction::DebugGizmos::__cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr int32_t& Oculus::Interaction::DebugGizmos::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& Oculus::Interaction::DebugGizmos::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void Oculus::Interaction::DebugGizmos::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr bool& Oculus::Interaction::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedSegmentSinceLastUpdate;
}
constexpr bool const& Oculus::Interaction::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedSegmentSinceLastUpdate;
}
constexpr void Oculus::Interaction::DebugGizmos::__cordl_internal_set__addedSegmentSinceLastUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addedSegmentSinceLastUpdate = value;
}
constexpr ::Oculus::Interaction::PolylineRenderer*& Oculus::Interaction::DebugGizmos::__cordl_internal_get__polylineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polylineRenderer;
}
constexpr ::Oculus::Interaction::PolylineRenderer* const& Oculus::Interaction::DebugGizmos::__cordl_internal_get__polylineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polylineRenderer;
}
constexpr void Oculus::Interaction::DebugGizmos::__cordl_internal_set__polylineRenderer(::Oculus::Interaction::PolylineRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polylineRenderer = value;
}
inline void Oculus::Interaction::DebugGizmos::setStaticF__root(::UnityW<::Oculus::Interaction::DebugGizmos>  value)  {
::cordl_internals::setStaticField<::UnityW<::Oculus::Interaction::DebugGizmos>, "_root", ::Oculus::Interaction::DebugGizmos*>(std::forward<::UnityW<::Oculus::Interaction::DebugGizmos>>(value));
}
inline ::UnityW<::Oculus::Interaction::DebugGizmos> Oculus::Interaction::DebugGizmos::getStaticF__root()  {
return ::cordl_internals::getStaticField<::UnityW<::Oculus::Interaction::DebugGizmos>, "_root", ::Oculus::Interaction::DebugGizmos*>();
}
inline void Oculus::Interaction::DebugGizmos::setStaticF__renderSinglePass(bool  value)  {
::cordl_internals::setStaticField<bool, "_renderSinglePass", ::Oculus::Interaction::DebugGizmos*>(std::forward<bool>(value));
}
inline bool Oculus::Interaction::DebugGizmos::getStaticF__renderSinglePass()  {
return ::cordl_internals::getStaticField<bool, "_renderSinglePass", ::Oculus::Interaction::DebugGizmos*>();
}
inline void Oculus::Interaction::DebugGizmos::setStaticF_Color(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Color", ::Oculus::Interaction::DebugGizmos*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Oculus::Interaction::DebugGizmos::getStaticF_Color()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Color", ::Oculus::Interaction::DebugGizmos*>();
}
inline void Oculus::Interaction::DebugGizmos::setStaticF_LineWidth(float_t  value)  {
::cordl_internals::setStaticField<float_t, "LineWidth", ::Oculus::Interaction::DebugGizmos*>(std::forward<float_t>(value));
}
inline float_t Oculus::Interaction::DebugGizmos::getStaticF_LineWidth()  {
return ::cordl_internals::getStaticField<float_t, "LineWidth", ::Oculus::Interaction::DebugGizmos*>();
}
inline void Oculus::Interaction::DebugGizmos::setStaticF_CUBE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS", ::Oculus::Interaction::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* Oculus::Interaction::DebugGizmos::getStaticF_CUBE_POINTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS", ::Oculus::Interaction::DebugGizmos*>();
}
inline void Oculus::Interaction::DebugGizmos::setStaticF_CUBE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS", ::Oculus::Interaction::DebugGizmos*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* Oculus::Interaction::DebugGizmos::getStaticF_CUBE_SEGMENTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS", ::Oculus::Interaction::DebugGizmos*>();
}
inline ::UnityW<::Oculus::Interaction::DebugGizmos> Oculus::Interaction::DebugGizmos::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::DebugGizmos>>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PolylineRenderer* Oculus::Interaction::DebugGizmos::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PolylineRenderer*>(this, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::ClearSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"ClearSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::RenderSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"RenderSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::AddSegment(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  width, ::UnityEngine::Color  color0, ::UnityEngine::Color  color1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"AddSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, width, color0, color1);
}
inline bool Oculus::Interaction::DebugGizmos::get_RenderSinglePass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"get_RenderSinglePass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::DebugGizmos::set_RenderSinglePass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"set_RenderSinglePass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::DebugGizmos::DrawPoint(::UnityEngine::Vector3  p0, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, t);
}
inline void Oculus::Interaction::DebugGizmos::DrawLine(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, t);
}
inline void Oculus::Interaction::DebugGizmos::DrawQuad(::UnityEngine::Vector3  center, float_t  width, float_t  height, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, width, height, t);
}
inline void Oculus::Interaction::DebugGizmos::DrawCurvedQuad(::UnityEngine::Vector3  center, float_t  width, float_t  height, float_t  radius, ::UnityEngine::Transform*  t, int32_t  divisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawCurvedQuad", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, width, height, radius, t, divisions);
}
inline void Oculus::Interaction::DebugGizmos::DrawWireCube(::UnityEngine::Vector3  center, float_t  size, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size, t);
}
inline void Oculus::Interaction::DebugGizmos::DrawAxis(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, size);
}
inline void Oculus::Interaction::DebugGizmos::DrawAxis(::UnityEngine::Pose  pose, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pose, size);
}
inline void Oculus::Interaction::DebugGizmos::DrawAxis(::UnityEngine::Transform*  t, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {"DrawAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, size);
}
inline void Oculus::Interaction::DebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugGizmos* Oculus::Interaction::DebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DebugGizmos::DebugGizmos()   {
}
