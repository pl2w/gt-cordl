#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/VariablesGroupAsset.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariablesGroupAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariableNameValuePair_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariablesGroupAsset_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04a1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Keys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04a238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Values)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb04a288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb04a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04a444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.GetSourceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::GetSourceValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"GetSourceValue", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::TryGetValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb04a07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Add)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb04a448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb04a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Remove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb04a6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Remove)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb04a79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::ContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb04a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Contains)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb04a838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>, int32_t)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::CopyTo)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb04a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb04aab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb04ab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.ContainsName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::ContainsName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"ContainsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb04abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04ac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb04ac7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb04ae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_get_m_Variables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_get_m_Variables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variables;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Variables = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_get_m_VariableLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_get_m_VariableLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableLookup;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::__cordl_internal_set_m_VariableLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariableLookup = value;
}
inline int32_t UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(this, ___internal_method, name);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"GetSourceValue", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, variable);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::ContainsKey(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::ContainsName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"ContainsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___System__Collections__Generic__IDictionary_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset::VariablesGroupAsset()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb04ab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb04b2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb04b2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb04b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb04b53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb04b574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb04abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb04afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb04afec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb04b278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23::VariablesGroupAsset__GetEnumerator_d__23()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04afb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c._get_Values_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::*)(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::_get_Values_b__7_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb04afbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(),
                        {"<get_Values>b__7_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*, "<>9", ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(std::forward<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*, "<>9", ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>();
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::setStaticF___9__7_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*, "<>9__7_0", ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(std::forward<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(value));
}
inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*, "<>9__7_0", ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>();
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::_get_Values_b__7_0(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>(),
                        {"<get_Values>b__7_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(this, ___internal_method, s);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c* UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c::VariablesGroupAsset___c()   {
}
