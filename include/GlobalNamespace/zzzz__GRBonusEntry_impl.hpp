#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBonusEntry.hpp"
#include "GlobalNamespace/zzzz__GRAttributeType_impl.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_GRBonusType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_GRBonusType_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBonusEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusEntry::*)()>(&::GlobalNamespace::GRBonusEntry::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5873168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusEntry.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRBonusEntry::*)()>(&::GlobalNamespace::GRBonusEntry::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58731cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusEntry.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBonusEntry::*)(int32_t)>(&::GlobalNamespace::GRBonusEntry::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58731d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusEntry.GetBonusValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRBonusEntry::*)()>(&::GlobalNamespace::GRBonusEntry::GetBonusValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58731dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"GetBonusValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBonusEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRBonusEntry::*)()>(&::GlobalNamespace::GRBonusEntry::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5873208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                    {::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType& GlobalNamespace::GRBonusEntry::__cordl_internal_get_bonusType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusType;
}
constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType const& GlobalNamespace::GRBonusEntry::__cordl_internal_get_bonusType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusType;
}
constexpr void GlobalNamespace::GRBonusEntry::__cordl_internal_set_bonusType(::GlobalNamespace::GRBonusEntry_GRBonusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusType = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GRBonusEntry::__cordl_internal_get_attributeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeType;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GRBonusEntry::__cordl_internal_get_attributeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeType;
}
constexpr void GlobalNamespace::GRBonusEntry::__cordl_internal_set_attributeType(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributeType = value;
}
constexpr float_t& GlobalNamespace::GRBonusEntry::__cordl_internal_get_bonusValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusValue;
}
constexpr float_t const& GlobalNamespace::GRBonusEntry::__cordl_internal_get_bonusValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusValue;
}
constexpr void GlobalNamespace::GRBonusEntry::__cordl_internal_set_bonusValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusValue = value;
}
constexpr int32_t& GlobalNamespace::GRBonusEntry::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GRBonusEntry::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::GRBonusEntry::__cordl_internal_set__id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*& GlobalNamespace::GRBonusEntry::__cordl_internal_get_customBonus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customBonus;
}
constexpr ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>* const& GlobalNamespace::GRBonusEntry::__cordl_internal_get_customBonus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customBonus;
}
constexpr void GlobalNamespace::GRBonusEntry::__cordl_internal_set_customBonus(::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customBonus = value;
}
inline void GlobalNamespace::GRBonusEntry::setStaticF_idCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "idCounter", ::GlobalNamespace::GRBonusEntry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GRBonusEntry::getStaticF_idCounter()  {
return ::cordl_internals::getStaticField<int32_t, "idCounter", ::GlobalNamespace::GRBonusEntry*>();
}
inline void GlobalNamespace::GRBonusEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRBonusEntry::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRBonusEntry::set_id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GRBonusEntry::GetBonusValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(),
                        {"GetBonusValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GRBonusEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRBonusEntry*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBonusEntry* GlobalNamespace::GRBonusEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBonusEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBonusEntry::GRBonusEntry()   {
}
