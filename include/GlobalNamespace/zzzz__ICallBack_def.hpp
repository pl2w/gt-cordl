#pragma once
// IWYU pragma private; include "GlobalNamespace/ICallBack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICallBack)
// Forward declare root types
namespace GlobalNamespace {
class ICallBack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICallBack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICallBack*, "", "ICallBack");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICallBack
class CORDL_TYPE ICallBack {
public:
// Declarations
/// @brief Method CallBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallBack() ;

// Ctor Parameters [CppParam { name: "", ty: "ICallBack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICallBack(ICallBack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
