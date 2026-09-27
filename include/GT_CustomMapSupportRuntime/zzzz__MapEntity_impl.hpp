#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapEntity.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapEntity.GetPackedCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GT_CustomMapSupportRuntime::MapEntity::*)()>(&::GT_CustomMapSupportRuntime::MapEntity::GetPackedCreateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb7368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::MapEntity*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::MapEntity*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapEntity::*)()>(&::GT_CustomMapSupportRuntime::MapEntity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb0df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_isTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTemplate;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_isTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTemplate;
}
constexpr void GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_set_isTemplate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTemplate = value;
}
constexpr uint8_t& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_entityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr uint8_t const& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_entityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr void GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_set_entityTypeId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypeId = value;
}
constexpr int16_t& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_lua_EntityID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lua_EntityID;
}
constexpr int16_t const& GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_get_lua_EntityID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lua_EntityID;
}
constexpr void GT_CustomMapSupportRuntime::MapEntity::__cordl_internal_set_lua_EntityID(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lua_EntityID = value;
}
inline int64_t GT_CustomMapSupportRuntime::MapEntity::GetPackedCreateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::MapEntity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MapEntity* GT_CustomMapSupportRuntime::MapEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapEntity*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapEntity::MapEntity()   {
}
