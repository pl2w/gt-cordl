#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ClippedCylinderSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ClippedCylinderSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ClippedCylinderSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSegment_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IClippedSurface_1_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ICylinderClipper_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__Cylinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.get_Clippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Clippers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Clippers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.set_Clippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::set_Clippers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"set_Clippers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Transform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4b3994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.get_BackingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_BackingSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b39d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.get_Cylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Cylinder> (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Cylinder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4b39d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Cylinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.GetClippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::GetClippers)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4b39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"GetClippers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa4b3b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4b4274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b4388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.GetClipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::GetClipped)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa4b438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"GetClipped", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0xa4b3c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.InjectAllClippedCylinderSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::Oculus::Interaction::Surfaces::CylinderSurface*, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectAllClippedCylinderSurface)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4b46a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectAllClippedCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.InjectCylinderSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::Oculus::Interaction::Surfaces::CylinderSurface*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectCylinderSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b4868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::CylinderSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.InjectClippers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectClippers)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4b46cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectClippers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4b4870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b48f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ClippedCylinderSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b48fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__cylinderSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderSurface;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface> const& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__cylinderSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderSurface;
}
constexpr void Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_set__cylinderSurface(::UnityW<::Oculus::Interaction::Surfaces::CylinderSurface>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinderSurface = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__clippers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clippers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__clippers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clippers;
}
constexpr void Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_set__clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clippers = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__Clippers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clippers_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* const& Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_get__Clippers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clippers_k__BackingField;
}
constexpr void Oculus::Interaction::Surfaces::ClippedCylinderSurface::__cordl_internal_set__Clippers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clippers_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Clippers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Clippers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::set_Clippers(::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"set_Clippers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_BackingSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Cylinder> Oculus::Interaction::Surfaces::ClippedCylinderSurface::get_Cylinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"get_Cylinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Cylinder>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* Oculus::Interaction::Surfaces::ClippedCylinderSurface::GetClippers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"GetClippers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::ClippedCylinderSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::ClippedCylinderSurface::GetClipped(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  clipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"GetClipped", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipped);
}
inline bool Oculus::Interaction::Surfaces::ClippedCylinderSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectAllClippedCylinderSurface(::Oculus::Interaction::Surfaces::CylinderSurface*  surface, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  clippers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectAllClippedCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface, clippers);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectCylinderSurface(::Oculus::Interaction::Surfaces::CylinderSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::CylinderSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::InjectClippers(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*  clippers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"InjectClippers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clippers);
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::ClippedCylinderSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::ClippedCylinderSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface* Oculus::Interaction::Surfaces::ClippedCylinderSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::ClippedCylinderSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>"
constexpr  Oculus::Interaction::Surfaces::ClippedCylinderSurface::operator ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>"
constexpr ::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>* Oculus::Interaction::Surfaces::ClippedCylinderSurface::i___Oculus__Interaction__Surfaces__IClippedSurface_1___Oculus__Interaction__Surfaces__ICylinderClipper__() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IClippedSurface_1<::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr  Oculus::Interaction::Surfaces::ClippedCylinderSurface::operator ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* Oculus::Interaction::Surfaces::ClippedCylinderSurface::i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::ClippedCylinderSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ClippedCylinderSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::ClippedCylinderSurface::ClippedCylinderSurface()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::*)()>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b4968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c._GetClippers_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ICylinderClipper* (::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_GetClippers_b__13_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b4970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<GetClippers>b__13_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c._Awake_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ICylinderClipper* (::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_Awake_b__15_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b49b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<Awake>b__15_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c._InjectClippers_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::*)(::Oculus::Interaction::Surfaces::ICylinderClipper*)>(&::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_InjectClippers_b__21_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4b4a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<InjectClippers>b__21_0", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ICylinderClipper*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::setStaticF___9(::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*, "<>9", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(std::forward<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(value));
}
inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*, "<>9", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::setStaticF___9__13_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*, "<>9__13_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*, "<>9__13_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::setStaticF___9__15_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*, "<>9__15_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Surfaces::ICylinderClipper*>*, "<>9__15_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::setStaticF___9__21_0(::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*, "<>9__21_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(std::forward<::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::Surfaces::ICylinderClipper*,::UnityW<::UnityEngine::Object>>*, "<>9__21_0", ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>();
}
inline void Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Surfaces::ICylinderClipper* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_GetClippers_b__13_0(::UnityEngine::Object*  clipper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<GetClippers>b__13_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ICylinderClipper*>(this, ___internal_method, clipper);
}
inline ::Oculus::Interaction::Surfaces::ICylinderClipper* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_Awake_b__15_0(::UnityEngine::Object*  clipper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<Awake>b__15_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ICylinderClipper*>(this, ___internal_method, clipper);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::_InjectClippers_b__21_0(::Oculus::Interaction::Surfaces::ICylinderClipper*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>(),
                        {"<InjectClippers>b__21_0", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ICylinderClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, c);
}
inline ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c* Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::ClippedCylinderSurface___c::ClippedCylinderSurface___c()   {
}
