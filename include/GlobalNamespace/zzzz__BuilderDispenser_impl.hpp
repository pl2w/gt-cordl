#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDispenser.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderDispenser_def.hpp"
#include "GlobalNamespace/zzzz__BuilderDispenser_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57b7b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.UpdateDispenser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::UpdateDispenser)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x57b7bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"UpdateDispenser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.DoesPieceMatchSpawnInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderDispenser::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderDispenser::DoesPieceMatchSpawnInfo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x57b807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"DoesPieceMatchSpawnInfo", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.ShelfPieceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)(::GlobalNamespace::BuilderPiece*, bool)>(&::GlobalNamespace::BuilderDispenser::ShelfPieceCreated)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x57b8270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ShelfPieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.PlayAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::PlayAnimation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57b85f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"PlayAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.ShelfPieceRecycled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderDispenser::ShelfPieceRecycled)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57b868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ShelfPieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.AssignPieceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)(::GlobalNamespace::BuilderPieceSet_PieceInfo, int32_t)>(&::GlobalNamespace::BuilderDispenser::AssignPieceType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57b877c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"AssignPieceType", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet_PieceInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.TrySpawnPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::TrySpawnPiece)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x57b7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"TrySpawnPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.ParentPieceToShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::BuilderDispenser::ParentPieceToShelf)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x57b8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ParentPieceToShelf", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.ClearDispenser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::ClearDispenser)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57b8940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ClearDispenser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser.OnClearTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::OnClearTable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57b8a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"OnClearTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser::*)()>(&::GlobalNamespace::BuilderDispenser::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57b8a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_displayTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_displayTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTransform;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_displayTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTransform = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_animateParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animateParent;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_animateParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animateParent;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_animateParent(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animateParent = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_dispenseDefaultAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseDefaultAnimation;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_dispenseDefaultAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseDefaultAnimation;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_dispenseDefaultAnimation(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenseDefaultAnimation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_dispenserFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_dispenserFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserFX;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_dispenserFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserFX = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_currentAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnimation;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_currentAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAnimation;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_currentAnimation(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAnimation = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr int32_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_shelfID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfID;
}
constexpr int32_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_shelfID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfID;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_shelfID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfID = value;
}
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo& GlobalNamespace::BuilderDispenser::__cordl_internal_get_pieceToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToSpawn;
}
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_pieceToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToSpawn;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_pieceToSpawn(::GlobalNamespace::BuilderPieceSet_PieceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceToSpawn = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnedPieceInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedPieceInstance;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnedPieceInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedPieceInstance;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_spawnedPieceInstance(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedPieceInstance = value;
}
constexpr int32_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr int32_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_materialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo& GlobalNamespace::BuilderDispenser::__cordl_internal_get_nullPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullPiece;
}
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_nullPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullPiece;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_nullPiece(::GlobalNamespace::BuilderPieceSet_PieceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullPiece = value;
}
constexpr int32_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr int32_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_spawnCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCount = value;
}
constexpr double_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_nextSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr double_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_nextSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_nextSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSpawnTime = value;
}
constexpr bool& GlobalNamespace::BuilderDispenser::__cordl_internal_get_hasPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPiece;
}
constexpr bool const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_hasPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPiece;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_hasPiece(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPiece = value;
}
constexpr float_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_OnGrabSpawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabSpawnDelay;
}
constexpr float_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_OnGrabSpawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabSpawnDelay;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_OnGrabSpawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabSpawnDelay = value;
}
constexpr float_t& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnRetryDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRetryDelay;
}
constexpr float_t const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_spawnRetryDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRetryDelay;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_spawnRetryDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRetryDelay = value;
}
constexpr bool& GlobalNamespace::BuilderDispenser::__cordl_internal_get_playFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFX;
}
constexpr bool const& GlobalNamespace::BuilderDispenser::__cordl_internal_get_playFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFX;
}
constexpr void GlobalNamespace::BuilderDispenser::__cordl_internal_set_playFX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFX = value;
}
inline void GlobalNamespace::BuilderDispenser::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser::UpdateDispenser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"UpdateDispenser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderDispenser::DoesPieceMatchSpawnInfo(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"DoesPieceMatchSpawnInfo", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderDispenser::ShelfPieceCreated(::GlobalNamespace::BuilderPiece*  piece, bool  playAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ShelfPieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, playAnimation);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BuilderDispenser::PlayAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"PlayAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser::ShelfPieceRecycled(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ShelfPieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderDispenser::AssignPieceType(::GlobalNamespace::BuilderPieceSet_PieceInfo  piece, int32_t  inMaterialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"AssignPieceType", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet_PieceInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, inMaterialType);
}
inline void GlobalNamespace::BuilderDispenser::TrySpawnPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"TrySpawnPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser::ParentPieceToShelf(::UnityEngine::Transform*  shelfTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ParentPieceToShelf", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfTransform);
}
inline void GlobalNamespace::BuilderDispenser::ClearDispenser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"ClearDispenser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser::OnClearTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {"OnClearTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderDispenser* GlobalNamespace::BuilderDispenser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderDispenser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderDispenser::BuilderDispenser()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)(int32_t)>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57b8664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)()>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b8aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)()>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x57b8aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)()>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b8e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)()>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57b8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::*)()>(&::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b8ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderDispenser>& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BuilderDispenser> const& GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderDispenser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22::BuilderDispenser__PlayAnimation_d__22()   {
}
