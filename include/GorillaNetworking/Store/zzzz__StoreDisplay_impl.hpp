#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreDisplay.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreDisplay_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreDisplay.GetAllDynamicCosmeticStands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreDisplay::*)()>(&::GorillaNetworking::Store::StoreDisplay::GetAllDynamicCosmeticStands)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb21e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {"GetAllDynamicCosmeticStands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreDisplay.SetDisplayNameForAllStands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreDisplay::*)()>(&::GorillaNetworking::Store::StoreDisplay::SetDisplayNameForAllStands)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cb2238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {"SetDisplayNameForAllStands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreDisplay::*)()>(&::GorillaNetworking::Store::StoreDisplay::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb22cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::StoreDisplay::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreDisplay::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GorillaNetworking::Store::StoreDisplay::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>& GorillaNetworking::Store::StoreDisplay::__cordl_internal_get_Stands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stands;
}
constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>> const& GorillaNetworking::Store::StoreDisplay::__cordl_internal_get_Stands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stands;
}
constexpr void GorillaNetworking::Store::StoreDisplay::__cordl_internal_set_Stands(::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stands = value;
}
inline void GorillaNetworking::Store::StoreDisplay::GetAllDynamicCosmeticStands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {"GetAllDynamicCosmeticStands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreDisplay::SetDisplayNameForAllStands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {"SetDisplayNameForAllStands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::StoreDisplay* GorillaNetworking::Store::StoreDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreDisplay*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreDisplay::StoreDisplay()   {
}
