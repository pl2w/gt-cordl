#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SwapShirts.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__MB_SwapShirts_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_SwapShirts.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwapShirts::*)()>(&::GlobalNamespace::MB_SwapShirts::Start)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9dfc398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwapShirts.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwapShirts::*)()>(&::GlobalNamespace::MB_SwapShirts::OnGUI)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9dfc4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwapShirts.ChangeOutfit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwapShirts::*)(::ArrayW<::UnityEngine::Renderer*>)>(&::GlobalNamespace::MB_SwapShirts::ChangeOutfit)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x9dfc6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"ChangeOutfit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwapShirts._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwapShirts::*)()>(&::GlobalNamespace::MB_SwapShirts::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfcc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_meshBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBaker;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_meshBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBaker;
}
constexpr void GlobalNamespace::MB_SwapShirts::__cordl_internal_set_meshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBaker = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsBareTorso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsBareTorso;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsBareTorso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsBareTorso;
}
constexpr void GlobalNamespace::MB_SwapShirts::__cordl_internal_set_clothingAndBodyPartsBareTorso(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clothingAndBodyPartsBareTorso = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsBareTorsoDamagedArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsBareTorsoDamagedArm;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsBareTorsoDamagedArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsBareTorsoDamagedArm;
}
constexpr void GlobalNamespace::MB_SwapShirts::__cordl_internal_set_clothingAndBodyPartsBareTorsoDamagedArm(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clothingAndBodyPartsBareTorsoDamagedArm = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsHoodie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsHoodie;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::MB_SwapShirts::__cordl_internal_get_clothingAndBodyPartsHoodie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clothingAndBodyPartsHoodie;
}
constexpr void GlobalNamespace::MB_SwapShirts::__cordl_internal_set_clothingAndBodyPartsHoodie(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clothingAndBodyPartsHoodie = value;
}
inline void GlobalNamespace::MB_SwapShirts::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SwapShirts::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SwapShirts::ChangeOutfit(::ArrayW<::UnityEngine::Renderer*>  outfit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {"ChangeOutfit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outfit);
}
inline void GlobalNamespace::MB_SwapShirts::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwapShirts*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_SwapShirts* GlobalNamespace::MB_SwapShirts::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_SwapShirts*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_SwapShirts::MB_SwapShirts()   {
}
