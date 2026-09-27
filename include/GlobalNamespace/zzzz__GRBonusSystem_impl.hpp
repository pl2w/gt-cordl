#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBonusSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRBonusSystem_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusSystem::*)(::GlobalNamespace::GRAttributes*)>(&::GlobalNamespace::GRBonusSystem::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5873454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRAttributes*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.GetDefaultAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRAttributes> (::GlobalNamespace::GRBonusSystem::*)()>(&::GlobalNamespace::GRBonusSystem::GetDefaultAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587345c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"GetDefaultAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.AddBonus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusSystem::*)(::GlobalNamespace::GRBonusEntry*)>(&::GlobalNamespace::GRBonusSystem::AddBonus)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x58709a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"AddBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.RemoveBonus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusSystem::*)(::GlobalNamespace::GRBonusEntry*)>(&::GlobalNamespace::GRBonusSystem::RemoveBonus)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5870be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"RemoveBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.HasValueForAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBonusSystem::*)(::GlobalNamespace::GRAttributeType)>(&::GlobalNamespace::GRBonusSystem::HasValueForAttribute)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x587143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"HasValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem.CalculateFinalValueForAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRBonusSystem::*)(::GlobalNamespace::GRAttributeType)>(&::GlobalNamespace::GRBonusSystem::CalculateFinalValueForAttribute)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x5870e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"CalculateFinalValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusSystem::*)()>(&::GlobalNamespace::GRBonusSystem::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58715b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRBonusSystem::__cordl_internal_get_defaultAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRBonusSystem::__cordl_internal_get_defaultAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttributes;
}
constexpr void GlobalNamespace::GRBonusSystem::__cordl_internal_set_defaultAttributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAttributes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*& GlobalNamespace::GRBonusSystem::__cordl_internal_get_currentAdditiveBonuses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAdditiveBonuses;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>* const& GlobalNamespace::GRBonusSystem::__cordl_internal_get_currentAdditiveBonuses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAdditiveBonuses;
}
constexpr void GlobalNamespace::GRBonusSystem::__cordl_internal_set_currentAdditiveBonuses(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAdditiveBonuses = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*& GlobalNamespace::GRBonusSystem::__cordl_internal_get_currentMultiplicativeBonuses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMultiplicativeBonuses;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>* const& GlobalNamespace::GRBonusSystem::__cordl_internal_get_currentMultiplicativeBonuses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMultiplicativeBonuses;
}
constexpr void GlobalNamespace::GRBonusSystem::__cordl_internal_set_currentMultiplicativeBonuses(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMultiplicativeBonuses = value;
}
inline void GlobalNamespace::GRBonusSystem::Init(::GlobalNamespace::GRAttributes*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRAttributes*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::UnityW<::GlobalNamespace::GRAttributes> GlobalNamespace::GRBonusSystem::GetDefaultAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"GetDefaultAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRAttributes>>(this, ___internal_method);
}
inline void GlobalNamespace::GRBonusSystem::AddBonus(::GlobalNamespace::GRBonusEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"AddBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void GlobalNamespace::GRBonusSystem::RemoveBonus(::GlobalNamespace::GRBonusEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"RemoveBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline bool GlobalNamespace::GRBonusSystem::HasValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"HasValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType);
}
inline int32_t GlobalNamespace::GRBonusSystem::CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {"CalculateFinalValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributeType);
}
inline void GlobalNamespace::GRBonusSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBonusSystem* GlobalNamespace::GRBonusSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBonusSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBonusSystem::GRBonusSystem()   {
}
