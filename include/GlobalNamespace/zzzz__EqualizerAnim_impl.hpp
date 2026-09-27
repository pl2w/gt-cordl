#pragma once
// IWYU pragma private; include "GlobalNamespace/EqualizerAnim.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EqualizerAnim_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualizerAnim.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EqualizerAnim::*)()>(&::GlobalNamespace::EqualizerAnim::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x564d834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualizerAnim.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EqualizerAnim::*)()>(&::GlobalNamespace::EqualizerAnim::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x564d854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualizerAnim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EqualizerAnim::*)()>(&::GlobalNamespace::EqualizerAnim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564da44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EqualizerAnim::__cordl_internal_get_redCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_redCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redCurve;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_redCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EqualizerAnim::__cordl_internal_get_greenCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_greenCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenCurve;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_greenCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EqualizerAnim::__cordl_internal_get_blueCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_blueCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueCurve;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_blueCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueCurve = value;
}
constexpr float_t& GlobalNamespace::EqualizerAnim::__cordl_internal_get_loopDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopDuration;
}
constexpr float_t const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_loopDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopDuration;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_loopDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopDuration = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::EqualizerAnim::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::StringW& GlobalNamespace::EqualizerAnim::__cordl_internal_get_inputColorProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorProperty;
}
constexpr ::StringW const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_inputColorProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorProperty;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_inputColorProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputColorProperty = value;
}
constexpr int32_t& GlobalNamespace::EqualizerAnim::__cordl_internal_get_inputColorHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorHash;
}
constexpr int32_t const& GlobalNamespace::EqualizerAnim::__cordl_internal_get_inputColorHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputColorHash;
}
constexpr void GlobalNamespace::EqualizerAnim::__cordl_internal_set_inputColorHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputColorHash = value;
}
inline void GlobalNamespace::EqualizerAnim::setStaticF_thisFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "thisFrame", ::GlobalNamespace::EqualizerAnim*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::EqualizerAnim::getStaticF_thisFrame()  {
return ::cordl_internals::getStaticField<int32_t, "thisFrame", ::GlobalNamespace::EqualizerAnim*>();
}
inline void GlobalNamespace::EqualizerAnim::setStaticF_materialsUpdatedThisFrame(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*, "materialsUpdatedThisFrame", ::GlobalNamespace::EqualizerAnim*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::EqualizerAnim::getStaticF_materialsUpdatedThisFrame()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*, "materialsUpdatedThisFrame", ::GlobalNamespace::EqualizerAnim*>();
}
inline void GlobalNamespace::EqualizerAnim::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EqualizerAnim::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EqualizerAnim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EqualizerAnim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualizerAnim* GlobalNamespace::EqualizerAnim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EqualizerAnim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualizerAnim::EqualizerAnim()   {
}
