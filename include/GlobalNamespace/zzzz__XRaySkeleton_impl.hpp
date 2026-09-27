#pragma once
// IWYU pragma private; include "GlobalNamespace/XRaySkeleton.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "GlobalNamespace/zzzz__SyncToPlayerColor_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__XRaySkeleton_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSimpleBackgroundWorker_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)()>(&::GlobalNamespace::XRaySkeleton::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5796024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.OnBuildInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)()>(&::GlobalNamespace::XRaySkeleton::OnBuildInitialize)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5796028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"OnBuildInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.SimpleWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)()>(&::GlobalNamespace::XRaySkeleton::SimpleWork)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x57961e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"SimpleWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.SetMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)(int32_t)>(&::GlobalNamespace::XRaySkeleton::SetMaterialIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5796304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"SetMaterialIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)()>(&::GlobalNamespace::XRaySkeleton::Setup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5796358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)(::UnityEngine::Color)>(&::GlobalNamespace::XRaySkeleton::UpdateColor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5796440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRaySkeleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRaySkeleton::*)()>(&::GlobalNamespace::XRaySkeleton::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5796618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::XRaySkeleton::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::XRaySkeleton::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set_renderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::XRaySkeleton::__cordl_internal_get_baseValueMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseValueMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::XRaySkeleton::__cordl_internal_get_baseValueMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseValueMinMax;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set_baseValueMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseValueMinMax = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::XRaySkeleton::__cordl_internal_get_tagMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::XRaySkeleton::__cordl_internal_get_tagMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagMaterials;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set_tagMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagMaterials = value;
}
constexpr int32_t& GlobalNamespace::XRaySkeleton::__cordl_internal_get__lastMatIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMatIndex;
}
constexpr int32_t const& GlobalNamespace::XRaySkeleton::__cordl_internal_get__lastMatIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMatIndex;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set__lastMatIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMatIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::XRaySkeleton::__cordl_internal_get_mats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mats;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::XRaySkeleton::__cordl_internal_get_mats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mats;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set_mats(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mats = value;
}
constexpr int32_t& GlobalNamespace::XRaySkeleton::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::XRaySkeleton::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::XRaySkeleton::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
inline void GlobalNamespace::XRaySkeleton::setStaticF__BaseColor(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_BaseColor", ::GlobalNamespace::XRaySkeleton*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::XRaySkeleton::getStaticF__BaseColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_BaseColor", ::GlobalNamespace::XRaySkeleton*>();
}
inline void GlobalNamespace::XRaySkeleton::setStaticF__EmissionColor(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_EmissionColor", ::GlobalNamespace::XRaySkeleton*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::XRaySkeleton::getStaticF__EmissionColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_EmissionColor", ::GlobalNamespace::XRaySkeleton*>();
}
inline void GlobalNamespace::XRaySkeleton::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XRaySkeleton::OnBuildInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"OnBuildInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XRaySkeleton::SimpleWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"SimpleWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XRaySkeleton::SetMaterialIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"SetMaterialIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::XRaySkeleton::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XRaySkeleton::UpdateColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::XRaySkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRaySkeleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XRaySkeleton* GlobalNamespace::XRaySkeleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XRaySkeleton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr  GlobalNamespace::XRaySkeleton::operator ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* GlobalNamespace::XRaySkeleton::i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRaySkeleton::XRaySkeleton()   {
}
