#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPool.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPool_def.hpp"
#include "GlobalNamespace/zzzz__BuilderBumpGlow_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderShelf_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSimpleBackgroundWorker_def.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPool_def.hpp"
#include "GorillaTagScripts/zzzz__SnapOverlap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b87d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::Setup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b87e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.BuildFromShelves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*)>(&::GorillaTagScripts::BuilderPool::BuildFromShelves)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b88248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"BuildFromShelves", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.BuildFromPieceSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::BuildFromPieceSets)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"BuildFromPieceSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.SimpleWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::SimpleWork)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b88830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"SimpleWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.AddToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderPool::AddToPool)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5b88374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToPool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.CreatePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderPool::*)(int32_t, bool)>(&::GorillaTagScripts::BuilderPool::CreatePiece)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b860a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.DestroyPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderPool::DestroyPiece)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5b85cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroyPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.AddToGlowBumpPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(int32_t)>(&::GorillaTagScripts::BuilderPool::AddToGlowBumpPool)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b87fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToGlowBumpPool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.CreateGlowBump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderBumpGlow> (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::CreateGlowBump)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b888f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreateGlowBump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.DestroyBumpGlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(::GlobalNamespace::BuilderBumpGlow*)>(&::GorillaTagScripts::BuilderPool::DestroyBumpGlow)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b889b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroyBumpGlow", {}, {::i2c::type_of<::GlobalNamespace::BuilderBumpGlow*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.AddToSnapOverlapPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(int32_t)>(&::GorillaTagScripts::BuilderPool::AddToSnapOverlapPool)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b880fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToSnapOverlapPool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.CreateSnapOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::SnapOverlap* (::GorillaTagScripts::BuilderPool::*)(::GorillaTagScripts::BuilderAttachGridPlane*, ::GlobalNamespace::SnapBounds)>(&::GorillaTagScripts::BuilderPool::CreateSnapOverlap)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b88b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreateSnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::GlobalNamespace::SnapBounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.DestroySnapOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)(::GorillaTagScripts::SnapOverlap*)>(&::GorillaTagScripts::BuilderPool::DestroySnapOverlap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b83438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroySnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::SnapOverlap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::OnDestroy)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b88c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool::*)()>(&::GorillaTagScripts::BuilderPool::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8903c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecePools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecePools;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>* const& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecePools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecePools;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_piecePools(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piecePools = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecePoolLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecePoolLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecePoolLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecePoolLookup;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_piecePoolLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piecePoolLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*& GorillaTagScripts::BuilderPool::__cordl_internal_get_bumpGlowPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bumpGlowPool;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>* const& GorillaTagScripts::BuilderPool::__cordl_internal_get_bumpGlowPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bumpGlowPool;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_bumpGlowPool(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bumpGlowPool = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow>& GorillaTagScripts::BuilderPool::__cordl_internal_get_bumpGlowPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bumpGlowPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow> const& GorillaTagScripts::BuilderPool::__cordl_internal_get_bumpGlowPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bumpGlowPrefab;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_bumpGlowPrefab(::UnityW<::GlobalNamespace::BuilderBumpGlow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bumpGlowPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*& GorillaTagScripts::BuilderPool::__cordl_internal_get_snapOverlapPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOverlapPool;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>* const& GorillaTagScripts::BuilderPool::__cordl_internal_get_snapOverlapPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOverlapPool;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_snapOverlapPool(::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOverlapPool = value;
}
constexpr bool& GorillaTagScripts::BuilderPool::__cordl_internal_get_isSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr bool const& GorillaTagScripts::BuilderPool::__cordl_internal_get_isSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_isSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSetup = value;
}
constexpr bool& GorillaTagScripts::BuilderPool::__cordl_internal_get_hasBuiltPieceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBuiltPieceSets;
}
constexpr bool const& GorillaTagScripts::BuilderPool::__cordl_internal_get_hasBuiltPieceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBuiltPieceSets;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_hasBuiltPieceSets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBuiltPieceSets = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecesToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesToAdd;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& GorillaTagScripts::BuilderPool::__cordl_internal_get_piecesToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesToAdd;
}
constexpr void GorillaTagScripts::BuilderPool::__cordl_internal_set_piecesToAdd(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piecesToAdd = value;
}
inline void GorillaTagScripts::BuilderPool::setStaticF_instance(::UnityW<::GorillaTagScripts::BuilderPool>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::BuilderPool>, "instance", ::GorillaTagScripts::BuilderPool*>(std::forward<::UnityW<::GorillaTagScripts::BuilderPool>>(value));
}
inline ::UnityW<::GorillaTagScripts::BuilderPool> GorillaTagScripts::BuilderPool::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::BuilderPool>, "instance", ::GorillaTagScripts::BuilderPool*>();
}
inline void GorillaTagScripts::BuilderPool::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::BuildFromShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  shelves)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"BuildFromShelves", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelves);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::BuilderPool::BuildFromPieceSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"BuildFromPieceSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::SimpleWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"SimpleWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::AddToPool(int32_t  pieceType, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToPool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, count);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderPool::CreatePiece(int32_t  pieceType, bool  assertNotEmpty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, pieceType, assertNotEmpty);
}
inline void GorillaTagScripts::BuilderPool::DestroyPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroyPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderPool::AddToGlowBumpPool(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToGlowBumpPool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::UnityW<::GlobalNamespace::BuilderBumpGlow> GorillaTagScripts::BuilderPool::CreateGlowBump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreateGlowBump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderBumpGlow>>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::DestroyBumpGlow(::GlobalNamespace::BuilderBumpGlow*  bump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroyBumpGlow", {}, {::i2c::type_of<::GlobalNamespace::BuilderBumpGlow*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bump);
}
inline void GorillaTagScripts::BuilderPool::AddToSnapOverlapPool(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"AddToSnapOverlapPool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GorillaTagScripts::SnapOverlap* GorillaTagScripts::BuilderPool::CreateSnapOverlap(::GorillaTagScripts::BuilderAttachGridPlane*  otherPlane, ::GlobalNamespace::SnapBounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"CreateSnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::GlobalNamespace::SnapBounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::SnapOverlap*>(this, ___internal_method, otherPlane, bounds);
}
inline void GorillaTagScripts::BuilderPool::DestroySnapOverlap(::GorillaTagScripts::SnapOverlap*  snapOverlap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"DestroySnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::SnapOverlap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapOverlap);
}
inline void GorillaTagScripts::BuilderPool::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderPool* GorillaTagScripts::BuilderPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderPool*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr  GorillaTagScripts::BuilderPool::operator ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* GorillaTagScripts::BuilderPool::i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPool::BuilderPool()   {
}
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)(int32_t)>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b88808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b890c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5b891e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b8993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b898ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.__m__Finally3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b8989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8998c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b89994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::*)()>(&::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b899cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderPool>& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderPool> const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::BuilderPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>> const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr bool& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get__isStarterSet_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStarterSet_5__3;
}
constexpr bool const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get__isStarterSet_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStarterSet_5__3;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set__isStarterSet_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isStarterSet_5__3 = value;
}
constexpr bool& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get__isFallbackSet_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFallbackSet_5__4;
}
constexpr bool const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get__isFallbackSet_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFallbackSet_5__4;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set__isFallbackSet_5__4(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFallbackSet_5__4 = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*> const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___7__wrap4(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap4 = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap5;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo> const& GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_get___7__wrap5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap5;
}
constexpr void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__cordl_internal_set___7__wrap5(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap5 = value;
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::__m__Finally3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15::BuilderPool__BuildFromPieceSets_d__15()   {
}
