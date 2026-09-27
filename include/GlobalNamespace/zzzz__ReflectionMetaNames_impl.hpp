#pragma once
// IWYU pragma private; include "GlobalNamespace/ReflectionMetaNames.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionMetaNames_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
inline void GlobalNamespace::ReflectionMetaNames::setStaticF_ReflectedNames(::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*, "ReflectedNames", ::GlobalNamespace::ReflectionMetaNames*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>* GlobalNamespace::ReflectionMetaNames::getStaticF_ReflectedNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*, "ReflectedNames", ::GlobalNamespace::ReflectionMetaNames*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReflectionMetaNames::ReflectionMetaNames()   {
}
