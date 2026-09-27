#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticSO.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::CosmeticSO.ShowPropHuntWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::CosmeticSystem::CosmeticSO::*)()>(&::GorillaTag::CosmeticSystem::CosmeticSO::ShowPropHuntWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d48bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {"ShowPropHuntWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::CosmeticSO.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticSystem::CosmeticSO::*)()>(&::GorillaTag::CosmeticSystem::CosmeticSO::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d48bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::CosmeticSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticSystem::CosmeticSO::*)()>(&::GorillaTag::CosmeticSystem::CosmeticSO::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d48c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::CosmeticSystem::CosmeticInfoV2& GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::GorillaTag::CosmeticSystem::CosmeticInfoV2 const& GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_set_info(::GorillaTag::CosmeticSystem::CosmeticInfoV2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
constexpr int32_t& GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_get_propHuntWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHuntWeight;
}
constexpr int32_t const& GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_get_propHuntWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHuntWeight;
}
constexpr void GorillaTag::CosmeticSystem::CosmeticSO::__cordl_internal_set_propHuntWeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHuntWeight = value;
}
inline bool GorillaTag::CosmeticSystem::CosmeticSO::ShowPropHuntWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {"ShowPropHuntWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::CosmeticSystem::CosmeticSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CosmeticSystem::CosmeticSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticSystem::CosmeticSO* GorillaTag::CosmeticSystem::CosmeticSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CosmeticSystem::CosmeticSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticSO::CosmeticSO()   {
}
