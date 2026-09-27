#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderWaterVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderWaterVolume_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)(int32_t, int32_t)>(&::GlobalNamespace::BuilderWaterVolume::OnPieceCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b46b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)()>(&::GlobalNamespace::BuilderWaterVolume::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b46b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)()>(&::GlobalNamespace::BuilderWaterVolume::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57b46bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)()>(&::GlobalNamespace::BuilderWaterVolume::OnPieceActivate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57b4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)()>(&::GlobalNamespace::BuilderWaterVolume::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b49a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderWaterVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderWaterVolume::*)()>(&::GlobalNamespace::BuilderWaterVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b4a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_piece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_piece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piece = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_waterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_waterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_waterVolume(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_waterMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_waterMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterMesh;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_waterMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterMesh = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_floatingObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingObjects;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_floatingObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingObjects;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_floatingObjects(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingObjects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_floating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floating;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_floating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floating;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_floating(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floating = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_sunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunk;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderWaterVolume::__cordl_internal_get_sunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunk;
}
constexpr void GlobalNamespace::BuilderWaterVolume::__cordl_internal_set_sunk(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunk = value;
}
inline void GlobalNamespace::BuilderWaterVolume::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GlobalNamespace::BuilderWaterVolume::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderWaterVolume::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderWaterVolume::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderWaterVolume::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderWaterVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderWaterVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderWaterVolume* GlobalNamespace::BuilderWaterVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderWaterVolume*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GlobalNamespace::BuilderWaterVolume::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GlobalNamespace::BuilderWaterVolume::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderWaterVolume::BuilderWaterVolume()   {
}
