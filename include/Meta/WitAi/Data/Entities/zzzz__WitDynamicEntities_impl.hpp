#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitDynamicEntities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntity_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e9ad9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e9b784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.get_AsJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseClass* (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::get_AsJson)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9e9b840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"get_AsJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e9b9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e9b9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9ba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::GetDynamicEntities)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::Merge)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e9ae24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"Merge", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.AddKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::AddKeyword)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9e9b118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"AddKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities.RemoveKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities::RemoveKeyword)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9e9b3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"RemoveKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*& Meta::WitAi::Data::Entities::WitDynamicEntities::__cordl_internal_get_entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* const& Meta::WitAi::Data::Entities::WitDynamicEntities::__cordl_internal_get_entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntities::__cordl_internal_set_entities(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entities = value;
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities::_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline ::Meta::WitAi::Json::WitResponseClass* Meta::WitAi::Data::Entities::WitDynamicEntities::get_AsJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"get_AsJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseClass*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Data::Entities::WitDynamicEntities::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* Meta::WitAi::Data::Entities::WitDynamicEntities::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Data::Entities::WitDynamicEntities::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitDynamicEntities::GetDynamicEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities::Merge(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"Merge", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities::AddKeyword(::StringW  entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"AddKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityName, keyword);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities::RemoveKeyword(::StringW  entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(),
                        {"RemoveKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityName, keyword);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitDynamicEntities::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntities*>());
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitDynamicEntities::New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>  entity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(entity));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr  Meta::WitAi::Data::Entities::WitDynamicEntities::operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* Meta::WitAi::Data::Entities::WitDynamicEntities::i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>"
constexpr  Meta::WitAi::Data::Entities::WitDynamicEntities::operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* Meta::WitAi::Data::Entities::WitDynamicEntities::i___System__Collections__Generic__IEnumerable_1___Meta__WitAi__Data__Entities__WitDynamicEntity__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Meta::WitAi::Data::Entities::WitDynamicEntities::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Meta::WitAi::Data::Entities::WitDynamicEntities::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities::WitDynamicEntities()   {
}
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9baa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0._RemoveKeyword_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::*)(::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::_RemoveKeyword_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e9bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*>(),
                        {"<RemoveKeyword>b__0", {}, {::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::__cordl_internal_get_entityName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr ::StringW const& Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::__cordl_internal_get_entityName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::__cordl_internal_set_entityName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityName = value;
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::_RemoveKeyword_b__0(::Meta::WitAi::Data::Entities::WitDynamicEntity*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*>(),
                        {"<RemoveKeyword>b__0", {}, {::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0* Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0::WitDynamicEntities___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0._AddKeyword_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::*)(::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::_AddKeyword_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e9ba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*>(),
                        {"<AddKeyword>b__0", {}, {::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::__cordl_internal_get_entityName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr ::StringW const& Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::__cordl_internal_get_entityName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::__cordl_internal_set_entityName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityName = value;
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::_AddKeyword_b__0(::Meta::WitAi::Data::Entities::WitDynamicEntity*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*>(),
                        {"<AddKeyword>b__0", {}, {::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0* Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0::WitDynamicEntities___c__DisplayClass14_0()   {
}
