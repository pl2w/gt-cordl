#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_UsingEntry.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_UsingEntry_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualTreeAsset_UsingEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualTreeAsset_UsingEntry::*)(::StringW, ::StringW)>(&::GlobalNamespace::VisualTreeAsset_UsingEntry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb7bf320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UsingEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VisualTreeAsset_UsingEntry::setStaticF_comparer(::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*, "comparer", ::GlobalNamespace::VisualTreeAsset_UsingEntry>(std::forward<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>* GlobalNamespace::VisualTreeAsset_UsingEntry::getStaticF_comparer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*, "comparer", ::GlobalNamespace::VisualTreeAsset_UsingEntry>();
}
inline void GlobalNamespace::VisualTreeAsset_UsingEntry::_ctor(::StringW  alias, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeAsset_UsingEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alias, path);
}
// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "asset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualTreeAsset_UsingEntry::VisualTreeAsset_UsingEntry(::StringW  alias, ::StringW  path, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  asset) noexcept  {
this->alias = alias;
this->path = path;
this->asset = asset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualTreeAsset_UsingEntry::VisualTreeAsset_UsingEntry()   {
}
