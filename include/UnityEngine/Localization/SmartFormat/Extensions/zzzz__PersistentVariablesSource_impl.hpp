#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/PersistentVariablesSource.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_ScopedUpdate_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariablesGroupAsset_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_IsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_IsUpdating)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb03eb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb03ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb03ec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Keys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb03ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Values)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb03ec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb03edc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb03ee28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.add_EndUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::add_EndUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb03f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"add_EndUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.remove_EndUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::remove_EndUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb03f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"remove_EndUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb027ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.BeginUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::BeginUpdating)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb03f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"BeginUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.EndUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::EndUpdating)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb03f258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"EndUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.UpdateScope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::UpdateScope)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb03f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"UpdateScope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::TryGetValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb03f3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Add)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xb03ee2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb03f458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Remove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb03f4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Remove)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb03f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb03f5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::ContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb03f658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Contains)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb03f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>, int32_t)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::CopyTo)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb03f760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb03f924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb03f9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.TryEvaluateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::TryEvaluateSelector)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb03fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.EvaluateLocalGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::EvaluateLocalGroup)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xb03fd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"EvaluateLocalGroup", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb040068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb04006c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_get_m_Groups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Groups;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>* const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_get_m_Groups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Groups;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_set_m_Groups(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Groups = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_get_m_GroupLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>* const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_get_m_GroupLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupLookup;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::__cordl_internal_set_m_GroupLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupLookup = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::setStaticF_s_IsUpdating(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_IsUpdating", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::getStaticF_s_IsUpdating()  {
return ::cordl_internals::getStaticField<int32_t, "s_IsUpdating", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>();
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::setStaticF_EndUpdate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "EndUpdate", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::getStaticF_EndUpdate()  {
return ::cordl_internals::getStaticField<::System::Action*, "EndUpdate", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>();
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_IsUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>(this, ___internal_method, name);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::add_EndUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"add_EndUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::remove_EndUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"remove_EndUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::BeginUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"BeginUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::EndUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"EndUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IDisposable* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::UpdateScope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"UpdateScope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, group);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::ContainsKey(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorInfo);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::EvaluateLocalGroup(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  variablleGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"EvaluateLocalGroup", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, selectorInfo, variablleGroup);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*>(formatter));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___System__Collections__Generic__IDictionary_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource::PersistentVariablesSource()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb03f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb0405d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb0405ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb0407f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb040848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb040854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb04088c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_set___4__this(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*> const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb03fa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb0402e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb040304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb040538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb040588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb040590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0405c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_set___4__this(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*> const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35::PersistentVariablesSource__GetEnumerator_d__35()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0402cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c._get_Values_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::*)(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*)>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::_get_Values_b__14_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb0402d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(),
                        {"<get_Values>b__14_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(std::forward<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::setStaticF___9__14_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*, "<>9__14_0", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(std::forward<::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*>(value));
}
inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*, "<>9__14_0", ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::_get_Values_b__14_0(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>(),
                        {"<get_Values>b__14_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>(this, ___internal_method, k);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c::PersistentVariablesSource___c()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb03f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_get_group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_get_group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::__cordl_internal_set_group(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___group = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair* UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair::PersistentVariablesSource_NameValuePair()   {
}
