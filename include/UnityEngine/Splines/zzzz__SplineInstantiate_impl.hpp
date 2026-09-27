#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_InstantiableItem_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Method_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Space_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Vector3Offset_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_InstantiableItem_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Method_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_OffsetSpace_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Space_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_Vector3Offset_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInstantiate_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Splines::SplineContainer*)>(&::UnityEngine::Splines::SplineInstantiate::set_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_itemsToInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem> (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_itemsToInstantiate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb321664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_itemsToInstantiate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_itemsToInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>)>(&::UnityEngine::Splines::SplineInstantiate::set_itemsToInstantiate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb3216b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_itemsToInstantiate", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_Method (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_InstantiateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_Method (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_InstantiateMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_InstantiateMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_InstantiateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_Method)>(&::UnityEngine::Splines::SplineInstantiate::set_InstantiateMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32177c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_InstantiateMethod", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_Method>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_Space (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_space", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_CoordinateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_Space (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_CoordinateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32178c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_CoordinateSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_CoordinateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_Space)>(&::UnityEngine::Splines::SplineInstantiate::set_CoordinateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_CoordinateSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MinSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MinSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb32179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinSpacing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MinSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(float_t)>(&::UnityEngine::Splines::SplineInstantiate::set_MinSpacing)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb3217a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MaxSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MaxSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxSpacing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MaxSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(float_t)>(&::UnityEngine::Splines::SplineInstantiate::set_MaxSpacing)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb321868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_upAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_upAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3218c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_upAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_UpAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_UpAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3218d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_UpAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_UpAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineInstantiate::set_UpAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3218d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_UpAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_forwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_forwardAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3218e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_forwardAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_ForwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_ForwardAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3218e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_ForwardAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_ForwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineInstantiate::set_ForwardAxis)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb3218f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_ForwardAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_minPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_minPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3219bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MinPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MinPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3219c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MinPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MinPositionOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3219d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_maxPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_maxPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3219ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MaxPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MaxPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3219f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MaxPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MaxPositionOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb321a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_positionSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_positionSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_positionSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_PositionSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_PositionSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_PositionSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_PositionSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_OffsetSpace)>(&::UnityEngine::Splines::SplineInstantiate::set_PositionSpace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb321a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_PositionSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_minRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_minRotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minRotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MinRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MinRotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinRotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MinRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MinRotationOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb321a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_maxRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_maxRotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxRotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MaxRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MaxRotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxRotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MaxRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MaxRotationOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb321a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_rotationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_rotationSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_rotationSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_RotationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_RotationSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_RotationSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_RotationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_OffsetSpace)>(&::UnityEngine::Splines::SplineInstantiate::set_RotationSpace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb321ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_RotationSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_minScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_minScaleOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MinScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MinScaleOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MinScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MinScaleOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb321aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_maxScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_maxScaleOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_MaxScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_MaxScaleOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb321b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_MaxScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineInstantiate::set_MaxScaleOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb321b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_scaleSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_scaleSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_scaleSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_ScaleSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineInstantiate_OffsetSpace (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_ScaleSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_ScaleSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_ScaleSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_OffsetSpace)>(&::UnityEngine::Splines::SplineInstantiate::set_ScaleSpace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb321b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_ScaleSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_InstancesRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_InstancesRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_InstancesRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_instancesRootTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_instancesRootTransform)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb321b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_instancesRootTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_instances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_instances)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_instances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_maxProbability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_maxProbability)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxProbability", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_maxProbability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(float_t)>(&::UnityEngine::Splines::SplineInstantiate::set_maxProbability)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb321da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_maxProbability", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.get_Seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::get_Seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb321dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_Seed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.set_Seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(int32_t)>(&::UnityEngine::Splines::SplineInstantiate::set_Seed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb321dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_Seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb321dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb3245e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.UndoRedoPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::UndoRedoPerformed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb32467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"UndoRedoPerformed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::OnValidate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb32468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.EnsureItemsValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::EnsureItemsValidity)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb324724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"EnsureItemsValidity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.CheckChildrenValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::CheckChildrenValidity)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xb321e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"CheckChildrenValidity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.ValidateSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::ValidateSpacing)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb321804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ValidateSpacing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.ValidateAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::ValidateAxis)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb321958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ValidateAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.SetSplineDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::SplineInstantiate::SetSplineDirty)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb324a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SetSplineDirty", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.InitContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::InitContainer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb324b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"InitContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb324670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb324bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.TryClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::TryClearCache)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb324bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"TryClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.ClearDeprecatedInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::ClearDeprecatedInstances)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb324d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ClearDeprecatedInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::Randomize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb324eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Randomize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb324f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.UpdateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::UpdateInstances)> {
  constexpr static std::size_t size = 0x23e8;
  constexpr static std::size_t addrs = 0xb3221fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"UpdateInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.SpawnPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineInstantiate::*)(int32_t)>(&::UnityEngine::Splines::SplineInstantiate::SpawnPrefab)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xb324f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SpawnPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.GetCustomSpaceAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::GlobalNamespace::SplineInstantiate_OffsetSpace, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Transform*, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineInstantiate::GetCustomSpaceAxis)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb325220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"GetCustomSpaceAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.GetPrefabIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::GetPrefabIndex)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb325480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"GetPrefabIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate.OnSplineChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)(::UnityEngine::Splines::Spline*, int32_t, ::UnityEngine::Splines::SplineModification)>(&::UnityEngine::Splines::SplineInstantiate::OnSplineChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3255a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate::*)()>(&::UnityEngine::Splines::SplineInstantiate::_ctor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb325634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Container = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_ItemsToInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ItemsToInstantiate;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>* const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_ItemsToInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ItemsToInstantiate;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_ItemsToInstantiate(::System::Collections::Generic::List_1<::GlobalNamespace::SplineInstantiate_InstantiableItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ItemsToInstantiate = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_Method& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Method;
}
constexpr ::GlobalNamespace::SplineInstantiate_Method const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Method;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Method(::GlobalNamespace::SplineInstantiate_Method  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Method = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_Space& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Space;
}
constexpr ::GlobalNamespace::SplineInstantiate_Space const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Space;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Space(::GlobalNamespace::SplineInstantiate_Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Space = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Spacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Spacing;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Spacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Spacing;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Spacing(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Spacing = value;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Up;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Up;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Up(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Up = value;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Forward;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Forward;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Forward(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Forward = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_PositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionOffset;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_PositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionOffset;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_PositionOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionOffset = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_RotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationOffset;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_RotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationOffset;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_RotationOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationOffset = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_ScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleOffset;
}
constexpr ::GlobalNamespace::SplineInstantiate_Vector3Offset const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_ScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleOffset;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_ScaleOffset(::GlobalNamespace::SplineInstantiate_Vector3Offset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_DeprecatedInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeprecatedInstances;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_DeprecatedInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeprecatedInstances;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_DeprecatedInstances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeprecatedInstances = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_InstancesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancesRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_InstancesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancesRoot;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_InstancesRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstancesRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Instances;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Instances;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Instances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Instances = value;
}
constexpr bool& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_InstancesCacheDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancesCacheDirty;
}
constexpr bool const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_InstancesCacheDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancesCacheDirty;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_InstancesCacheDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstancesCacheDirty = value;
}
constexpr bool& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_AutoRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRefresh;
}
constexpr bool const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_AutoRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRefresh;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_AutoRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoRefresh = value;
}
constexpr ::GlobalNamespace::SplineInstantiate_InstantiableItem& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_CurrentItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentItem;
}
constexpr ::GlobalNamespace::SplineInstantiate_InstantiableItem const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_CurrentItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentItem;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_CurrentItem(::GlobalNamespace::SplineInstantiate_InstantiableItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentItem = value;
}
constexpr bool& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_SplineDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineDirty;
}
constexpr bool const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_SplineDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineDirty;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_SplineDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineDirty = value;
}
constexpr float_t& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_MaxProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxProbability;
}
constexpr float_t const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_MaxProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxProbability;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_MaxProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxProbability = value;
}
constexpr int32_t& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Seed;
}
constexpr int32_t const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_Seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Seed;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_Seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Seed = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_TimesCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimesCache;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_TimesCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimesCache;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_TimesCache(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimesCache = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_LengthsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LengthsCache;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& UnityEngine::Splines::SplineInstantiate::__cordl_internal_get_m_LengthsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LengthsCache;
}
constexpr void UnityEngine::Splines::SplineInstantiate::__cordl_internal_set_m_LengthsCache(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LengthsCache = value;
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineInstantiate::get_container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineInstantiate::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_Container(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem> UnityEngine::Splines::SplineInstantiate::get_itemsToInstantiate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_itemsToInstantiate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_itemsToInstantiate(::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_itemsToInstantiate", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SplineInstantiate_InstantiableItem>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineInstantiate_Method UnityEngine::Splines::SplineInstantiate::get_method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_Method>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineInstantiate_Method UnityEngine::Splines::SplineInstantiate::get_InstantiateMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_InstantiateMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_Method>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_InstantiateMethod(::GlobalNamespace::SplineInstantiate_Method  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_InstantiateMethod", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_Method>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineInstantiate_Space UnityEngine::Splines::SplineInstantiate::get_space()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_space", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_Space>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineInstantiate_Space UnityEngine::Splines::SplineInstantiate::get_CoordinateSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_CoordinateSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_Space>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_CoordinateSpace(::GlobalNamespace::SplineInstantiate_Space  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_CoordinateSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineInstantiate::get_MinSpacing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinSpacing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MinSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineInstantiate::get_MaxSpacing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxSpacing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MaxSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineInstantiate::get_upAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_upAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineInstantiate::get_UpAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_UpAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_UpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_UpAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineInstantiate::get_forwardAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_forwardAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineInstantiate::get_ForwardAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_ForwardAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_ForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_ForwardAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_minPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MinPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MinPositionOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_maxPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MaxPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MaxPositionOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_positionSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_positionSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_PositionSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_PositionSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_PositionSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_PositionSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_minRotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minRotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MinRotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinRotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MinRotationOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_maxRotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxRotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MaxRotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxRotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MaxRotationOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_rotationSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_rotationSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_RotationSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_RotationSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_RotationSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_RotationSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_minScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_minScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MinScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MinScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MinScaleOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MinScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_maxScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineInstantiate::get_MaxScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_MaxScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_MaxScaleOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_MaxScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_scaleSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_scaleSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineInstantiate_OffsetSpace UnityEngine::Splines::SplineInstantiate::get_ScaleSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_ScaleSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineInstantiate_OffsetSpace>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_ScaleSpace(::GlobalNamespace::SplineInstantiate_OffsetSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_ScaleSpace", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Splines::SplineInstantiate::get_InstancesRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_InstancesRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Splines::SplineInstantiate::get_instancesRootTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_instancesRootTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* UnityEngine::Splines::SplineInstantiate::get_instances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_instances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineInstantiate::get_maxProbability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_maxProbability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_maxProbability(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_maxProbability", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::SplineInstantiate::get_Seed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"get_Seed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::set_Seed(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"set_Seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineInstantiate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::UndoRedoPerformed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"UndoRedoPerformed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::EnsureItemsValidity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"EnsureItemsValidity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::CheckChildrenValidity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"CheckChildrenValidity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::ValidateSpacing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ValidateSpacing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::ValidateAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ValidateAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::SetSplineDirty(::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SetSplineDirty", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline);
}
inline void UnityEngine::Splines::SplineInstantiate::InitContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"InitContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::TryClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"TryClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::ClearDeprecatedInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"ClearDeprecatedInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::Randomize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Randomize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::UpdateInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"UpdateInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineInstantiate::SpawnPrefab(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"SpawnPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::SplineInstantiate::GetCustomSpaceAxis(::GlobalNamespace::SplineInstantiate_OffsetSpace  space, ::Unity::Mathematics::float3  splineUp, ::Unity::Mathematics::float3  direction, ::UnityEngine::Transform*  instanceTransform, ::by_ref<::Unity::Mathematics::float3>  customUp, ::by_ref<::Unity::Mathematics::float3>  customForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"GetCustomSpaceAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineInstantiate_OffsetSpace>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space, splineUp, direction, instanceTransform, customUp, customForward);
}
inline int32_t UnityEngine::Splines::SplineInstantiate::GetPrefabIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"GetPrefabIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInstantiate::OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, knotIndex, modificationType);
}
inline void UnityEngine::Splines::SplineInstantiate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineInstantiate* UnityEngine::Splines::SplineInstantiate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineInstantiate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineInstantiate::SplineInstantiate()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInstantiate___c::*)()>(&::UnityEngine::Splines::SplineInstantiate___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb325b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInstantiate___c._CheckChildrenValidity_b__123_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineInstantiate___c::*)(::UnityEngine::Splines::SplineInstantiate*)>(&::UnityEngine::Splines::SplineInstantiate___c::_CheckChildrenValidity_b__123_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb325b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate___c*>(),
                        {"<CheckChildrenValidity>b__123_0", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInstantiate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplineInstantiate___c::setStaticF___9(::UnityEngine::Splines::SplineInstantiate___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::SplineInstantiate___c*, "<>9", ::UnityEngine::Splines::SplineInstantiate___c*>(std::forward<::UnityEngine::Splines::SplineInstantiate___c*>(value));
}
inline ::UnityEngine::Splines::SplineInstantiate___c* UnityEngine::Splines::SplineInstantiate___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::SplineInstantiate___c*, "<>9", ::UnityEngine::Splines::SplineInstantiate___c*>();
}
inline void UnityEngine::Splines::SplineInstantiate___c::setStaticF___9__123_0(::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*, "<>9__123_0", ::UnityEngine::Splines::SplineInstantiate___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>* UnityEngine::Splines::SplineInstantiate___c::getStaticF___9__123_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Splines::SplineInstantiate>,int32_t>*, "<>9__123_0", ::UnityEngine::Splines::SplineInstantiate___c*>();
}
inline void UnityEngine::Splines::SplineInstantiate___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Splines::SplineInstantiate___c::_CheckChildrenValidity_b__123_0(::UnityEngine::Splines::SplineInstantiate*  sInstantiate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInstantiate___c*>(),
                        {"<CheckChildrenValidity>b__123_0", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInstantiate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sInstantiate);
}
inline ::UnityEngine::Splines::SplineInstantiate___c* UnityEngine::Splines::SplineInstantiate___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineInstantiate___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineInstantiate___c::SplineInstantiate___c()   {
}
