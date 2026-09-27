#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionAnchor.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "Fusion/zzzz__NetworkString_1_impl.hpp"
#include "Fusion/zzzz___64_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionAnchor_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f61920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor.GetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::Anchor (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::GetAnchor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9f619fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {"GetAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f61ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkBool& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_isAutomaticAnchor()  {
return this->___isAutomaticAnchor;
}
constexpr ::Fusion::NetworkBool const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_isAutomaticAnchor() const {
return this->___isAutomaticAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_set_isAutomaticAnchor(::Fusion::NetworkBool  value)  {
this->___isAutomaticAnchor = value;
}
constexpr ::Fusion::NetworkBool& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_isAlignmentAnchor()  {
return this->___isAlignmentAnchor;
}
constexpr ::Fusion::NetworkBool const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_isAlignmentAnchor() const {
return this->___isAlignmentAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_set_isAlignmentAnchor(::Fusion::NetworkBool  value)  {
this->___isAlignmentAnchor = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_ownerOculusId()  {
return this->___ownerOculusId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_ownerOculusId() const {
return this->___ownerOculusId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_set_ownerOculusId(uint64_t  value)  {
this->___ownerOculusId = value;
}
constexpr uint32_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_colocationGroupId()  {
return this->___colocationGroupId;
}
constexpr uint32_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_colocationGroupId() const {
return this->___colocationGroupId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_set_colocationGroupId(uint32_t  value)  {
this->___colocationGroupId = value;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_64>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_automaticAnchorUuid()  {
return this->___automaticAnchorUuid;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_get_automaticAnchorUuid() const {
return this->___automaticAnchorUuid;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::__cordl_internal_set_automaticAnchorUuid(::Fusion::NetworkString_1<::Fusion::_64>  value)  {
this->___automaticAnchorUuid = value;
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::_ctor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Anchor Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::GetAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {"GetAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>(*this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::Equals(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*()  {
return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionAnchor_()  {
return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "isAutomaticAnchor", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isAlignmentAnchor", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ownerOculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "automaticAnchorUuid", ty: "::Fusion::NetworkString_1<::Fusion::_64>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::FusionAnchor(::Fusion::NetworkBool  isAutomaticAnchor, ::Fusion::NetworkBool  isAlignmentAnchor, uint64_t  ownerOculusId, uint32_t  colocationGroupId, ::Fusion::NetworkString_1<::Fusion::_64>  automaticAnchorUuid) noexcept  {
this->isAutomaticAnchor = isAutomaticAnchor;
this->isAlignmentAnchor = isAlignmentAnchor;
this->ownerOculusId = ownerOculusId;
this->colocationGroupId = colocationGroupId;
this->automaticAnchorUuid = automaticAnchorUuid;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor::FusionAnchor()   {
}
