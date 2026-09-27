#pragma once
// IWYU pragma private; include "BuildSafe/SessionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SessionState)
// Forward declare root types
namespace BuildSafe {
class SessionState;
}
// Write type traits
MARK_REF_T(::BuildSafe::SessionState*);
DEFINE_IL2CPP_CLASS(::BuildSafe::SessionState*, "BuildSafe", "SessionState");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SessionState
class CORDL_TYPE SessionState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field Shared, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Shared, put=setStaticF_Shared)) ::BuildSafe::SessionState*  Shared;

static inline ::BuildSafe::SessionState* New_ctor() ;

/// @brief Method .ctor, addr 0x5c4f85c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::BuildSafe::SessionState* getStaticF_Shared() ;

/// @brief Method get_Item, addr 0x5c4f850, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Item(::StringW  key) ;

static inline void setStaticF_Shared(::BuildSafe::SessionState*  value) ;

/// @brief Method set_Item, addr 0x5c4f858, size 0x4, virtual false, abstract: false, final false
inline void set_Item(::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionState(SessionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionState(SessionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SessionState) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
