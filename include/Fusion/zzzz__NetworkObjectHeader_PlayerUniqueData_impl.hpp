#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader_PlayerUniqueData.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPlayerDataFlags_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPlayerDataFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData.HasFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags)>(&::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fabd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"HasFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags)>(&::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::SetFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fabda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"SetFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData.ClearFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags)>(&::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::ClearFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fabdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"ClearFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags& GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::__cordl_internal_get_Flags()  {
return this->___Flags;
}
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags const& GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::__cordl_internal_get_Flags() const {
return this->___Flags;
}
constexpr void GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::__cordl_internal_set_Flags(::Fusion::NetworkObjectHeaderPlayerDataFlags  value)  {
this->___Flags = value;
}
inline bool GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::HasFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"HasFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, flag);
}
inline void GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::SetFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"SetFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flag);
}
inline void GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::ClearFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData>(),
                        {"ClearFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flag);
}
// Ctor Parameters [CppParam { name: "Flags", ty: "::Fusion::NetworkObjectHeaderPlayerDataFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::NetworkObjectHeader_PlayerUniqueData(::Fusion::NetworkObjectHeaderPlayerDataFlags  Flags) noexcept  {
this->Flags = Flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData::NetworkObjectHeader_PlayerUniqueData()   {
}
