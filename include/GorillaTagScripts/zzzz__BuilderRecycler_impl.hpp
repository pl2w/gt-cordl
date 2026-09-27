#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderRecycler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderRecycler_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceColors_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResources_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b899d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::Start)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5b89ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::OnDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b8a32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::OnZoneChanged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5b8a108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::BuilderRecycler::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b8a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.OnRecycleRequestedAtRecycler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderRecycler::OnRecycleRequestedAtRecycler)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5b8a558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnRecycleRequestedAtRecycler", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.AddPieceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)(::GlobalNamespace::BuilderResources*)>(&::GorillaTagScripts::BuilderRecycler::AddPieceCost)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b8a6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"AddPieceCost", {}, {::i2c::type_of<::GlobalNamespace::BuilderResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.GetUVShiftOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::GetUVShiftOffset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b8ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"GetUVShiftOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.UpdatePipeLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::UpdatePipeLoop)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5b8a874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"UpdatePipeLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.ResetOutputPipes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::ResetOutputPipes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b89f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"ResetOutputPipes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler.UpdateRecycler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::UpdateRecycler)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5b8ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"UpdateRecycler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderRecycler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderRecycler::*)()>(&::GorillaTagScripts::BuilderRecycler::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5b8adcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recycleEffectDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleEffectDuration;
}
constexpr float_t const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recycleEffectDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleEffectDuration;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_recycleEffectDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycleEffectDuration = value;
}
constexpr double_t& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_timeToStopBlades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToStopBlades;
}
constexpr double_t const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_timeToStopBlades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToStopBlades;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_timeToStopBlades(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToStopBlades = value;
}
constexpr bool& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_playingBladeEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingBladeEffect;
}
constexpr bool const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_playingBladeEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingBladeEffect;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_playingBladeEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingBladeEffect = value;
}
constexpr bool& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_playingPipeEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingPipeEffect;
}
constexpr bool const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_playingPipeEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingPipeEffect;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_playingPipeEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingPipeEffect = value;
}
constexpr double_t& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_timeToCheckPipes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToCheckPipes;
}
constexpr double_t const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_timeToCheckPipes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToCheckPipes;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_timeToCheckPipes(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToCheckPipes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_effectBehaviors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectBehaviors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_effectBehaviors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectBehaviors;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_effectBehaviors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectBehaviors = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recycleParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleParticles;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recycleParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleParticles;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_recycleParticles(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycleParticles = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_bladeSoundPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bladeSoundPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_bladeSoundPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bladeSoundPlayer;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_bladeSoundPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bladeSoundPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_outputPipes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPipes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_outputPipes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPipes;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_outputPipes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPipes = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_builderResourceColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderResourceColors;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_builderResourceColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderResourceColors;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_builderResourceColors(::UnityW<::GlobalNamespace::BuilderResourceColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderResourceColors = value;
}
constexpr bool& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_hasFans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFans;
}
constexpr bool const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_hasFans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFans;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_hasFans(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFans = value;
}
constexpr bool& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_hasPipes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPipes;
}
constexpr bool const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_hasPipes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPipes;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_hasPipes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPipes = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_props(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___props = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_totalRecycledCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalRecycledCost;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_totalRecycledCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalRecycledCost;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_totalRecycledCost(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalRecycledCost = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_currentChainCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChainCost;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_currentChainCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChainCost;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_currentChainCost(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChainCost = value;
}
constexpr int32_t& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_numPipes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPipes;
}
constexpr int32_t const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_numPipes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPipes;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_numPipes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numPipes = value;
}
constexpr int32_t& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recyclerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerID;
}
constexpr int32_t const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_recyclerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerID;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_recyclerID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerID = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_zoneRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_zoneRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneRenderers;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_zoneRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneRenderers = value;
}
constexpr bool& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_inBuilderZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr bool const& GorillaTagScripts::BuilderRecycler::__cordl_internal_get_inBuilderZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr void GorillaTagScripts::BuilderRecycler::__cordl_internal_set_inBuilderZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inBuilderZone = value;
}
inline void GorillaTagScripts::BuilderRecycler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::BuilderRecycler::OnRecycleRequestedAtRecycler(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"OnRecycleRequestedAtRecycler", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderRecycler::AddPieceCost(::GlobalNamespace::BuilderResources*  cost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"AddPieceCost", {}, {::i2c::type_of<::GlobalNamespace::BuilderResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cost);
}
inline ::UnityEngine::Vector2 GorillaTagScripts::BuilderRecycler::GetUVShiftOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"GetUVShiftOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::UpdatePipeLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"UpdatePipeLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::ResetOutputPipes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"ResetOutputPipes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::UpdateRecycler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {"UpdateRecycler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderRecycler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderRecycler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderRecycler* GorillaTagScripts::BuilderRecycler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderRecycler*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderRecycler::BuilderRecycler()   {
}
