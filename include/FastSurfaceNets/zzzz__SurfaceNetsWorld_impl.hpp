#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsWorld.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsWorld_def.hpp"
#include "FastSurfaceNets/zzzz__GenerationParameters_def.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsChunk_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsWorld.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsWorld::*)()>(&::FastSurfaceNets::SurfaceNetsWorld::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5daad38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsWorld.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsWorld::*)()>(&::FastSurfaceNets::SurfaceNetsWorld::Generate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5daad3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"Generate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsWorld.DestroyChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsWorld::*)()>(&::FastSurfaceNets::SurfaceNetsWorld::DestroyChildren)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5daaf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"DestroyChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsWorld::*)()>(&::FastSurfaceNets::SurfaceNetsWorld::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_chunkPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPrefab;
}
constexpr ::UnityW<::FastSurfaceNets::SurfaceNetsChunk> const& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_chunkPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPrefab;
}
constexpr void FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_set_chunkPrefab(::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkPrefab = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_set_radius(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::FastSurfaceNets::GenerationParameters*& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::FastSurfaceNets::GenerationParameters* const& FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void FastSurfaceNets::SurfaceNetsWorld::__cordl_internal_set_parameters(::FastSurfaceNets::GenerationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
inline void FastSurfaceNets::SurfaceNetsWorld::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsWorld::Generate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"Generate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsWorld::DestroyChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {"DestroyChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void FastSurfaceNets::SurfaceNetsWorld::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsWorld*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::FastSurfaceNets::SurfaceNetsWorld* FastSurfaceNets::SurfaceNetsWorld::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::FastSurfaceNets::SurfaceNetsWorld*>());
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::SurfaceNetsWorld::SurfaceNetsWorld()   {
}
