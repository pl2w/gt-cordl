#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_UxmlObjectEntry.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_UxmlObjectEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*)>(&::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7bf3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry.GetField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UxmlObjectAsset* (::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::*)(::StringW)>(&::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::GetField)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb7bf404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(),
                        {"GetField", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::*)()>(&::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb7bf56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(),
                    {::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::_ctor(int32_t  parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  uxmlObjectAssets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parentId, uxmlObjectAssets);
}
inline ::UnityEngine::UIElements::UxmlObjectAsset* GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::GetField(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(),
                        {"GetField", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UxmlObjectAsset*>(*this, ___internal_method, fieldName);
}
inline ::StringW GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uxmlObjectAssets", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::VisualTreeAsset_UxmlObjectEntry(int32_t  parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  uxmlObjectAssets) noexcept  {
this->parentId = parentId;
this->uxmlObjectAssets = uxmlObjectAssets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry::VisualTreeAsset_UxmlObjectEntry()   {
}
