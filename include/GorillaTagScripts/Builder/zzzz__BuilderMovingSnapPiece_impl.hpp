#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderMovingSnapPiece.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingSnapPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingPart_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::Awake)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c217b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.GetTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::GetTimeOffset)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c219dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"GetTimeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c21b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c21b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c21c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceActivate)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5c22270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c226a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnStateChanged)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5c21eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnStateRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::IsStateValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c22820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c22890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.FunctionalPieceFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::FunctionalPieceFixedUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c22c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"FunctionalPieceFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece.UpdateMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::UpdateMaster)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5c22894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"UpdateMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderMovingSnapPiece._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderMovingSnapPiece::*)()>(&::GorillaTagScripts::Builder::BuilderMovingSnapPiece::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c22d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_MovingParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MovingParts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>* const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_MovingParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MovingParts;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_MovingParts(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MovingParts = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_startMovingFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startMovingFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_startMovingFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startMovingFX;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_startMovingFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startMovingFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_stopMovingFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_stopMovingFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingFX;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_stopMovingFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopMovingFX = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_activated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activated;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_activated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activated;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_activated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activated = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_moving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_moving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_moving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moving = value;
}
constexpr uint8_t& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_currentPauseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPauseNode;
}
constexpr uint8_t const& GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_get_currentPauseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPauseNode;
}
constexpr void GorillaTagScripts::Builder::BuilderMovingSnapPiece::__cordl_internal_set_currentPauseNode(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPauseNode = value;
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Builder::BuilderMovingSnapPiece::GetTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"GetTimeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderMovingSnapPiece::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::FunctionalPieceFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"FunctionalPieceFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::UpdateMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {"UpdateMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderMovingSnapPiece::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderMovingSnapPiece* GorillaTagScripts::Builder::BuilderMovingSnapPiece::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderMovingSnapPiece*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderMovingSnapPiece::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderMovingSnapPiece::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderMovingSnapPiece::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderMovingSnapPiece::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderMovingSnapPiece::BuilderMovingSnapPiece()   {
}
