#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AddressHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__AddressHelper_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.GetTableAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::AddressHelper::GetTableAddress)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb00cf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"GetTableAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.GetSharedTableAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Localization::AddressHelper::GetSharedTableAddress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb015500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"GetSharedTableAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.FormatAssetLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::AddressHelper::FormatAssetLabel)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb01554c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"FormatAssetLabel", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.IsLocaleLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Localization::AddressHelper::IsLocaleLabel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb015598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"IsLocaleLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.LocaleLabelToId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (*)(::StringW)>(&::UnityEngine::Localization::AddressHelper::LocaleLabelToId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0155f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"LocaleLabelToId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper.TryGetLocaleLabelToId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Localization::LocaleIdentifier>)>(&::UnityEngine::Localization::AddressHelper::TryGetLocaleLabelToId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb0155fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"TryGetLocaleLabelToId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::LocaleIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::AddressHelper::*)()>(&::UnityEngine::Localization::AddressHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb015698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::AddressHelper::GetTableAddress(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  localeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"GetTableAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tableName, localeId);
}
inline ::StringW UnityEngine::Localization::AddressHelper::GetSharedTableAddress(::StringW  tableName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"GetSharedTableAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tableName);
}
inline ::StringW UnityEngine::Localization::AddressHelper::FormatAssetLabel(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"FormatAssetLabel", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, localeIdentifier);
}
inline bool UnityEngine::Localization::AddressHelper::IsLocaleLabel(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"IsLocaleLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, label);
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::AddressHelper::LocaleLabelToId(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"LocaleLabelToId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(nullptr, ___internal_method, label);
}
inline bool UnityEngine::Localization::AddressHelper::TryGetLocaleLabelToId(::StringW  label, ::by_ref<::UnityEngine::Localization::LocaleIdentifier>  localeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {"TryGetLocaleLabelToId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::LocaleIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, label, localeId);
}
inline void UnityEngine::Localization::AddressHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::AddressHelper* UnityEngine::Localization::AddressHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::AddressHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::AddressHelper::AddressHelper()   {
}
