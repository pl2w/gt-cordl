#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@20_impl.hpp"
#include "GlobalNamespace/zzzz__GhostLabData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostLabData.get_DoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostLabData::*)()>(&::GlobalNamespace::GhostLabData::get_DoorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0b194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"get_DoorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabData.set_DoorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabData::*)(int32_t)>(&::GlobalNamespace::GhostLabData::set_DoorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0b19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"set_DoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabData.get_OpenDoors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<::Fusion::NetworkBool> (::GlobalNamespace::GhostLabData::*)()>(&::GlobalNamespace::GhostLabData::get_OpenDoors)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d0b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"get_OpenDoors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabData::*)(int32_t, ::ArrayW<bool>)>(&::GlobalNamespace::GhostLabData::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d0b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostLabData::__cordl_internal_get__DoorState_k__BackingField()  {
return this->____DoorState_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GhostLabData::__cordl_internal_get__DoorState_k__BackingField() const {
return this->____DoorState_k__BackingField;
}
constexpr void GlobalNamespace::GhostLabData::__cordl_internal_set__DoorState_k__BackingField(int32_t  value)  {
this->____DoorState_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::GhostLabData::__cordl_internal_get__OpenDoors()  {
return this->____OpenDoors;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::GhostLabData::__cordl_internal_get__OpenDoors() const {
return this->____OpenDoors;
}
constexpr void GlobalNamespace::GhostLabData::__cordl_internal_set__OpenDoors(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____OpenDoors = value;
}
inline int32_t GlobalNamespace::GhostLabData::get_DoorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"get_DoorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostLabData::set_DoorState(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"set_DoorState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkArray_1<::Fusion::NetworkBool> GlobalNamespace::GhostLabData::get_OpenDoors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {"get_OpenDoors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<::Fusion::NetworkBool>>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostLabData::_ctor(int32_t  state, ::ArrayW<bool>  openDoors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, openDoors);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::GhostLabData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::GhostLabData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_DoorState_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_OpenDoors", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostLabData::GhostLabData(int32_t  _DoorState_k__BackingField, ::Fusion::CodeGen::FixedStorage@20  _OpenDoors) noexcept  {
this->_DoorState_k__BackingField = _DoorState_k__BackingField;
this->_OpenDoors = _OpenDoors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostLabData::GhostLabData()   {
}
