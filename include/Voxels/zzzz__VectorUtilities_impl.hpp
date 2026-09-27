#pragma once
// IWYU pragma private; include "Voxels/VectorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__VectorUtilities_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Voxels::VectorUtilities.ToVectorInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::ToVectorInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db6d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVectorInt", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3Int)>(&::Voxels::VectorUtilities::ToInt3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db6d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::ToInt3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5db6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToHalf3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::half3 (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::ToHalf3)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5db6dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToHalf3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Mathematics::half3)>(&::Voxels::VectorUtilities::ToVector3)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5db6ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVector3", {}, {::i2c::type_of<::Unity::Mathematics::half3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::float3)>(&::Voxels::VectorUtilities::ToInt3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5db6f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.RoundToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::RoundToInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5db6fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.RoundToVectorInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::RoundToVectorInt)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5db7008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.FloorToVectorInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::FloorToVectorInt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5db7254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.CeilToVectorInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::CeilToVectorInt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5db735c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"CeilToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.RoundToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::float3)>(&::Voxels::VectorUtilities::RoundToInt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5db7464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToInt", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.CeilToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::float3)>(&::Voxels::VectorUtilities::CeilToInt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5db74b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"CeilToInt", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.Ceil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::Ceil)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5db75bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Ceil", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::Floor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db7688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Voxels::VectorUtilities::Floor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5db76f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Floor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::ToVector3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db77c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVector3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToFloat3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::ToFloat3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db77d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToFloat3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.FloorToMultipleOfX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::FloorToMultipleOfX)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5db77e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.FloorToMultipleOfX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3Int, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::FloorToMultipleOfX)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5db7928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.FloorToMultipleOfX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::FloorToMultipleOfX)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5db7a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.LocalPositionToChunkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::LocalPositionToChunkId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5db7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.LocalPositionToChunkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::UnityEngine::Vector3Int, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::LocalPositionToChunkId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.LocalPositionToChunkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::LocalPositionToChunkId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db7c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(float_t)>(&::Voxels::VectorUtilities::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db7c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.ToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::Voxels::VectorUtilities::ToFloat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db7cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToFloat", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.IsSolid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Voxels::VectorUtilities::IsSolid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db7cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"IsSolid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.GetCardinalNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Mathematics::int3> (*)(::Unity::Mathematics::int3)>(&::Voxels::VectorUtilities::GetCardinalNeighbours)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5db7cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"GetCardinalNeighbours", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.GetClosestCardinalNeighbour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int3, ::UnityEngine::Vector3)>(&::Voxels::VectorUtilities::GetClosestCardinalNeighbour)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5db7df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"GetClosestCardinalNeighbour", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::Voxels::VectorUtilities::Min)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5db7fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VectorUtilities.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::Voxels::VectorUtilities::Max)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5db8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::ToVectorInt(::Unity::Mathematics::int3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVectorInt", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::ToInt3(::UnityEngine::Vector3Int  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::ToInt3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::half3 Voxels::VectorUtilities::ToHalf3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToHalf3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::half3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Voxels::VectorUtilities::ToVector3(::Unity::Mathematics::half3  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVector3", {}, {::i2c::type_of<::Unity::Mathematics::half3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, h);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::ToInt3(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToInt3", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::RoundToInt(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::RoundToVectorInt(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::FloorToVectorInt(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::CeilToVectorInt(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"CeilToVectorInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::RoundToInt(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"RoundToInt", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::CeilToInt(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"CeilToInt", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Voxels::VectorUtilities::Ceil(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Ceil", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Voxels::VectorUtilities::Floor(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Voxels::VectorUtilities::Floor(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Floor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Voxels::VectorUtilities::ToVector3(::Unity::Mathematics::int3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToVector3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Voxels::VectorUtilities::ToFloat3(::Unity::Mathematics::int3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToFloat3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::FloorToMultipleOfX(::UnityEngine::Vector3  v, ::Unity::Mathematics::int3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v, x);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::FloorToMultipleOfX(::UnityEngine::Vector3Int  v, ::Unity::Mathematics::int3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v, x);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::FloorToMultipleOfX(::Unity::Mathematics::int3  v, ::Unity::Mathematics::int3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"FloorToMultipleOfX", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, v, x);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::LocalPositionToChunkId(::UnityEngine::Vector3  localWorldPosition, ::Unity::Mathematics::int3  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, localWorldPosition, chunkSize);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::LocalPositionToChunkId(::UnityEngine::Vector3Int  localWorldPosition, ::Unity::Mathematics::int3  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, localWorldPosition, chunkSize);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::LocalPositionToChunkId(::Unity::Mathematics::int3  localWorldPosition, ::Unity::Mathematics::int3  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"LocalPositionToChunkId", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, localWorldPosition, chunkSize);
}
inline uint8_t Voxels::VectorUtilities::ToByte(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline float_t Voxels::VectorUtilities::ToFloat(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"ToFloat", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline bool Voxels::VectorUtilities::IsSolid(uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"IsSolid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, density);
}
inline ::ArrayW<::Unity::Mathematics::int3> Voxels::VectorUtilities::GetCardinalNeighbours(::Unity::Mathematics::int3  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"GetCardinalNeighbours", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Mathematics::int3>>(nullptr, ___internal_method, center);
}
inline ::Unity::Mathematics::int3 Voxels::VectorUtilities::GetClosestCardinalNeighbour(::Unity::Mathematics::int3  center, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"GetClosestCardinalNeighbour", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, center, target);
}
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::Min(::UnityEngine::Vector3Int  v1, ::UnityEngine::Vector3Int  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v1, v2);
}
inline ::UnityEngine::Vector3Int Voxels::VectorUtilities::Max(::UnityEngine::Vector3Int  v1, ::UnityEngine::Vector3Int  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VectorUtilities*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v1, v2);
}
// Ctor Parameters []
constexpr ::Voxels::VectorUtilities::VectorUtilities()   {
}
