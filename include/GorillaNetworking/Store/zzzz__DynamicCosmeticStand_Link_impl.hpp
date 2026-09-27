#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/DynamicCosmeticStand_Link.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_Link_def.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_def.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::DynamicCosmeticStand_Link.SetStandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::DynamicCosmeticStand_Link::*)(::GlobalNamespace::HeadModel_CosmeticStand_BustType)>(&::GorillaNetworking::Store::DynamicCosmeticStand_Link::SetStandType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cad5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SetStandType", {}, {::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::DynamicCosmeticStand_Link.SpawnItemOntoStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::DynamicCosmeticStand_Link::*)(::StringW)>(&::GorillaNetworking::Store::DynamicCosmeticStand_Link::SpawnItemOntoStand)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cad5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SpawnItemOntoStand", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::DynamicCosmeticStand_Link.SaveCosmeticMountPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::DynamicCosmeticStand_Link::*)()>(&::GorillaNetworking::Store::DynamicCosmeticStand_Link::SaveCosmeticMountPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cad5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SaveCosmeticMountPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::DynamicCosmeticStand_Link.ClearCosmeticItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::DynamicCosmeticStand_Link::*)()>(&::GorillaNetworking::Store::DynamicCosmeticStand_Link::ClearCosmeticItems)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cad60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"ClearCosmeticItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::DynamicCosmeticStand_Link._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::DynamicCosmeticStand_Link::*)()>(&::GorillaNetworking::Store::DynamicCosmeticStand_Link::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cad620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& GorillaNetworking::Store::DynamicCosmeticStand_Link::__cordl_internal_get_stand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stand;
}
constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& GorillaNetworking::Store::DynamicCosmeticStand_Link::__cordl_internal_get_stand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stand;
}
constexpr void GorillaNetworking::Store::DynamicCosmeticStand_Link::__cordl_internal_set_stand(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stand = value;
}
inline void GorillaNetworking::Store::DynamicCosmeticStand_Link::SetStandType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SetStandType", {}, {::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GorillaNetworking::Store::DynamicCosmeticStand_Link::SpawnItemOntoStand(::StringW  PlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SpawnItemOntoStand", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, PlayFabID);
}
inline void GorillaNetworking::Store::DynamicCosmeticStand_Link::SaveCosmeticMountPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"SaveCosmeticMountPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::DynamicCosmeticStand_Link::ClearCosmeticItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {"ClearCosmeticItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::DynamicCosmeticStand_Link::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::DynamicCosmeticStand_Link* GorillaNetworking::Store::DynamicCosmeticStand_Link::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::DynamicCosmeticStand_Link*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::DynamicCosmeticStand_Link::DynamicCosmeticStand_Link()   {
}
