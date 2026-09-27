#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_MonkeyeAI_RepStateData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_MonkeyeAI_RepStateData_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData (::GlobalNamespace::MonkeyeAI_ReplState::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c05b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData)>(&::GlobalNamespace::MonkeyeAI_ReplState::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c05bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c05c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c05e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeyeAI_ReplState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c06200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeyeAI_ReplState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5c0638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)(bool)>(&::GlobalNamespace::MonkeyeAI_ReplState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c06764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c067c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_state(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::StringW& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_userId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userId = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_attackPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_attackPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackPos;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_attackPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackPos = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_floorEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorEnabled;
}
constexpr bool const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_floorEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorEnabled;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_floorEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorEnabled = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_portalEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalEnabled;
}
constexpr bool const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_portalEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalEnabled;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_portalEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalEnabled = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_freezePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezePlayer;
}
constexpr bool const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_freezePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezePlayer;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_freezePlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freezePlayer = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get_alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set_alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alpha = value;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData const& GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState::__cordl_internal_set__Data(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData GlobalNamespace::MonkeyeAI_ReplState::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::set_Data(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::MonkeyeAI_ReplState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeyeAI_ReplState* GlobalNamespace::MonkeyeAI_ReplState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeyeAI_ReplState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeyeAI_ReplState::MonkeyeAI_ReplState()   {
}
