#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetScoreDisplay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__HitTargetScoreDisplay_def.hpp"
#include "GlobalNamespace/zzzz__HitTargetScoreDisplay_def.hpp"
#include "GorillaTag/zzzz__WatchableIntSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay::*)()>(&::GlobalNamespace::HitTargetScoreDisplay::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x571d46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay::*)()>(&::GlobalNamespace::HitTargetScoreDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x571d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay.ResetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay::*)()>(&::GlobalNamespace::HitTargetScoreDisplay::ResetRotation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x571d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"ResetRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay.RotatingCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HitTargetScoreDisplay::*)()>(&::GlobalNamespace::HitTargetScoreDisplay::RotatingCo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x571d748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"RotatingCo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay.OnScoreChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay::*)(int32_t)>(&::GlobalNamespace::HitTargetScoreDisplay::OnScoreChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x571d7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"OnScoreChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay::*)()>(&::GlobalNamespace::HitTargetScoreDisplay::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x571d850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::WatchableIntSO>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_networkedScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedScore;
}
constexpr ::UnityW<::GorillaTag::WatchableIntSO> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_networkedScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedScore;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_networkedScore(::UnityW<::GorillaTag::WatchableIntSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedScore = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_currentScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScore;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_currentScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScore;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_currentScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScore = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensOld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensOld;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensOld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensOld;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_tensOld(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tensOld = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsOld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsOld;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsOld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsOld;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_hundredsOld(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hundredsOld = value;
}
constexpr float_t& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_rotateTimeTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTimeTotal;
}
constexpr float_t const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_rotateTimeTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTimeTotal;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_rotateTimeTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateTimeTotal = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_matPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_matPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matPropBlock = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_numberSheet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberSheet;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_numberSheet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberSheet;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_numberSheet(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numberSheet = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_rotateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateSpeed;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_rotateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateSpeed;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_rotateSpeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_singlesCard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singlesCard;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_singlesCard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singlesCard;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_singlesCard(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singlesCard = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensCard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensCard;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensCard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensCard;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_tensCard(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tensCard = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsCard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsCard;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsCard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsCard;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_hundredsCard(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hundredsCard = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_singlesRend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singlesRend;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_singlesRend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singlesRend;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_singlesRend(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singlesRend = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensRend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensRend;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_tensRend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensRend;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_tensRend(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tensRend = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsRend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsRend;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_hundredsRend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hundredsRend;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_hundredsRend(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hundredsRend = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_currentRotationCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotationCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_get_currentRotationCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotationCoroutine;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay::__cordl_internal_set_currentRotationCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRotationCoroutine = value;
}
inline void GlobalNamespace::HitTargetScoreDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetScoreDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetScoreDisplay::ResetRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"ResetRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HitTargetScoreDisplay::RotatingCo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"RotatingCo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetScoreDisplay::OnScoreChanged(int32_t  newScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {"OnScoreChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScore);
}
inline void GlobalNamespace::HitTargetScoreDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HitTargetScoreDisplay* GlobalNamespace::HitTargetScoreDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitTargetScoreDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetScoreDisplay::HitTargetScoreDisplay()   {
}
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)(int32_t)>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5735064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)()>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x573508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)()>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5735090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)()>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57354d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)()>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57354e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::*)()>(&::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5735518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetScoreDisplay>& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HitTargetScoreDisplay> const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetScoreDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__timeElapsedSinceHit_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsedSinceHit_5__2;
}
constexpr float_t const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__timeElapsedSinceHit_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsedSinceHit_5__2;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__timeElapsedSinceHit_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeElapsedSinceHit_5__2 = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__singlesPlace_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singlesPlace_5__3;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__singlesPlace_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singlesPlace_5__3;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__singlesPlace_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____singlesPlace_5__3 = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__tensPlace_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tensPlace_5__4;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__tensPlace_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tensPlace_5__4;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__tensPlace_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tensPlace_5__4 = value;
}
constexpr bool& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__tensChange_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tensChange_5__5;
}
constexpr bool const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__tensChange_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tensChange_5__5;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__tensChange_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tensChange_5__5 = value;
}
constexpr int32_t& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__hundredsPlace_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hundredsPlace_5__6;
}
constexpr int32_t const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__hundredsPlace_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hundredsPlace_5__6;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__hundredsPlace_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hundredsPlace_5__6 = value;
}
constexpr bool& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__hundredsChange_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hundredsChange_5__7;
}
constexpr bool const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__hundredsChange_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hundredsChange_5__7;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__hundredsChange_5__7(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hundredsChange_5__7 = value;
}
constexpr bool& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__digitsChange_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitsChange_5__8;
}
constexpr bool const& GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_get__digitsChange_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitsChange_5__8;
}
constexpr void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::__cordl_internal_set__digitsChange_5__8(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitsChange_5__8 = value;
}
inline void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18::HitTargetScoreDisplay__RotatingCo_d__18()   {
}
