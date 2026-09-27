#pragma once
// IWYU pragma private; include "GlobalNamespace/NonCosmeticItemProvider.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__NonCosmeticItemProvider_ItemType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NonCosmeticItemProvider_def.hpp"
#include "GlobalNamespace/zzzz__NonCosmeticItemProvider_ItemType_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NonCosmeticItemProvider.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonCosmeticItemProvider::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::NonCosmeticItemProvider::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x570dec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticItemProvider*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonCosmeticItemProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonCosmeticItemProvider::*)()>(&::GlobalNamespace::NonCosmeticItemProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570e0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticItemProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr bool& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_useCondition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCondition;
}
constexpr bool const& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_useCondition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCondition;
}
constexpr void GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_set_useCondition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCondition = value;
}
constexpr int32_t& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_conditionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conditionThreshold;
}
constexpr int32_t const& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_conditionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conditionThreshold;
}
constexpr void GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_set_conditionThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conditionThreshold = value;
}
constexpr ::GlobalNamespace::NonCosmeticItemProvider_ItemType& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_itemType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemType;
}
constexpr ::GlobalNamespace::NonCosmeticItemProvider_ItemType const& GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_get_itemType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemType;
}
constexpr void GlobalNamespace::NonCosmeticItemProvider::__cordl_internal_set_itemType(::GlobalNamespace::NonCosmeticItemProvider_ItemType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemType = value;
}
inline void GlobalNamespace::NonCosmeticItemProvider::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticItemProvider*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::NonCosmeticItemProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticItemProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NonCosmeticItemProvider* GlobalNamespace::NonCosmeticItemProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NonCosmeticItemProvider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NonCosmeticItemProvider::NonCosmeticItemProvider()   {
}
