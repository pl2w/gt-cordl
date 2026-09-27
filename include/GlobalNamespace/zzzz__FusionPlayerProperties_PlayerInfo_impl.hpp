#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionPlayerProperties_PlayerInfo.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@207_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@33_impl.hpp"
#include "GlobalNamespace/zzzz__FusionPlayerProperties_PlayerInfo_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerInfo.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_32> (::GlobalNamespace::FusionPlayerProperties_PlayerInfo::*)()>(&::GlobalNamespace::FusionPlayerProperties_PlayerInfo::get_NickName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56d7cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"get_NickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerInfo.set_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties_PlayerInfo::*)(::Fusion::NetworkString_1<::Fusion::_32>)>(&::GlobalNamespace::FusionPlayerProperties_PlayerInfo::set_NickName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56d85cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"set_NickName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerInfo.get_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkDictionary_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::NetworkString_1<::Fusion::_32>> (::GlobalNamespace::FusionPlayerProperties_PlayerInfo::*)()>(&::GlobalNamespace::FusionPlayerProperties_PlayerInfo::get_properties)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56d81a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"get_properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CodeGen::FixedStorage@33& GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_get__NickName()  {
return this->____NickName;
}
constexpr ::Fusion::CodeGen::FixedStorage@33 const& GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_get__NickName() const {
return this->____NickName;
}
constexpr void GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_set__NickName(::Fusion::CodeGen::FixedStorage@33  value)  {
this->____NickName = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@207& GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_get__properties()  {
return this->____properties;
}
constexpr ::Fusion::CodeGen::FixedStorage@207 const& GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_get__properties() const {
return this->____properties;
}
constexpr void GlobalNamespace::FusionPlayerProperties_PlayerInfo::__cordl_internal_set__properties(::Fusion::CodeGen::FixedStorage@207  value)  {
this->____properties = value;
}
inline ::Fusion::NetworkString_1<::Fusion::_32> GlobalNamespace::FusionPlayerProperties_PlayerInfo::get_NickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"get_NickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_32>>(*this, ___internal_method);
}
inline void GlobalNamespace::FusionPlayerProperties_PlayerInfo::set_NickName(::Fusion::NetworkString_1<::Fusion::_32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"set_NickName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkDictionary_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::NetworkString_1<::Fusion::_32>> GlobalNamespace::FusionPlayerProperties_PlayerInfo::get_properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(),
                        {"get_properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionary_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::NetworkString_1<::Fusion::_32>>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::FusionPlayerProperties_PlayerInfo::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::FusionPlayerProperties_PlayerInfo::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_NickName", ty: "::Fusion::CodeGen::FixedStorage@33", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_properties", ty: "::Fusion::CodeGen::FixedStorage@207", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerInfo::FusionPlayerProperties_PlayerInfo(::Fusion::CodeGen::FixedStorage@33  _NickName, ::Fusion::CodeGen::FixedStorage@207  _properties) noexcept  {
this->_NickName = _NickName;
this->_properties = _properties;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerInfo::FusionPlayerProperties_PlayerInfo()   {
}
