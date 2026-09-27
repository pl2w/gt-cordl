#pragma once
// IWYU pragma private; include "GorillaNetworking/GhostReactorProgression.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__GhostReactorProgression_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRProgressionScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GorillaNetworking/zzzz__GhostReactorProgression__GetStartingProgression_d__6_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)()>(&::GorillaNetworking::GhostReactorProgression::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c8840c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)()>(&::GorillaNetworking::GhostReactorProgression::Start)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c88464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetStartingProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(::GlobalNamespace::GRPlayer*)>(&::GorillaNetworking::GhostReactorProgression::GetStartingProgression)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c886cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetStartingProgression", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.SetProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(int32_t, ::GlobalNamespace::GRPlayer*)>(&::GorillaNetworking::GhostReactorProgression::SetProgression)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c8878c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"SetProgression", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.UnlockProgressionTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(::StringW, ::StringW, ::GlobalNamespace::GhostReactor*)>(&::GorillaNetworking::GhostReactorProgression::UnlockProgressionTreeNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c887fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"UnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.OnTrackRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(::StringW, int32_t)>(&::GorillaNetworking::GhostReactorProgression::OnTrackRead)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c8886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnTrackRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.OnTrackSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(::StringW, int32_t)>(&::GorillaNetworking::GhostReactorProgression::OnTrackSet)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c889f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnTrackSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.OnNodeUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)()>(&::GorillaNetworking::GhostReactorProgression::OnNodeUnlocked)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c88aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnNodeUnlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetGradePointDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetGradePointDetails)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c88b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetGradePointDetails", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetTitleNameAndGrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetTitleNameAndGrade)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5c88df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleNameAndGrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetTitleName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetTitleName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c8902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetTitleNameFromLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetTitleNameFromLevel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c89180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleNameFromLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetGrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetGrade)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c89298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetGrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.GetTitleLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GorillaNetworking::GhostReactorProgression::GetTitleLevel)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c89458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression.LoadGRPSO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::GhostReactorProgression::LoadGRPSO)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c88d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"LoadGRPSO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)()>(&::GorillaNetworking::GhostReactorProgression::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c89598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GhostReactorProgression._Start_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GhostReactorProgression::*)(::StringW, ::StringW)>(&::GorillaNetworking::GhostReactorProgression::_Start_b__5_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c895f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"<Start>b__5_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::GhostReactorProgression::__cordl_internal_get_progressionTrackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionTrackId;
}
constexpr ::StringW const& GorillaNetworking::GhostReactorProgression::__cordl_internal_get_progressionTrackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionTrackId;
}
constexpr void GorillaNetworking::GhostReactorProgression::__cordl_internal_set_progressionTrackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionTrackId = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GorillaNetworking::GhostReactorProgression::__cordl_internal_get__grPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GorillaNetworking::GhostReactorProgression::__cordl_internal_get__grPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr void GorillaNetworking::GhostReactorProgression::__cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GorillaNetworking::GhostReactorProgression::__cordl_internal_get__reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GorillaNetworking::GhostReactorProgression::__cordl_internal_get__reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactor;
}
constexpr void GorillaNetworking::GhostReactorProgression::__cordl_internal_set__reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactor = value;
}
inline void GorillaNetworking::GhostReactorProgression::setStaticF_instance(::UnityW<::GorillaNetworking::GhostReactorProgression>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::GhostReactorProgression>, "instance", ::GorillaNetworking::GhostReactorProgression*>(std::forward<::UnityW<::GorillaNetworking::GhostReactorProgression>>(value));
}
inline ::UnityW<::GorillaNetworking::GhostReactorProgression> GorillaNetworking::GhostReactorProgression::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::GhostReactorProgression>, "instance", ::GorillaNetworking::GhostReactorProgression*>();
}
inline void GorillaNetworking::GhostReactorProgression::setStaticF_grPSO(::UnityW<::GlobalNamespace::GRProgressionScriptableObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GRProgressionScriptableObject>, "grPSO", ::GorillaNetworking::GhostReactorProgression*>(std::forward<::UnityW<::GlobalNamespace::GRProgressionScriptableObject>>(value));
}
inline ::UnityW<::GlobalNamespace::GRProgressionScriptableObject> GorillaNetworking::GhostReactorProgression::getStaticF_grPSO()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GRProgressionScriptableObject>, "grPSO", ::GorillaNetworking::GhostReactorProgression*>();
}
inline void GorillaNetworking::GhostReactorProgression::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GhostReactorProgression::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GhostReactorProgression::GetStartingProgression(::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetStartingProgression", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grPlayer);
}
inline void GorillaNetworking::GhostReactorProgression::SetProgression(int32_t  progressionAmountToAdd, ::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"SetProgression", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressionAmountToAdd, grPlayer);
}
inline void GorillaNetworking::GhostReactorProgression::UnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"UnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeId, nodeId, reactor);
}
inline void GorillaNetworking::GhostReactorProgression::OnTrackRead(::StringW  trackId, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnTrackRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackId, progress);
}
inline void GorillaNetworking::GhostReactorProgression::OnTrackSet(::StringW  trackId, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnTrackSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackId, progress);
}
inline void GorillaNetworking::GhostReactorProgression::OnNodeUnlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"OnNodeUnlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> GorillaNetworking::GhostReactorProgression::GetGradePointDetails(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetGradePointDetails", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t>>(nullptr, ___internal_method, points);
}
inline ::StringW GorillaNetworking::GhostReactorProgression::GetTitleNameAndGrade(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleNameAndGrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, points);
}
inline ::StringW GorillaNetworking::GhostReactorProgression::GetTitleName(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, points);
}
inline ::StringW GorillaNetworking::GhostReactorProgression::GetTitleNameFromLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleNameFromLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, level);
}
inline int32_t GorillaNetworking::GhostReactorProgression::GetGrade(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetGrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, points);
}
inline int32_t GorillaNetworking::GhostReactorProgression::GetTitleLevel(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"GetTitleLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, points);
}
inline void GorillaNetworking::GhostReactorProgression::LoadGRPSO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"LoadGRPSO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::GhostReactorProgression::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GhostReactorProgression::_Start_b__5_0(::StringW  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GhostReactorProgression*>(),
                        {"<Start>b__5_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b);
}
inline ::GorillaNetworking::GhostReactorProgression* GorillaNetworking::GhostReactorProgression::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GhostReactorProgression*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GhostReactorProgression::GhostReactorProgression()   {
}
