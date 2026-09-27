#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatter_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatDetails_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__IOutput_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Parser_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__SmartSettings_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__FormattingErrorEventArgs_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.add_OnFormattingFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::add_OnFormattingFailure)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb028ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"add_OnFormattingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.remove_OnFormattingFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::remove_OnFormattingFailure)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb028b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"remove_OnFormattingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.get_SourceExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>* (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::get_SourceExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb028c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_SourceExtensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.get_FormatterExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>* (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::get_FormatterExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb028c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_FormatterExtensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb027ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.GetNotEmptyFormatterExtensionNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::GetNotEmptyFormatterExtensionNames)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xb028d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"GetNotEmptyFormatterExtensionNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.AddExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::AddExtensions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb02825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"AddExtensions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.AddExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::AddExtensions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb028598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"AddExtensions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.get_Parser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::get_Parser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb029078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_Parser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.set_Parser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::set_Parser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb029080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"set_Parser", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb029088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::set_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb029090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb02719c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::System::Collections::Generic::IList_1<::System::Object*>*, ::StringW)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb02942c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::System::IFormatProvider*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb027258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::System::IFormatProvider*, ::System::Collections::Generic::IList_1<::System::Object*>*, ::StringW)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xb029098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.FormatInto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::FormatInto)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb028740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatInto", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.FormatWithCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>, ::StringW, ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCache)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb028ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCache", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.FormatWithCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>, ::StringW, ::System::IFormatProvider*, ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCache)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb02a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCache", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.FormatWithCacheInto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCacheInto)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb02ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCacheInto", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Object*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb02a758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::Format)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xb02b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.FormatError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, ::System::Exception*, int32_t, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::FormatError)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb02b86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatError", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.CheckForExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::CheckForExtensions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb02b4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"CheckForExtensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.EvaluateSelectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::EvaluateSelectors)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb02b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"EvaluateSelectors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.InvokeSourceExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::InvokeSourceExtensions)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb02bbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"InvokeSourceExtensions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.EvaluateFormatters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::EvaluateFormatters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb02bae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"EvaluateFormatters", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.InvokeFormatterExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::InvokeFormatterExtensions)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb02bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"InvokeFormatterExtensions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb02bfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartFormatter.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::SmartFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::SmartFormatter::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb02bfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_m_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Parser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parser;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Parser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parser;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_m_Parser(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Parser = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sources;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sources;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_m_Sources(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sources = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Formatters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatters;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_Formatters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatters;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_m_Formatters(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Formatters = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_NotEmptyFormatterExtensionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NotEmptyFormatterExtensionNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_m_NotEmptyFormatterExtensionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NotEmptyFormatterExtensionNames;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_m_NotEmptyFormatterExtensionNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NotEmptyFormatterExtensionNames = value;
}
constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_OnFormattingFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFormattingFailure;
}
constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>* const& UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_get_OnFormattingFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFormattingFailure;
}
constexpr void UnityEngine::Localization::SmartFormat::SmartFormatter::__cordl_internal_set_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFormattingFailure = value;
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::setStaticF_k_Empty(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "k_Empty", ::UnityEngine::Localization::SmartFormat::SmartFormatter*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> UnityEngine::Localization::SmartFormat::SmartFormatter::getStaticF_k_Empty()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "k_Empty", ::UnityEngine::Localization::SmartFormat::SmartFormatter*>();
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::add_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"add_OnFormattingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::remove_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"remove_OnFormattingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>* UnityEngine::Localization::SmartFormat::SmartFormatter::get_SourceExtensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_SourceExtensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>* UnityEngine::Localization::SmartFormat::SmartFormatter::get_FormatterExtensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_FormatterExtensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Localization::SmartFormat::SmartFormatter::GetNotEmptyFormatterExtensionNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"GetNotEmptyFormatterExtensionNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::AddExtensions(/* [ParamArray] */ ::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>  sourceExtensions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"AddExtensions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceExtensions);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::AddExtensions(/* [ParamArray] */ ::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>  formatterExtensions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"AddExtensions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatterExtensions);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*> && ::cordl_internals::reference_type_constraint<T>)
inline T UnityEngine::Localization::SmartFormat::SmartFormatter::GetSourceExtension()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                    {"GetSourceExtension", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*> && ::cordl_internals::reference_type_constraint<T>)
inline T UnityEngine::Localization::SmartFormat::SmartFormatter::GetFormatterExtension()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                    {"GetFormatterExtension", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* UnityEngine::Localization::SmartFormat::SmartFormatter::get_Parser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_Parser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::set_Parser(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"set_Parser", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* UnityEngine::Localization::SmartFormat::SmartFormatter::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::set_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::System::Collections::Generic::IList_1<::System::Object*>*  args, ::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, args, format);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::System::IFormatProvider*  provider, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, provider, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::System::IFormatProvider*  provider, ::System::Collections::Generic::IList_1<::System::Object*>*  args, ::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, provider, args, format);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::FormatInto(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatInto", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCache(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::StringW  format, ::System::Collections::Generic::IList_1<::System::Object*>*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCache", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cache, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCache(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::StringW  format, ::System::IFormatProvider*  formatProvider, ::System::Collections::Generic::IList_1<::System::Object*>*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCache", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cache, format, formatProvider, args);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::FormatWithCacheInto(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatWithCacheInto", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache, output, format, args);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatDetails, format, current);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::FormatError(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::System::Exception*  innerException, int32_t  startIndex, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"FormatError", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorItem, innerException, startIndex, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::CheckForExtensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"CheckForExtensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::EvaluateSelectors(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"EvaluateSelectors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline bool UnityEngine::Localization::SmartFormat::SmartFormatter::InvokeSourceExtensions(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"InvokeSourceExtensions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::EvaluateFormatters(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"EvaluateFormatters", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline bool UnityEngine::Localization::SmartFormat::SmartFormatter::InvokeFormatterExtensions(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"InvokeFormatterExtensions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::SmartFormatter::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* UnityEngine::Localization::SmartFormat::SmartFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::SmartFormatter*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::SmartFormat::SmartFormatter::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::SmartFormat::SmartFormatter::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter::SmartFormatter()   {
}
