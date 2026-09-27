#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_EMomentInState_impl.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_ReactionEntry_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_EMomentInState_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_GameObjectStates_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_MomentInStateActiveOption_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_ReactionEntry_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.PopulateRuntimeLookupArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::PopulateRuntimeLookupArrays)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5d40160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"PopulateRuntimeLookupArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d40658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::OnEnable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d40c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d40e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)(bool)>(&::GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5d40efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction.RemoveAndReportNulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::RemoveAndReportNulls)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5d40670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"RemoveAndReportNulls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d41214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__statusEffectReactions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusEffectReactions;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry> const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__statusEffectReactions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusEffectReactions;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__statusEffectReactions(::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusEffectReactions = value;
}
constexpr int32_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__previousMatIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMatIndex;
}
constexpr int32_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__previousMatIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMatIndex;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__previousMatIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousMatIndex = value;
}
constexpr ::GlobalNamespace::GorillaMaterialReaction_EMomentInState& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMomentInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMomentInState;
}
constexpr ::GlobalNamespace::GorillaMaterialReaction_EMomentInState const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMomentInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMomentInState;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__currentMomentInState(::GlobalNamespace::GorillaMaterialReaction_EMomentInState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMomentInState = value;
}
constexpr double_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMatIndexStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMatIndexStartTime;
}
constexpr double_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMatIndexStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMatIndexStartTime;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__currentMatIndexStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMatIndexStartTime = value;
}
constexpr double_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMomentDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMomentDuration;
}
constexpr double_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__currentMomentDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMomentDuration;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__currentMomentDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMomentDuration = value;
}
constexpr int32_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__reactionsRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactionsRemaining;
}
constexpr int32_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__reactionsRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactionsRemaining;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__reactionsRemaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactionsRemaining = value;
}
constexpr int32_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__momentEnumCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____momentEnumCount;
}
constexpr int32_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__momentEnumCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____momentEnumCount;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__momentEnumCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____momentEnumCount = value;
}
constexpr int32_t& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__matCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matCount;
}
constexpr int32_t const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__matCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matCount;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__matCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matCount = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__mat_x_moment_x_activeBool_to_gObjs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mat_x_moment_x_activeBool_to_gObjs;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>> const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__mat_x_moment_x_activeBool_to_gObjs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mat_x_moment_x_activeBool_to_gObjs;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__mat_x_moment_x_activeBool_to_gObjs(::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mat_x_moment_x_activeBool_to_gObjs = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__ownerVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ownerVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__ownerVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ownerVRRig;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__ownerVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ownerVRRig = value;
}
constexpr bool& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::Reactions::GorillaMaterialReaction::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::PopulateRuntimeLookupArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"PopulateRuntimeLookupArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::RemoveAndReportNulls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {"RemoveAndReportNulls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::GorillaMaterialReaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::GorillaMaterialReaction* GorillaTag::Reactions::GorillaMaterialReaction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::GorillaMaterialReaction*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::Reactions::GorillaMaterialReaction::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::Reactions::GorillaMaterialReaction::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::GorillaMaterialReaction::GorillaMaterialReaction()   {
}
//  Writing Method size for method: ::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute::*)()>(&::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute* GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute::GorillaMaterialReaction_MomentInStateAttribute()   {
}
