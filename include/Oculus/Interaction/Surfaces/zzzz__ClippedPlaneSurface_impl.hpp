#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ClippedPlaneSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ClippedPlaneSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ClippedPlaneSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBoundsClipper_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IClippedSurface_1_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.get_Clippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Clippers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b4a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_Clippers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.set_Clippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::set_Clippers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b4a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"set_Clippers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.get_BackingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_BackingSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b4a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Transform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4b4a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.GetClippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::GetClippers)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4b4aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"GetClippers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4b4bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b4cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.ClipBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClipBounds)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa4b4cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClipBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.ClampPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClampPoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4b4f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClampPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa4b4fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::Raycast)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4b5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.InjectAllClippedPlaneSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectAllClippedPlaneSurface)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4b534c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectAllClippedPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.InjectPlaneSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectPlaneSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.InjectClippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectClippers)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4b5378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectClippers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4b551c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b56f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedPlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__planeSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeSurface;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface> const& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__planeSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeSurface;
}
constexpr void Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_set__planeSurface(::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____planeSurface = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__clippers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clippers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__clippers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clippers;
}
constexpr void Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_set__clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clippers = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__Clippers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clippers_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* const& Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_get__Clippers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clippers_k__BackingField;
}
constexpr void Oculus::Interaction::Surfaces::ClippedPlaneSurface::__cordl_internal_set__Clippers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clippers_k__BackingField = value;
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::setStaticF_InfiniteBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setStaticField<::UnityEngine::Bounds, "InfiniteBounds", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds Oculus::Interaction::Surfaces::ClippedPlaneSurface::getStaticF_InfiniteBounds()  {
return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "InfiniteBounds", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>();
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::setStaticF_PlaneBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setStaticField<::UnityEngine::Bounds, "PlaneBounds", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds Oculus::Interaction::Surfaces::ClippedPlaneSurface::getStaticF_PlaneBounds()  {
return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "PlaneBounds", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>();
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Clippers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_Clippers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::set_Clippers(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"set_Clippers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_BackingSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::ClippedPlaneSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* Oculus::Interaction::Surfaces::ClippedPlaneSurface::GetClippers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"GetClippers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClipBounds(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bounds>  clipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClipBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds, clipped);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClampPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClampPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, bounds);
}
inline bool Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::ClippedPlaneSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectAllClippedPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  clippers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectAllClippedPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeSurface, clippers);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeSurface);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::InjectClippers(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*  clippers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"InjectClippers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clippers);
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::ClippedPlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::Oculus::Interaction::Surfaces::ClippedPlaneSurface* Oculus::Interaction::Surfaces::ClippedPlaneSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::ClippedPlaneSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>"
constexpr  Oculus::Interaction::Surfaces::ClippedPlaneSurface::operator ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>"
constexpr ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>* Oculus::Interaction::Surfaces::ClippedPlaneSurface::i___Oculus__Interaction__Surfaces__IClippedSurface_1___Oculus__Interaction__Surfaces__IBoundsClipper__() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr  Oculus::Interaction::Surfaces::ClippedPlaneSurface::operator ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* Oculus::Interaction::Surfaces::ClippedPlaneSurface::i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::ClippedPlaneSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ClippedPlaneSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::ClippedPlaneSurface::ClippedPlaneSurface()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::*)()>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c._GetClippers_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::IBoundsClipper* (::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_GetClippers_b__12_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b576c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<GetClippers>b__12_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c._Awake_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::IBoundsClipper* (::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b57b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<Awake>b__13_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c._InjectClippers_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::*)(::Oculus::Interaction::Surfaces::IBoundsClipper*)>(&::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_InjectClippers_b__21_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4b57fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<InjectClippers>b__21_0", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::IBoundsClipper*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::setStaticF___9(::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*, "<>9", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(std::forward<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(value));
}
inline ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*, "<>9", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::setStaticF___9__12_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*, "<>9__12_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*, "<>9__12_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::setStaticF___9__13_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*, "<>9__13_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::IBoundsClipper*>*, "<>9__13_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::setStaticF___9__21_0(::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*, "<>9__21_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(std::forward<::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Surfaces::IBoundsClipper*,::UnityW<::UnityEngine::Object>>*, "<>9__21_0", ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Surfaces::IBoundsClipper* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_GetClippers_b__12_0(::UnityEngine::Object*  clipper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<GetClippers>b__12_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::IBoundsClipper*>(this, ___internal_method, clipper);
}
inline ::Oculus::Interaction::Surfaces::IBoundsClipper* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_Awake_b__13_0(::UnityEngine::Object*  clipper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<Awake>b__13_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::IBoundsClipper*>(this, ___internal_method, clipper);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::_InjectClippers_b__21_0(::Oculus::Interaction::Surfaces::IBoundsClipper*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>(),
                        {"<InjectClippers>b__21_0", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::IBoundsClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, c);
}
inline ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c* Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::ClippedPlaneSurface___c::ClippedPlaneSurface___c()   {
}
