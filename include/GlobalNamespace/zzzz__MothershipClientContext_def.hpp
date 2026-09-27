#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipClientContext)
// Forward declare root types
namespace GlobalNamespace {
class MothershipClientContext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipClientContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipClientContext*, "", "MothershipClientContext");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipClientContext
class CORDL_TYPE MothershipClientContext : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MothershipId, put=setStaticF_MothershipId)) ::StringW  MothershipId;

/// @brief Field Token, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Token, put=setStaticF_Token)) ::StringW  Token;

/// @brief Method ForgetAllCredentials, addr 0x53b9528, size 0x80, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method IsClientLoggedIn, addr 0x53b94b0, size 0x78, virtual false, abstract: false, final false
static inline bool IsClientLoggedIn() ;

static inline ::StringW getStaticF_MothershipId() ;

static inline ::StringW getStaticF_Token() ;

static inline void setStaticF_MothershipId(::StringW  value) ;

static inline void setStaticF_Token(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipClientContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipClientContext(MothershipClientContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipClientContext(MothershipClientContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipClientContext) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
