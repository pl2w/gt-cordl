#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerBoardLine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoardLine_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoardLine_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoard_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.ResetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::ResetData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bd07ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"ResetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.SetLineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::PlayerTimerBoardLine::SetLineData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bd080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"SetLineData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.InitializeLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::InitializeLine)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bd092c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"InitializeLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.UpdateLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::UpdateLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bd0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdateLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.UpdatePlayerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::UpdatePlayerText)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5bd0964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdatePlayerText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.UpdateTimeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::UpdateTimeText)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5bd0d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdateTimeText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.NormalizeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::PlayerTimerBoardLine::*)(bool, ::StringW)>(&::GorillaTagScripts::PlayerTimerBoardLine::NormalizeName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5bd0f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine.CompareByTotalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GorillaTagScripts::PlayerTimerBoardLine*, ::GorillaTagScripts::PlayerTimerBoardLine*)>(&::GorillaTagScripts::PlayerTimerBoardLine::CompareByTotalTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bd1290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"CompareByTotalTime", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoardLine*>(), ::i2c::type_of<::GorillaTagScripts::PlayerTimerBoardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd12f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerNameVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameVisible;
}
constexpr ::StringW const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerNameVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameVisible;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_playerNameVisible(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameVisible = value;
}
constexpr ::StringW& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerTimeStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeStr;
}
constexpr ::StringW const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerTimeStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeStr;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_playerTimeStr(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTimeStr = value;
}
constexpr float_t& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerTimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeSeconds;
}
constexpr float_t const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerTimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTimeSeconds;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_playerTimeSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTimeSeconds = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_linePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linePlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_linePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linePlayer;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_linePlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_playerVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerVRRig = value;
}
constexpr ::UnityW<::GorillaTagScripts::PlayerTimerBoard>& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_parentBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBoard;
}
constexpr ::UnityW<::GorillaTagScripts::PlayerTimerBoard> const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_parentBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBoard;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_parentBoard(::UnityW<::GorillaTagScripts::PlayerTimerBoard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentBoard = value;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_rigContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_rigContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigContainer = value;
}
constexpr ::StringW& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_currentNickname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNickname;
}
constexpr ::StringW const& GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_get_currentNickname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNickname;
}
constexpr void GorillaTagScripts::PlayerTimerBoardLine::__cordl_internal_set_currentNickname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNickname = value;
}
inline void GorillaTagScripts::PlayerTimerBoardLine::ResetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"ResetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::SetLineData(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"SetLineData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::InitializeLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"InitializeLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::UpdateLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdateLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::UpdatePlayerText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdatePlayerText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::UpdateTimeText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"UpdateTimeText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::PlayerTimerBoardLine::NormalizeName(bool  doIt, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, doIt, text);
}
inline int32_t GorillaTagScripts::PlayerTimerBoardLine::CompareByTotalTime(::GorillaTagScripts::PlayerTimerBoardLine*  lineA, ::GorillaTagScripts::PlayerTimerBoardLine*  lineB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {"CompareByTotalTime", {}, {::i2c::type_of<::GorillaTagScripts::PlayerTimerBoardLine*>(), ::i2c::type_of<::GorillaTagScripts::PlayerTimerBoardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lineA, lineB);
}
inline void GorillaTagScripts::PlayerTimerBoardLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::PlayerTimerBoardLine* GorillaTagScripts::PlayerTimerBoardLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerBoardLine*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerBoardLine::PlayerTimerBoardLine()   {
}
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoardLine___c::*)()>(&::GorillaTagScripts::PlayerTimerBoardLine___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd1368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoardLine___c._NormalizeName_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerBoardLine___c::*)(char16_t)>(&::GorillaTagScripts::PlayerTimerBoardLine___c::_NormalizeName_b__14_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bd1370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine___c*>(),
                        {"<NormalizeName>b__14_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::PlayerTimerBoardLine___c::setStaticF___9(::GorillaTagScripts::PlayerTimerBoardLine___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::PlayerTimerBoardLine___c*, "<>9", ::GorillaTagScripts::PlayerTimerBoardLine___c*>(std::forward<::GorillaTagScripts::PlayerTimerBoardLine___c*>(value));
}
inline ::GorillaTagScripts::PlayerTimerBoardLine___c* GorillaTagScripts::PlayerTimerBoardLine___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::PlayerTimerBoardLine___c*, "<>9", ::GorillaTagScripts::PlayerTimerBoardLine___c*>();
}
inline void GorillaTagScripts::PlayerTimerBoardLine___c::setStaticF___9__14_0(::System::Predicate_1<char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<char16_t>*, "<>9__14_0", ::GorillaTagScripts::PlayerTimerBoardLine___c*>(std::forward<::System::Predicate_1<char16_t>*>(value));
}
inline ::System::Predicate_1<char16_t>* GorillaTagScripts::PlayerTimerBoardLine___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<char16_t>*, "<>9__14_0", ::GorillaTagScripts::PlayerTimerBoardLine___c*>();
}
inline void GorillaTagScripts::PlayerTimerBoardLine___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::PlayerTimerBoardLine___c::_NormalizeName_b__14_0(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoardLine___c*>(),
                        {"<NormalizeName>b__14_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::GorillaTagScripts::PlayerTimerBoardLine___c* GorillaTagScripts::PlayerTimerBoardLine___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerBoardLine___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerBoardLine___c::PlayerTimerBoardLine___c()   {
}
