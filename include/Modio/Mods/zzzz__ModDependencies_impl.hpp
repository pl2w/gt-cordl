#pragma once
// IWYU pragma private; include "Modio/Mods/ModDependencies.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__ModDependencies_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModDependenciesObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/Mods/zzzz__ModDependencies__FetchDependencies_d__14_def.hpp"
#include "Modio/Mods/zzzz__ModDependencies__GetAllDependencies_d__13_def.hpp"
#include "Modio/Mods/zzzz__ModDependencies_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::ModDependencies.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::ModDependencies::*)()>(&::Modio::Mods::ModDependencies::get_Count)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa02f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies.get_HasDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::ModDependencies::*)()>(&::Modio::Mods::ModDependencies::get_HasDependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02f734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_HasDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies.get_IsMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::ModDependencies::*)()>(&::Modio::Mods::ModDependencies::get_IsMapped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa02f73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_IsMapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModDependencies::*)(::Modio::Mods::Mod*, bool)>(&::Modio::Mods::ModDependencies::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa029104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies.GetAllDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* (::Modio::Mods::ModDependencies::*)()>(&::Modio::Mods::ModDependencies::GetAllDependencies)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa02f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"GetAllDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies.FetchDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::ModDependencies::*)()>(&::Modio::Mods::ModDependencies::FetchDependencies)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa02f628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"FetchDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies.ConstructModObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::SchemaDefinitions::ModObject (*)(::Modio::API::SchemaDefinitions::ModDependenciesObject)>(&::Modio::Mods::ModDependencies::ConstructModObject)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa02f74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"ConstructModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModDependenciesObject>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Mods::ModDependencies::__cordl_internal_get__HasDependencies_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasDependencies_k__BackingField;
}
constexpr bool const& Modio::Mods::ModDependencies::__cordl_internal_get__HasDependencies_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasDependencies_k__BackingField;
}
constexpr void Modio::Mods::ModDependencies::__cordl_internal_set__HasDependencies_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasDependencies_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*& Modio::Mods::ModDependencies::__cordl_internal_get__isFetchingDependencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFetchingDependencies;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>* const& Modio::Mods::ModDependencies::__cordl_internal_get__isFetchingDependencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFetchingDependencies;
}
constexpr void Modio::Mods::ModDependencies::__cordl_internal_set__isFetchingDependencies(::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFetchingDependencies = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>& Modio::Mods::ModDependencies::__cordl_internal_get__depthMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*> const& Modio::Mods::ModDependencies::__cordl_internal_get__depthMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthMap;
}
constexpr void Modio::Mods::ModDependencies::__cordl_internal_set__depthMap(::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthMap = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Mods::ModDependencies::__cordl_internal_get__dependent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependent;
}
constexpr ::Modio::Mods::Mod* const& Modio::Mods::ModDependencies::__cordl_internal_get__dependent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependent;
}
constexpr void Modio::Mods::ModDependencies::__cordl_internal_set__dependent(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dependent = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& Modio::Mods::ModDependencies::__cordl_internal_get__flattenedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flattenedMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& Modio::Mods::ModDependencies::__cordl_internal_get__flattenedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flattenedMods;
}
constexpr void Modio::Mods::ModDependencies::__cordl_internal_set__flattenedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flattenedMods = value;
}
inline int32_t Modio::Mods::ModDependencies::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Modio::Mods::ModDependencies::get_HasDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_HasDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Modio::Mods::ModDependencies::get_IsMapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"get_IsMapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::ModDependencies::_ctor(::Modio::Mods::Mod*  dependent, bool  hasDependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependent, hasDependencies);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* Modio::Mods::ModDependencies::GetAllDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"GetAllDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::ModDependencies::FetchDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"FetchDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::Modio::API::SchemaDefinitions::ModObject Modio::Mods::ModDependencies::ConstructModObject(::Modio::API::SchemaDefinitions::ModDependenciesObject  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies*>(),
                        {"ConstructModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModDependenciesObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::SchemaDefinitions::ModObject>(nullptr, ___internal_method, dependency);
}
inline ::Modio::Mods::ModDependencies* Modio::Mods::ModDependencies::New_ctor(::Modio::Mods::Mod*  dependent, bool  hasDependencies)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModDependencies*>(dependent, hasDependencies));
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModDependencies::ModDependencies()   {
}
//  Writing Method size for method: ::Modio::Mods::ModDependencies___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModDependencies___c::*)()>(&::Modio::Mods::ModDependencies___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModDependencies___c._get_Count_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::ModDependencies___c::*)(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*)>(&::Modio::Mods::ModDependencies___c::_get_Count_b__2_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa02f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies___c*>(),
                        {"<get_Count>b__2_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::ModDependencies___c::setStaticF___9(::Modio::Mods::ModDependencies___c*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModDependencies___c*, "<>9", ::Modio::Mods::ModDependencies___c*>(std::forward<::Modio::Mods::ModDependencies___c*>(value));
}
inline ::Modio::Mods::ModDependencies___c* Modio::Mods::ModDependencies___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModDependencies___c*, "<>9", ::Modio::Mods::ModDependencies___c*>();
}
inline void Modio::Mods::ModDependencies___c::setStaticF___9__2_0(::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*, "<>9__2_0", ::Modio::Mods::ModDependencies___c*>(std::forward<::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>* Modio::Mods::ModDependencies___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*, "<>9__2_0", ::Modio::Mods::ModDependencies___c*>();
}
inline void Modio::Mods::ModDependencies___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Modio::Mods::ModDependencies___c::_get_Count_b__2_0(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModDependencies___c*>(),
                        {"<get_Count>b__2_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, list);
}
inline ::Modio::Mods::ModDependencies___c* Modio::Mods::ModDependencies___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModDependencies___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModDependencies___c::ModDependencies___c()   {
}
