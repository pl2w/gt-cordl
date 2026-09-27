#pragma once
// IWYU pragma private; include "GlobalNamespace/SpatialUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpatialUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.XYZToFlatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::SpatialUtils::XYZToFlatIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b0f45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"XYZToFlatIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.XYZToFlatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3Int, int32_t, int32_t)>(&::GlobalNamespace::SpatialUtils::XYZToFlatIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b0f468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"XYZToFlatIndex", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.FlatIndexToXYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::SpatialUtils::FlatIndexToXYZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b0f478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"FlatIndexToXYZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.FlatIndexToXYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::SpatialUtils::FlatIndexToXYZ)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b0f49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"FlatIndexToXYZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.CompareByZOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::GlobalNamespace::SpatialUtils::CompareByZOrder)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b0f4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"CompareByZOrder", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderEncode64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint32_t, uint32_t, ::by_ref<uint64_t>)>(&::GlobalNamespace::SpatialUtils::ZOrderEncode64)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b0f738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderDecode64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::SpatialUtils::ZOrderDecode64)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b0f898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.Encode64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::GlobalNamespace::SpatialUtils::Encode64)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b0fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"Encode64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.Decode64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::GlobalNamespace::SpatialUtils::Decode64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b0fa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"Decode64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::GlobalNamespace::SpatialUtils::ZOrderEncode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b0faec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::SpatialUtils::ZOrderDecode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b0fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::SpatialUtils::ZOrderEncode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b0fbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ZOrderDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::SpatialUtils::ZOrderDecode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b0fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.TryGetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Renderer>>*, ::by_ref<::UnityEngine::Bounds>)>(&::GlobalNamespace::SpatialUtils::TryGetBounds)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5b0fd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.TryGetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Collider>>*, ::by_ref<::UnityEngine::Bounds>)>(&::GlobalNamespace::SpatialUtils::TryGetBounds)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5b100bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.TryGetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Bounds>, bool, bool, bool)>(&::GlobalNamespace::SpatialUtils::TryGetBounds)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5b10464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.GetRadialBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::SpatialUtils::GetRadialBounds)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5b10800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetRadialBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.DistSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SpatialUtils::DistSq)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b10c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"DistSq", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.GetCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Bounds)>(&::GlobalNamespace::SpatialUtils::GetCorners)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b10ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.GetCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SpatialUtils::GetCorners)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b10d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.GetCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::SpatialUtils::GetCorners)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b10e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.TransformedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::SpatialUtils::TransformedBy)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5b10f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TransformedBy", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.BoxIntersectsBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bounds>)>(&::GlobalNamespace::SpatialUtils::BoxIntersectsBox)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b111cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"BoxIntersectsBox", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ComputeBoundingSphere2Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::SpatialUtils::ComputeBoundingSphere2Pass)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b11280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ComputeBoundingSphere2Pass", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialUtils.ComputeBoundingSphereRitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::SpatialUtils::ComputeBoundingSphereRitter)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5b114b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ComputeBoundingSphereRitter", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpatialUtils::setStaticF_kMinVector(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "kMinVector", ::GlobalNamespace::SpatialUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SpatialUtils::getStaticF_kMinVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kMinVector", ::GlobalNamespace::SpatialUtils*>();
}
inline void GlobalNamespace::SpatialUtils::setStaticF_kMaxVector(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "kMaxVector", ::GlobalNamespace::SpatialUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SpatialUtils::getStaticF_kMaxVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kMaxVector", ::GlobalNamespace::SpatialUtils*>();
}
inline int32_t GlobalNamespace::SpatialUtils::XYZToFlatIndex(int32_t  x, int32_t  y, int32_t  z, int32_t  xMax, int32_t  yMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"XYZToFlatIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y, z, xMax, yMax);
}
inline int32_t GlobalNamespace::SpatialUtils::XYZToFlatIndex(::UnityEngine::Vector3Int  xyz, int32_t  xMax, int32_t  yMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"XYZToFlatIndex", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, xyz, xMax, yMax);
}
inline void GlobalNamespace::SpatialUtils::FlatIndexToXYZ(int32_t  idx, int32_t  xMax, int32_t  yMax, ::by_ref<int32_t>  x, ::by_ref<int32_t>  y, ::by_ref<int32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"FlatIndexToXYZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, xMax, yMax, x, y, z);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::SpatialUtils::FlatIndexToXYZ(int32_t  idx, int32_t  xMax, int32_t  yMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"FlatIndexToXYZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, idx, xMax, yMax);
}
inline int32_t GlobalNamespace::SpatialUtils::CompareByZOrder(::UnityEngine::Vector3Int  a, ::UnityEngine::Vector3Int  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"CompareByZOrder", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::SpatialUtils::ZOrderEncode64(uint32_t  x, uint32_t  y, uint32_t  z, ::by_ref<uint64_t>  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z, code);
}
inline void GlobalNamespace::SpatialUtils::ZOrderDecode64(uint64_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, x, y, z);
}
inline uint64_t GlobalNamespace::SpatialUtils::Encode64(uint64_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"Encode64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, w);
}
inline uint32_t GlobalNamespace::SpatialUtils::Decode64(uint64_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"Decode64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, w);
}
inline uint32_t GlobalNamespace::SpatialUtils::ZOrderEncode(uint32_t  x, uint32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y);
}
inline void GlobalNamespace::SpatialUtils::ZOrderDecode(uint32_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, x, y);
}
inline uint32_t GlobalNamespace::SpatialUtils::ZOrderEncode(uint32_t  x, uint32_t  y, uint32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderEncode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline void GlobalNamespace::SpatialUtils::ZOrderDecode(uint32_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ZOrderDecode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, x, y, z);
}
inline bool GlobalNamespace::SpatialUtils::TryGetBounds(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Renderer>>*  renderers, ::by_ref<::UnityEngine::Bounds>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderers, result);
}
inline bool GlobalNamespace::SpatialUtils::TryGetBounds(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::by_ref<::UnityEngine::Bounds>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliders, result);
}
inline bool GlobalNamespace::SpatialUtils::TryGetBounds(::UnityEngine::Transform*  x, ::by_ref<::UnityEngine::Bounds>  result, bool  includeRenderers, bool  includeColliders, bool  fallbackToXforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TryGetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, result, includeRenderers, includeColliders, fallbackToXforms);
}
inline ::UnityEngine::BoundingSphere GlobalNamespace::SpatialUtils::GetRadialBounds(::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Matrix4x4>  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetRadialBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(nullptr, ___internal_method, bounds, xform);
}
inline float_t GlobalNamespace::SpatialUtils::DistSq(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"DistSq", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::SpatialUtils::GetCorners(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, b);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::SpatialUtils::GetCorners(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, min, max);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::SpatialUtils::GetCorners(::UnityEngine::Bounds  b, ::UnityEngine::Matrix4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"GetCorners", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, b, transform);
}
inline ::UnityEngine::Bounds GlobalNamespace::SpatialUtils::TransformedBy(::UnityEngine::Bounds  b, ::UnityEngine::Matrix4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"TransformedBy", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, b, transform);
}
inline bool GlobalNamespace::SpatialUtils::BoxIntersectsBox(::by_ref<::UnityEngine::Bounds>  a, ::by_ref<::UnityEngine::Bounds>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"BoxIntersectsBox", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::SpatialUtils::ComputeBoundingSphere2Pass(::ArrayW<::UnityEngine::Vector3>  points, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<float_t>  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ComputeBoundingSphere2Pass", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, center, radius);
}
inline void GlobalNamespace::SpatialUtils::ComputeBoundingSphereRitter(::ArrayW<::UnityEngine::Vector3>  points, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<float_t>  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialUtils*>(),
                        {"ComputeBoundingSphereRitter", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, center, radius);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpatialUtils::SpatialUtils()   {
}
