#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelActions.hpp"
#include "PlayFab/Internal/zzzz__SingletonMonoBehaviour_1_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelActions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelActions.PlayDigFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelActions::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, int32_t)>(&::GlobalNamespace::VoxelActions::PlayDigFX)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5df632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelActions*>(),
                        {"PlayDigFX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelActions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelActions::*)()>(&::GlobalNamespace::VoxelActions::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5df64d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelActions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoxelActions::__cordl_internal_get__hitFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoxelActions::__cordl_internal_get__hitFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitFX;
}
constexpr void GlobalNamespace::VoxelActions::__cordl_internal_set__hitFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoxelActions::__cordl_internal_get__dirtDigFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtDigFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoxelActions::__cordl_internal_get__dirtDigFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtDigFX;
}
constexpr void GlobalNamespace::VoxelActions::__cordl_internal_set__dirtDigFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtDigFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoxelActions::__cordl_internal_get__dirtDigBigFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtDigBigFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoxelActions::__cordl_internal_get__dirtDigBigFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirtDigBigFX;
}
constexpr void GlobalNamespace::VoxelActions::__cordl_internal_set__dirtDigBigFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirtDigBigFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoxelActions::__cordl_internal_get__stoneDigFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoneDigFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoxelActions::__cordl_internal_get__stoneDigFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoneDigFX;
}
constexpr void GlobalNamespace::VoxelActions::__cordl_internal_set__stoneDigFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stoneDigFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoxelActions::__cordl_internal_get__stoneDigBigFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoneDigBigFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoxelActions::__cordl_internal_get__stoneDigBigFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoneDigBigFX;
}
constexpr void GlobalNamespace::VoxelActions::__cordl_internal_set__stoneDigBigFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stoneDigBigFX = value;
}
inline void GlobalNamespace::VoxelActions::PlayDigFX(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, int32_t  dirtAmount, int32_t  stoneAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelActions*>(),
                        {"PlayDigFX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal, dirtAmount, stoneAmount);
}
inline void GlobalNamespace::VoxelActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelActions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoxelActions* GlobalNamespace::VoxelActions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoxelActions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelActions::VoxelActions()   {
}
