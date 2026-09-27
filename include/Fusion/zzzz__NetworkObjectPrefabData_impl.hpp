#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPrefabData.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_impl.hpp"
#include "Fusion/zzzz__NetworkObjectPrefabData_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectPrefabData.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPrefabData::*)()>(&::Fusion::NetworkObjectPrefabData::OnValidate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fce2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPrefabData*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPrefabData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPrefabData::*)()>(&::Fusion::NetworkObjectPrefabData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPrefabData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkObjectGuid& Fusion::NetworkObjectPrefabData::__cordl_internal_get_Guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Guid;
}
constexpr ::Fusion::NetworkObjectGuid const& Fusion::NetworkObjectPrefabData::__cordl_internal_get_Guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Guid;
}
constexpr void Fusion::NetworkObjectPrefabData::__cordl_internal_set_Guid(::Fusion::NetworkObjectGuid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Guid = value;
}
inline void Fusion::NetworkObjectPrefabData::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPrefabData*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObjectPrefabData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPrefabData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectPrefabData* Fusion::NetworkObjectPrefabData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectPrefabData*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectPrefabData::NetworkObjectPrefabData()   {
}
