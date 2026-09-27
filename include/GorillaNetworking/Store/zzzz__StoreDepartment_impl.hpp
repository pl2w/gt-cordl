#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreDepartment.hpp"
#include "GorillaNetworking/Store/zzzz__StoreDisplay_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreDepartment_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreDepartment.FindAllDisplays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreDepartment::*)()>(&::GorillaNetworking::Store::StoreDepartment::FindAllDisplays)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5cb2034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDepartment*>(),
                        {"FindAllDisplays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreDepartment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreDepartment::*)()>(&::GorillaNetworking::Store::StoreDepartment::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb2188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDepartment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>& GorillaNetworking::Store::StoreDepartment::__cordl_internal_get_Displays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Displays;
}
constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>> const& GorillaNetworking::Store::StoreDepartment::__cordl_internal_get_Displays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Displays;
}
constexpr void GorillaNetworking::Store::StoreDepartment::__cordl_internal_set_Displays(::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Displays = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreDepartment::__cordl_internal_get_departmentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departmentName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreDepartment::__cordl_internal_get_departmentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departmentName;
}
constexpr void GorillaNetworking::Store::StoreDepartment::__cordl_internal_set_departmentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___departmentName = value;
}
inline void GorillaNetworking::Store::StoreDepartment::FindAllDisplays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDepartment*>(),
                        {"FindAllDisplays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreDepartment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreDepartment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::StoreDepartment* GorillaNetworking::Store::StoreDepartment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreDepartment*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreDepartment::StoreDepartment()   {
}
