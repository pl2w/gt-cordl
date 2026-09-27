#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/RuntimeLicenseContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RuntimeLicenseContext)
namespace System::Collections {
class Hashtable;
}
namespace System::Diagnostics {
class TraceSwitch;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class RuntimeLicenseContext;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::Design::RuntimeLicenseContext*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::Design::RuntimeLicenseContext*, "System.ComponentModel.Design", "RuntimeLicenseContext");
// Dependencies System.ComponentModel.LicenseContext
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.RuntimeLicenseContext
class CORDL_TYPE RuntimeLicenseContext : public ::System::ComponentModel::LicenseContext {
public:
// Declarations
/// @brief Field s_runtimeLicenseContextSwitch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_runtimeLicenseContextSwitch, put=setStaticF_s_runtimeLicenseContextSwitch)) ::System::Diagnostics::TraceSwitch*  s_runtimeLicenseContextSwitch;

/// @brief Field savedLicenseKeys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedLicenseKeys, put=__cordl_internal_set_savedLicenseKeys)) ::System::Collections::Hashtable*  savedLicenseKeys;

/// @brief Method CaseInsensitiveManifestResourceStreamLookup, addr 0xad99248, size 0x1c8, virtual false, abstract: false, final false
inline ::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly*  satellite, ::StringW  name) ;

/// @brief Method GetLocalPath, addr 0xad98c7c, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetLocalPath(::StringW  fileName) ;

/// @brief Method GetSavedLicenseKey, addr 0xad98d04, size 0x544, virtual true, abstract: false, final false
inline ::StringW GetSavedLicenseKey(::System::Type*  type, ::System::Reflection::Assembly*  resourceAssembly) ;

static inline ::System::ComponentModel::Design::RuntimeLicenseContext* New_ctor() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_savedLicenseKeys() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_savedLicenseKeys() ;

constexpr void __cordl_internal_set_savedLicenseKeys(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xad99618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Diagnostics::TraceSwitch* getStaticF_s_runtimeLicenseContextSwitch() ;

static inline void setStaticF_s_runtimeLicenseContextSwitch(::System::Diagnostics::TraceSwitch*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeLicenseContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLicenseContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeLicenseContext(RuntimeLicenseContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLicenseContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeLicenseContext(RuntimeLicenseContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10309};

/// @brief Field savedLicenseKeys, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___savedLicenseKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Design::RuntimeLicenseContext, ___savedLicenseKeys) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::Design::RuntimeLicenseContext) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel::Design
