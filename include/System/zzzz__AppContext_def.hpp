#pragma once
// IWYU pragma private; include "System/AppContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AppContext)
namespace GlobalNamespace {
struct AppContext_SwitchValueState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System {
class AppContext;
}
// Write type traits
MARK_REF_T(::System::AppContext*);
DEFINE_IL2CPP_CLASS(::System::AppContext*, "System", "AppContext");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.AppContext
class CORDL_TYPE AppContext : public ::System::Object {
public:
// Declarations
using SwitchValueState = ::GlobalNamespace::AppContext_SwitchValueState;

/// @brief Field s_defaultsInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_defaultsInitialized, put=setStaticF_s_defaultsInitialized)) bool  s_defaultsInitialized;

/// @brief Field s_switchMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_switchMap, put=setStaticF_s_switchMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*  s_switchMap;

/// @brief Method InitializeDefaultSwitchValues, addr 0xa30862c, size 0x17c, virtual false, abstract: false, final false
static inline void InitializeDefaultSwitchValues() ;

/// @brief Method TryGetSwitch, addr 0xa3087a8, size 0x3e4, virtual false, abstract: false, final false
static inline bool TryGetSwitch(::StringW  switchName, ::by_ref<bool>  isEnabled) ;

static inline bool getStaticF_s_defaultsInitialized() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>* getStaticF_s_switchMap() ;

static inline void setStaticF_s_defaultsInitialized(bool  value) ;

static inline void setStaticF_s_switchMap(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AppContext_SwitchValueState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppContext(AppContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppContext(AppContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::AppContext) == 0x10, "Size mismatch!");

} // namespace end def System
