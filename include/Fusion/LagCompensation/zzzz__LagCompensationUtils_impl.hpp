#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_ContactData_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomEdgesBox_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomLine_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlane_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlanesBox_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_RotationMatrix_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.NarrowBoxBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::NarrowBoxBox)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x6011674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"NarrowBoxBox", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.GetEdgesBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox (*)(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::GetEdgesBox)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6012374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetEdgesBox", {}, {::i2c::type_of<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.GetPlanesBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox (*)(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::GetPlanesBox)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x60122a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetPlanesBox", {}, {::i2c::type_of<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.GetHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::GetHitPoint)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6012488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetHitPoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.GetContactPointPlaneEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::GetContactPointPlaneEdge)> {
  constexpr static std::size_t size = 0x235c;
  constexpr static std::size_t addrs = 0x60125e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetContactPointPlaneEdge", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.ClipToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlane>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::ClipToPlane)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6014a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClipToPlane", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.BoxInAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::BoxInAABB)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6014940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"BoxInAABB", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.PointInAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::PointInAABB)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6014b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"PointInAABB", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.LocalAABBSphereIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Fusion::LagCompensation::LagCompensationUtils::LocalAABBSphereIntersection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6014b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBSphereIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.LocalAABBSphereContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>)>(&::Fusion::LagCompensation::LagCompensationUtils::LocalAABBSphereContact)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6014c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBSphereContact", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.LocalSphereCapsuleIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>)>(&::Fusion::LagCompensation::LagCompensationUtils::LocalSphereCapsuleIntersection)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6014e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalSphereCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.LocalRayCapsuleIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Fusion::LagCompensation::LagCompensationUtils::LocalRayCapsuleIntersection)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6015128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalRayCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.LocalAABBCapsuleIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>)>(&::Fusion::LagCompensation::LagCompensationUtils::LocalAABBCapsuleIntersection)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x6015484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.GetAABBSupportPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Fusion::LagCompensation::LagCompensationUtils::GetAABBSupportPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6015c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetAABBSupportPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.ClampPointToAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::ClampPointToAABB)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6015c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClampPointToAABB", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.ClosestDistanceBetweenLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, bool, bool, bool, bool)>(&::Fusion::LagCompensation::LagCompensationUtils::ClosestDistanceBetweenLines)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x6015d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClosestDistanceBetweenLines", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.RayCapsuleIntersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Fusion::LagCompensation::LagCompensationUtils::RayCapsuleIntersect)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x601531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RayCapsuleIntersect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.ClosestPtPointSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Fusion::LagCompensation::LagCompensationUtils::ClosestPtPointSegment)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60150a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClosestPtPointSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.SphereSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::LagCompensationUtils::SphereSphere)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60166e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"SphereSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.RayAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Fusion::LagCompensation::LagCompensationUtils::RayAABB)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x60167fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RayAABB", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationUtils.RaySphereIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Fusion::LagCompensation::LagCompensationUtils::RaySphereIntersection)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x6016aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RaySphereIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::LagCompensation::LagCompensationUtils::NarrowBoxBox(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  aNarrow, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  bNarrow, bool  detailedManifold, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"NarrowBoxBox", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aNarrow, bNarrow, detailedManifold, hitPoint, normal);
}
inline ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox Fusion::LagCompensation::LagCompensationUtils::GetEdgesBox(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox  edges, ::by_ref<::UnityEngine::Vector3>  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetEdgesBox", {}, {::i2c::type_of<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>(nullptr, ___internal_method, edges, translation);
}
inline ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox Fusion::LagCompensation::LagCompensationUtils::GetPlanesBox(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox  planes, ::by_ref<::UnityEngine::Vector3>  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetPlanesBox", {}, {::i2c::type_of<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>(nullptr, ___internal_method, planes, translation);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::GetHitPoint(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planesA, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planesB, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edgesA, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edgesB, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrowA, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrowB, ::by_ref<::UnityEngine::Vector3>  boxAToBoxBOffset, bool  computeDetailedInfo, ::by_ref<::UnityEngine::Vector3>  contactPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetHitPoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planesA, planesB, edgesA, edgesB, boxNarrowA, boxNarrowB, boxAToBoxBOffset, computeDetailedInfo, contactPoint);
}
inline void Fusion::LagCompensation::LagCompensationUtils::GetContactPointPlaneEdge(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planes, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edges, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  offset, ::by_ref<::UnityEngine::Vector3>  boxAPosition, bool  detailedManifold, ::by_ref<int32_t>  cpCount, ::by_ref<::UnityEngine::Vector3>  contactPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetContactPointPlaneEdge", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, edges, boxNarrow, offset, boxAPosition, detailedManifold, cpCount, contactPoint);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::ClipToPlane(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlane>  plane, ::by_ref<::UnityEngine::Vector3>  lineStart, ::by_ref<::UnityEngine::Vector3>  lineEnd, ::by_ref<::UnityEngine::Vector3>  intersection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClipToPlane", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, plane, lineStart, lineEnd, intersection);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::BoxInAABB(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  boxEdges, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"BoxInAABB", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boxEdges, boxNarrow, offset);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::PointInAABB(::UnityEngine::Vector3  point, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  max, ::by_ref<::UnityEngine::Vector3>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"PointInAABB", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, boxNarrow, max, offset);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::LocalAABBSphereIntersection(::UnityEngine::Vector3  aabbExtents, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBSphereIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabbExtents, sphereCenter, sphereRadius);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::LocalAABBSphereContact(::UnityEngine::Vector3  aabbExtents, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contact)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBSphereContact", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabbExtents, sphereCenter, sphereRadius, contact);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::LocalSphereCapsuleIntersection(::UnityEngine::Vector3  capsuleTopCenter, ::UnityEngine::Vector3  capsuleBottomCenter, float_t  capsuleRadius, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contactData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalSphereCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, capsuleTopCenter, capsuleBottomCenter, capsuleRadius, sphereCenter, sphereRadius, contactData);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::LocalRayCapsuleIntersection(::UnityEngine::Vector3  capsuleTopCenter, ::UnityEngine::Vector3  capsuleBottomCenter, float_t  capsuleRadius, ::UnityEngine::Vector3  rayLocalOrigin, ::UnityEngine::Vector3  rayLocalDir, float_t  maxDistance, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalRayCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, capsuleTopCenter, capsuleBottomCenter, capsuleRadius, rayLocalOrigin, rayLocalDir, maxDistance, point, normal, distance);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::LocalAABBCapsuleIntersection(::UnityEngine::Vector3  localCapsuleCenter, ::UnityEngine::Vector3  localCapsulePointA, ::UnityEngine::Vector3  localCapsulePointB, float_t  capsuleRadius, ::UnityEngine::Vector3  aabbExtents, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contactData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"LocalAABBCapsuleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, localCapsuleCenter, localCapsulePointA, localCapsulePointB, capsuleRadius, aabbExtents, contactData);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::LagCompensationUtils::GetAABBSupportPoint(::UnityEngine::Vector3  pointA, ::UnityEngine::Vector3  pointB, ::UnityEngine::Vector3  extents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"GetAABBSupportPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pointA, pointB, extents);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::ClampPointToAABB(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  aabbExtents, ::by_ref<::UnityEngine::Vector3>  clampedPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClampPointToAABB", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, aabbExtents, clampedPoint);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t> Fusion::LagCompensation::LagCompensationUtils::ClosestDistanceBetweenLines(::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1, ::UnityEngine::Vector3  b0, ::UnityEngine::Vector3  b1, bool  clampAll, bool  clampA0, bool  clampA1, bool  clampB0, bool  clampB1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClosestDistanceBetweenLines", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t>>(nullptr, ___internal_method, a0, a1, b0, b1, clampAll, clampA0, clampA1, clampB0, clampB1);
}
inline float_t Fusion::LagCompensation::LagCompensationUtils::RayCapsuleIntersect(::UnityEngine::Vector3  rayOrigin, ::UnityEngine::Vector3  rayDir, ::UnityEngine::Vector3  capsulePointA, ::UnityEngine::Vector3  capsulePointB, float_t  capsuleRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RayCapsuleIntersect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rayOrigin, rayDir, capsulePointA, capsulePointB, capsuleRadius);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::LagCompensationUtils::ClosestPtPointSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"ClosestPtPointSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, a, b);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::SphereSphere(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  centerB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  intersection, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"SphereSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, centerA, radiusA, centerB, radiusB, intersection, normal);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::RayAABB(::by_ref<::UnityEngine::Vector3>  minB, ::by_ref<::UnityEngine::Vector3>  maxB, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  dir, float_t  sqrMaxdistance, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RayAABB", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, minB, maxB, origin, dir, sqrMaxdistance, point, normal, distance);
}
inline bool Fusion::LagCompensation::LagCompensationUtils::RaySphereIntersection(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  dir, float_t  length, ::UnityEngine::Vector3  center, float_t  radius, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationUtils*>(),
                        {"RaySphereIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p1, dir, length, center, radius, hitPoint, normal, distance);
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::LagCompensationUtils::LagCompensationUtils()   {
}
