#pragma once
// IWYU pragma private; include "Fusion/Versioning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Versioning)
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion {
class Versioning;
}
// Write type traits
MARK_REF_T(::Fusion::Versioning*);
DEFINE_IL2CPP_CLASS(::Fusion::Versioning*, "Fusion", "Versioning");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Versioning
class CORDL_TYPE Versioning : public ::System::Object {
public:
// Declarations
/// @brief Field InvalidVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidVersion, put=setStaticF_InvalidVersion)) ::System::Version*  InvalidVersion;

/// [Extension]
/// @brief Method ShortVersion, addr 0x5f419d4, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Version* ShortVersion(::System::Version*  version) ;

static inline ::System::Version* getStaticF_InvalidVersion() ;

/// @brief Method get_GetCurrentVersion, addr 0x5f418f0, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Version* get_GetCurrentVersion() ;

static inline void setStaticF_InvalidVersion(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Versioning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Versioning", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Versioning(Versioning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Versioning", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Versioning(Versioning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Versioning) == 0x10, "Size mismatch!");

} // namespace end def Fusion
