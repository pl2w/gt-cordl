#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderActions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderActions_def.hpp"
#include "GlobalNamespace/zzzz__BuilderAction_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateAttachToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, bool)>(&::GlobalNamespace::BuilderActions::CreateAttachToPlayer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57b52f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateAttachToPlayerRollback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, ::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderActions::CreateAttachToPlayerRollback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b532c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPlayerRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateDetachFromPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::BuilderActions::CreateDetachFromPlayer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57b53ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDetachFromPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateAttachToPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t, int8_t, uint8_t, int32_t, int32_t)>(&::GlobalNamespace::BuilderActions::CreateAttachToPiece)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b5414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateAttachToPieceRollback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, ::GlobalNamespace::BuilderPiece*, int32_t)>(&::GlobalNamespace::BuilderActions::CreateAttachToPieceRollback)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57b546c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPieceRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateDetachFromPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::BuilderActions::CreateDetachFromPiece)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57b5548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDetachFromPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateMakeRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t)>(&::GlobalNamespace::BuilderActions::CreateMakeRoot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57b5570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateMakeRoot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateDropPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::BuilderActions::CreateDropPiece)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b55a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDropPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateDropPieceRollback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, ::GlobalNamespace::BuilderPiece*, int32_t)>(&::GlobalNamespace::BuilderActions::CreateDropPieceRollback)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x57b55f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDropPieceRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions.CreateAttachToShelfRollback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderAction (*)(int32_t, ::GlobalNamespace::BuilderPiece*, int32_t, bool, int32_t, float_t)>(&::GlobalNamespace::BuilderActions::CreateAttachToShelfRollback)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57b582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToShelfRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderActions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderActions::*)()>(&::GlobalNamespace::BuilderActions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b5918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateAttachToPlayer(int32_t  cmdId, int32_t  pieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  actorNumber, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId, localPosition, localRotation, actorNumber, leftHand);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateAttachToPlayerRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPlayerRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, piece);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateDetachFromPlayer(int32_t  cmdId, int32_t  pieceId, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDetachFromPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId, actorNumber);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateAttachToPiece(int32_t  cmdId, int32_t  pieceId, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  actorNumber, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId, parentPieceId, attachIndex, parentAttachIndex, bumpOffsetX, bumpOffsetZ, twist, actorNumber, timeStamp);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateAttachToPieceRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToPieceRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, piece, actorNumber);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateDetachFromPiece(int32_t  cmdId, int32_t  pieceId, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDetachFromPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId, actorNumber);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateMakeRoot(int32_t  cmdId, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateMakeRoot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateDropPiece(int32_t  cmdId, int32_t  pieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDropPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, pieceId, localPosition, localRotation, velocity, angVelocity, actorNumber);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateDropPieceRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  rootPiece, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateDropPieceRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, rootPiece, actorNumber);
}
inline ::GlobalNamespace::BuilderAction GlobalNamespace::BuilderActions::CreateAttachToShelfRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece, int32_t  shelfID, bool  isConveyor, int32_t  timestamp, float_t  splineTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {"CreateAttachToShelfRollback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderAction>(nullptr, ___internal_method, cmdId, piece, shelfID, isConveyor, timestamp, splineTime);
}
inline void GlobalNamespace::BuilderActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderActions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderActions* GlobalNamespace::BuilderActions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderActions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderActions::BuilderActions()   {
}
