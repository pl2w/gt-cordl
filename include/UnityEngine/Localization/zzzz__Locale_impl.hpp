#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Locale.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataCollection_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_Identifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00d8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Locale::set_Identifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00d8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_Identifier", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataCollection* (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_Metadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(::UnityEngine::Localization::Metadata::MetadataCollection*)>(&::UnityEngine::Localization::Locale::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_SortOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_SortOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_SortOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_SortOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(uint16_t)>(&::UnityEngine::Localization::Locale::set_SortOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_SortOrder", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_LocaleName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_LocaleName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb00d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_LocaleName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_LocaleName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(::StringW)>(&::UnityEngine::Localization::Locale::set_LocaleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_LocaleName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.GetFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::GetFallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb00d978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.GetFallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>* (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::GetFallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb00da94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"GetFallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_UseCustomFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_UseCustomFormatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00db48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_UseCustomFormatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_UseCustomFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(bool)>(&::UnityEngine::Localization::Locale::set_UseCustomFormatter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb00db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_UseCustomFormatter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_CustomFormatterCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_CustomFormatterCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00db64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_CustomFormatterCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_CustomFormatterCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(::StringW)>(&::UnityEngine::Localization::Locale::set_CustomFormatterCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb00db6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_CustomFormatterCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.get_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::get_Formatter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.set_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)(::System::IFormatProvider*)>(&::UnityEngine::Localization::Locale::set_Formatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00dca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.GetFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(bool, ::UnityEngine::Localization::LocaleIdentifier, ::StringW)>(&::UnityEngine::Localization::Locale::GetFormatter)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb00dbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"GetFormatter", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.CreateLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)(::StringW)>(&::UnityEngine::Localization::Locale::CreateLocale)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb00dca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.CreateLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Locale::CreateLocale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb00dd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.CreateLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::Locale::CreateLocale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb00de28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.CreateLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)(::System::Globalization::CultureInfo*)>(&::UnityEngine::Localization::Locale::CreateLocale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb00de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Locale::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Locale::CompareTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb00de98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00e038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb00e044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::ToString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb00e094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Locale::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Locale::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb00e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale.System_IFormatProvider_GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::Locale::*)(::System::Type*)>(&::UnityEngine::Localization::Locale::System_IFormatProvider_GetFormat)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb00e194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"System.IFormatProvider.GetFormat", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale::*)()>(&::UnityEngine::Localization::Locale::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb00e254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::Locale::__cordl_internal_get_m_Identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Identifier;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::Locale::__cordl_internal_get_m_Identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Identifier;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_Identifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Identifier = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& UnityEngine::Localization::Locale::__cordl_internal_get_m_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& UnityEngine::Localization::Locale::__cordl_internal_get_m_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Metadata = value;
}
constexpr ::StringW& UnityEngine::Localization::Locale::__cordl_internal_get_m_LocaleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleName;
}
constexpr ::StringW const& UnityEngine::Localization::Locale::__cordl_internal_get_m_LocaleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleName;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_LocaleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocaleName = value;
}
constexpr ::StringW& UnityEngine::Localization::Locale::__cordl_internal_get_m_CustomFormatCultureCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomFormatCultureCode;
}
constexpr ::StringW const& UnityEngine::Localization::Locale::__cordl_internal_get_m_CustomFormatCultureCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomFormatCultureCode;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_CustomFormatCultureCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomFormatCultureCode = value;
}
constexpr bool& UnityEngine::Localization::Locale::__cordl_internal_get_m_UseCustomFormatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCustomFormatter;
}
constexpr bool const& UnityEngine::Localization::Locale::__cordl_internal_get_m_UseCustomFormatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCustomFormatter;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_UseCustomFormatter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseCustomFormatter = value;
}
constexpr uint16_t& UnityEngine::Localization::Locale::__cordl_internal_get_m_SortOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortOrder;
}
constexpr uint16_t const& UnityEngine::Localization::Locale::__cordl_internal_get_m_SortOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortOrder;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_SortOrder(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortOrder = value;
}
constexpr ::System::IFormatProvider*& UnityEngine::Localization::Locale::__cordl_internal_get_m_Formatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatter;
}
constexpr ::System::IFormatProvider* const& UnityEngine::Localization::Locale::__cordl_internal_get_m_Formatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatter;
}
constexpr void UnityEngine::Localization::Locale::__cordl_internal_set_m_Formatter(::System::IFormatProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Formatter = value;
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::Locale::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_Identifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_Identifier", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Locale::get_Metadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_Metadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataCollection*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t UnityEngine::Localization::Locale::get_SortOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_SortOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_SortOrder(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_SortOrder", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Locale::get_LocaleName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_LocaleName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_LocaleName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_LocaleName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale::GetFallback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale::GetFallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"GetFallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Locale::get_UseCustomFormatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_UseCustomFormatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_UseCustomFormatter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_UseCustomFormatter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Locale::get_CustomFormatterCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"get_CustomFormatterCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_CustomFormatterCode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"set_CustomFormatterCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IFormatProvider* UnityEngine::Localization::Locale::get_Formatter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::set_Formatter(::System::IFormatProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* UnityEngine::Localization::Locale::GetFormatter(bool  useCustom, ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  customCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"GetFormatter", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, useCustom, localeIdentifier, customCode);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale::CreateLocale(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method, code);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale::CreateLocale(::UnityEngine::Localization::LocaleIdentifier  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method, identifier);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale::CreateLocale(::UnityEngine::SystemLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method, language);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale::CreateLocale(::System::Globalization::CultureInfo*  cultureInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CreateLocale", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method, cultureInfo);
}
inline int32_t UnityEngine::Localization::Locale::CompareTo(::UnityEngine::Localization::Locale*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void UnityEngine::Localization::Locale::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Locale::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Locale*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Locale::Equals(::UnityEngine::Localization::Locale*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Object* UnityEngine::Localization::Locale::System_IFormatProvider_GetFormat(::System::Type*  formatType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {"System.IFormatProvider.GetFormat", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formatType);
}
inline void UnityEngine::Localization::Locale::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Locale* UnityEngine::Localization::Locale::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Locale*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr  UnityEngine::Localization::Locale::operator ::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept {
return static_cast<::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale::i___System__IEquatable_1___UnityW___UnityEngine__Localization__Locale__() noexcept {
return static_cast<::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr  UnityEngine::Localization::Locale::operator ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept {
return static_cast<::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale::i___System__IComparable_1___UnityW___UnityEngine__Localization__Locale__() noexcept {
return static_cast<::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Locale::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Locale::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IFormatProvider"
constexpr  UnityEngine::Localization::Locale::operator ::System::IFormatProvider*() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* UnityEngine::Localization::Locale::i___System__IFormatProvider() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Locale::Locale()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)(int32_t)>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb00db14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb00e2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0xb00e2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb00e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Localization.Locale>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb00e9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00e9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_Collections_Generic_IEnumerable_UnityEngine_Localization_Locale__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>* (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_Generic_IEnumerable_UnityEngine_Localization_Locale__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb00e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Localization.Locale>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Locale__GetFallbacks_d__20.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::Locale__GetFallbacks_d__20::*)()>(&::UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb00ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set___2__current(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__processedLocales_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processedLocales_5__2;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__processedLocales_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processedLocales_5__2;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set__processedLocales_5__2(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processedLocales_5__2 = value;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*> const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set___7__wrap2(::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__entries_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries_5__4;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__entries_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries_5__4;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set__entries_5__4(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entries_5__4 = value;
}
constexpr int32_t& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__i_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr int32_t const& UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_get__i_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__5;
}
constexpr void UnityEngine::Localization::Locale__GetFallbacks_d__20::__cordl_internal_set__i_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__5 = value;
}
inline void UnityEngine::Localization::Locale__GetFallbacks_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::Locale__GetFallbacks_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Locale__GetFallbacks_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale__GetFallbacks_d__20::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Localization.Locale>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_Generic_IEnumerable_UnityEngine_Localization_Locale__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Localization.Locale>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::Locale__GetFallbacks_d__20::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::Locale__GetFallbacks_d__20* UnityEngine::Localization::Locale__GetFallbacks_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Locale__GetFallbacks_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr  UnityEngine::Localization::Locale__GetFallbacks_d__20::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale__GetFallbacks_d__20::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Localization__Locale__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::Locale__GetFallbacks_d__20::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::Locale__GetFallbacks_d__20::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr  UnityEngine::Localization::Locale__GetFallbacks_d__20::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Locale__GetFallbacks_d__20::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Localization__Locale__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::Locale__GetFallbacks_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::Locale__GetFallbacks_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::Locale__GetFallbacks_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::Locale__GetFallbacks_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Locale__GetFallbacks_d__20::Locale__GetFallbacks_d__20()   {
}
