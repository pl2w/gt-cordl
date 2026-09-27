#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedStringDatabase.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__MissingTranslationBehavior_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedStringDatabase_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__FallbackBehavior_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedStringDatabase_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__MissingTranslationBehavior_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.add_TranslationNotFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::add_TranslationNotFound)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb01c394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"add_TranslationNotFound", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.remove_TranslationNotFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::remove_TranslationNotFound)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb01c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"remove_TranslationNotFound", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.get_NoTranslationFoundMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)()>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::get_NoTranslationFoundMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_NoTranslationFoundMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.set_NoTranslationFoundMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::StringW)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::set_NoTranslationFoundMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_NoTranslationFoundMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.get_MissingTranslationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::MissingTranslationBehavior (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)()>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::get_MissingTranslationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_MissingTranslationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.set_MissingTranslationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Settings::MissingTranslationBehavior)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::set_MissingTranslationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_MissingTranslationState", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::MissingTranslationBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.get_SmartFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::SmartFormatter* (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)()>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::get_SmartFormatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_SmartFormatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.set_SmartFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::set_SmartFormatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_SmartFormatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb01c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb01c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb01c698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb01c77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb01c834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb01c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb01c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedStringAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*, bool)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsyncInternal)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb01c964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::FallbackBehavior)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb01cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GenerateLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::StringTable*, ::UnityEngine::Localization::Tables::StringTableEntry*, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Locale*, ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GenerateLocalizedString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb01ccec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.GetUntranslatedTextTempTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Tables::StringTable> (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::GetUntranslatedTextTempTable)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb01d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetUntranslatedTextTempTable", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase.ProcessUntranslatedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)(::StringW, int64_t, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::StringTable*, ::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::ProcessUntranslatedText)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0xb01cf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"ProcessUntranslatedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::StringTable*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase::*)()>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb01d618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_MissingTranslationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MissingTranslationState;
}
constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior const& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_MissingTranslationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MissingTranslationState;
}
constexpr void UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_set_m_MissingTranslationState(::UnityEngine::Localization::Settings::MissingTranslationBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MissingTranslationState = value;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_TranslationNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TranslationNotFound;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation* const& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_TranslationNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TranslationNotFound;
}
constexpr void UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_set_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TranslationNotFound = value;
}
constexpr ::StringW& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_NoTranslationFoundMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoTranslationFoundMessage;
}
constexpr ::StringW const& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_NoTranslationFoundMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoTranslationFoundMessage;
}
constexpr void UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_set_m_NoTranslationFoundMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NoTranslationFoundMessage = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_SmartFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmartFormat;
}
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_SmartFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmartFormat;
}
constexpr void UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_set_m_SmartFormat(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmartFormat = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::StringTable>& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_MissingTranslationTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MissingTranslationTable;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::StringTable> const& UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_get_m_MissingTranslationTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MissingTranslationTable;
}
constexpr void UnityEngine::Localization::Settings::LocalizedStringDatabase::__cordl_internal_set_m_MissingTranslationTable(::UnityW<::UnityEngine::Localization::Tables::StringTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MissingTranslationTable = value;
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::add_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"add_TranslationNotFound", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::remove_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"remove_TranslationNotFound", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::get_NoTranslationFoundMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_NoTranslationFoundMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::set_NoTranslationFoundMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_NoTranslationFoundMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Settings::MissingTranslationBehavior UnityEngine::Localization::Settings::LocalizedStringDatabase::get_MissingTranslationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_MissingTranslationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::MissingTranslationBehavior>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::set_MissingTranslationState(::UnityEngine::Localization::Settings::MissingTranslationBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_MissingTranslationState", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::MissingTranslationBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* UnityEngine::Localization::Settings::LocalizedStringDatabase::get_SmartFormatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"get_SmartFormatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::set_SmartFormatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"set_SmartFormatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, tableEntryReference, locale, fallbackBehavior, arguments);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tableEntryReference, locale, fallbackBehavior, arguments);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, tableEntryReference, arguments, locale, fallbackBehavior);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tableEntryReference, arguments, locale, fallbackBehavior);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior, arguments);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior, arguments);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, tableReference, tableEntryReference, arguments, locale, fallbackBehavior, localVariables);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedStringAsyncInternal(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables, bool  autoRelease)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, tableReference, tableEntryReference, arguments, locale, fallbackBehavior, localVariables, autoRelease);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::GetLocalizedString(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tableReference, tableEntryReference, arguments, locale, fallbackBehavior);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::GenerateLocalizedString(::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Tables::StringTableEntry*  entry, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, table, entry, tableReference, tableEntryReference, locale, arguments);
}
inline ::UnityW<::UnityEngine::Localization::Tables::StringTable> UnityEngine::Localization::Settings::LocalizedStringDatabase::GetUntranslatedTextTempTable(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"GetUntranslatedTextTempTable", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Tables::StringTable>>(this, ___internal_method, tableReference);
}
inline ::StringW UnityEngine::Localization::Settings::LocalizedStringDatabase::ProcessUntranslatedText(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {"ProcessUntranslatedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::StringTable*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, keyId, tableReference, table, locale);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* UnityEngine::Localization::Settings::LocalizedStringDatabase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase::LocalizedStringDatabase()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb01d6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::*)(::StringW, int64_t, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::StringTable*, ::UnityEngine::Localization::Locale*, ::StringW)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::Invoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb01d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::*)(::StringW, int64_t, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::StringTable*, ::UnityEngine::Localization::Locale*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb01d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::*)(::System::IAsyncResult*)>(&::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb01d8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::Invoke(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale, ::StringW  noTranslationFoundMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, keyId, tableReference, table, locale, noTranslationFoundMessage);
}
inline ::System::IAsyncResult* UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::BeginInvoke(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale, ::StringW  noTranslationFoundMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, keyId, tableReference, table, locale, noTranslationFoundMessage, callback, object);
}
inline void UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation* UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation::LocalizedStringDatabase_MissingTranslation()   {
}
