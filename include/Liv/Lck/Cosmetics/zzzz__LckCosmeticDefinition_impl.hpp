#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticDefinition.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticDefinition_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticType_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__RootCosmetic_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDefinition::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDefinition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d64f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDefinition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticId;
}
constexpr ::StringW const& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticId;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_set_CosmeticId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticId = value;
}
constexpr ::StringW& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticName;
}
constexpr ::StringW const& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticName;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_set_CosmeticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticName = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticType;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType> const& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_CosmeticType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticType;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_set_CosmeticType(::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticType = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_RootCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootCosmetics;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>* const& Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_get_RootCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootCosmetics;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDefinition::__cordl_internal_set_RootCosmetics(::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootCosmetics = value;
}
inline void Liv::Lck::Cosmetics::LckCosmeticDefinition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDefinition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticDefinition* Liv::Lck::Cosmetics::LckCosmeticDefinition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticDefinition*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticDefinition::LckCosmeticDefinition()   {
}
