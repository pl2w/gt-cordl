#pragma once
// IWYU pragma private; include "GlobalNamespace/ITickSystemPre.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickSystemPre)
// Forward declare root types
namespace GlobalNamespace {
class ITickSystemPre;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITickSystemPre*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITickSystemPre*, "", "ITickSystemPre");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITickSystemPre
class CORDL_TYPE ITickSystemPre {
public:
// Declarations
 __declspec(property(get=get_PreTickRunning, put=set_PreTickRunning)) bool  PreTickRunning;

/// @brief Method PreTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreTick() ;

/// @brief Method get_PreTickRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_PreTickRunning() ;

/// @brief Method set_PreTickRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PreTickRunning(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITickSystemPre", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITickSystemPre(ITickSystemPre const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
