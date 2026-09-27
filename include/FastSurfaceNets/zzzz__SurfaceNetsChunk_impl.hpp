#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsChunk_def.hpp"
#include "FastSurfaceNets/zzzz__GenerationParameters_def.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsChunk__BuildChunk_d__13_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5da9b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5da9bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk.BuildChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::BuildChunk)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5da9b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"BuildChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk.FillChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::FillChunk)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5da9c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"FillChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5da9f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsChunk::*)()>(&::FastSurfaceNets::SurfaceNetsChunk::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5daa170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_Id(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::FastSurfaceNets::GenerationParameters*& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::FastSurfaceNets::GenerationParameters* const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_parameters(::FastSurfaceNets::GenerationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
constexpr bool& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_autoGenerate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGenerate;
}
constexpr bool const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_autoGenerate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGenerate;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_autoGenerate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoGenerate = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_chunkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPosition;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_chunkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPosition;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_chunkPosition(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkPosition = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_sdf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdf;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_sdf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdf;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_sdf(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdf = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_min(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_max(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_shape(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void FastSurfaceNets::SurfaceNetsChunk::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
inline void FastSurfaceNets::SurfaceNetsChunk::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsChunk::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsChunk::BuildChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"BuildChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsChunk::FillChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"FillChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsChunk::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsChunk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsChunk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::FastSurfaceNets::SurfaceNetsChunk* FastSurfaceNets::SurfaceNetsChunk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::FastSurfaceNets::SurfaceNetsChunk*>());
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::SurfaceNetsChunk::SurfaceNetsChunk()   {
}
