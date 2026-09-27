#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlBalloons.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlBalloons_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)()>(&::GlobalNamespace::PaintbrawlBalloons::Awake)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x573695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)()>(&::GlobalNamespace::PaintbrawlBalloons::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5736b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)()>(&::GlobalNamespace::PaintbrawlBalloons::LateUpdate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5736e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons.PopBalloon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)(int32_t)>(&::GlobalNamespace::PaintbrawlBalloons::PopBalloon)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5737114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"PopBalloon", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons.UpdateBalloonColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)()>(&::GlobalNamespace::PaintbrawlBalloons::UpdateBalloonColors)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5736b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"UpdateBalloonColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlBalloons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlBalloons::*)()>(&::GlobalNamespace::PaintbrawlBalloons::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5737278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloons;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_balloons(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloons = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_orangeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_orangeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_orangeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orangeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_blueColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_blueColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_blueColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_lastColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_lastColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastColor;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_lastColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastColor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloonPopFXPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloonPopFXPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXPrefab;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_balloonPopFXPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonPopFXPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_bMgr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bMgr;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_bMgr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bMgr;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_bMgr(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bMgr = value;
}
constexpr ::Photon::Realtime::Player*& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_myPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPlayer;
}
constexpr ::Photon::Realtime::Player* const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_myPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPlayer;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_myPlayer(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPlayer = value;
}
constexpr int32_t& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_colorShaderPropID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorShaderPropID;
}
constexpr int32_t const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_colorShaderPropID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorShaderPropID;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_colorShaderPropID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorShaderPropID = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_matPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_matPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matPropBlock = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloonsCachedActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonsCachedActiveState;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_balloonsCachedActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonsCachedActiveState;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_balloonsCachedActiveState(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonsCachedActiveState = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_teamColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaintbrawlBalloons::__cordl_internal_get_teamColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamColor;
}
constexpr void GlobalNamespace::PaintbrawlBalloons::__cordl_internal_set_teamColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamColor = value;
}
inline void GlobalNamespace::PaintbrawlBalloons::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintbrawlBalloons::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintbrawlBalloons::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintbrawlBalloons::PopBalloon(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"PopBalloon", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void GlobalNamespace::PaintbrawlBalloons::UpdateBalloonColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {"UpdateBalloonColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintbrawlBalloons::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlBalloons*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PaintbrawlBalloons* GlobalNamespace::PaintbrawlBalloons::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaintbrawlBalloons*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaintbrawlBalloons::PaintbrawlBalloons()   {
}
