#pragma once
// IWYU pragma private; include "System/Net/AutoWebProxyScriptEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoWebProxyScriptEngine)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Net {
class WebProxy;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class AutoWebProxyScriptEngine;
}
// Write type traits
MARK_REF_T(::System::Net::AutoWebProxyScriptEngine*);
DEFINE_IL2CPP_CLASS(::System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.AutoWebProxyScriptEngine
class CORDL_TYPE AutoWebProxyScriptEngine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AutomaticConfigurationScript, put=set_AutomaticConfigurationScript)) ::System::Uri*  AutomaticConfigurationScript;

 __declspec(property(get=get_AutomaticallyDetectSettings, put=set_AutomaticallyDetectSettings)) bool  AutomaticallyDetectSettings;

/// @brief Field <AutomaticConfigurationScript>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AutomaticConfigurationScript_k__BackingField, put=__cordl_internal_set__AutomaticConfigurationScript_k__BackingField)) ::System::Uri*  _AutomaticConfigurationScript_k__BackingField;

/// @brief Field <AutomaticallyDetectSettings>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__AutomaticallyDetectSettings_k__BackingField, put=__cordl_internal_set__AutomaticallyDetectSettings_k__BackingField)) bool  _AutomaticallyDetectSettings_k__BackingField;

/// @brief Method Abort, addr 0xac882e4, size 0x4, virtual false, abstract: false, final false
inline void Abort(::by_ref<int32_t>  syncStatus) ;

/// @brief Method CheckForChanges, addr 0xac86ef4, size 0x4, virtual false, abstract: false, final false
inline void CheckForChanges() ;

/// @brief Method Close, addr 0xac87c98, size 0x4, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method GetProxies, addr 0xac87ec8, size 0x20, virtual false, abstract: false, final false
inline bool GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList) ;

/// @brief Method GetProxies, addr 0xac882c0, size 0x20, virtual false, abstract: false, final false
inline bool GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList, ::by_ref<int32_t>  syncStatus) ;

static inline ::System::Net::AutoWebProxyScriptEngine* New_ctor(::System::Net::WebProxy*  proxy, bool  useRegistry) ;

constexpr ::System::Uri* const& __cordl_internal_get__AutomaticConfigurationScript_k__BackingField() const;

constexpr ::System::Uri*& __cordl_internal_get__AutomaticConfigurationScript_k__BackingField() ;

constexpr bool const& __cordl_internal_get__AutomaticallyDetectSettings_k__BackingField() const;

constexpr bool& __cordl_internal_get__AutomaticallyDetectSettings_k__BackingField() ;

constexpr void __cordl_internal_set__AutomaticConfigurationScript_k__BackingField(::System::Uri*  value) ;

constexpr void __cordl_internal_set__AutomaticallyDetectSettings_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xac86b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebProxy*  proxy, bool  useRegistry) ;

/// [CompilerGenerated]
/// @brief Method get_AutomaticConfigurationScript, addr 0xac883b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_AutomaticConfigurationScript() ;

/// [CompilerGenerated]
/// @brief Method get_AutomaticallyDetectSettings, addr 0xac883c0, size 0x8, virtual false, abstract: false, final false
inline bool get_AutomaticallyDetectSettings() ;

/// [CompilerGenerated]
/// @brief Method set_AutomaticConfigurationScript, addr 0xac883b8, size 0x8, virtual false, abstract: false, final false
inline void set_AutomaticConfigurationScript(::System::Uri*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AutomaticallyDetectSettings, addr 0xac883c8, size 0x8, virtual false, abstract: false, final false
inline void set_AutomaticallyDetectSettings(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoWebProxyScriptEngine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoWebProxyScriptEngine(AutoWebProxyScriptEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoWebProxyScriptEngine(AutoWebProxyScriptEngine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10639};

/// [CompilerGenerated]
/// @brief Field <AutomaticConfigurationScript>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ____AutomaticConfigurationScript_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AutomaticallyDetectSettings>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____AutomaticallyDetectSettings_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::AutoWebProxyScriptEngine, ____AutomaticConfigurationScript_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::AutoWebProxyScriptEngine, ____AutomaticallyDetectSettings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::AutoWebProxyScriptEngine) == 0x20, "Size mismatch!");

} // namespace end def System::Net
