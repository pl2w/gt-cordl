#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Smart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Smart)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class Smart;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Smart*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Smart*, "UnityEngine.Localization.SmartFormat", "Smart");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Smart
class CORDL_TYPE Smart : public ::System::Object {
public:
// Declarations
/// @brief Field <Default>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Default_k__BackingField, put=setStaticF__Default_k__BackingField)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  _Default_k__BackingField;

/// @brief Method CreateDefaultSmartFormat, addr 0xb027690, size 0x654, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* CreateDefaultSmartFormat() ;

/// @brief Method Format, addr 0xb0274b8, size 0x118, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0) ;

/// @brief Method Format, addr 0xb0273b0, size 0x108, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Format, addr 0xb027268, size 0x148, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Format, addr 0xb0270f0, size 0xac, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Format, addr 0xb0271a8, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* getStaticF__Default_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Default, addr 0xb0275d0, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* get_Default() ;

static inline void setStaticF__Default_k__BackingField(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Default, addr 0xb027628, size 0x68, virtual false, abstract: false, final false
static inline void set_Default(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Smart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Smart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Smart(Smart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Smart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Smart(Smart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Smart) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
