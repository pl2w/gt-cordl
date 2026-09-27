#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaMouthFlap.hpp"
#include "GlobalNamespace/zzzz__MouthFlapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaMouthFlap_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__MouthFlapLevel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::Start)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5919ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.EnableLeafBlower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::EnableLeafBlower)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x591a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"EnableLeafBlower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x591a1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x591a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::SliceUpdate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x591a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.CheckMouthflapChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)(bool, float_t)>(&::GlobalNamespace::GorillaMouthFlap::CheckMouthflapChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x591a484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"CheckMouthflapChange", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.UpdateMouthFlapFlipbook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)(::GlobalNamespace::MouthFlapLevel)>(&::GlobalNamespace::GorillaMouthFlap::UpdateMouthFlapFlipbook)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x591a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"UpdateMouthFlapFlipbook", {}, {::i2c::type_of<::GlobalNamespace::MouthFlapLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.SetMouthTextureReplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::GorillaMouthFlap::SetMouthTextureReplacement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x591a62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetMouthTextureReplacement", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.ClearMouthTextureReplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::ClearMouthTextureReplacement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x591a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"ClearMouthTextureReplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.SetFaceMaterialReplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GorillaMouthFlap::*)(::UnityEngine::Material*)>(&::GlobalNamespace::GorillaMouthFlap::SetFaceMaterialReplacement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x591a6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetFaceMaterialReplacement", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.ClearFaceMaterialReplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::ClearFaceMaterialReplacement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x591a7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"ClearFaceMaterialReplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap.SetDefaultMouthAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)(::UnityEngine::Material*)>(&::GlobalNamespace::GorillaMouthFlap::SetDefaultMouthAtlas)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x591a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetDefaultMouthAtlas", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMouthFlap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMouthFlap::*)()>(&::GlobalNamespace::GorillaMouthFlap::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x591a7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_targetFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFace;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_targetFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFace;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_targetFace(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetFace = value;
}
constexpr ::ArrayW<::GlobalNamespace::MouthFlapLevel>& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_mouthFlapLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthFlapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::MouthFlapLevel> const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_mouthFlapLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthFlapLevels;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_mouthFlapLevels(::ArrayW<::GlobalNamespace::MouthFlapLevel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouthFlapLevels = value;
}
constexpr ::GlobalNamespace::MouthFlapLevel& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_noMicFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noMicFace;
}
constexpr ::GlobalNamespace::MouthFlapLevel const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_noMicFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noMicFace;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_noMicFace(::GlobalNamespace::MouthFlapLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noMicFace = value;
}
constexpr ::GlobalNamespace::MouthFlapLevel& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_leafBlowerFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafBlowerFace;
}
constexpr ::GlobalNamespace::MouthFlapLevel const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_leafBlowerFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafBlowerFace;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_leafBlowerFace(::GlobalNamespace::MouthFlapLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafBlowerFace = value;
}
constexpr bool& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_useMicEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMicEnabled;
}
constexpr bool const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_useMicEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMicEnabled;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_useMicEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMicEnabled = value;
}
constexpr float_t& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_leafBlowerActiveUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafBlowerActiveUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_leafBlowerActiveUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafBlowerActiveUntilTimestamp;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_leafBlowerActiveUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafBlowerActiveUntilTimestamp = value;
}
constexpr int32_t& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_activeFlipbookIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFlipbookIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_activeFlipbookIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFlipbookIndex;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_activeFlipbookIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeFlipbookIndex = value;
}
constexpr float_t& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_activeFlipbookPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFlipbookPlayTime;
}
constexpr float_t const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_activeFlipbookPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeFlipbookPlayTime;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_activeFlipbookPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeFlipbookPlayTime = value;
}
constexpr ::GlobalNamespace::ISpeakerLoudness*& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr ::GlobalNamespace::ISpeakerLoudness* const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_speaker(::GlobalNamespace::ISpeakerLoudness*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speaker = value;
}
constexpr float_t& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_lastTimeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeUpdated;
}
constexpr float_t const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_lastTimeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeUpdated;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_lastTimeUpdated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTimeUpdated = value;
}
constexpr float_t& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_targetFaceRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFaceRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_targetFaceRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFaceRenderer;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_targetFaceRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetFaceRenderer = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_facePropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_facePropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePropBlock;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_facePropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___facePropBlock = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_defaultMouthAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMouthAtlas;
}
constexpr ::UnityW<::UnityEngine::Texture> const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_defaultMouthAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMouthAtlas;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_defaultMouthAtlas(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMouthAtlas = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_defaultFaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_defaultFaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFaceMaterial;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_defaultFaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultFaceMaterial = value;
}
constexpr bool& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_hasDefaultMouthAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultMouthAtlas;
}
constexpr bool const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_hasDefaultMouthAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultMouthAtlas;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_hasDefaultMouthAtlas(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDefaultMouthAtlas = value;
}
constexpr bool& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_hasDefaultFaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultFaceMaterial;
}
constexpr bool const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get_hasDefaultFaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultFaceMaterial;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set_hasDefaultFaceMaterial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDefaultFaceMaterial = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get__MouthMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MouthMap;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get__MouthMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MouthMap;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set__MouthMap(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MouthMap = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get__BaseMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseMap;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::GorillaMouthFlap::__cordl_internal_get__BaseMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseMap;
}
constexpr void GlobalNamespace::GorillaMouthFlap::__cordl_internal_set__BaseMap(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseMap = value;
}
inline void GlobalNamespace::GorillaMouthFlap::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::EnableLeafBlower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"EnableLeafBlower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::CheckMouthflapChange(bool  isMicEnabled, float_t  currentLoudness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"CheckMouthflapChange", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMicEnabled, currentLoudness);
}
inline void GlobalNamespace::GorillaMouthFlap::UpdateMouthFlapFlipbook(::GlobalNamespace::MouthFlapLevel  mouthFlap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"UpdateMouthFlapFlipbook", {}, {::i2c::type_of<::GlobalNamespace::MouthFlapLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mouthFlap);
}
inline void GlobalNamespace::GorillaMouthFlap::SetMouthTextureReplacement(::UnityEngine::Texture2D*  replacementMouthAtlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetMouthTextureReplacement", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replacementMouthAtlas);
}
inline void GlobalNamespace::GorillaMouthFlap::ClearMouthTextureReplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"ClearMouthTextureReplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GorillaMouthFlap::SetFaceMaterialReplacement(::UnityEngine::Material*  replacementFaceMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetFaceMaterialReplacement", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, replacementFaceMaterial);
}
inline void GlobalNamespace::GorillaMouthFlap::ClearFaceMaterialReplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"ClearFaceMaterialReplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaMouthFlap::SetDefaultMouthAtlas(::UnityEngine::Material*  face)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {"SetDefaultMouthAtlas", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face);
}
inline void GlobalNamespace::GorillaMouthFlap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMouthFlap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaMouthFlap* GlobalNamespace::GorillaMouthFlap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaMouthFlap*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaMouthFlap::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaMouthFlap::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMouthFlap::GorillaMouthFlap()   {
}
