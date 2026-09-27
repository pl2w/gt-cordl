#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityYaml.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityYaml_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline void GlobalNamespace::UnityYaml::setStaticF_EngineAssembly(::System::Reflection::Assembly*  value)  {
::cordl_internals::setStaticField<::System::Reflection::Assembly*, "EngineAssembly", ::GlobalNamespace::UnityYaml*>(std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* GlobalNamespace::UnityYaml::getStaticF_EngineAssembly()  {
return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "EngineAssembly", ::GlobalNamespace::UnityYaml*>();
}
inline void GlobalNamespace::UnityYaml::setStaticF_TerrainAssembly(::System::Reflection::Assembly*  value)  {
::cordl_internals::setStaticField<::System::Reflection::Assembly*, "TerrainAssembly", ::GlobalNamespace::UnityYaml*>(std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* GlobalNamespace::UnityYaml::getStaticF_TerrainAssembly()  {
return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "TerrainAssembly", ::GlobalNamespace::UnityYaml*>();
}
inline void GlobalNamespace::UnityYaml::setStaticF_ClassIDToType(::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*, "ClassIDToType", ::GlobalNamespace::UnityYaml*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>* GlobalNamespace::UnityYaml::getStaticF_ClassIDToType()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*, "ClassIDToType", ::GlobalNamespace::UnityYaml*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityYaml::UnityYaml()   {
}
