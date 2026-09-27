#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedString_StringTableEntryVariable.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_StringTableEntryVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedString_StringTableEntryVariable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedString_StringTableEntryVariable::*)(::StringW, ::UnityEngine::Localization::Tables::StringTableEntry*)>(&::GlobalNamespace::LocalizedString_StringTableEntryVariable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb013114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::Tables::StringTableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedString_StringTableEntryVariable.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizedString_StringTableEntryVariable::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::GlobalNamespace::LocalizedString_StringTableEntryVariable::TryGetValue)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xb013dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedString_StringTableEntryVariable.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizedString_StringTableEntryVariable::*)()>(&::GlobalNamespace::LocalizedString_StringTableEntryVariable::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0141bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(),
                    {::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizedString_StringTableEntryVariable::_ctor(::StringW  localized, ::UnityEngine::Localization::Tables::StringTableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::Tables::StringTableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, localized, entry);
}
inline bool GlobalNamespace::LocalizedString_StringTableEntryVariable::TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
inline ::StringW GlobalNamespace::LocalizedString_StringTableEntryVariable::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LocalizedString_StringTableEntryVariable>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr  GlobalNamespace::LocalizedString_StringTableEntryVariable::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*()  {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* GlobalNamespace::LocalizedString_StringTableEntryVariable::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup()  {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Localized", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StringTableEntry", ty: "::UnityEngine::Localization::Tables::StringTableEntry*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocalizedString_StringTableEntryVariable::LocalizedString_StringTableEntryVariable(::StringW  m_Localized, ::UnityEngine::Localization::Tables::StringTableEntry*  m_StringTableEntry) noexcept  {
this->m_Localized = m_Localized;
this->m_StringTableEntry = m_StringTableEntry;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedString_StringTableEntryVariable::LocalizedString_StringTableEntryVariable()   {
}
