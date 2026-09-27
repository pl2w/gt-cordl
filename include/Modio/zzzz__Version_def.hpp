#pragma once
// IWYU pragma private; include "Modio/Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Version)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Modio {
class Version;
}
// Write type traits
MARK_REF_T(::Modio::Version*);
DEFINE_IL2CPP_CLASS(::Modio::Version*, "Modio", "Version");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.Version
class CORDL_TYPE Version : public ::System::Object {
public:
// Declarations
/// @brief Field Current, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Current, put=setStaticF_Current)) ::System::Version*  Current;

/// @brief Field EnvironmentDetails, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnvironmentDetails, put=setStaticF_EnvironmentDetails)) ::System::Collections::Generic::List_1<::StringW>*  EnvironmentDetails;

/// @brief Method AddEnvironmentDetails, addr 0xa01c770, size 0xd4, virtual false, abstract: false, final false
static inline void AddEnvironmentDetails(::StringW  details) ;

/// @brief Method GetCurrent, addr 0xa01c844, size 0x114, virtual false, abstract: false, final false
static inline ::StringW GetCurrent() ;

static inline ::System::Version* getStaticF_Current() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_EnvironmentDetails() ;

static inline void setStaticF_Current(::System::Version*  value) ;

static inline void setStaticF_EnvironmentDetails(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Version() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Version(Version && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Version(Version const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Version) == 0x10, "Size mismatch!");

} // namespace end def Modio
