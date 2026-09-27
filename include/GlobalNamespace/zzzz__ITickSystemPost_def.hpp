#pragma once
// IWYU pragma private; include "GlobalNamespace/ITickSystemPost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickSystemPost)
// Forward declare root types
namespace GlobalNamespace {
class ITickSystemPost;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITickSystemPost*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITickSystemPost*, "", "ITickSystemPost");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITickSystemPost
class CORDL_TYPE ITickSystemPost {
public:
// Declarations
 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

/// @brief Method PostTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PostTick() ;

/// @brief Method get_PostTickRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_PostTickRunning() ;

/// @brief Method set_PostTickRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PostTickRunning(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITickSystemPost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITickSystemPost(ITickSystemPost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
