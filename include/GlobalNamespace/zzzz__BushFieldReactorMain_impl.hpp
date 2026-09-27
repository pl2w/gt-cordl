#pragma once
// IWYU pragma private; include "GlobalNamespace/BushFieldReactorMain.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BushFieldReactorMain_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BushFieldReactorMain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BushFieldReactorMain::*)()>(&::GlobalNamespace::BushFieldReactorMain::Start)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x55ea980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BushFieldReactorMain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BushFieldReactorMain::*)()>(&::GlobalNamespace::BushFieldReactorMain::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x55eaea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BushFieldReactorMain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BushFieldReactorMain::*)()>(&::GlobalNamespace::BushFieldReactorMain::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Bush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bush;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Bush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bush;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_Bush(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bush = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Blossom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Blossom;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Blossom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Blossom;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_Blossom(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Blossom = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Sphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sphere;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_Sphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sphere;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_Sphere(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sphere = value;
}
constexpr int32_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumBushes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumBushes;
}
constexpr int32_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumBushes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumBushes;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_NumBushes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumBushes = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_BushScaleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BushScaleRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_BushScaleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BushScaleRange;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_BushScaleRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BushScaleRange = value;
}
constexpr int32_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumBlossoms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumBlossoms;
}
constexpr int32_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumBlossoms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumBlossoms;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_NumBlossoms(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumBlossoms = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_BlossomScaleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlossomScaleRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_BlossomScaleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlossomScaleRange;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_BlossomScaleRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlossomScaleRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_FieldBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_FieldBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldBounds;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_FieldBounds(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FieldBounds = value;
}
constexpr int32_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumSpheresPerCircle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSpheresPerCircle;
}
constexpr int32_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumSpheresPerCircle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSpheresPerCircle;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_NumSpheresPerCircle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumSpheresPerCircle = value;
}
constexpr int32_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumCircles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumCircles;
}
constexpr int32_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_NumCircles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumCircles;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_NumCircles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumCircles = value;
}
constexpr float_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_MaxCircleRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCircleRadius;
}
constexpr float_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_MaxCircleRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCircleRadius;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_MaxCircleRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxCircleRadius = value;
}
constexpr float_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_CircleSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CircleSpeed;
}
constexpr float_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_CircleSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CircleSpeed;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_CircleSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CircleSpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_m_aSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aSphere;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_m_aSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aSphere;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_m_aSphere(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aSphere = value;
}
constexpr float_t& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_m_basePhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_basePhase;
}
constexpr float_t const& GlobalNamespace::BushFieldReactorMain::__cordl_internal_get_m_basePhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_basePhase;
}
constexpr void GlobalNamespace::BushFieldReactorMain::__cordl_internal_set_m_basePhase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_basePhase = value;
}
inline void GlobalNamespace::BushFieldReactorMain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BushFieldReactorMain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BushFieldReactorMain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BushFieldReactorMain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BushFieldReactorMain* GlobalNamespace::BushFieldReactorMain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BushFieldReactorMain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BushFieldReactorMain::BushFieldReactorMain()   {
}
