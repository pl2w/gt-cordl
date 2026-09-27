#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormatCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableValueChanged_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.set_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.get_CachedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_CachedObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_CachedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.get_LocalVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_LocalVariables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_LocalVariables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.set_LocalVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::set_LocalVariables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"set_LocalVariables", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache.get_VariableTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_VariableTriggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_VariableTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb048568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__Format_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__Format_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Format_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__CachedObjects_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedObjects_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__CachedObjects_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedObjects_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_set__CachedObjects_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedObjects_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get_Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Table;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get_Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Table;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_set_Table(::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Table = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__LocalVariables_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalVariables_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__LocalVariables_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalVariables_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_set__LocalVariables_k__BackingField(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalVariables_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__VariableTriggers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VariableTriggers_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_get__VariableTriggers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VariableTriggers_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::__cordl_internal_set__VariableTriggers_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VariableTriggers_k__BackingField = value;
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_CachedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_CachedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_LocalVariables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_LocalVariables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::set_LocalVariables(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"set_LocalVariables", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::get_VariableTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {"get_VariableTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache::FormatCache()   {
}
