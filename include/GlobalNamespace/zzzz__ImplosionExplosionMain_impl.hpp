#pragma once
// IWYU pragma private; include "GlobalNamespace/ImplosionExplosionMain.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImplosionExplosionMain_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImplosionExplosionMain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImplosionExplosionMain::*)()>(&::GlobalNamespace::ImplosionExplosionMain::Start)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x55e83e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImplosionExplosionMain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImplosionExplosionMain::*)()>(&::GlobalNamespace::ImplosionExplosionMain::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x55e870c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImplosionExplosionMain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImplosionExplosionMain::*)()>(&::GlobalNamespace::ImplosionExplosionMain::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e88ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BoingKit::BoingReactorField>& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_ReactorField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr ::UnityW<::BoingKit::BoingReactorField> const& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_ReactorField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr void GlobalNamespace::ImplosionExplosionMain::__cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactorField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_Diamond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diamond;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_Diamond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diamond;
}
constexpr void GlobalNamespace::ImplosionExplosionMain::__cordl_internal_set_Diamond(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Diamond = value;
}
constexpr int32_t& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_NumDiamonds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumDiamonds;
}
constexpr int32_t const& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_NumDiamonds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumDiamonds;
}
constexpr void GlobalNamespace::ImplosionExplosionMain::__cordl_internal_set_NumDiamonds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumDiamonds = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_m_aaInstancedDiamondMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aaInstancedDiamondMatrix;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> const& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_m_aaInstancedDiamondMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aaInstancedDiamondMatrix;
}
constexpr void GlobalNamespace::ImplosionExplosionMain::__cordl_internal_set_m_aaInstancedDiamondMatrix(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aaInstancedDiamondMatrix = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_m_diamondMaterialProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_diamondMaterialProps;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::ImplosionExplosionMain::__cordl_internal_get_m_diamondMaterialProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_diamondMaterialProps;
}
constexpr void GlobalNamespace::ImplosionExplosionMain::__cordl_internal_set_m_diamondMaterialProps(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_diamondMaterialProps = value;
}
inline void GlobalNamespace::ImplosionExplosionMain::setStaticF_kNumInstancedBushesPerDrawCall(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kNumInstancedBushesPerDrawCall", ::GlobalNamespace::ImplosionExplosionMain*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ImplosionExplosionMain::getStaticF_kNumInstancedBushesPerDrawCall()  {
return ::cordl_internals::getStaticField<int32_t, "kNumInstancedBushesPerDrawCall", ::GlobalNamespace::ImplosionExplosionMain*>();
}
inline void GlobalNamespace::ImplosionExplosionMain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ImplosionExplosionMain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ImplosionExplosionMain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImplosionExplosionMain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ImplosionExplosionMain* GlobalNamespace::ImplosionExplosionMain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ImplosionExplosionMain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImplosionExplosionMain::ImplosionExplosionMain()   {
}
