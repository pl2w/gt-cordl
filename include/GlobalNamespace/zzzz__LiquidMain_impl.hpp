#pragma once
// IWYU pragma private; include "GlobalNamespace/LiquidMain.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LiquidMain_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LiquidMain.ResetEffector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiquidMain::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::LiquidMain::ResetEffector)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55e8f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"ResetEffector", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiquidMain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiquidMain::*)()>(&::GlobalNamespace::LiquidMain::Start)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x55e9034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiquidMain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiquidMain::*)()>(&::GlobalNamespace::LiquidMain::Update)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x55e97cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LiquidMain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LiquidMain::*)()>(&::GlobalNamespace::LiquidMain::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::LiquidMain::__cordl_internal_get_PlaneMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaneMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::LiquidMain::__cordl_internal_get_PlaneMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaneMaterial;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_PlaneMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlaneMaterial = value;
}
constexpr ::UnityW<::BoingKit::BoingReactorField>& GlobalNamespace::LiquidMain::__cordl_internal_get_ReactorField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr ::UnityW<::BoingKit::BoingReactorField> const& GlobalNamespace::LiquidMain::__cordl_internal_get_ReactorField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactorField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LiquidMain::__cordl_internal_get_Effector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effector;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LiquidMain::__cordl_internal_get_Effector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effector;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_Effector(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effector = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::LiquidMain::__cordl_internal_get_m_planeMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_planeMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::LiquidMain::__cordl_internal_get_m_planeMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_planeMesh;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_m_planeMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_planeMesh = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aaInstancedPlaneCellMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aaInstancedPlaneCellMatrix;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> const& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aaInstancedPlaneCellMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aaInstancedPlaneCellMatrix;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_m_aaInstancedPlaneCellMatrix(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aaInstancedPlaneCellMatrix = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aMovingEffector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aMovingEffector;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aMovingEffector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aMovingEffector;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_m_aMovingEffector(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aMovingEffector = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aMovingEffectorPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aMovingEffectorPhase;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LiquidMain::__cordl_internal_get_m_aMovingEffectorPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aMovingEffectorPhase;
}
constexpr void GlobalNamespace::LiquidMain::__cordl_internal_set_m_aMovingEffectorPhase(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aMovingEffectorPhase = value;
}
inline void GlobalNamespace::LiquidMain::setStaticF_kPlaneMeshCellSize(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kPlaneMeshCellSize", ::GlobalNamespace::LiquidMain*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::LiquidMain::getStaticF_kPlaneMeshCellSize()  {
return ::cordl_internals::getStaticField<float_t, "kPlaneMeshCellSize", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::setStaticF_kNumInstancedPlaneCellPerDrawCall(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kNumInstancedPlaneCellPerDrawCall", ::GlobalNamespace::LiquidMain*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LiquidMain::getStaticF_kNumInstancedPlaneCellPerDrawCall()  {
return ::cordl_internals::getStaticField<int32_t, "kNumInstancedPlaneCellPerDrawCall", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::setStaticF_kNumMovingEffectors(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kNumMovingEffectors", ::GlobalNamespace::LiquidMain*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LiquidMain::getStaticF_kNumMovingEffectors()  {
return ::cordl_internals::getStaticField<int32_t, "kNumMovingEffectors", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::setStaticF_kMovingEffectorPhaseSpeed(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kMovingEffectorPhaseSpeed", ::GlobalNamespace::LiquidMain*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::LiquidMain::getStaticF_kMovingEffectorPhaseSpeed()  {
return ::cordl_internals::getStaticField<float_t, "kMovingEffectorPhaseSpeed", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::setStaticF_kNumPlaneCells(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kNumPlaneCells", ::GlobalNamespace::LiquidMain*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LiquidMain::getStaticF_kNumPlaneCells()  {
return ::cordl_internals::getStaticField<int32_t, "kNumPlaneCells", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::setStaticF_kPlaneMeshResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kPlaneMeshResolution", ::GlobalNamespace::LiquidMain*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LiquidMain::getStaticF_kPlaneMeshResolution()  {
return ::cordl_internals::getStaticField<int32_t, "kPlaneMeshResolution", ::GlobalNamespace::LiquidMain*>();
}
inline void GlobalNamespace::LiquidMain::ResetEffector(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"ResetEffector", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LiquidMain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiquidMain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LiquidMain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LiquidMain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LiquidMain* GlobalNamespace::LiquidMain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LiquidMain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LiquidMain::LiquidMain()   {
}
