#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerUITemplate_FormattedString.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerUITemplate_FormattedString_def.hpp"
#include "GlobalNamespace/zzzz__StringFormatter_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUITemplate_FormattedString.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinTriggerUITemplate_FormattedString::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::JoinTriggerUITemplate_FormattedString::GetText)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x567b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUITemplate_FormattedString>(),
                        {"GetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUITemplate_FormattedString.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinTriggerUITemplate_FormattedString::*)(::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*)>(&::GlobalNamespace::JoinTriggerUITemplate_FormattedString::GetText)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x567b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUITemplate_FormattedString>(),
                        {"GetText", {}, {::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::JoinTriggerUITemplate_FormattedString::GetText(::StringW  oldZone, ::StringW  newZone, ::StringW  oldGameType, ::StringW  newGameType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUITemplate_FormattedString>(),
                        {"GetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, oldZone, newZone, oldGameType, newGameType);
}
inline ::StringW GlobalNamespace::JoinTriggerUITemplate_FormattedString::GetText(::System::Func_1<::StringW>*  oldZone, ::System::Func_1<::StringW>*  newZone, ::System::Func_1<::StringW>*  oldGameType, ::System::Func_1<::StringW>*  newGameType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUITemplate_FormattedString>(),
                        {"GetText", {}, {::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, oldZone, newZone, oldGameType, newGameType);
}
// Ctor Parameters [CppParam { name: "formatText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "formatter", ty: "::GlobalNamespace::StringFormatter*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString::JoinTriggerUITemplate_FormattedString(::StringW  formatText, ::GlobalNamespace::StringFormatter*  formatter) noexcept  {
this->formatText = formatText;
this->formatter = formatter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString::JoinTriggerUITemplate_FormattedString()   {
}
