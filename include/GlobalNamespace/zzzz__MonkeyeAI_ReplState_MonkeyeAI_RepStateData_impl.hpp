#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState_MonkeyeAI_RepStateData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@33_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@3_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_MonkeyeAI_RepStateData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___32_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_32> (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_UserId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c06100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::Fusion::NetworkString_1<::Fusion::_32>)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_UserId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c0682c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_UserId", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_AttackPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_AttackPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c06148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_AttackPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_AttackPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_AttackPos)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c06874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_AttackPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_Timer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_Timer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c06188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_Timer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_Timer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(float_t)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_Timer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c068d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_Timer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_FloorEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_FloorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_FloorEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_FloorEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::Fusion::NetworkBool)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_FloorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_FloorEnabled", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_PortalEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_PortalEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_PortalEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_PortalEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::Fusion::NetworkBool)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_PortalEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_PortalEnabled", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_FreezePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_FreezePlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_FreezePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_FreezePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::Fusion::NetworkBool)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_FreezePlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_FreezePlayer", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_Alpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_Alpha)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c061c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_Alpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_Alpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(float_t)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_Alpha)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c06948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_Alpha", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeyeAI_ReplState_EStates (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)()>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::GlobalNamespace::MonkeyeAI_ReplState_EStates)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::*)(::StringW, ::UnityEngine::Vector3, float_t, bool, bool, bool, float_t, ::GlobalNamespace::MonkeyeAI_ReplState_EStates)>(&::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c05ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CodeGen::FixedStorage@33& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__UserId()  {
return this->____UserId;
}
constexpr ::Fusion::CodeGen::FixedStorage@33 const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__UserId() const {
return this->____UserId;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__UserId(::Fusion::CodeGen::FixedStorage@33  value)  {
this->____UserId = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@3& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__AttackPos()  {
return this->____AttackPos;
}
constexpr ::Fusion::CodeGen::FixedStorage@3 const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__AttackPos() const {
return this->____AttackPos;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__AttackPos(::Fusion::CodeGen::FixedStorage@3  value)  {
this->____AttackPos = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__Timer()  {
return this->____Timer;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__Timer() const {
return this->____Timer;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__Timer(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____Timer = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__FloorEnabled_k__BackingField()  {
return this->____FloorEnabled_k__BackingField;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__FloorEnabled_k__BackingField() const {
return this->____FloorEnabled_k__BackingField;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__FloorEnabled_k__BackingField(::Fusion::NetworkBool  value)  {
this->____FloorEnabled_k__BackingField = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__PortalEnabled_k__BackingField()  {
return this->____PortalEnabled_k__BackingField;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__PortalEnabled_k__BackingField() const {
return this->____PortalEnabled_k__BackingField;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__PortalEnabled_k__BackingField(::Fusion::NetworkBool  value)  {
this->____PortalEnabled_k__BackingField = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__FreezePlayer_k__BackingField()  {
return this->____FreezePlayer_k__BackingField;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__FreezePlayer_k__BackingField() const {
return this->____FreezePlayer_k__BackingField;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__FreezePlayer_k__BackingField(::Fusion::NetworkBool  value)  {
this->____FreezePlayer_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__Alpha()  {
return this->____Alpha;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__Alpha() const {
return this->____Alpha;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__Alpha(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____Alpha = value;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__State_k__BackingField()  {
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_get__State_k__BackingField() const {
return this->____State_k__BackingField;
}
constexpr void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value)  {
this->____State_k__BackingField = value;
}
inline ::Fusion::NetworkString_1<::Fusion::_32> GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_32>>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_UserId(::Fusion::NetworkString_1<::Fusion::_32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_UserId", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_AttackPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_AttackPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_AttackPos(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_AttackPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_Timer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_Timer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_Timer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_Timer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkBool GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_FloorEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_FloorEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_FloorEnabled(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_FloorEnabled", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkBool GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_PortalEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_PortalEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_PortalEnabled(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_PortalEnabled", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkBool GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_FreezePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_FreezePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_FreezePlayer(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_FreezePlayer", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_Alpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_Alpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_Alpha(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_Alpha", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MonkeyeAI_ReplState_EStates GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeyeAI_ReplState_EStates>(*this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::set_State(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::_ctor(::StringW  id, ::UnityEngine::Vector3  atPos, float_t  timer, bool  floorOn, bool  portalOn, bool  freezePlayer, float_t  alpha, ::GlobalNamespace::MonkeyeAI_ReplState_EStates  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, atPos, timer, floorOn, portalOn, freezePlayer, alpha, state);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_UserId", ty: "::Fusion::CodeGen::FixedStorage@33", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AttackPos", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Timer", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FloorEnabled_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PortalEnabled_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FreezePlayer_k__BackingField", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Alpha", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::MonkeyeAI_ReplState_EStates", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::MonkeyeAI_ReplState_MonkeyeAI_RepStateData(::Fusion::CodeGen::FixedStorage@33  _UserId, ::Fusion::CodeGen::FixedStorage@3  _AttackPos, ::Fusion::CodeGen::FixedStorage@1  _Timer, ::Fusion::NetworkBool  _FloorEnabled_k__BackingField, ::Fusion::NetworkBool  _PortalEnabled_k__BackingField, ::Fusion::NetworkBool  _FreezePlayer_k__BackingField, ::Fusion::CodeGen::FixedStorage@1  _Alpha, ::GlobalNamespace::MonkeyeAI_ReplState_EStates  _State_k__BackingField) noexcept  {
this->_UserId = _UserId;
this->_AttackPos = _AttackPos;
this->_Timer = _Timer;
this->_FloorEnabled_k__BackingField = _FloorEnabled_k__BackingField;
this->_PortalEnabled_k__BackingField = _PortalEnabled_k__BackingField;
this->_FreezePlayer_k__BackingField = _FreezePlayer_k__BackingField;
this->_Alpha = _Alpha;
this->_State_k__BackingField = _State_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData::MonkeyeAI_ReplState_MonkeyeAI_RepStateData()   {
}
