#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusCreatorCode.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__NexusCreatorCode_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NexusCreatorCode.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NexusCreatorCode::*)()>(&::GlobalNamespace::NexusCreatorCode::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusCreatorCode.get_GroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NexusGroupId> (::GlobalNamespace::NexusCreatorCode::*)()>(&::GlobalNamespace::NexusCreatorCode::get_GroupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {"get_GroupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusCreatorCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusCreatorCode::*)()>(&::GlobalNamespace::NexusCreatorCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NexusCreatorCode::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr ::StringW const& GlobalNamespace::NexusCreatorCode::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void GlobalNamespace::NexusCreatorCode::__cordl_internal_set_code(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& GlobalNamespace::NexusCreatorCode::__cordl_internal_get_groupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& GlobalNamespace::NexusCreatorCode::__cordl_internal_get_groupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr void GlobalNamespace::NexusCreatorCode::__cordl_internal_set_groupId(::UnityW<::GlobalNamespace::NexusGroupId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupId = value;
}
inline ::StringW GlobalNamespace::NexusCreatorCode::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::NexusGroupId> GlobalNamespace::NexusCreatorCode::get_GroupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {"get_GroupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NexusGroupId>>(this, ___internal_method);
}
inline void GlobalNamespace::NexusCreatorCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusCreatorCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NexusCreatorCode* GlobalNamespace::NexusCreatorCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NexusCreatorCode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusCreatorCode::NexusCreatorCode()   {
}
