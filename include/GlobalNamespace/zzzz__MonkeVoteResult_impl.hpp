#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteResult.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteResult_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteMachine_def.hpp"
#include "GlobalNamespace/zzzz__RockPiles_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeVoteResult::*)()>(&::GlobalNamespace::MonkeVoteResult::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56239d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)(::StringW)>(&::GlobalNamespace::MonkeVoteResult::set_Text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56239d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.ShowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)(::StringW, int32_t, bool, bool, bool)>(&::GlobalNamespace::MonkeVoteResult::ShowResult)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5623a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"ShowResult", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.HideResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)()>(&::GlobalNamespace::MonkeVoteResult::HideResult)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5623bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"HideResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.ShowRockPile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)(int32_t)>(&::GlobalNamespace::MonkeVoteResult::ShowRockPile)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5623ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"ShowRockPile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult.SetDynamicMeshesVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)(bool)>(&::GlobalNamespace::MonkeVoteResult::SetDynamicMeshesVisible)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5623ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"SetDynamicMeshesVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteResult::*)()>(&::GlobalNamespace::MonkeVoteResult::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5623d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__optionIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__optionIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__optionIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optionIndicator = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__optionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__optionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optionText;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__optionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optionText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__scoreIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__scoreIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__scoreIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scoreIndicator = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__scoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__scoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scoreText;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__scoreText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scoreText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__voteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voteIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__voteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voteIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__voteIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voteIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__guessWinIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guessWinIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__guessWinIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guessWinIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__guessWinIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guessWinIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__guessLoseIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guessLoseIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__guessLoseIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guessLoseIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__guessLoseIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guessLoseIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__mostPopularIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mostPopularIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__mostPopularIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mostPopularIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__mostPopularIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mostPopularIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__youWinIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____youWinIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__youWinIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____youWinIndicator;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__youWinIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____youWinIndicator = value;
}
constexpr ::UnityW<::GlobalNamespace::RockPiles>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__rockPiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockPiles;
}
constexpr ::UnityW<::GlobalNamespace::RockPiles> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__rockPiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockPiles;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__rockPiles(::UnityW<::GlobalNamespace::RockPiles>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockPiles = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteMachine>& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__machine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____machine;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteMachine> const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__machine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____machine;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__machine(::UnityW<::GlobalNamespace::MonkeVoteMachine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____machine = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr bool& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__canVote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canVote;
}
constexpr bool const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__canVote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canVote;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__canVote(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canVote = value;
}
constexpr float_t& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__rockPileHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockPileHeight;
}
constexpr float_t const& GlobalNamespace::MonkeVoteResult::__cordl_internal_get__rockPileHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockPileHeight;
}
constexpr void GlobalNamespace::MonkeVoteResult::__cordl_internal_set__rockPileHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockPileHeight = value;
}
inline ::StringW GlobalNamespace::MonkeVoteResult::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteResult::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteResult::ShowResult(::StringW  questionOption, int32_t  percentage, bool  showVote, bool  showPrediction, bool  isWinner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"ShowResult", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questionOption, percentage, showVote, showPrediction, isWinner);
}
inline void GlobalNamespace::MonkeVoteResult::HideResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"HideResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteResult::ShowRockPile(int32_t  percentage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"ShowRockPile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, percentage);
}
inline void GlobalNamespace::MonkeVoteResult::SetDynamicMeshesVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {"SetDynamicMeshesVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::MonkeVoteResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteResult* GlobalNamespace::MonkeVoteResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteResult*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteResult::MonkeVoteResult()   {
}
