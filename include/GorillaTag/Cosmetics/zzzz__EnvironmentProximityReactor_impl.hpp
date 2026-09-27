#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactor_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactorManager_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EnvironmentProximityReactor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d8f8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d8fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::Update)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5d8ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.SyncStateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)(::GlobalNamespace::NetPlayer*, ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::SyncStateTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d90e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"SyncStateTo", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.ClearRemoteActors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::ClearRemoteActors)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5d91130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ClearRemoteActors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.RemoveSharedActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)(int32_t)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::RemoveSharedActor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d91354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"RemoveSharedActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.ApplySharedProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)(int32_t, bool, int32_t)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::ApplySharedProximity)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5d91448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ApplySharedProximity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.AreWithinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::AreWithinThreshold)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d90a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"AreWithinThreshold", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.CalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)(bool)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::CalculateId)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5d8f91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.ResetBlockState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::ResetBlockState)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5d8fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ResetBlockState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor.EdRecalculateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::EdRecalculateId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d915c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d915c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_set_blocks(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocks = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_proximityCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_proximityCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityCollider;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_set_proximityCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityCollider = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_reactorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_reactorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorId;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_set_reactorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorId = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_staticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr ::StringW const& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_staticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticId;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_set_staticId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticId = value;
}
constexpr bool& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_useStaticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr bool const& GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_get_useStaticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStaticId;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor::__cordl_internal_set_useStaticId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useStaticId = value;
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::SyncStateTo(::GlobalNamespace::NetPlayer*  newPlayer, ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"SyncStateTo", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer, manager);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::ClearRemoteActors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ClearRemoteActors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::RemoveSharedActor(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"RemoveSharedActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::ApplySharedProximity(int32_t  blockIndex, bool  isBelow, int32_t  senderActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ApplySharedProximity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockIndex, isBelow, senderActorNumber);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactor::AreWithinThreshold(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic, float_t  threshold, ::by_ref<::UnityEngine::Vector3>  contactPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"AreWithinThreshold", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetic, threshold, contactPoint);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::CalculateId(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"CalculateId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::ResetBlockState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"ResetBlockState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::EdRecalculateId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {"EdRecalculateId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::EnvironmentProximityReactor* GorillaTag::Cosmetics::EnvironmentProximityReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EnvironmentProximityReactor*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EnvironmentProximityReactor::EnvironmentProximityReactor()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock.CanTriggerFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::CanTriggerFrom)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5d90650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {"CanTriggerFrom", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock.CanPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::*)(float_t)>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::CanPlay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d90c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {"CanPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::*)()>(&::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d91650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_interactionKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_interactionKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionKeys;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_interactionKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_ignoreKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_ignoreKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreKeys;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_ignoreKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_listenerKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_listenerKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerKeys;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_listenerKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerKeys = value;
}
constexpr float_t& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_proximityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_proximityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_proximityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_cooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr float_t const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_cooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_cooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onBelowLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onBelowLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowLocal;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_onBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onBelowShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onBelowShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowShared;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_onBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_whileBelowLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_whileBelowLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowLocal;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_whileBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileBelowLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_whileBelowShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_whileBelowShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowShared;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_whileBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileBelowShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onAboveLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onAboveLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveLocal;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_onAboveLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onAboveShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_onAboveShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveShared;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_onAboveShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveShared = value;
}
constexpr bool& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_wasBelow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelow;
}
constexpr bool const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_wasBelow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelow;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_wasBelow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasBelow = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_activeSharedActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSharedActors;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_activeSharedActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSharedActors;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_activeSharedActors(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSharedActors = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_localActorInSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localActorInSet;
}
constexpr int32_t const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_localActorInSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localActorInSet;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_localActorInSet(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localActorInSet = value;
}
constexpr float_t& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_lastTriggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr float_t const& GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_get_lastTriggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::__cordl_internal_set_lastTriggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggerTime = value;
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::CanTriggerFrom(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {"CanTriggerFrom", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetic);
}
inline bool GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::CanPlay(float_t  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {"CanPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, now);
}
inline void GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock* GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock::EnvironmentProximityReactor_InteractionBlock()   {
}
