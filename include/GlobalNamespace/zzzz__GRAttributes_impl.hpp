#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAttributes.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_GRAttributePair_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAttributes::*)()>(&::GlobalNamespace::GRAttributes::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5870700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.HasBeenInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAttributes::*)()>(&::GlobalNamespace::GRAttributes::HasBeenInitialized)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x587089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"HasBeenInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.AddAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRAttributeType, float_t)>(&::GlobalNamespace::GRAttributes::AddAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5870908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.AddBonus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRBonusEntry*)>(&::GlobalNamespace::GRAttributes::AddBonus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5870990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"AddBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.RemoveBonus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRBonusEntry*)>(&::GlobalNamespace::GRAttributes::RemoveBonus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5870bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"RemoveBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.CalculateFinalFloatValueForAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRAttributeType)>(&::GlobalNamespace::GRAttributes::CalculateFinalFloatValueForAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5868684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"CalculateFinalFloatValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.CalculateFinalValueForAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRAttributeType)>(&::GlobalNamespace::GRAttributes::CalculateFinalValueForAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58713ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"CalculateFinalValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes.HasValueForAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAttributes::*)(::GlobalNamespace::GRAttributeType)>(&::GlobalNamespace::GRAttributes::HasValueForAttribute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5871428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"HasValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAttributes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAttributes::*)()>(&::GlobalNamespace::GRAttributes::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58714f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*& GlobalNamespace::GRAttributes::__cordl_internal_get_startingAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAttributes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>* const& GlobalNamespace::GRAttributes::__cordl_internal_get_startingAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAttributes;
}
constexpr void GlobalNamespace::GRAttributes::__cordl_internal_set_startingAttributes(::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAttributes = value;
}
constexpr ::GlobalNamespace::GRBonusSystem*& GlobalNamespace::GRAttributes::__cordl_internal_get_bonusSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusSystem;
}
constexpr ::GlobalNamespace::GRBonusSystem* const& GlobalNamespace::GRAttributes::__cordl_internal_get_bonusSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusSystem;
}
constexpr void GlobalNamespace::GRAttributes::__cordl_internal_set_bonusSystem(::GlobalNamespace::GRBonusSystem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusSystem = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*& GlobalNamespace::GRAttributes::__cordl_internal_get_defaultAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttributes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>* const& GlobalNamespace::GRAttributes::__cordl_internal_get_defaultAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttributes;
}
constexpr void GlobalNamespace::GRAttributes::__cordl_internal_set_defaultAttributes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAttributes = value;
}
inline void GlobalNamespace::GRAttributes::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAttributes::HasBeenInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"HasBeenInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAttributes::AddAttribute(::GlobalNamespace::GRAttributeType  type, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value);
}
inline void GlobalNamespace::GRAttributes::AddBonus(::GlobalNamespace::GRBonusEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"AddBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void GlobalNamespace::GRAttributes::RemoveBonus(::GlobalNamespace::GRBonusEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"RemoveBonus", {}, {::i2c::type_of<::GlobalNamespace::GRBonusEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline float_t GlobalNamespace::GRAttributes::CalculateFinalFloatValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"CalculateFinalFloatValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, attributeType);
}
inline int32_t GlobalNamespace::GRAttributes::CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"CalculateFinalValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attributeType);
}
inline bool GlobalNamespace::GRAttributes::HasValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {"HasValueForAttribute", {}, {::i2c::type_of<::GlobalNamespace::GRAttributeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType);
}
inline void GlobalNamespace::GRAttributes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAttributes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAttributes* GlobalNamespace::GRAttributes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAttributes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAttributes::GRAttributes()   {
}
