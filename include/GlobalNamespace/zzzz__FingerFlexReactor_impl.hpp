#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerFlexReactor.hpp"
#include "GlobalNamespace/zzzz__FingerFlexReactor_FingerMap_impl.hpp"
#include "GlobalNamespace/zzzz__VRMap_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FingerFlexReactor_def.hpp"
#include "GlobalNamespace/zzzz__FingerFlexReactor_FingerMap_def.hpp"
#include "GlobalNamespace/zzzz__FingerFlexReactor_def.hpp"
#include "GlobalNamespace/zzzz__VRMap_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor::*)()>(&::GlobalNamespace::FingerFlexReactor::Setup)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x58037b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor::*)()>(&::GlobalNamespace::FingerFlexReactor::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5803a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor::*)()>(&::GlobalNamespace::FingerFlexReactor::FixedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5803a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor.UpdateBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor::*)()>(&::GlobalNamespace::FingerFlexReactor::UpdateBlendShapes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5803a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"UpdateBlendShapes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor.GetLerpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::VRMap*)>(&::GlobalNamespace::FingerFlexReactor::GetLerpValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5803b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"GetLerpValue", {}, {::i2c::type_of<::GlobalNamespace::VRMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor::*)()>(&::GlobalNamespace::FingerFlexReactor::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5803c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::FingerFlexReactor::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
constexpr ::ArrayW<::GlobalNamespace::VRMap*>& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__fingers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingers;
}
constexpr ::ArrayW<::GlobalNamespace::VRMap*> const& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__fingers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingers;
}
constexpr void GlobalNamespace::FingerFlexReactor::__cordl_internal_set__fingers(::ArrayW<::GlobalNamespace::VRMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingers = value;
}
constexpr ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__blendShapeTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeTargets;
}
constexpr ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*> const& GlobalNamespace::FingerFlexReactor::__cordl_internal_get__blendShapeTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeTargets;
}
constexpr void GlobalNamespace::FingerFlexReactor::__cordl_internal_set__blendShapeTargets(::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blendShapeTargets = value;
}
inline void GlobalNamespace::FingerFlexReactor::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerFlexReactor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerFlexReactor::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FingerFlexReactor::UpdateBlendShapes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"UpdateBlendShapes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::FingerFlexReactor::GetLerpValue(::GlobalNamespace::VRMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {"GetLerpValue", {}, {::i2c::type_of<::GlobalNamespace::VRMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, map);
}
inline void GlobalNamespace::FingerFlexReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FingerFlexReactor* GlobalNamespace::FingerFlexReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FingerFlexReactor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerFlexReactor::FingerFlexReactor()   {
}
//  Writing Method size for method: ::GlobalNamespace::FingerFlexReactor_BlendShapeTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FingerFlexReactor_BlendShapeTarget::*)()>(&::GlobalNamespace::FingerFlexReactor_BlendShapeTarget::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5803d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FingerFlexReactor_FingerMap& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_sourceFinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFinger;
}
constexpr ::GlobalNamespace::FingerFlexReactor_FingerMap const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_sourceFinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFinger;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_sourceFinger(::GlobalNamespace::FingerFlexReactor_FingerMap  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceFinger = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr int32_t& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_blendShapeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndex;
}
constexpr int32_t const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_blendShapeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndex;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_blendShapeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeIndex = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_inputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_inputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputRange;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_inputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_outputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_outputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputRange;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_outputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputRange = value;
}
constexpr float_t& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_currentValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr float_t const& GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_get_currentValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::__cordl_internal_set_currentValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentValue = value;
}
inline void GlobalNamespace::FingerFlexReactor_BlendShapeTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FingerFlexReactor_BlendShapeTarget* GlobalNamespace::FingerFlexReactor_BlendShapeTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerFlexReactor_BlendShapeTarget::FingerFlexReactor_BlendShapeTarget()   {
}
