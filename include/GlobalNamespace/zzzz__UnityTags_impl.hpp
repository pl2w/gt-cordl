#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityTags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityTags_def.hpp"
#include "GlobalNamespace/zzzz__UnityTag_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
inline void GlobalNamespace::UnityTags::setStaticF_StringValues(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "StringValues", ::GlobalNamespace::UnityTags*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::UnityTags::getStaticF_StringValues()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "StringValues", ::GlobalNamespace::UnityTags*>();
}
inline void GlobalNamespace::UnityTags::setStaticF_StringToTag(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*, "StringToTag", ::GlobalNamespace::UnityTags*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>* GlobalNamespace::UnityTags::getStaticF_StringToTag()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*, "StringToTag", ::GlobalNamespace::UnityTags*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTags::UnityTags()   {
}
