#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_AssetEntry.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_AssetEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_AssetEntry.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::VisualTreeAsset_AssetEntry::*)()>(&::GlobalNamespace::VisualTreeAsset_AssetEntry::get_type)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb7bf650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_AssetEntry.get_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VisualTreeAsset_AssetEntry::*)()>(&::GlobalNamespace::VisualTreeAsset_AssetEntry::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7bf6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_AssetEntry.get_asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::GlobalNamespace::VisualTreeAsset_AssetEntry::*)()>(&::GlobalNamespace::VisualTreeAsset_AssetEntry::get_asset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb7bf6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_AssetEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualTreeAsset_AssetEntry::*)(::StringW, ::System::Type*, ::UnityEngine::Object*)>(&::GlobalNamespace::VisualTreeAsset_AssetEntry::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb7bf778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Type* GlobalNamespace::VisualTreeAsset_AssetEntry::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::VisualTreeAsset_AssetEntry::get_path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::VisualTreeAsset_AssetEntry::get_asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {"get_asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void GlobalNamespace::VisualTreeAsset_AssetEntry::_ctor(::StringW  path, ::System::Type*  type, ::UnityEngine::Object*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_AssetEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, type, asset);
}
// Ctor Parameters [CppParam { name: "m_Path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TypeFullName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AssetReference", ty: "::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualTreeAsset_AssetEntry::VisualTreeAsset_AssetEntry(::StringW  m_Path, ::StringW  m_TypeFullName, ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  m_AssetReference, int32_t  m_InstanceID, ::System::Type*  m_CachedType) noexcept  {
this->m_Path = m_Path;
this->m_TypeFullName = m_TypeFullName;
this->m_AssetReference = m_AssetReference;
this->m_InstanceID = m_InstanceID;
this->m_CachedType = m_CachedType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualTreeAsset_AssetEntry::VisualTreeAsset_AssetEntry()   {
}
