#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusGroupId.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NexusGroupId.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NexusGroupId::*)()>(&::GlobalNamespace::NexusGroupId::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusGroupId*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusGroupId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusGroupId::*)()>(&::GlobalNamespace::NexusGroupId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusGroupId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NexusGroupId::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr ::StringW const& GlobalNamespace::NexusGroupId::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void GlobalNamespace::NexusGroupId::__cordl_internal_set_code(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
constexpr ::StringW& GlobalNamespace::NexusGroupId::__cordl_internal_get_sandboxCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxCode;
}
constexpr ::StringW const& GlobalNamespace::NexusGroupId::__cordl_internal_get_sandboxCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxCode;
}
constexpr void GlobalNamespace::NexusGroupId::__cordl_internal_set_sandboxCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxCode = value;
}
inline ::StringW GlobalNamespace::NexusGroupId::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusGroupId*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NexusGroupId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusGroupId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NexusGroupId* GlobalNamespace::NexusGroupId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NexusGroupId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusGroupId::NexusGroupId()   {
}
