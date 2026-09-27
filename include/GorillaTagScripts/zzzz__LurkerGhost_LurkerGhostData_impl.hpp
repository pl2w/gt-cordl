#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost_LurkerGhostData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@3_impl.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_impl.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_LurkerGhostData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LurkerGhost_ghostState (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)()>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)(::GlobalNamespace::LurkerGhost_ghostState)>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.get_CurrentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)()>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::get_CurrentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_CurrentIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.set_CurrentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)(int32_t)>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::set_CurrentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_CurrentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.get_TargetActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)()>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::get_TargetActor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_TargetActor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.set_TargetActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)(int32_t)>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::set_TargetActor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_TargetActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.get_TargetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)()>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::get_TargetPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bceb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_TargetPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData.set_TargetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::set_TargetPos)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcf3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_TargetPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LurkerGhost_LurkerGhostData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LurkerGhost_LurkerGhostData::*)(::GlobalNamespace::LurkerGhost_ghostState, int32_t, int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::LurkerGhost_LurkerGhostData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bcea44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LurkerGhost_ghostState& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__CurrentState_k__BackingField()  {
return this->____CurrentState_k__BackingField;
}
constexpr ::GlobalNamespace::LurkerGhost_ghostState const& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__CurrentState_k__BackingField() const {
return this->____CurrentState_k__BackingField;
}
constexpr void GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::LurkerGhost_ghostState  value)  {
this->____CurrentState_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__CurrentIndex_k__BackingField()  {
return this->____CurrentIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__CurrentIndex_k__BackingField() const {
return this->____CurrentIndex_k__BackingField;
}
constexpr void GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_set__CurrentIndex_k__BackingField(int32_t  value)  {
this->____CurrentIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__TargetActor_k__BackingField()  {
return this->____TargetActor_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__TargetActor_k__BackingField() const {
return this->____TargetActor_k__BackingField;
}
constexpr void GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_set__TargetActor_k__BackingField(int32_t  value)  {
this->____TargetActor_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@3& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__TargetPos()  {
return this->____TargetPos;
}
constexpr ::Fusion::CodeGen::FixedStorage@3 const& GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_get__TargetPos() const {
return this->____TargetPos;
}
constexpr void GlobalNamespace::LurkerGhost_LurkerGhostData::__cordl_internal_set__TargetPos(::Fusion::CodeGen::FixedStorage@3  value)  {
this->____TargetPos = value;
}
inline ::GlobalNamespace::LurkerGhost_ghostState GlobalNamespace::LurkerGhost_LurkerGhostData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LurkerGhost_ghostState>(*this, ___internal_method);
}
inline void GlobalNamespace::LurkerGhost_LurkerGhostData::set_CurrentState(::GlobalNamespace::LurkerGhost_ghostState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LurkerGhost_LurkerGhostData::get_CurrentIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_CurrentIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::LurkerGhost_LurkerGhostData::set_CurrentIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_CurrentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LurkerGhost_LurkerGhostData::get_TargetActor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_TargetActor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::LurkerGhost_LurkerGhostData::set_TargetActor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_TargetActor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LurkerGhost_LurkerGhostData::get_TargetPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"get_TargetPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::LurkerGhost_LurkerGhostData::set_TargetPos(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {"set_TargetPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LurkerGhost_LurkerGhostData::_ctor(::GlobalNamespace::LurkerGhost_ghostState  state, int32_t  index, int32_t  actor, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, index, actor, pos);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::LurkerGhost_LurkerGhostData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::LurkerGhost_LurkerGhostData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::LurkerGhost_ghostState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TargetActor_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TargetPos", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData::LurkerGhost_LurkerGhostData(::GlobalNamespace::LurkerGhost_ghostState  _CurrentState_k__BackingField, int32_t  _CurrentIndex_k__BackingField, int32_t  _TargetActor_k__BackingField, ::Fusion::CodeGen::FixedStorage@3  _TargetPos) noexcept  {
this->_CurrentState_k__BackingField = _CurrentState_k__BackingField;
this->_CurrentIndex_k__BackingField = _CurrentIndex_k__BackingField;
this->_TargetActor_k__BackingField = _TargetActor_k__BackingField;
this->_TargetPos = _TargetPos;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData::LurkerGhost_LurkerGhostData()   {
}
